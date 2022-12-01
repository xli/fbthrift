/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="BarFieldPatch", builder=BarFieldPatch.Builder.class)
public final class BarFieldPatch implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public BarFieldPatch(
        @com.facebook.swift.codec.ThriftField(value=-1, name="loop", isLegacyId=true, requiredness=Requiredness.NONE) final test.fixtures.patch.LoopPatch loop
    ) {
        this.loop = loop;
    }
    
    @ThriftConstructor
    protected BarFieldPatch() {
      this.loop = null;
    }
    
    public static class Builder {
    
        private test.fixtures.patch.LoopPatch loop = null;
    
        @com.facebook.swift.codec.ThriftField(value=-1, name="loop", isLegacyId=true, requiredness=Requiredness.NONE)
        public Builder setLoop(test.fixtures.patch.LoopPatch loop) {
            this.loop = loop;
            return this;
        }
    
        public test.fixtures.patch.LoopPatch getLoop() { return loop; }
    
        public Builder() { }
        public Builder(BarFieldPatch other) {
            this.loop = other.loop;
        }
    
        @ThriftConstructor
        public BarFieldPatch build() {
            BarFieldPatch result = new BarFieldPatch (
                this.loop
            );
            return result;
        }
    }
        
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("BarFieldPatch");
    private final test.fixtures.patch.LoopPatch loop;
    public static final int _LOOP = -1;
    private static final TField LOOP_FIELD_DESC = new TField("loop", TType.STRUCT, (short)-1);
    static {
      NAMES_TO_IDS.put("loop", -1);
      THRIFT_NAMES_TO_IDS.put("loop", -1);
      FIELD_METADATA.put(-1, LOOP_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/BarFieldPatch"), 
        BarFieldPatch.class, BarFieldPatch::read0));
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=-1, name="loop", isLegacyId=true, requiredness=Requiredness.NONE)
    public test.fixtures.patch.LoopPatch getLoop() { return loop; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("loop", loop);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        BarFieldPatch other = (BarFieldPatch)o;
    
        return
            Objects.equals(loop, other.loop) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            loop
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<BarFieldPatch> asReader() {
      return BarFieldPatch::read0;
    }
    
    public static BarFieldPatch read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(BarFieldPatch.NAMES_TO_IDS, BarFieldPatch.THRIFT_NAMES_TO_IDS, BarFieldPatch.FIELD_METADATA);
      BarFieldPatch.Builder builder = new BarFieldPatch.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _LOOP:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.LoopPatch loop = test.fixtures.patch.LoopPatch.read0(oprot);
            builder.setLoop(loop);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
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
      if (loop != null) {
        oprot.writeFieldBegin(LOOP_FIELD_DESC);
        this.loop.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _BarFieldPatchLazy {
        private static final BarFieldPatch _DEFAULT = new BarFieldPatch.Builder().build();
    }
    
    public static BarFieldPatch defaultInstance() {
        return  _BarFieldPatchLazy._DEFAULT;
    }
}
