
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#


cdef extern from "thrift/compiler/test/fixtures/python_capi/gen-cpp2/containers_types.h":
    cdef cppclass cTemplateLists "::test::fixtures::python_capi::TemplateLists":
        cTemplateLists()
    cdef cppclass cTemplateSets "::test::fixtures::python_capi::TemplateSets":
        cTemplateSets()
    cdef cppclass cTemplateMaps "::test::fixtures::python_capi::TemplateMaps":
        cTemplateMaps()
    cdef cppclass cTWrapped "::test::fixtures::python_capi::TWrapped":
        cTWrapped()
    cdef cppclass cIndirectionA "::test::fixtures::python_capi::IndirectionA":
        cIndirectionA()
    cdef cppclass cIndirectionB "::test::fixtures::python_capi::IndirectionB":
        cIndirectionB()
    cdef cppclass cIndirectionC "::test::fixtures::python_capi::IndirectionC":
        cIndirectionC()

cdef cTemplateLists TemplateLists_convert_to_cpp(object inst) except*
cdef object TemplateLists_from_cpp(const cTemplateLists& c_struct)

cdef cTemplateSets TemplateSets_convert_to_cpp(object inst) except*
cdef object TemplateSets_from_cpp(const cTemplateSets& c_struct)

cdef cTemplateMaps TemplateMaps_convert_to_cpp(object inst) except*
cdef object TemplateMaps_from_cpp(const cTemplateMaps& c_struct)

cdef cTWrapped TWrapped_convert_to_cpp(object inst) except*
cdef object TWrapped_from_cpp(const cTWrapped& c_struct)

cdef cIndirectionA IndirectionA_convert_to_cpp(object inst) except*
cdef object IndirectionA_from_cpp(const cIndirectionA& c_struct)

cdef cIndirectionB IndirectionB_convert_to_cpp(object inst) except*
cdef object IndirectionB_from_cpp(const cIndirectionB& c_struct)

cdef cIndirectionC IndirectionC_convert_to_cpp(object inst) except*
cdef object IndirectionC_from_cpp(const cIndirectionC& c_struct)

