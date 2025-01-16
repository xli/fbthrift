/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <thrift/compiler/whisker/object.h>

#include <cstddef>
#include <functional>
#include <map>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>

// The source code in the following namespace was once based on the original
// code by Daniel Sipka (https://github.com/no1msd/mstch).
//
// However, a "ship of Theseus" situation has happened over the past decade (or
// more) such that nothing is left from the original code.
namespace apache::thrift::mstch {

namespace internal {

template <class N>
class object_t {
 public:
  using node_ref = std::reference_wrapper<const N>;
  using lookup_result = std::variant<whisker::object::ptr, node_ref>;

  lookup_result at(const std::string& name) const {
    return methods_.at(name)();
  }

  bool has(const std::string& name) const {
    return (methods_.find(name) != methods_.end());
  }

  std::vector<std::string> property_names() const {
    std::vector<std::string> result;
    for (auto& entry : methods_) {
      result.push_back(entry.first);
    }
    return result;
  }

 protected:
  // Uncached (formerly known as volatile) methods are re-invoked every time
  // their value is needed during a template evaluation.
  //
  // This is potentially useful if mutating state during evaluation, but has a
  // performance cost. There are usually better ways to express such logic.
  struct with_no_caching_t {};
  static constexpr with_no_caching_t with_no_caching{};

  using property_dispatcher = std::function<lookup_result()>;

  template <typename Self>
  struct property_descriptor {
    using binder = std::function<property_dispatcher(Self*)>;
    binder bind;

    /* implicit */ property_descriptor(whisker::i64 (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(whisker::f64 (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(whisker::boolean (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(whisker::string (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(whisker::array (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(whisker::map (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(whisker::object (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(
        whisker::native_object::ptr (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(
        whisker::native_function::ptr (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(
        whisker::native_handle<> (Self::*method)())
        : bind(cached_whisker_object(method)) {}
    /* implicit */ property_descriptor(whisker::object::ptr (Self::*method)())
        : bind(cached_whisker_object(method)) {}

    /* implicit */ property_descriptor(N (Self::*method)())
        : bind([method](Self* self) -> property_dispatcher {
            return [self,
                    method = std::move(method),
                    cache = std::optional<N>()]() mutable -> lookup_result {
              if (!cache) {
                cache = (self->*method)();
              }
              return node_ref(*cache);
            };
          }) {}

    property_descriptor(with_no_caching_t, N (Self::*method)())
        : bind([method](Self* self) -> property_dispatcher {
            return [self,
                    method = std::move(method),
                    uncache = std::optional<N>()]() mutable -> lookup_result {
              uncache = (self->*method)();
              return node_ref(*uncache);
            };
          }) {}

    /* implicit */ property_descriptor(std::function<N()> method)
        : bind([method = std::move(method)](Self*) -> property_dispatcher {
            return [method = std::move(method),
                    cache = std::optional<N>()]() mutable -> lookup_result {
              if (!cache) {
                cache = method();
              }
              return node_ref(*cache);
            };
          }) {}

    property_descriptor(with_no_caching_t, std::function<N()> method)
        : bind([method = std::move(method)](Self*) -> property_dispatcher {
            return [method = std::move(method),
                    uncache = std::optional<N>()]() mutable -> lookup_result {
              uncache = method();
              return node_ref(*uncache);
            };
          }) {}

   private:
    template <typename T>
    static binder cached_whisker_object(T (Self::*method)()) {
      return [method](Self* self) -> property_dispatcher {
        return [self,
                method,
                cache = std::optional<whisker::object::ptr>()]() mutable
               -> lookup_result {
          if (!cache) {
            if constexpr (std::is_same_v<T, whisker::object::ptr>) {
              cache = (self->*method)();
            } else {
              cache = whisker::manage_owned<whisker::object>((self->*method)());
            }
          }
          return *cache;
        };
      };
    }
  };

  template <typename F>
  std::enable_if_t<std::is_same_v<std::invoke_result_t<F>, N>>
  register_volatile_method(std::string name, F method) {
    do_register_method(
        std::move(name),
        property_descriptor<std::monostate>(
            with_no_caching, std::forward<F>(method))
            .bind(nullptr));
  }

  // Cached methods are invoked at most once on the same object.
  template <typename F>
  std::enable_if_t<std::is_same_v<std::invoke_result_t<F>, N>>
  register_cached_method(std::string name, F method) {
    do_register_method(
        std::move(name),
        property_descriptor<std::monostate>(std::forward<F>(method))
            .bind(nullptr));
  }

  template <class Self>
  void register_volatile_methods(
      Self* self,
      const std::unordered_map<std::string, N (Self::*)()>& methods) {
    for (const auto& method : methods) {
      do_register_method(
          method.first,
          property_descriptor<Self>(with_no_caching, method.second).bind(self));
    }
  }

  template <class Self>
  void register_cached_methods(
      Self* self,
      const std::unordered_map<std::string, property_descriptor<Self>>&
          methods) {
    for (const auto& method : methods) {
      do_register_method(method.first, method.second.bind(self));
    }
  }

 private:
  void do_register_method(std::string name, property_dispatcher method) {
    auto result = methods_.emplace(std::move(name), std::move(method));
    if (!result.second) {
      throw std::runtime_error(
          "Method already registered: " + result.first->first);
    }
  }

  std::unordered_map<std::string, property_dispatcher> methods_;
};

template <typename Node>
using node_base = std::variant<
    std::nullptr_t,
    std::string,
    int,
    double,
    bool,
    std::shared_ptr<internal::object_t<Node>>,
    std::map<const std::string, Node>,
    std::vector<Node>>;

} // namespace internal

struct node : internal::node_base<node> {
  using base = internal::node_base<node>;

  using base::base;
  /* implicit */ node(std::string_view sv) : base(std::string(sv)) {}
  /* implicit */ node(std::size_t i);

  // Equivalent to the int constructor brought in by `using base::base`, but
  // having this here forces integer callers which are neither int nor size_t to
  // intentionally convert to one or the other. Without the following line,
  // calls like node(int64_t) would silently disambiguate to the size_t
  // constructor, which is potentially surprising.
  /* implicit */ node(int i) : base(i) {}

  template <typename... Visitor>
  decltype(auto) visit(Visitor&&... visitor) {
    return std::visit(visitor..., static_cast<base&>(*this));
  }
  template <typename... Visitor>
  decltype(auto) visit(Visitor&&... visitor) const {
    return std::visit(visitor..., static_cast<const base&>(*this));
  }
};

template <typename Node, typename... A>
node make_shared_node(A&&... a) {
  return node(std::make_shared<Node>(static_cast<A&&>(a)...));
}

using object = internal::object_t<node>;
using map = std::map<const std::string, node>;
using array = std::vector<node>;

} // namespace apache::thrift::mstch

namespace whisker {

/**
 * A mstch::object is analogous to whisker::native_object.
 */
using mstch_object = apache::thrift::mstch::object;
/**
 * A mstch::map is analogous to whisker::map.
 */
using mstch_map = apache::thrift::mstch::map;
/**
 * A mstch::array is analogous to whisker::array.
 */
using mstch_array = apache::thrift::mstch::array;
/**
 * A mstch::node is analogous to whisker::object.
 */
using mstch_node = apache::thrift::mstch::node;

/**
 * Creates a whisker::object that proxies property and array lookups to the
 * provided mstch::node.
 *
 * For existing mstch::node objects, property lookups will be functionally
 * identical when performed on the returned whisker::object instead.
 *
 * Marshaling of "complex" data types between mstch and Whisker occurs lazily as
 * lookups are performed. The lazily marshaled types are:
 *   - mstch_array (all elements are marshaled on first access)
 *   - mstch_map (every key is marshaled lazily)
 *
 * mstch_object is marshaled lazily by construction since its properties are not
 * finitely enumerable and their values may be volatile (change between
 * invocations).
 *
 * The smaller data types (such as i64, f64, string etc.) are eagerly marshaled.
 * Note that, such data contained within a mstch_array or mstch_map will be
 * lazily marshaled. In other words, the eager marshaling only applies to values
 * in the object tree at depth 0.
 *
 * Internally, this function uses whisker::native_object to implement proxying.
 * Therefore, from_mstch() with a mstch_array as input will not create a
 * whisker::array and so calling is_array() on it will return false. Instead the
 * helper functions of the family, is_mstch_<type>, can be used to check for
 * such objects.
 */
object from_mstch(mstch_node);

/**
 * Determines if the provided object is proxying a mstch_object internally.
 */
bool is_mstch_object(const object&);
/**
 * Determines if the provided object is proxying a mstch_map internally.
 */
bool is_mstch_map(const object&);
/**
 * Determines if the provided object is proxying a mstch_array internally.
 */
bool is_mstch_array(const object&);

} // namespace whisker
