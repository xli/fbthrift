#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/templated-deserialize/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import thrift.py3.types
import module.thrift_metadata

_fbthrift__module_name__ = "module.types"



class MyEnumA(thrift.py3.types.CompiledEnum):
    fieldA = 1
    fieldB = 2
    fieldC = 4

    __module__ = _fbthrift__module_name__
    __slots__ = ()

    @staticmethod
    def __get_metadata__():
        return module.thrift_metadata.gen_metadata_enum_MyEnumA()

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnumA"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "module.thrift_types"
        )
        return python_types.MyEnumA(self._fbthrift_value_)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self._fbthrift_value_

    def __int__(self):
        return self._fbthrift_value_

    def __index__(self):
        return self._fbthrift_value_




