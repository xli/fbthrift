#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from __future__ import absolute_import
import six
from thrift.util.Recursive import fix_spec
from thrift.Thrift import *
from thrift.protocol.TProtocol import TProtocolException

from json import loads
import sys
if sys.version_info[0] >= 3:
  long = int


import pprint
import warnings
from thrift import Thrift
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.protocol import TCompactProtocol
from thrift.protocol import THeaderProtocol
fastproto = None
if not '__pypy__' in sys.builtin_module_names:
  try:
    from thrift.protocol import fastproto
  except ImportError:
    pass
all_structs = []
UTF8STRINGS = bool(0) or sys.version_info.major >= 3

__all__ = ['UTF8STRINGS', 'MyEnum', 'MyStruct', 'MyDataItem', 'MyUnion']

class MyEnum:
  MyValue1 = 0
  MyValue2 = 1

  _VALUES_TO_NAMES = {
    0: "MyValue1",
    1: "MyValue2",
  }

  _NAMES_TO_VALUES = {
    "MyValue1": 0,
    "MyValue2": 1,
  }

class MyStruct:
  """
  Attributes:
   - MyIntField
   - MyStringField
   - MyDataField
   - myEnum
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.I64:
          self.MyIntField = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRING:
          self.MyStringField = iprot.readString().decode('utf-8') if UTF8STRINGS else iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRUCT:
          self.MyDataField = MyDataItem()
          self.MyDataField.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.I32:
          self.myEnum = iprot.readI32()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('MyStruct')
    if self.MyIntField != None:
      oprot.writeFieldBegin('MyIntField', TType.I64, 1)
      oprot.writeI64(self.MyIntField)
      oprot.writeFieldEnd()
    if self.MyStringField != None:
      oprot.writeFieldBegin('MyStringField', TType.STRING, 2)
      oprot.writeString(self.MyStringField.encode('utf-8')) if UTF8STRINGS and not isinstance(self.MyStringField, bytes) else oprot.writeString(self.MyStringField)
      oprot.writeFieldEnd()
    if self.MyDataField != None:
      oprot.writeFieldBegin('MyDataField', TType.STRUCT, 3)
      self.MyDataField.write(oprot)
      oprot.writeFieldEnd()
    if self.myEnum != None:
      oprot.writeFieldBegin('myEnum', TType.I32, 4)
      oprot.writeI32(self.myEnum)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def readFromJson(self, json, is_text=True, **kwargs):
    relax_enum_validation = bool(kwargs.pop('relax_enum_validation', False))
    if kwargs:
        extra_kwargs = ', '.join(kwargs.keys())
        raise ValueError(
            'Unexpected keyword arguments: ' + extra_kwargs
        )
    json_obj = json
    if is_text:
      json_obj = loads(json)
    if 'MyIntField' in json_obj and json_obj['MyIntField'] is not None:
      self.MyIntField = long(json_obj['MyIntField'])
    if 'MyStringField' in json_obj and json_obj['MyStringField'] is not None:
      self.MyStringField = json_obj['MyStringField']
    if 'MyDataField' in json_obj and json_obj['MyDataField'] is not None:
      self.MyDataField = MyDataItem()
      self.MyDataField.readFromJson(json_obj['MyDataField'], is_text=False, relax_enum_validation=relax_enum_validation)
    if 'myEnum' in json_obj and json_obj['myEnum'] is not None:
      self.myEnum = json_obj['myEnum']
      if not self.myEnum in MyEnum._VALUES_TO_NAMES:
        msg = 'Integer value ''%s'' is not a recognized value of enum type MyEnum' % self.myEnum
        if relax_enum_validation:
            warnings.warn(msg)
        else:
            raise TProtocolException(TProtocolException.INVALID_DATA, msg)

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.MyIntField is not None:
      value = pprint.pformat(self.MyIntField, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    MyIntField=%s' % (value))
    if self.MyStringField is not None:
      value = pprint.pformat(self.MyStringField, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    MyStringField=%s' % (value))
    if self.MyDataField is not None:
      value = pprint.pformat(self.MyDataField, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    MyDataField=%s' % (value))
    if self.myEnum is not None:
      value = pprint.pformat(self.myEnum, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    myEnum=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  if not six.PY2:
    __hash__ = object.__hash__

class MyDataItem:

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('MyDataItem')
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def readFromJson(self, json, is_text=True, **kwargs):
    relax_enum_validation = bool(kwargs.pop('relax_enum_validation', False))
    if kwargs:
        extra_kwargs = ', '.join(kwargs.keys())
        raise ValueError(
            'Unexpected keyword arguments: ' + extra_kwargs
        )
    json_obj = json
    if is_text:
      json_obj = loads(json)

  def __repr__(self):
    L = []
    padding = ' ' * 4
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  if not six.PY2:
    __hash__ = object.__hash__

class MyUnion(object):
  """
  Attributes:
   - myEnum
   - myStruct
   - myDataItem
  """

  thrift_spec = None
  __init__ = None

  __EMPTY__ = 0
  MYENUM = 1
  MYSTRUCT = 2
  MYDATAITEM = 3
  
  @staticmethod
  def isUnion():
    return True

  def get_myEnum(self):
    assert self.field == 1
    return self.value

  def get_myStruct(self):
    assert self.field == 2
    return self.value

  def get_myDataItem(self):
    assert self.field == 3
    return self.value

  def set_myEnum(self, value):
    self.field = 1
    self.value = value

  def set_myStruct(self, value):
    self.field = 2
    self.value = value

  def set_myDataItem(self, value):
    self.field = 3
    self.value = value

  def getType(self):
    return self.field

  def __repr__(self):
    value = pprint.pformat(self.value)
    member = ''
    if self.field == 1:
      padding = ' ' * 7
      value = padding.join(value.splitlines(True))
      member = '\n    %s=%s' % ('myEnum', value)
    if self.field == 2:
      padding = ' ' * 9
      value = padding.join(value.splitlines(True))
      member = '\n    %s=%s' % ('myStruct', value)
    if self.field == 3:
      padding = ' ' * 11
      value = padding.join(value.splitlines(True))
      member = '\n    %s=%s' % ('myDataItem', value)
    return "%s(%s)" % (self.__class__.__name__, member)

  def read(self, iprot):
    self.field = 0
    self.value = None
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, True], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, True], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break

      if fid == 1:
        if ftype == TType.I32:
          myEnum = iprot.readI32()
          assert self.field == 0 and self.value is None
          self.set_myEnum(myEnum)
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRUCT:
          myStruct = MyStruct()
          myStruct.read(iprot)
          assert self.field == 0 and self.value is None
          self.set_myStruct(myStruct)
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRUCT:
          myDataItem = MyDataItem()
          myDataItem.read(iprot)
          assert self.field == 0 and self.value is None
          self.set_myDataItem(myDataItem)
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, True], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, True], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeUnionBegin('MyUnion')
    if self.field == 1:
      oprot.writeFieldBegin('myEnum', TType.I32, 1)
      myEnum = self.value
      oprot.writeI32(myEnum)
      oprot.writeFieldEnd()
    if self.field == 2:
      oprot.writeFieldBegin('myStruct', TType.STRUCT, 2)
      myStruct = self.value
      myStruct.write(oprot)
      oprot.writeFieldEnd()
    if self.field == 3:
      oprot.writeFieldBegin('myDataItem', TType.STRUCT, 3)
      myDataItem = self.value
      myDataItem.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeUnionEnd()
  
  def readFromJson(self, json, is_text=True, **kwargs):
    relax_enum_validation = bool(kwargs.pop('relax_enum_validation', False))
    if kwargs:
        extra_kwargs = ', '.join(kwargs.keys())
        raise ValueError(
            'Unexpected keyword arguments: ' + extra_kwargs
        )
    self.field = 0
    self.value = None
    obj = json
    if is_text:
      obj = loads(json)
    if not isinstance(obj, dict) or len(obj) > 1:
      raise TProtocolException(TProtocolException.INVALID_DATA, 'Can not parse')
    
    if 'myEnum' in obj:
      myEnum = obj['myEnum']
      if not myEnum in MyEnum._VALUES_TO_NAMES:
        msg = 'Integer value ''%s'' is not a recognized value of enum type MyEnum' % myEnum
        if relax_enum_validation:
            warnings.warn(msg)
        else:
            raise TProtocolException(TProtocolException.INVALID_DATA, msg)
      self.set_myEnum(myEnum)
    if 'myStruct' in obj:
      myStruct = MyStruct()
      myStruct.readFromJson(obj['myStruct'], is_text=False, relax_enum_validation=relax_enum_validation)
      self.set_myStruct(myStruct)
    if 'myDataItem' in obj:
      myDataItem = MyDataItem()
      myDataItem.readFromJson(obj['myDataItem'], is_text=False, relax_enum_validation=relax_enum_validation)
      self.set_myDataItem(myDataItem)

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

all_structs.append(MyStruct)
MyStruct.thrift_spec = (
  None, # 0
  (1, TType.I64, 'MyIntField', None, None, 2, ), # 1
  (2, TType.STRING, 'MyStringField', True, None, 2, ), # 2
  (3, TType.STRUCT, 'MyDataField', [MyDataItem, MyDataItem.thrift_spec, False], None, 2, ), # 3
  (4, TType.I32, 'myEnum', MyEnum, None, 2, ), # 4
)

MyStruct.thrift_struct_annotations = {
}
MyStruct.thrift_field_annotations = {
}

def MyStruct__init__(self, MyIntField=None, MyStringField=None, MyDataField=None, myEnum=None,):
  self.MyIntField = MyIntField
  self.MyStringField = MyStringField
  self.MyDataField = MyDataField
  self.myEnum = myEnum

MyStruct.__init__ = MyStruct__init__

def MyStruct__setstate__(self, state):
  state.setdefault('MyIntField', None)
  state.setdefault('MyStringField', None)
  state.setdefault('MyDataField', None)
  state.setdefault('myEnum', None)
  self.__dict__ = state

MyStruct.__getstate__ = lambda self: self.__dict__.copy()
MyStruct.__setstate__ = MyStruct__setstate__

all_structs.append(MyDataItem)
MyDataItem.thrift_spec = (
)

MyDataItem.thrift_struct_annotations = {
}
MyDataItem.thrift_field_annotations = {
}

all_structs.append(MyUnion)
MyUnion.thrift_spec = (
  None, # 0
  (1, TType.I32, 'myEnum', MyEnum, None, 2, ), # 1
  (2, TType.STRUCT, 'myStruct', [MyStruct, MyStruct.thrift_spec, False], None, 2, ), # 2
  (3, TType.STRUCT, 'myDataItem', [MyDataItem, MyDataItem.thrift_spec, False], None, 2, ), # 3
)

MyUnion.thrift_struct_annotations = {
}
MyUnion.thrift_field_annotations = {
}

def MyUnion__init__(self, myEnum=None, myStruct=None, myDataItem=None,):
  self.field = 0
  self.value = None
  if myEnum is not None:
    assert self.field == 0 and self.value is None
    self.field = 1
    self.value = myEnum
  if myStruct is not None:
    assert self.field == 0 and self.value is None
    self.field = 2
    self.value = myStruct
  if myDataItem is not None:
    assert self.field == 0 and self.value is None
    self.field = 3
    self.value = myDataItem

MyUnion.__init__ = MyUnion__init__

fix_spec(all_structs)
del all_structs
