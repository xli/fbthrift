/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package com.facebook.thrift.annotation.cpp_deprecated;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

/**
 * Indicates an integer type for C++ to use as the underlying type of enum, for example:
 * 
 *     @cpp.EnumType{type = cpp.EnumUnderlyingType.I8}
 *     enum Fruit {
 *       Apple = 0,
 *       Banana = 1,
 *     }
 * 
 * will be generated into the following:
 * 
 *     enum class Fruit : ::std::int8_t {
 *       Apple = 0,
 *       Banana = 1,
 *     };
 * 
 */
@SuppressWarnings({ "unused", "serial" })
public class EnumType implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("EnumType");
  private static final TField TYPE_FIELD_DESC = new TField("type", TType.I32, (short)1);

  /**
   * 
   * @see EnumUnderlyingType
   */
  public final EnumUnderlyingType type;
  public static final int TYPE = 1;

  public EnumType(
      EnumUnderlyingType type) {
    this.type = type;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public EnumType(EnumType other) {
    if (other.isSetType()) {
      this.type = TBaseHelper.deepCopy(other.type);
    } else {
      this.type = null;
    }
  }

  public EnumType deepCopy() {
    return new EnumType(this);
  }

  /**
   * 
   * @see EnumUnderlyingType
   */
  public EnumUnderlyingType getType() {
    return this.type;
  }

  // Returns true if field type is set (has been assigned a value) and false otherwise
  public boolean isSetType() {
    return this.type != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof EnumType))
      return false;
    EnumType that = (EnumType)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetType(), that.isSetType(), this.type, that.type)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {type});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static EnumType deserialize(TProtocol iprot) throws TException {
    EnumUnderlyingType tmp_type = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case TYPE:
          if (__field.type == TType.I32) {
            tmp_type = EnumUnderlyingType.findByValue(iprot.readI32());
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    EnumType _that;
    _that = new EnumType(
      tmp_type
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.type != null) {
      oprot.writeFieldBegin(TYPE_FIELD_DESC);
      oprot.writeI32(this.type == null ? 0 : this.type.getValue());
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}
