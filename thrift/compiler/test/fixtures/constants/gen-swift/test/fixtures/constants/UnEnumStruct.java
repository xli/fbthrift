/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.constants;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftStruct("UnEnumStruct")
public final class UnEnumStruct {
    @ThriftConstructor
    public UnEnumStruct(
        @ThriftField(value=1, name="city", requiredness=Requiredness.NONE) final test.fixtures.constants.City city
    ) {
        this.city = city;
    }

    public static class Builder {
        private test.fixtures.constants.City city;

        public Builder setCity(test.fixtures.constants.City city) {
            this.city = city;
            return this;
        }

        public Builder() { }
        public Builder(UnEnumStruct other) {
            this.city = other.city;
        }

        public UnEnumStruct build() {
            return new UnEnumStruct (
                this.city
            );
        }
    }

    private final test.fixtures.constants.City city;

    @ThriftField(value=1, name="city", requiredness=Requiredness.NONE)
    public test.fixtures.constants.City getCity() { return city; }

    @Override
    public String toString() {
        return toStringHelper(this)
            .add("city", city)
            .toString();
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        UnEnumStruct other = (UnEnumStruct)o;

        return
            Objects.equals(city, other.city);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            city
        });
    }
}
