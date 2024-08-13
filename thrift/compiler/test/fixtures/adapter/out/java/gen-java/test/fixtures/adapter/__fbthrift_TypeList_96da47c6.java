/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.adapter;

import com.facebook.thrift.type.TypeList;
import java.util.ArrayList;
import java.util.List;

public class __fbthrift_TypeList_96da47c6 implements TypeList {

  private static List<TypeMapping> list = new ArrayList<>();

  private static void add(String uri, String className) {
    list.add(new TypeList.TypeMapping(uri, className));
  }

  private static void addToList0() {
    add("facebook.com/thrift/test/MyAnnotation", "test.fixtures.adapter.MyAnnotation");
    add("facebook.com/thrift/compiler/test/fixtures/adapter/src/module/Foo", "test.fixtures.adapter.Foo");
    add("facebook.com/thrift/test/Baz", "test.fixtures.adapter.Baz");
    add("facebook.com/thrift/test/Bar", "test.fixtures.adapter.Bar");
    add("facebook.com/thrift/test/DirectlyAdapted", "test.fixtures.adapter.DirectlyAdapted");
    add("facebook.com/thrift/test/IndependentDirectlyAdapted", "test.fixtures.adapter.IndependentDirectlyAdapted");
    add("facebook.com/thrift/test/StructWithFieldAdapter", "test.fixtures.adapter.StructWithFieldAdapter");
    add("facebook.com/thrift/test/TerseAdaptedFields", "test.fixtures.adapter.TerseAdaptedFields");
    add("facebook.com/thrift/test/B", "test.fixtures.adapter.B");
    add("facebook.com/thrift/test/A", "test.fixtures.adapter.A");
    add("facebook.com/thrift/test/Config", "test.fixtures.adapter.Config");
    add("facebook.com/thrift/test/MyStruct", "test.fixtures.adapter.MyStruct");
    add("facebook.com/thrift/test/AdaptTestStruct", "test.fixtures.adapter.AdaptTestStruct");
    add("facebook.com/thrift/test/AdaptTemplatedTestStruct", "test.fixtures.adapter.AdaptTemplatedTestStruct");
    add("facebook.com/thrift/test/AdaptTemplatedNestedTestStruct", "test.fixtures.adapter.AdaptTemplatedNestedTestStruct");
    add("facebook.com/thrift/test/AdaptTestUnion", "test.fixtures.adapter.AdaptTestUnion");
    add("facebook.com/thrift/test/AdaptedStruct", "test.fixtures.adapter.AdaptedStruct");
    add("facebook.com/thrift/test/DirectlyAdaptedStruct", "test.fixtures.adapter.DirectlyAdaptedStruct");
    add("facebook.com/thrift/test/StructFieldAdaptedStruct", "test.fixtures.adapter.StructFieldAdaptedStruct");
    add("facebook.com/thrift/test/CircularAdaptee", "test.fixtures.adapter.CircularAdaptee");
    add("facebook.com/thrift/test/CircularStruct", "test.fixtures.adapter.CircularStruct");
    add("facebook.com/thrift/test/ReorderedStruct", "test.fixtures.adapter.ReorderedStruct");
    add("facebook.com/thrift/test/DeclaredAfterStruct", "test.fixtures.adapter.DeclaredAfterStruct");
    add("facebook.com/thrift/test/RenamedStruct", "test.fixtures.adapter.RenamedStruct");
    add("facebook.com/thrift/test/SameNamespaceStruct", "test.fixtures.adapter.SameNamespaceStruct");
    add("facebook.com/thrift/test/HeapAllocated", "test.fixtures.adapter.HeapAllocated");
    add("facebook.com/thrift/test/MoveOnly", "test.fixtures.adapter.MoveOnly");
    add("facebook.com/thrift/test/AlsoMoveOnly", "test.fixtures.adapter.AlsoMoveOnly");
    add("facebook.com/thrift/test/ApplyAdapter", "test.fixtures.adapter.ApplyAdapter");
    add("facebook.com/thrift/test/TransitiveAdapted", "test.fixtures.adapter.TransitiveAdapted");
    add("facebook.com/thrift/test/CountingStruct", "test.fixtures.adapter.CountingStruct");
    add("facebook.com/thrift/test/Person", "test.fixtures.adapter.Person");
    add("facebook.com/thrift/test/Person2", "test.fixtures.adapter.Person2");
    add("facebook.com/thrift/test/RenamedStructWithStructAdapterAndFieldAdapter", "test.fixtures.adapter.RenamedStructWithStructAdapterAndFieldAdapter");
    add("facebook.com/thrift/test/Color", "test.fixtures.adapter.Color");
    add("facebook.com/thrift/test/ThriftAdaptedEnum", "test.fixtures.adapter.ThriftAdaptedEnum");
  }

  static {
    addToList0();
  }

  @java.lang.Override
  public List<TypeList.TypeMapping> getTypes() {
    return list;
  }
}