#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

from abc import ABCMeta
import typing as _typing

import folly.iobuf as _fbthrift_iobuf

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
from thrift.python.mutable_serializer import serialize_iobuf, deserialize, Protocol
from thrift.python.server import ServiceInterface, RpcKind, PythonUserException

import module.thrift_mutable_types
import module.thrift_metadata

class RaiserInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"Raiser"

    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., object]]:
        functionTable = {
            b"doBland": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_doBland),
            b"doRaise": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_doRaise),
            b"get200": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_get200),
            b"get500": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_get500),
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Raiser"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return module.thrift_metadata.gen_metadata_service_Raiser()

    @staticmethod
    def __get_metadata_service_response__() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
        return module.thrift_metadata._fbthrift_metadata_service_response_Raiser()



    async def doBland(
            self
        ) -> None:
        raise NotImplementedError("async def doBland is not implemented")

    async def _fbthrift__handler_doBland(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(module.thrift_mutable_types._fbthrift_Raiser_doBland_args, args, protocol)
        value = await self.doBland()
        return_struct = module.thrift_mutable_types._fbthrift_Raiser_doBland_result()
        

        return serialize_iobuf(return_struct, protocol)


    async def doRaise(
            self
        ) -> None:
        raise NotImplementedError("async def doRaise is not implemented")

    async def _fbthrift__handler_doRaise(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(module.thrift_mutable_types._fbthrift_Raiser_doRaise_args, args, protocol)
        try:
            value = await self.doRaise()
            return_struct = module.thrift_mutable_types._fbthrift_Raiser_doRaise_result()
            
        except module.thrift_mutable_types.Banal as e:
            return_struct = module.thrift_mutable_types._fbthrift_Raiser_doRaise_result(b=e)
            buf = serialize_iobuf(return_struct, protocol)
            exp = PythonUserException('Banal', str(e), buf)
            raise exp

        except module.thrift_mutable_types.Fiery as e:
            return_struct = module.thrift_mutable_types._fbthrift_Raiser_doRaise_result(f=e)
            buf = serialize_iobuf(return_struct, protocol)
            exp = PythonUserException('Fiery', str(e), buf)
            raise exp

        except module.thrift_mutable_types.Serious as e:
            return_struct = module.thrift_mutable_types._fbthrift_Raiser_doRaise_result(s=e)
            buf = serialize_iobuf(return_struct, protocol)
            exp = PythonUserException('Serious', str(e), buf)
            raise exp


        return serialize_iobuf(return_struct, protocol)


    async def get200(
            self
        ) -> str:
        raise NotImplementedError("async def get200 is not implemented")

    async def _fbthrift__handler_get200(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(module.thrift_mutable_types._fbthrift_Raiser_get200_args, args, protocol)
        value = await self.get200()
        return_struct = module.thrift_mutable_types._fbthrift_Raiser_get200_result(success=value)
        

        return serialize_iobuf(return_struct, protocol)


    async def get500(
            self
        ) -> str:
        raise NotImplementedError("async def get500 is not implemented")

    async def _fbthrift__handler_get500(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(module.thrift_mutable_types._fbthrift_Raiser_get500_args, args, protocol)
        try:
            value = await self.get500()
            return_struct = module.thrift_mutable_types._fbthrift_Raiser_get500_result(success=value)
            
        except module.thrift_mutable_types.Fiery as e:
            return_struct = module.thrift_mutable_types._fbthrift_Raiser_get500_result(f=e)
            buf = serialize_iobuf(return_struct, protocol)
            exp = PythonUserException('Fiery', str(e), buf)
            raise exp

        except module.thrift_mutable_types.Banal as e:
            return_struct = module.thrift_mutable_types._fbthrift_Raiser_get500_result(b=e)
            buf = serialize_iobuf(return_struct, protocol)
            exp = PythonUserException('Banal', str(e), buf)
            raise exp

        except module.thrift_mutable_types.Serious as e:
            return_struct = module.thrift_mutable_types._fbthrift_Raiser_get500_result(s=e)
            buf = serialize_iobuf(return_struct, protocol)
            exp = PythonUserException('Serious', str(e), buf)
            raise exp


        return serialize_iobuf(return_struct, protocol)
