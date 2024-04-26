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



def get_reflection__Fiery() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Fiery",
        kind=__StructType.EXCEPTION,
        annotations={
            """message""": """message""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="message",
            py_name="message",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.REQUIRED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__Serious() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Serious",
        kind=__StructType.EXCEPTION,
        annotations={
            """message""": """sonnet""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="sonnet",
            py_name="sonnet",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__ComplexFieldNames() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="ComplexFieldNames",
        kind=__StructType.EXCEPTION,
        annotations={
            """message""": """internal_error_message""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="error_message",
            py_name="error_message",
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
            name="internal_error_message",
            py_name="internal_error_message",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__CustomFieldNames() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="CustomFieldNames",
        kind=__StructType.EXCEPTION,
        annotations={
            """message""": """internal_error_message""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="error_message",
            py_name="error_message",
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
            name="internal_error_message",
            py_name="internal_error_message",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
                """java.swift.name""": """internalGreatMessage""",            },
        ),
    )
    return spec
def get_reflection__ExceptionWithPrimitiveField() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="ExceptionWithPrimitiveField",
        kind=__StructType.EXCEPTION,
        annotations={
            """message""": """message""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="message",
            py_name="message",
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
            name="error_code",
            py_name="error_code",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__ExceptionWithStructuredAnnotation() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="ExceptionWithStructuredAnnotation",
        kind=__StructType.EXCEPTION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="message_field",
            py_name="message_field",
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
            name="error_code",
            py_name="error_code",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__Banal() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Banal",
        kind=__StructType.EXCEPTION,
        annotations={
        },
    )
    return spec