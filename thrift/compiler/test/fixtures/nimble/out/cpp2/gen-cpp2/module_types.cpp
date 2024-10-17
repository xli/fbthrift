/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/nimble/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_data.h"
[[maybe_unused]] static constexpr std::string_view kModuleName = "module";


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::BasicTypes>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::BasicTypes>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

std::string_view BasicTypes::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<BasicTypes>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view BasicTypes::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<BasicTypes>::name;
}


BasicTypes::BasicTypes(apache::thrift::FragileConstructor, ::std::int32_t first__arg, ::std::int32_t second__arg, ::std::int64_t third__arg, bool isTrue__arg) :
    __fbthrift_field_first(std::move(first__arg)),
    __fbthrift_field_second(std::move(second__arg)),
    __fbthrift_field_third(std::move(third__arg)),
    __fbthrift_field_isTrue(std::move(isTrue__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
}


void BasicTypes::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_first = ::std::int32_t();
  this->__fbthrift_field_second = ::std::int32_t();
  this->__fbthrift_field_third = ::std::int64_t();
  this->__fbthrift_field_isTrue = bool();
  __isset = {};
}

void BasicTypes::__fbthrift_clear_terse_fields() {
}

bool BasicTypes::__fbthrift_is_empty() const {
  return false;
}

bool BasicTypes::operator==([[maybe_unused]] const BasicTypes& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool BasicTypes::operator<([[maybe_unused]] const BasicTypes& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] BasicTypes& a, [[maybe_unused]] BasicTypes& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_first, b.__fbthrift_field_first);
  swap(a.__fbthrift_field_second, b.__fbthrift_field_second);
  swap(a.__fbthrift_field_third, b.__fbthrift_field_third);
  swap(a.__fbthrift_field_isTrue, b.__fbthrift_field_isTrue);
  swap(a.__isset, b.__isset);
}

template void BasicTypes::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void BasicTypes::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace cpp2 { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // namespace cpp2
namespace apache::thrift::detail::annotation {
}
