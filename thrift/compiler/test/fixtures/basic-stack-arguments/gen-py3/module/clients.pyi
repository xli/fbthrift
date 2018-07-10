#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import thrift.py3.types
import thrift.py3.client
import thrift.py3.common
import typing as _typing
from types import TracebackType

import module.types as _module_types


_MyServiceT = _typing.TypeVar('_MyServiceT', bound='MyService')


class MyService(thrift.py3.client.Client):

    async def __aenter__(self: _MyServiceT) -> _MyServiceT: ...
    async def __aexit__(
        self,
        exc_type: _typing.Optional[_typing.Type[BaseException]],
        exc: _typing.Optional[BaseException],
        tb: _typing.Optional[TracebackType],
    ) -> _typing.Optional[bool]: ...

    def set_persistent_header(self, key: str, value: str) -> None: ...

    async def hasDataById(
        self,
        id: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> bool: ...

    async def getDataById(
        self,
        id: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> str: ...

    async def putDataById(
        self,
        id: int,
        data: str,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> None: ...

    async def lobDataById(
        self,
        id: int,
        data: str,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> None: ...



_MyServiceFastT = _typing.TypeVar('_MyServiceFastT', bound='MyServiceFast')


class MyServiceFast(thrift.py3.client.Client):

    async def __aenter__(self: _MyServiceFastT) -> _MyServiceFastT: ...
    async def __aexit__(
        self,
        exc_type: _typing.Optional[_typing.Type[BaseException]],
        exc: _typing.Optional[BaseException],
        tb: _typing.Optional[TracebackType],
    ) -> _typing.Optional[bool]: ...

    def set_persistent_header(self, key: str, value: str) -> None: ...

    async def hasDataById(
        self,
        id: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> bool: ...

    async def getDataById(
        self,
        id: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> str: ...

    async def putDataById(
        self,
        id: int,
        data: str,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> None: ...

    async def lobDataById(
        self,
        id: int,
        data: str,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> None: ...

