/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/terse_write/src/deprecated_terse_write.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/terse_write/gen-cpp2/deprecated_terse_write_metadata.h"
#include <thrift/lib/cpp2/visitation/visit_union.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitUnion<::facebook::thrift::test::terse_write::deprecated::MyUnion> {

  template <typename F, typename T>
  decltype(auto) operator()([[maybe_unused]] F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    switch (t.getType()) {
    case Union::Type::__EMPTY__:
      (void)0;
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
