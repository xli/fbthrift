/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/tablebased/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/tablebased/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::test::fixtures::tablebased::ExampleEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.ExampleEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.ExampleEnum";
  using EnumTraits = TEnumTraits<::test::fixtures::tablebased::ExampleEnum>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::tablebased::TrivialTypesStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.TrivialTypesStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_TrivialTypesStruct = res.first->second;
  module_TrivialTypesStruct.name() = "module.TrivialTypesStruct";
  module_TrivialTypesStruct.is_union() = false;
  static const auto* const
  module_TrivialTypesStruct_fields = new std::array<EncodedThriftField, 5>{{
    {1, "fieldA", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "fieldB", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "fieldC", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "fieldD", true, std::make_unique<Typedef>("module.IOBufPtr", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{*cvStruct("cpp.Type", {{"name", cvString("std::unique_ptr<folly::IOBuf>")}}).cv_struct_ref(), }), std::vector<ThriftConstStruct>{}},
    {5, "fieldE", false, std::make_unique<Enum<::test::fixtures::tablebased::ExampleEnum>>("module.ExampleEnum"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_TrivialTypesStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_TrivialTypesStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::tablebased::ContainerStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.ContainerStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ContainerStruct = res.first->second;
  module_ContainerStruct.name() = "module.ContainerStruct";
  module_ContainerStruct.is_union() = false;
  static const auto* const
  module_ContainerStruct_fields = new std::array<EncodedThriftField, 8>{{
    {12, "fieldA", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{}},
    {2, "fieldB", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{*cvStruct("cpp.Type", {{"template", cvString("std::list")}}).cv_struct_ref(), }},
    {3, "fieldC", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{*cvStruct("cpp.Type", {{"template", cvString("std::deque")}}).cv_struct_ref(), }},
    {4, "fieldD", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{*cvStruct("cpp.Type", {{"template", cvString("folly::fbvector")}}).cv_struct_ref(), }},
    {5, "fieldE", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{*cvStruct("cpp.Type", {{"template", cvString("folly::small_vector")}}).cv_struct_ref(), }},
    {6, "fieldF", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{*cvStruct("cpp.Type", {{"template", cvString("folly::sorted_vector_set")}}).cv_struct_ref(), }},
    {7, "fieldG", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{*cvStruct("cpp.Type", {{"template", cvString("folly::sorted_vector_map")}}).cv_struct_ref(), }},
    {8, "fieldH", false, std::make_unique<List>(std::make_unique<Struct<::test::fixtures::tablebased::TrivialTypesStruct>>("module.TrivialTypesStruct")), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_ContainerStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_ContainerStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::tablebased::ExampleUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.ExampleUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ExampleUnion = res.first->second;
  module_ExampleUnion.name() = "module.ExampleUnion";
  module_ExampleUnion.is_union() = true;
  static const auto* const
  module_ExampleUnion_fields = new std::array<EncodedThriftField, 2>{{
    {1, "fieldA", false, std::make_unique<Struct<::test::fixtures::tablebased::ContainerStruct>>("module.ContainerStruct"), std::vector<ThriftConstStruct>{}},
    {2, "fieldB", false, std::make_unique<Struct<::test::fixtures::tablebased::TrivialTypesStruct>>("module.TrivialTypesStruct"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_ExampleUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_ExampleUnion.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
