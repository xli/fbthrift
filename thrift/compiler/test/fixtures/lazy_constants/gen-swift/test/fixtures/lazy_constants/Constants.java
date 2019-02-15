/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.lazy_constants;

import com.facebook.swift.codec.*;
import com.google.common.collect.*;
import java.util.*;

@SwiftGenerated
public final class Constants {
    private Constants() {}

    public static final String apostrophe = "'";

    public static final String backslash = "\\";

    public static final Map<String, Integer> char2ascii = ImmutableMap.<String, Integer>builder()
        .put("'", 39)
        .put(""", 34)
        .put("\\", 92)
        .put("\x61", 97)
        .build();

    public static final String escaped_a = "\x61";

    public static final test.fixtures.lazy_constants.Internship instagram = ;

    public static final List<test.fixtures.lazy_constants.Internship> internList = ImmutableList.<test.fixtures.lazy_constants.Internship>builder()
        .add()
        .add()
        .build();

    public static final List<test.fixtures.lazy_constants.Range> kRanges = ImmutableList.<test.fixtures.lazy_constants.Range>builder()
        .add()
        .add()
        .build();

    public static final int myInt = 1337;

    public static final String name = "Mark Zuckerberg";

    public static final String quotationMark = """;

    public static final List<Map<String, Integer>> states = ImmutableList.<Map<String, Integer>>builder()
        .add(ImmutableMap.<String, Integer>builder()
        .put("San Diego", 3211000)
        .put("Sacramento", 479600)
        .put("SF", 837400)
        .build())
        .add(ImmutableMap.<String, Integer>builder()
        .put("New York", 8406000)
        .put("Albany", 98400)
        .build())
        .build();

    public static final String tripleApostrophe = "'''";

    public static final double x = 1.0;

    public static final double y = 1000000.0;

    public static final double z = 1000000000.0;
}
