#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr

cimport module.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_ctypes.cLimits] Limits_convert_to_cpp(object inst) except*
cdef object Limits_from_cpp(const shared_ptr[_fbthrift_ctypes.cLimits]& c_struct)
