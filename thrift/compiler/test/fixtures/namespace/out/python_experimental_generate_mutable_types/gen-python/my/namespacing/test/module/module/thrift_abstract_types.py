

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

from python_module_root.my.namespacing.test.module.module.thrift_enums import *
class Foo(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def MyInt(self) -> int: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "python_module_root.my.namespacing.test.module.module.thrift_mutable_types.Foo": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "python_module_root.my.namespacing.test.module.module.thrift_types.Foo": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "python_module_root.my.namespacing.test.module.module.types.Foo": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "my.namespacing.test.module.ttypes.Foo": ...  # type: ignore
_fbthrift_Foo = Foo
