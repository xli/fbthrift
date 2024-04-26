#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection import (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
    StructSpec as __StructSpec,
    ListSpec as __ListSpec,
    SetSpec as __SetSpec,
    MapSpec as __MapSpec,
    FieldSpec as __FieldSpec,
)


import module.types as _module_types



def get_reflection__Internship() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Internship",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="weeks",
            py_name="weeks",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.REQUIRED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="title",
            py_name="title",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="employer",
            py_name="employer",
            type=_module_types.Company,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="compensation",
            py_name="compensation",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="school",
            py_name="school",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__Range() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Range",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="min",
            py_name="min",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.REQUIRED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="max",
            py_name="max",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.REQUIRED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__struct1() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="struct1",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    defaults = _module_types.struct1()
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="a",
            py_name="a",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.a,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="b",
            py_name="b",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.b,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__struct2() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="struct2",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="a",
            py_name="a",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="b",
            py_name="b",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="c",
            py_name="c",
            type=_module_types.struct1,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="d",
            py_name="d",
            type=_module_types.List__i32,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__struct3() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="struct3",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="a",
            py_name="a",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="b",
            py_name="b",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="c",
            py_name="c",
            type=_module_types.struct2,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__struct4() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="struct4",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="a",
            py_name="a",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="b",
            py_name="b",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="c",
            py_name="c",
            type=int,
            kind=__NumberType.BYTE,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__union1() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="union1",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="i",
            py_name="i",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="d",
            py_name="d",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__union2() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="union2",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="i",
            py_name="i",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="d",
            py_name="d",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="s",
            py_name="s",
            type=_module_types.struct1,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="u",
            py_name="u",
            type=_module_types.union1,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__List__i32() -> __ListSpec :
    return __ListSpec._fbthrift_create(
        value=int,
        kind=__NumberType.I32,
    )

def get_reflection__Map__string_i32() -> __MapSpec:
    return __MapSpec._fbthrift_create(
        key=str,
        key_kind=__NumberType.NOT_A_NUMBER,
        value=int,
        value_kind=__NumberType.I32,
    )

def get_reflection__List__Map__string_i32() -> __ListSpec :
    return __ListSpec._fbthrift_create(
        value=_module_types.Map__string_i32,
        kind=__NumberType.NOT_A_NUMBER,
    )

def get_reflection__Map__string_string() -> __MapSpec:
    return __MapSpec._fbthrift_create(
        key=str,
        key_kind=__NumberType.NOT_A_NUMBER,
        value=str,
        value_kind=__NumberType.NOT_A_NUMBER,
    )

def get_reflection__List__Range() -> __ListSpec :
    return __ListSpec._fbthrift_create(
        value=_module_types.Range,
        kind=__NumberType.NOT_A_NUMBER,
    )

def get_reflection__List__Internship() -> __ListSpec :
    return __ListSpec._fbthrift_create(
        value=_module_types.Internship,
        kind=__NumberType.NOT_A_NUMBER,
    )

def get_reflection__List__string() -> __ListSpec :
    return __ListSpec._fbthrift_create(
        value=str,
        kind=__NumberType.NOT_A_NUMBER,
    )

def get_reflection__Set__i32() -> __SetSpec:
    return __SetSpec._fbthrift_create(
        value=int,
        kind=__NumberType.I32,
     )

def get_reflection__Set__string() -> __SetSpec:
    return __SetSpec._fbthrift_create(
        value=str,
        kind=__NumberType.NOT_A_NUMBER,
     )

def get_reflection__Map__i32_i32() -> __MapSpec:
    return __MapSpec._fbthrift_create(
        key=int,
        key_kind=__NumberType.I32,
        value=int,
        value_kind=__NumberType.I32,
    )

def get_reflection__Map__i32_string() -> __MapSpec:
    return __MapSpec._fbthrift_create(
        key=int,
        key_kind=__NumberType.I32,
        value=str,
        value_kind=__NumberType.NOT_A_NUMBER,
    )

def get_reflection__Map__i32_bool() -> __MapSpec:
    return __MapSpec._fbthrift_create(
        key=int,
        key_kind=__NumberType.I32,
        value=bool,
        value_kind=__NumberType.NOT_A_NUMBER,
    )
