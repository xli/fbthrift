

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

import enum as _enum


import folly.iobuf as _fbthrift_iobuf
import thrift.python.abstract_types as _fbthrift_python_abstract_types
from module.thrift_enums import _fbthrift_compatible_with_EmptyEnum
from module.thrift_enums import EmptyEnum as _fbthrift_EmptyEnum
from module.thrift_enums import _fbthrift_compatible_with_City
from module.thrift_enums import City as _fbthrift_City
from module.thrift_enums import _fbthrift_compatible_with_Company
from module.thrift_enums import Company as _fbthrift_Company

from module.thrift_enums import *
class Internship(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def weeks(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def title(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def employer(self) -> _typing.Optional[_fbthrift_Company]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def compensation(self) -> _typing.Optional[float]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def school(self) -> _typing.Optional[str]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.Internship": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.Internship": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.Internship": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.Internship": ...  # type: ignore
_fbthrift_Internship = Internship
class Range(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def min(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def max(self) -> int: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.Range": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.Range": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.Range": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.Range": ...  # type: ignore
_fbthrift_Range = Range
class struct1(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def a(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def b(self) -> str: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.struct1": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.struct1": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.struct1": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.struct1": ...  # type: ignore
_fbthrift_struct1 = struct1
class struct2(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def a(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def b(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def c(self) -> _fbthrift_struct1: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def d(self) -> _typing.Sequence[int]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.struct2": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.struct2": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.struct2": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.struct2": ...  # type: ignore
_fbthrift_struct2 = struct2
class struct3(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def a(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def b(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def c(self) -> _fbthrift_struct2: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.struct3": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.struct3": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.struct3": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.struct3": ...  # type: ignore
_fbthrift_struct3 = struct3
class struct4(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def a(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def b(self) -> _typing.Optional[float]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def c(self) -> _typing.Optional[int]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.struct4": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.struct4": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.struct4": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.struct4": ...  # type: ignore
_fbthrift_struct4 = struct4
class union1(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def i(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def d(self) -> float: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.union1": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.union1": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.union1": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.union1": ...  # type: ignore

    class FbThriftUnionFieldEnum(_enum.Enum):
        EMPTY = 0
        i = 1
        d = 2

    FbThriftUnionFieldEnum.__name__ = "union1"
    @_fbthrift_property
    @_abc.abstractmethod
    def fbthrift_current_value(self) -> _typing.Final[_typing.Union[None, int, float]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fbthrift_current_field(self) -> _typing.Final[FbThriftUnionFieldEnum]: ...

_fbthrift_union1 = union1
class union2(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def i(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def d(self) -> float: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def s(self) -> _fbthrift_struct1: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def u(self) -> _fbthrift_union1: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.union2": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.union2": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.union2": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.union2": ...  # type: ignore

    class FbThriftUnionFieldEnum(_enum.Enum):
        EMPTY = 0
        i = 1
        d = 2
        s = 3
        u = 4

    FbThriftUnionFieldEnum.__name__ = "union2"
    @_fbthrift_property
    @_abc.abstractmethod
    def fbthrift_current_value(self) -> _typing.Final[_typing.Union[None, int, float, _fbthrift_struct1, _fbthrift_union1]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fbthrift_current_field(self) -> _typing.Final[FbThriftUnionFieldEnum]: ...

_fbthrift_union2 = union2

MyCompany = _fbthrift_Company
MyStringIdentifier = str
MyIntIdentifier = int
MyMapIdentifier = _typing.Mapping[str, str]
