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


import python_module_root.my.namespacing.test.hsmodule.thrift_types

# This unfortunately has to be down here to prevent circular imports
import python_module_root.my.namespacing.extend.test.extend.thrift_metadata



_fbthrift_all_structs = [
]



class _fbthrift_ExtendTestService_check_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "struct1",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(python_module_root.my.namespacing.test.hsmodule.thrift_types.HsFoo),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


class _fbthrift_ExtendTestService_check_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )



_fbthrift_python_types.fill_specs(
    _fbthrift_ExtendTestService_check_args,
    _fbthrift_ExtendTestService_check_result,
    
)
