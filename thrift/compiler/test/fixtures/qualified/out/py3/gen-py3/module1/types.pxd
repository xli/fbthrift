#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.unordered_map cimport unordered_map as cumap
cimport folly.iobuf as _fbthrift_iobuf
from thrift.python.exceptions cimport cTException
from thrift.py3.types cimport (
    bstring,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.python.common cimport cThriftMetadata as __fbthrift_cThriftMetadata
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional

cimport module1.types_fields as _fbthrift_types_fields

cdef extern from "thrift/compiler/test/fixtures/qualified/gen-py3/module1/types.h":
  pass


cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_types.h" namespace "::module1":
    cdef cppclass cEnum "::module1::Enum":
        pass





cdef class Enum(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_types_custom_protocol.h" namespace "::module1":

    cdef cppclass cStruct "::module1::Struct":
        cStruct() except +
        cStruct(const cStruct&) except +
        bint operator==(cStruct&)
        bint operator!=(cStruct&)
        bint operator<(cStruct&)
        bint operator>(cStruct&)
        bint operator<=(cStruct&)
        bint operator>=(cStruct&)
        __field_ref[cint32_t] first_ref "first_ref" ()
        __field_ref[string] second_ref "second_ref" ()




cdef class Struct(thrift.py3.types.Struct):
    cdef shared_ptr[cStruct] _cpp_obj
    cdef _fbthrift_types_fields.__Struct_FieldsSetter _fields_setter
    cdef inline object first_impl(self)
    cdef inline object second_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cStruct])


cdef class List__Enum(thrift.py3.types.List):
    cdef shared_ptr[vector[cEnum]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cEnum]])
    @staticmethod
    cdef shared_ptr[vector[cEnum]] _make_instance(object items) except *
    cdef _check_item_type(self, item)


cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_constants.h" namespace "::module1":
    cdef cStruct cc1 "::module1::module1_constants::c1"()
    cdef vector[cEnum] ce1s "::module1::module1_constants::e1s"()
