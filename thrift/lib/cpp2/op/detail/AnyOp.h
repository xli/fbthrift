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

#include <thrift/lib/cpp2/op/detail/BaseOp.h>
#include <thrift/lib/cpp2/type/NativeType.h>
#include <thrift/lib/cpp2/type/Tag.h>
#include <thrift/lib/cpp2/type/detail/Ptr.h>

namespace apache {
namespace thrift {
namespace op {
namespace detail {
using Ptr = type::detail::Ptr;

// Type erased Thrift operator implementations.
template <typename Tag, typename T>
struct AnyOp : BaseAnyOp<Tag, T> {
  using type::detail::BaseErasedOp::unimplemented;

  [[noreturn]] static void append(void*, const Ptr&) { unimplemented(); }
  [[noreturn]] static bool add(void*, const Ptr&) { unimplemented(); }
  [[noreturn]] static bool put(void*, FieldId, const Ptr*, const Ptr&) {
    unimplemented();
  }
  [[noreturn]] static Ptr get(Ptr, FieldId, const Ptr*) { unimplemented(); }
};

// Create a AnyOp-based Thrift pointer.
template <typename Tag, typename T = type::native_type<Tag>>
Ptr createAnyPtr(T&& val) {
  return {
      &type::detail::getTypeInfo<AnyOp<Tag, std::decay_t<T>>, Tag, T>(),
      // Note: const safety is validated at runtime.
      const_cast<std::decay_t<T>*>(&val),
      std::is_const_v<std::remove_reference_t<T>>,
      std::is_rvalue_reference_v<T>};
}

} // namespace detail
} // namespace op
} // namespace thrift
} // namespace apache
