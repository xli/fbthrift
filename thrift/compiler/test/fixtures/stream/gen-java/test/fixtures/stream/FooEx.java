/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.stream;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import com.google.common.collect.*;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct("FooEx")
public final class FooEx extends org.apache.thrift.TBaseException implements com.facebook.thrift.payload.ThriftSerializable {
    private static final long serialVersionUID = 1L;

    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();

    private static final TStruct STRUCT_DESC = new TStruct("FooEx");

    @ThriftConstructor
    public FooEx(
    ) {
    }
    
    
    
    public static class Builder {
    
    
    public Builder() { }
        public Builder(FooEx other) {
        }
    
        @ThriftConstructor
        public FooEx build() {
            FooEx result = new FooEx (
            );
            return result;
        }
    }
    

    
    public static com.facebook.thrift.payload.Reader<FooEx> asReader() {
      return FooEx::read0;
    }
    
    public static FooEx read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(FooEx.NAMES_TO_IDS, FooEx.THRIFT_NAMES_TO_IDS, FooEx.FIELD_METADATA);
      FooEx.Builder builder = new FooEx.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _FooExLazy {
        private static final FooEx _DEFAULT = new FooEx.Builder().build();
    }
    
    public static FooEx defaultInstance() {
        return  _FooExLazy._DEFAULT;
    }}
