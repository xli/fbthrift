
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT
 *  @generated
 *
 */

#pragma once

#include <thrift/lib/python/capi/constructor.h>
#include <thrift/lib/python/capi/extractor.h>

#include <thrift/compiler/test/fixtures/python_capi/gen-cpp2/containers_types.h>

namespace apache {
namespace thrift {
namespace python {
namespace capi {
template <>
struct Extractor<::test::fixtures::python_capi::TemplateLists>
    : public BaseExtractor<::test::fixtures::python_capi::TemplateLists> {
  static const bool kUsingMarshal = false;
  ExtractorResult<::test::fixtures::python_capi::TemplateLists> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateLists>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateLists>> {
  ExtractorResult<::test::fixtures::python_capi::TemplateLists> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::python_capi::TemplateLists>
    : public BaseConstructor<::test::fixtures::python_capi::TemplateLists> {
  static const bool kUsingMarshal = false;
  PyObject* operator()(const ::test::fixtures::python_capi::TemplateLists& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateLists>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateLists>> {
  PyObject* operator()(const ::test::fixtures::python_capi::TemplateLists& val);
};

template <>
struct Extractor<::test::fixtures::python_capi::TemplateSets>
    : public BaseExtractor<::test::fixtures::python_capi::TemplateSets> {
  static const bool kUsingMarshal = false;
  ExtractorResult<::test::fixtures::python_capi::TemplateSets> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateSets>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateSets>> {
  ExtractorResult<::test::fixtures::python_capi::TemplateSets> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::python_capi::TemplateSets>
    : public BaseConstructor<::test::fixtures::python_capi::TemplateSets> {
  static const bool kUsingMarshal = false;
  PyObject* operator()(const ::test::fixtures::python_capi::TemplateSets& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateSets>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateSets>> {
  PyObject* operator()(const ::test::fixtures::python_capi::TemplateSets& val);
};

template <>
struct Extractor<::test::fixtures::python_capi::TemplateMaps>
    : public BaseExtractor<::test::fixtures::python_capi::TemplateMaps> {
  static const bool kUsingMarshal = false;
  ExtractorResult<::test::fixtures::python_capi::TemplateMaps> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateMaps>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateMaps>> {
  ExtractorResult<::test::fixtures::python_capi::TemplateMaps> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::python_capi::TemplateMaps>
    : public BaseConstructor<::test::fixtures::python_capi::TemplateMaps> {
  static const bool kUsingMarshal = false;
  PyObject* operator()(const ::test::fixtures::python_capi::TemplateMaps& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateMaps>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TemplateMaps>> {
  PyObject* operator()(const ::test::fixtures::python_capi::TemplateMaps& val);
};

template <>
struct Extractor<::test::fixtures::python_capi::TWrapped>
    : public BaseExtractor<::test::fixtures::python_capi::TWrapped> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::python_capi::TWrapped> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TWrapped>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TWrapped>> {
  ExtractorResult<::test::fixtures::python_capi::TWrapped> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::python_capi::TWrapped>
    : public BaseConstructor<::test::fixtures::python_capi::TWrapped> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::python_capi::TWrapped& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TWrapped>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::TWrapped>> {
  PyObject* operator()(const ::test::fixtures::python_capi::TWrapped& val);
};

template <>
struct Extractor<::test::fixtures::python_capi::IndirectionA>
    : public BaseExtractor<::test::fixtures::python_capi::IndirectionA> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::python_capi::IndirectionA> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionA>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionA>> {
  ExtractorResult<::test::fixtures::python_capi::IndirectionA> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::python_capi::IndirectionA>
    : public BaseConstructor<::test::fixtures::python_capi::IndirectionA> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::python_capi::IndirectionA& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionA>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionA>> {
  PyObject* operator()(const ::test::fixtures::python_capi::IndirectionA& val);
};

template <>
struct Extractor<::test::fixtures::python_capi::IndirectionB>
    : public BaseExtractor<::test::fixtures::python_capi::IndirectionB> {
  static const bool kUsingMarshal = false;
  ExtractorResult<::test::fixtures::python_capi::IndirectionB> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionB>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionB>> {
  ExtractorResult<::test::fixtures::python_capi::IndirectionB> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::python_capi::IndirectionB>
    : public BaseConstructor<::test::fixtures::python_capi::IndirectionB> {
  static const bool kUsingMarshal = false;
  PyObject* operator()(const ::test::fixtures::python_capi::IndirectionB& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionB>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionB>> {
  PyObject* operator()(const ::test::fixtures::python_capi::IndirectionB& val);
};

template <>
struct Extractor<::test::fixtures::python_capi::IndirectionC>
    : public BaseExtractor<::test::fixtures::python_capi::IndirectionC> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::python_capi::IndirectionC> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionC>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionC>> {
  ExtractorResult<::test::fixtures::python_capi::IndirectionC> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::python_capi::IndirectionC>
    : public BaseConstructor<::test::fixtures::python_capi::IndirectionC> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::python_capi::IndirectionC& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionC>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::python_capi::IndirectionC>> {
  PyObject* operator()(const ::test::fixtures::python_capi::IndirectionC& val);
};

} // namespace capi
} // namespace python
} // namespace thrift
} // namespace apache
