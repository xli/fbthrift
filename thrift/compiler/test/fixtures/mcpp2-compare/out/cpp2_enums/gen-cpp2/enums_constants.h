/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_constants_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.h"

namespace facebook::ns::qwerty {
/** Glean {"file": "thrift/compiler/test/fixtures/mcpp2-compare/src/enums.thrift"} */
namespace enums_constants {

  /** Glean {"constant": "MapStringEnum"} */
  ::std::map<::std::string, ::facebook::ns::qwerty::AnEnumB> const& MapStringEnum();

  /** Glean {"constant": "MapEnumString"} */
  ::std::map<::facebook::ns::qwerty::AnEnumC, ::std::string> const& MapEnumString();

  /** Glean {"constant": "ConstantMap1"} */
  ::std::map<::facebook::ns::qwerty::AnEnumA, ::std::set<::facebook::ns::qwerty::AnEnumB>> const& ConstantMap1();

  /** Glean {"constant": "ConstantMap2"} */
  ::std::map<::facebook::ns::qwerty::AnEnumC, ::std::map<::std::int16_t, ::std::set<::std::int16_t>>> const& ConstantMap2();

  FOLLY_EXPORT ::std::string_view _fbthrift_schema_13f072109540bb8d();
  FOLLY_EXPORT ::folly::Range<const ::std::string_view*> _fbthrift_schema_13f072109540bb8d_includes();

} // namespace enums_constants
} // namespace facebook::ns::qwerty
