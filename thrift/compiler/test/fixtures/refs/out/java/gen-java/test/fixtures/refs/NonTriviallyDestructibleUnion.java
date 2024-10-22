/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.refs;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("NonTriviallyDestructibleUnion")
public final class NonTriviallyDestructibleUnion implements com.facebook.thrift.payload.ThriftSerializable {
    
    private static final boolean allowNullFieldValues =
        System.getProperty("thrift.union.allow-null-field-values", "false").equalsIgnoreCase("true");

    private static final TStruct STRUCT_DESC = new TStruct("NonTriviallyDestructibleUnion");
    private static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    private static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final NonTriviallyDestructibleUnion _DEFAULT = new NonTriviallyDestructibleUnion();

    public static final int _INT_FIELD = 1;
    private static final TField INT_FIELD_FIELD_DESC = new TField("intField", TType.I32, (short)1);

    static {
      NAMES_TO_IDS.put("intField", 1);
      THRIFT_NAMES_TO_IDS.put("int_field", 1);
      FIELD_METADATA.put(1, INT_FIELD_FIELD_DESC);
    }

    private java.lang.Object value;
    private short id;

    public enum TypeEnum {
      __FBTHRIFT_EMPTY_UNION__,
      INT_FIELD,
    }

    public static NonTriviallyDestructibleUnion from(int _id, java.lang.Object _field) {
        return from((short) _id, _field);
    }

    public static NonTriviallyDestructibleUnion from(short _id, java.lang.Object _field) {
        java.util.Objects.requireNonNull(_field);
        if (!FIELD_METADATA.containsKey(Integer.valueOf(_id))) {
            throw new java.lang.IllegalArgumentException("unknown field " + _id);
        }

        NonTriviallyDestructibleUnion _u = new  NonTriviallyDestructibleUnion();

        try {
            switch(_id) {
                case 1:
                    _u.id = _id;
                    _u.value = (int) _field;
                    return _u;
                default:
                throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
            }
        } catch (java.lang.Exception t) {
            throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
        }
    }

    @ThriftConstructor
    public NonTriviallyDestructibleUnion() {
    }
    
    @ThriftConstructor
    @Deprecated
    public NonTriviallyDestructibleUnion(final int intField) {
        this.value = intField;
        this.id = 1;
    }
    
    public static NonTriviallyDestructibleUnion fromIntField(final int intField) {
        NonTriviallyDestructibleUnion res = new NonTriviallyDestructibleUnion();
        res.value = intField;
        res.id = 1;
        return res;
    }
    

    @com.facebook.swift.codec.ThriftField(value=1, name="int_field", requiredness=Requiredness.NONE)
    public int getIntField() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a int_field element!");
        }
        return (int) value;
    }

    public boolean isSetIntField() {
        return this.id == 1;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public TypeEnum getThriftUnionType() {
      switch(this.id) {
        case 0:
          return TypeEnum.__FBTHRIFT_EMPTY_UNION__;
        case 1:
          return TypeEnum.INT_FIELD;
        default:
          throw new IllegalStateException("unreachable");
      }
    }

    public String getThriftName() {
        TField tField = (TField) FIELD_METADATA.get((int) this.id);
        if (tField == null) {
            return "null";
        } else {
            return tField.name;
        }
    }

    public <T> T accept(Visitor<T> visitor) {
        if (isSetIntField()) {
            return visitor.visitIntField(getIntField());
        }

        throw new IllegalStateException("Visitor missing for type " + this.getThriftUnionType());
    }

    @java.lang.Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", getThriftName())
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
            .toString();
    }

    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        NonTriviallyDestructibleUnion other = (NonTriviallyDestructibleUnion)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value);
    }

    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            id,
            value,
        });
    }

    public interface Visitor<T> {
        default T visit(NonTriviallyDestructibleUnion acceptor) {
        return acceptor.accept(this);
        }

        T visitIntField(int intField);
    }

    public void write0(TProtocol oprot) throws TException {
      if (this.id != 0 && this.value == null ){
        if(allowNullFieldValues) {
          // Warning: this path will generate corrupt serialized data!
          return;
        } else {
          throw new TProtocolException("Cannot write a Union with marked-as-set but null value!");
        }
      }
      oprot.writeStructBegin(STRUCT_DESC);
      switch (this.id) {
      case _INT_FIELD: {
        oprot.writeFieldBegin(INT_FIELD_FIELD_DESC);
        int intField = (int)this.value;
        oprot.writeI32(intField);
        oprot.writeFieldEnd();
        break;
      }
      default:
          // ignore unknown field
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    
    public static com.facebook.thrift.payload.Reader<NonTriviallyDestructibleUnion> asReader() {
      return NonTriviallyDestructibleUnion::read0;
    }
    
    public static NonTriviallyDestructibleUnion read0(TProtocol oprot) throws TException {
      NonTriviallyDestructibleUnion res = new NonTriviallyDestructibleUnion();
      res.value = null;
      res.id = (short) 0;
      oprot.readStructBegin(NonTriviallyDestructibleUnion.NAMES_TO_IDS, NonTriviallyDestructibleUnion.THRIFT_NAMES_TO_IDS, NonTriviallyDestructibleUnion.FIELD_METADATA);
      TField __field = oprot.readFieldBegin();
      if (__field.type != TType.STOP) {
          switch (__field.id) {
          case _INT_FIELD:
            if (__field.type == INT_FIELD_FIELD_DESC.type) {
              int intField = oprot.readI32();
              res.value = intField;
            }
            break;
          default:
            TProtocolUtil.skip(oprot, __field.type);
          }
        if (res.value != null) {
          res.id = __field.id;
        }
        oprot.readFieldEnd();
        TField __stopField = oprot.readFieldBegin(); // Consume the STOP byte
        if (__stopField.type != TType.STOP) {
          throw new TProtocolException(TProtocolException.INVALID_DATA, "Union 'NonTriviallyDestructibleUnion' is missing a STOP byte");
        }
      }
      oprot.readStructEnd();
      return res;
    }
    public static NonTriviallyDestructibleUnion defaultInstance() {
        return _DEFAULT;
    }

}
