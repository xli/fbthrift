/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_constants_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

namespace some::valid::ns {
/** Glean {"file": "thrift/compiler/test/fixtures/mcpp2-compare/src/module.thrift"} */
namespace module_constants {

  /** Glean {"constant": "aBool"} */
  constexpr bool const aBool_ = true;
  /** Glean {"constant": "aBool"} */
  constexpr bool aBool() {
    return aBool_;
  }

  /** Glean {"constant": "aByte"} */
  constexpr ::std::int8_t const aByte_ = static_cast<::std::int8_t>(1);
  /** Glean {"constant": "aByte"} */
  constexpr ::std::int8_t aByte() {
    return aByte_;
  }

  /** Glean {"constant": "a16BitInt"} */
  constexpr ::std::int16_t const a16BitInt_ = static_cast<::std::int16_t>(12);
  /** Glean {"constant": "a16BitInt"} */
  constexpr ::std::int16_t a16BitInt() {
    return a16BitInt_;
  }

  /** Glean {"constant": "a32BitInt"} */
  constexpr ::std::int32_t const a32BitInt_ = static_cast<::std::int32_t>(123);
  /** Glean {"constant": "a32BitInt"} */
  constexpr ::std::int32_t a32BitInt() {
    return a32BitInt_;
  }

  /** Glean {"constant": "a64BitInt"} */
  constexpr ::std::int64_t const a64BitInt_ = static_cast<::std::int64_t>(1234);
  /** Glean {"constant": "a64BitInt"} */
  constexpr ::std::int64_t a64BitInt() {
    return a64BitInt_;
  }

  /** Glean {"constant": "aFloat"} */
  constexpr float const aFloat_ = static_cast<float>(0.1);
  /** Glean {"constant": "aFloat"} */
  constexpr float aFloat() {
    return aFloat_;
  }

  /** Glean {"constant": "aDouble"} */
  constexpr double const aDouble_ = static_cast<double>(0.12);
  /** Glean {"constant": "aDouble"} */
  constexpr double aDouble() {
    return aDouble_;
  }

  /** Glean {"constant": "aString"} */
  constexpr char const * const aString_ = "Joe Doe";
  /** Glean {"constant": "aString"} */
  constexpr char const * aString() {
    return aString_;
  }

  /** Glean {"constant": "aList"} */
  ::std::vector<bool> const& aList();

  /** Glean {"constant": "anEmptyMap"} */
  ::std::map<::std::string, ::std::int32_t> const& anEmptyMap();

  /** Glean {"constant": "aMap"} */
  ::std::map<::std::int32_t, ::std::string> const& aMap();

  /** Glean {"constant": "aSet"} */
  ::std::set<::std::string> const& aSet();

  /** Glean {"constant": "aListOfLists"} */
  ::std::vector<::std::vector<::std::int32_t>> const& aListOfLists();

  /** Glean {"constant": "states"} */
  ::std::vector<::std::map<::std::string, ::std::int32_t>> const& states();

  /** Glean {"constant": "AConstList"} */
  ::std::vector<::some::valid::ns::MyEnumA> const& AConstList();

  /** Glean {"constant": "AnIntegerEnum2"} */
  constexpr ::std::int32_t const AnIntegerEnum2_ = static_cast<::std::int32_t>(2);
  /** Glean {"constant": "AnIntegerEnum2"} */
  constexpr ::std::int32_t AnIntegerEnum2() {
    return AnIntegerEnum2_;
  }

  /** Glean {"constant": "ListOfIntsFromEnums"} */
  ::std::vector<::std::int32_t> const& ListOfIntsFromEnums();

  /** Glean {"constant": "constEnumA"} */
  constexpr ::some::valid::ns::MyEnumA const constEnumA_ =  ::some::valid::ns::MyEnumA::fieldB;
  /** Glean {"constant": "constEnumA"} */
  constexpr ::some::valid::ns::MyEnumA constEnumA() {
    return constEnumA_;
  }

  /** Glean {"constant": "constEnumB"} */
  constexpr ::some::valid::ns::MyEnumA const constEnumB_ = static_cast< ::some::valid::ns::MyEnumA>(3);
  /** Glean {"constant": "constEnumB"} */
  constexpr ::some::valid::ns::MyEnumA constEnumB() {
    return constEnumB_;
  }

  FOLLY_EXPORT ::std::string_view _fbthrift_schema_461f120cd2880445();
  FOLLY_EXPORT ::folly::Range<const ::std::string_view*> _fbthrift_schema_461f120cd2880445_includes();

} // namespace module_constants
} // namespace some::valid::ns
