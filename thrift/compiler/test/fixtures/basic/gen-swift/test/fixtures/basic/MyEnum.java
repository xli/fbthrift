/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import com.facebook.swift.codec.*;

@SwiftGenerated
public enum MyEnum {
    MY_VALUE1(0),
    MY_VALUE2(1),
    DOMAIN(2);

    private final int value;

    MyEnum(int value) {
        this.value = value;
    }

    @ThriftEnumValue
    public int getValue() {
        return value;
    }

    public static MyEnum fromInteger(int n) {
        switch (n) {
        case 0:
            return MY_VALUE1;
        case 1:
            return MY_VALUE2;
        case 2:
            return DOMAIN;
        default:
            return null;
        }
    }
}
