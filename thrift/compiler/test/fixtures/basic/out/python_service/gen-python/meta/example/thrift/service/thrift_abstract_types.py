

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import abc as _abc
import typing as _typing

_fbthrift_property = property


import folly.iobuf as _fbthrift_iobuf
import thrift.python.abstract_types as _fbthrift_python_abstract_types

from meta.example.thrift.service.thrift_enums import *
class EchoRequest(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def text(self) -> str: ...
    @_abc.abstractmethod
    def _to_python(self) -> "meta.example.thrift.service.thrift_types.EchoRequest": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "meta.example.thrift.service.types.EchoRequest": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "service.ttypes.EchoRequest": ...  # type: ignore
_fbthrift_EchoRequest = EchoRequest
class EchoResponse(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def text(self) -> str: ...
    @_abc.abstractmethod
    def _to_python(self) -> "meta.example.thrift.service.thrift_types.EchoResponse": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "meta.example.thrift.service.types.EchoResponse": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "service.ttypes.EchoResponse": ...  # type: ignore
_fbthrift_EchoResponse = EchoResponse
class WhisperException(_fbthrift_python_abstract_types.AbstractGeneratedError):
    @_fbthrift_property
    def message(self) -> str: ...
    def _to_python(self) -> "meta.example.thrift.service.thrift_types.WhisperException": ...  # type: ignore
    def _to_py3(self) -> "meta.example.thrift.service.types.WhisperException": ...  # type: ignore
    def _to_py_deprecated(self) -> "service.ttypes.WhisperException": ...  # type: ignore
_fbthrift_WhisperException = WhisperException
