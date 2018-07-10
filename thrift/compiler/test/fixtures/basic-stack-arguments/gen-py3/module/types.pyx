#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t, uint32_t
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types import NOTSET as __NOTSET
from thrift.py3.types cimport translate_cpp_enum_to_python
cimport thrift.py3.std_libcpp as std_libcpp
from thrift.py3.serializer import Protocol
cimport thrift.py3.serializer as serializer
from thrift.py3.serializer import deserialize, serialize
import folly.iobuf as __iobuf
from folly.optional cimport cOptional

import sys
import itertools
from collections import Sequence, Set, Mapping, Iterable
import enum as __enum
import warnings
import builtins as _builtins


class MyEnum(__enum.Enum):
    MyValue1 = 0
    MyValue2 = 1

    __hash__ = __enum.Enum.__hash__

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            warnings.warn(f"comparison not supported between instances of {type(self)} and {type(other)}", RuntimeWarning, stacklevel=2)
            return False
        return self.value == other.value

    def __int__(self):
        return self.value

cdef inline cMyEnum MyEnum_to_cpp(value):
    cdef int cvalue = value.value
    if cvalue == 0:
        return MyEnum__MyValue1
    elif cvalue == 1:
        return MyEnum__MyValue2


cdef cMyStruct _MyStruct_defaults = cMyStruct()

cdef class MyStruct(thrift.py3.types.Struct):

    def __init__(
        MyStruct self, *,
        MyIntField=None,
        str MyStringField=None
    ):
        if MyIntField is not None:
            if not isinstance(MyIntField, int):
                raise TypeError(f'MyIntField is not a { int !r}.')
            MyIntField = <int64_t> MyIntField

        self._cpp_obj = move(MyStruct._make_instance(
          NULL,
          MyIntField,
          MyStringField,
        ))

    def __call__(
        MyStruct self,
        MyIntField=__NOTSET,
        MyStringField=__NOTSET
    ):
        changes = any((
            MyIntField is not __NOTSET,

            MyStringField is not __NOTSET,
        ))

        if not changes:
            return self

        if None is not MyIntField is not __NOTSET:
            if not isinstance(MyIntField, int):
                raise TypeError(f'MyIntField is not a { int !r}.')
            MyIntField = <int64_t> MyIntField

        if None is not MyStringField is not __NOTSET:
            if not isinstance(MyStringField, str):
                raise TypeError(f'MyStringField is not a { str !r}.')

        inst = <MyStruct>MyStruct.__new__(MyStruct)
        inst._cpp_obj = move(MyStruct._make_instance(
          self._cpp_obj.get(),
          MyIntField,
          MyStringField,
        ))
        return inst

    @staticmethod
    cdef unique_ptr[cMyStruct] _make_instance(
        cMyStruct* base_instance,
        object MyIntField,
        object MyStringField
    ) except *:
        cdef unique_ptr[cMyStruct] c_inst
        if base_instance:
            c_inst = make_unique[cMyStruct](deref(base_instance))
        else:
            c_inst = make_unique[cMyStruct]()

        if base_instance:
            # Convert None's to default value. (or unset)
            if MyIntField is None:
                deref(c_inst).MyIntField = _MyStruct_defaults.MyIntField
                deref(c_inst).__isset.MyIntField = False
                pass
            elif MyIntField is __NOTSET:
                MyIntField = None

            if MyStringField is None:
                deref(c_inst).MyStringField = _MyStruct_defaults.MyStringField
                deref(c_inst).__isset.MyStringField = False
                pass
            elif MyStringField is __NOTSET:
                MyStringField = None

        if MyIntField is not None:
            deref(c_inst).MyIntField = MyIntField
            deref(c_inst).__isset.MyIntField = True
        if MyStringField is not None:
            deref(c_inst).MyStringField = MyStringField.encode('UTF-8')
            deref(c_inst).__isset.MyStringField = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return move_unique(c_inst)

    def __iter__(self):
        yield 'MyIntField', self.MyIntField
        yield 'MyStringField', self.MyStringField

    def __bool__(self):
        return True or True

    @staticmethod
    cdef create(shared_ptr[cMyStruct] cpp_obj):
        inst = <MyStruct>MyStruct.__new__(MyStruct)
        inst._cpp_obj = cpp_obj
        return inst

    @property
    def MyIntField(self):

        return self._cpp_obj.get().MyIntField

    @property
    def MyStringField(self):

        return (<bytes>self._cpp_obj.get().MyStringField).decode('UTF-8')


    def __hash__(MyStruct self):
        if not self.__hash:
            self.__hash = hash((
            self.MyIntField,
            self.MyStringField,
            ))
        return self.__hash

    def __repr__(MyStruct self):
        return f'MyStruct(MyIntField={repr(self.MyIntField)}, MyStringField={repr(self.MyStringField)})'
    def __richcmp__(self, other, op):
        cdef int cop = op
        if cop not in (2, 3):
            raise TypeError("unorderable types: {}, {}".format(self, other))
        if not (
                isinstance(self, MyStruct) and
                isinstance(other, MyStruct)):
            if cop == 2:  # different types are never equal
                return False
            else:         # different types are always notequal
                return True

        cdef cMyStruct cself = deref((<MyStruct>self)._cpp_obj)
        cdef cMyStruct cother = deref((<MyStruct>other)._cpp_obj)
        cdef cbool cmp = cself == cother
        if cop == 2:
            return cmp
        return not cmp

    cdef __iobuf.IOBuf _serialize(MyStruct self, proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cMyStruct* cpp_obj = self._cpp_obj.get()
        if proto is Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cMyStruct](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cMyStruct](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cMyStruct](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef uint32_t _deserialize(MyStruct self, const __iobuf.cIOBuf* buf, proto) except? 0:
        cdef uint32_t needed
        self._cpp_obj = make_shared[cMyStruct]()
        cdef cMyStruct* cpp_obj = self._cpp_obj.get()
        if proto is Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cMyStruct](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cMyStruct](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cMyStruct](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (MyStruct, serialize(self)))


