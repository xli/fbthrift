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
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper, cClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception
from thrift.python.exceptions cimport create_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from folly.cast cimport down_cast_ptr
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
from thrift.py3.types cimport make_unique
import thrift.py3.client
cimport thrift.py3.client
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from folly.futures cimport bridgeFutureWith
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
cimport cython

import sys
import types as _py_types
from asyncio import get_event_loop as asyncio_get_event_loop, shield as asyncio_shield, InvalidStateError as asyncio_InvalidStateError

cimport module.types as _module_types
import module.types as _module_types

import module.services_reflection as _services_reflection
cimport module.services_reflection as _services_reflection

from module.clients_wrapper cimport cSinkServiceAsyncClient, cSinkServiceClientWrapper



cdef object _SinkService_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class SinkService(thrift.py3.client.Client):
    annotations = _SinkService_annotations

    cdef const type_info* _typeid(SinkService self):
        return &typeid(cSinkServiceAsyncClient)

    cdef bind_client(SinkService self, cRequestChannel_ptr&& channel):
        self._client = makeClientWrapper[cSinkServiceAsyncClient, cSinkServiceClientWrapper](
            cmove(channel)
        )


    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__SinkService(for_clients=True)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cSinkServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.SinkService"

