/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/complex-struct/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/complex-struct/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>



namespace cpp2 {
namespace module_constants {


::cpp2::MyUnion const& constEnumUnion() {
  static folly::Indestructible<::cpp2::MyUnion> const instance{ ::apache::thrift::detail::make_structured_constant<::cpp2::MyUnion>(::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::myEnum>( ::cpp2::MyEnum::MyValue2)) };
  return *instance;
}



} // namespace module_constants
} // namespace cpp2
