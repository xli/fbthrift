#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions



class TemplateLists(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "std_string",  # name
            "std_string",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.typeinfo_string),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "deque_string",  # name
            "deque_string",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.typeinfo_binary),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "small_vector_iobuf",  # name
            "small_vector_iobuf",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.typeinfo_iobuf),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "nested_small_vector",  # name
            "nested_small_vector",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.typeinfo_string)),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "small_vector_tensor",  # name
            "small_vector_tensor",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.typeinfo_string))),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "containers.TemplateLists"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/python_capi/TemplateLists"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_TemplateLists()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.python_capi.containers.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.TemplateLists, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("containers.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.TemplateLists, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("containers.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.TemplateLists, self)

# This unfortunately has to be down here to prevent circular imports
import test.fixtures.python_capi.containers.thrift_metadata


_fbthrift_all_enums = [
]

def _fbthrift_metadata__struct_TemplateLists():
    return test.fixtures.python_capi.containers.thrift_metadata.gen_metadata_struct_TemplateLists()


_fbthrift_all_structs = [
    TemplateLists,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)

IOBuf = _fbthrift_iobuf.IOBuf
small_vector_iobuf = _fbthrift_python_types.ListTypeFactory(_fbthrift_python_types.typeinfo_iobuf)
fbvector_string = _fbthrift_python_types.ListTypeFactory(_fbthrift_python_types.typeinfo_string)
fbvector_fbvector_string = _fbthrift_python_types.ListTypeFactory(_fbthrift_python_types.ListTypeInfo(_fbthrift_python_types.typeinfo_string))