/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/python_capi/src/containers.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/python_capi/gen-cpp2/containers_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::test::fixtures::python_capi::TemplateLists> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).std_string_ref()...);
    f(1, static_cast<T&&>(t).deque_string_ref()...);
    f(2, static_cast<T&&>(t).small_vector_iobuf_ref()...);
    f(3, static_cast<T&&>(t).nested_small_vector_ref()...);
    f(4, static_cast<T&&>(t).small_vector_tensor_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::python_capi::TemplateSets> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).std_set_ref()...);
    f(1, static_cast<T&&>(t).std_unordered_ref()...);
    f(2, static_cast<T&&>(t).folly_fast_ref()...);
    f(3, static_cast<T&&>(t).folly_node_ref()...);
    f(4, static_cast<T&&>(t).folly_value_ref()...);
    f(5, static_cast<T&&>(t).folly_vector_ref()...);
    f(6, static_cast<T&&>(t).folly_sorted_vector_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::python_capi::TemplateMaps> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).std_map_ref()...);
    f(1, static_cast<T&&>(t).std_unordered_ref()...);
    f(2, static_cast<T&&>(t).folly_fast_ref()...);
    f(3, static_cast<T&&>(t).folly_node_ref()...);
    f(4, static_cast<T&&>(t).folly_value_ref()...);
    f(5, static_cast<T&&>(t).folly_vector_ref()...);
    f(6, static_cast<T&&>(t).folly_sorted_vector_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::python_capi::TWrapped> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).fieldA_ref()...);
    f(1, static_cast<T&&>(t).fieldB_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::python_capi::IndirectionA> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).lst_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::python_capi::IndirectionB> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).lst_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::python_capi::IndirectionC> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).lst_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
