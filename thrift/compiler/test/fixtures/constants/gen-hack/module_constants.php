<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
class module_CONSTANTS {
  /**
   * Original thrift constant:-
   * i32 myInt
   */
  private static ?int $__myInt = null;
  public static function myInt(): int {
    if (self::$__myInt === null) {
      self::$__myInt = 1337;
    }
    return self::$__myInt;
  }

  /**
   * Original thrift constant:-
   * string name
   */
  private static ?string $__name = null;
  public static function name(): string {
    if (self::$__name === null) {
      self::$__name = "Mark Zuckerberg";
    }
    return self::$__name;
  }

  /**
   * Original thrift constant:-
   * list<map<string, i32>> states
   */
  private static ?Vector<Map<string, int>> $__states = null;
  public static function states(): Vector<Map<string, int>> {
    if (self::$__states === null) {
      self::$__states = Vector {
        Map {
          "San Diego" => 3211000,
          "Sacramento" => 479600,
          "SF" => 837400,
        },
        Map {
          "New York" => 8406000,
          "Albany" => 98400,
        },
      };
    }
    return self::$__states;
  }

  /**
   * Original thrift constant:-
   * double x
   */
  private static ?float $__x = null;
  public static function x(): float {
    if (self::$__x === null) {
      self::$__x = 1.0;
    }
    return self::$__x;
  }

  /**
   * Original thrift constant:-
   * double y
   */
  private static ?float $__y = null;
  public static function y(): float {
    if (self::$__y === null) {
      self::$__y = 1000000.0;
    }
    return self::$__y;
  }

  /**
   * Original thrift constant:-
   * double z
   */
  private static ?float $__z = null;
  public static function z(): float {
    if (self::$__z === null) {
      self::$__z = 1e+09;
    }
    return self::$__z;
  }

  /**
   * Original thrift constant:-
   * double zeroDoubleValue
   */
  private static ?float $__zeroDoubleValue = null;
  public static function zeroDoubleValue(): float {
    if (self::$__zeroDoubleValue === null) {
      self::$__zeroDoubleValue = 0.0;
    }
    return self::$__zeroDoubleValue;
  }

  /**
   * Original thrift constant:-
   * double longDoubleValue
   */
  private static ?float $__longDoubleValue = null;
  public static function longDoubleValue(): float {
    if (self::$__longDoubleValue === null) {
      self::$__longDoubleValue = 2.59961e-05;
    }
    return self::$__longDoubleValue;
  }

  /**
   * Original thrift constant:-
   * string foo
   */
  private static ?string $__foo = null;
  public static function foo(): string {
    if (self::$__foo === null) {
      self::$__foo = "foo";
    }
    return self::$__foo;
  }

  /**
   * Original thrift constant:-
   * i32 bar
   */
  private static ?int $__bar = null;
  public static function bar(): int {
    if (self::$__bar === null) {
      self::$__bar = 42;
    }
    return self::$__bar;
  }

  /**
   * Original thrift constant:-
   * struct module.Internship instagram
   */
  private static ?Internship $__instagram = null;
  public static function instagram(): Internship {
    if (self::$__instagram === null) {
      self::$__instagram = new Internship(
        12,
        "Software Engineer",
        Company::INSTAGRAM,
      );
    }
    return self::$__instagram;
  }

  /**
   * Original thrift constant:-
   * struct module.Internship partial_const
   */
  private static ?Internship $__partial_const = null;
  public static function partial_const(): Internship {
    if (self::$__partial_const === null) {
      self::$__partial_const = new Internship(
        8,
        "Some Job",
        null,
      );
    }
    return self::$__partial_const;
  }

  /**
   * Original thrift constant:-
   * list<struct module.Range> kRanges
   */
  private static ?Vector<Range> $__kRanges = null;
  public static function kRanges(): Vector<Range> {
    if (self::$__kRanges === null) {
      self::$__kRanges = Vector {
        new Range(
          1,
          2,
        ),
        new Range(
          5,
          6,
        ),
      };
    }
    return self::$__kRanges;
  }

  /**
   * Original thrift constant:-
   * list<struct module.Internship> internList
   */
  private static ?Vector<Internship> $__internList = null;
  public static function internList(): Vector<Internship> {
    if (self::$__internList === null) {
      self::$__internList = Vector {
        new Internship(
          12,
          "Software Engineer",
          Company::INSTAGRAM,
        ),
        new Internship(
          10,
          "Sales Intern",
          Company::FACEBOOK,
        ),
      };
    }
    return self::$__internList;
  }

  /**
   * Original thrift constant:-
   * struct module.struct1 pod_0
   */
  private static ?struct1 $__pod_0 = null;
  public static function pod_0(): struct1 {
    if (self::$__pod_0 === null) {
      self::$__pod_0 = new struct1(
        null,
        null,
      );
    }
    return self::$__pod_0;
  }

  /**
   * Original thrift constant:-
   * struct module.struct1 pod_1
   */
  private static ?struct1 $__pod_1 = null;
  public static function pod_1(): struct1 {
    if (self::$__pod_1 === null) {
      self::$__pod_1 = new struct1(
        10,
        "foo",
      );
    }
    return self::$__pod_1;
  }

  /**
   * Original thrift constant:-
   * struct module.struct2 pod_2
   */
  private static ?struct2 $__pod_2 = null;
  public static function pod_2(): struct2 {
    if (self::$__pod_2 === null) {
      self::$__pod_2 = new struct2(
        98,
        "gaz",
        new struct1(
          12,
          "bar",
        ),
        Vector {
          11,
          22,
          33,
        },
      );
    }
    return self::$__pod_2;
  }

  /**
   * Original thrift constant:-
   * struct module.struct3 pod_3
   */
  private static ?struct3 $__pod_3 = null;
  public static function pod_3(): struct3 {
    if (self::$__pod_3 === null) {
      self::$__pod_3 = new struct3(
        "abc",
        456,
        new struct2(
          888,
          null,
          new struct1(
            null,
            "gaz",
          ),
          Vector {
            1,
            2,
            3,
          },
        ),
      );
    }
    return self::$__pod_3;
  }

  /**
   * Original thrift constant:-
   * struct module.union1 u_1_1
   */
  private static ?union1 $__u_1_1 = null;
  public static function u_1_1(): union1 {
    if (self::$__u_1_1 === null) {
      self::$__u_1_1 = new union1(
        97,
        null,
      );
    }
    return self::$__u_1_1;
  }

  /**
   * Original thrift constant:-
   * struct module.union1 u_1_2
   */
  private static ?union1 $__u_1_2 = null;
  public static function u_1_2(): union1 {
    if (self::$__u_1_2 === null) {
      self::$__u_1_2 = new union1(
        null,
        5.6,
      );
    }
    return self::$__u_1_2;
  }

  /**
   * Original thrift constant:-
   * struct module.union1 u_1_3
   */
  private static ?union1 $__u_1_3 = null;
  public static function u_1_3(): union1 {
    if (self::$__u_1_3 === null) {
      self::$__u_1_3 = new union1(
        null,
        null,
      );
    }
    return self::$__u_1_3;
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_1
   */
  private static ?union2 $__u_2_1 = null;
  public static function u_2_1(): union2 {
    if (self::$__u_2_1 === null) {
      self::$__u_2_1 = new union2(
        51,
        null,
        null,
        null,
      );
    }
    return self::$__u_2_1;
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_2
   */
  private static ?union2 $__u_2_2 = null;
  public static function u_2_2(): union2 {
    if (self::$__u_2_2 === null) {
      self::$__u_2_2 = new union2(
        null,
        6.7,
        null,
        null,
      );
    }
    return self::$__u_2_2;
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_3
   */
  private static ?union2 $__u_2_3 = null;
  public static function u_2_3(): union2 {
    if (self::$__u_2_3 === null) {
      self::$__u_2_3 = new union2(
        null,
        null,
        new struct1(
          8,
          "abacabb",
        ),
        null,
      );
    }
    return self::$__u_2_3;
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_4
   */
  private static ?union2 $__u_2_4 = null;
  public static function u_2_4(): union2 {
    if (self::$__u_2_4 === null) {
      self::$__u_2_4 = new union2(
        null,
        null,
        null,
        new union1(
          43,
          null,
        ),
      );
    }
    return self::$__u_2_4;
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_5
   */
  private static ?union2 $__u_2_5 = null;
  public static function u_2_5(): union2 {
    if (self::$__u_2_5 === null) {
      self::$__u_2_5 = new union2(
        null,
        null,
        null,
        new union1(
          null,
          9.8,
        ),
      );
    }
    return self::$__u_2_5;
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_6
   */
  private static ?union2 $__u_2_6 = null;
  public static function u_2_6(): union2 {
    if (self::$__u_2_6 === null) {
      self::$__u_2_6 = new union2(
        null,
        null,
        null,
        new union1(
          null,
          null,
        ),
      );
    }
    return self::$__u_2_6;
  }

  /**
   * Original thrift constant:-
   * string apostrophe
   */
  private static ?string $__apostrophe = null;
  public static function apostrophe(): string {
    if (self::$__apostrophe === null) {
      self::$__apostrophe = "'";
    }
    return self::$__apostrophe;
  }

  /**
   * Original thrift constant:-
   * string tripleApostrophe
   */
  private static ?string $__tripleApostrophe = null;
  public static function tripleApostrophe(): string {
    if (self::$__tripleApostrophe === null) {
      self::$__tripleApostrophe = "'''";
    }
    return self::$__tripleApostrophe;
  }

  /**
   * Original thrift constant:-
   * string quotationMark
   */
  private static ?string $__quotationMark = null;
  public static function quotationMark(): string {
    if (self::$__quotationMark === null) {
      self::$__quotationMark = "\"";
    }
    return self::$__quotationMark;
  }

  /**
   * Original thrift constant:-
   * string backslash
   */
  private static ?string $__backslash = null;
  public static function backslash(): string {
    if (self::$__backslash === null) {
      self::$__backslash = "\\";
    }
    return self::$__backslash;
  }

  /**
   * Original thrift constant:-
   * string escaped_a
   */
  private static ?string $__escaped_a = null;
  public static function escaped_a(): string {
    if (self::$__escaped_a === null) {
      self::$__escaped_a = "\x61";
    }
    return self::$__escaped_a;
  }

  /**
   * Original thrift constant:-
   * map<string, i32> char2ascii
   */
  private static ?Map<string, int> $__char2ascii = null;
  public static function char2ascii(): Map<string, int> {
    if (self::$__char2ascii === null) {
      self::$__char2ascii = Map {
        "'" => 39,
        "\"" => 34,
        "\\" => 92,
        "\x61" => 97,
      };
    }
    return self::$__char2ascii;
  }

  /**
   * Original thrift constant:-
   * list<string> escaped_strings
   */
  private static ?Vector<string> $__escaped_strings = null;
  public static function escaped_strings(): Vector<string> {
    if (self::$__escaped_strings === null) {
      self::$__escaped_strings = Vector {
        "\x61",
        "\xab",
        "\x6a",
        "\xa6",
        "\x61yyy",
        "\xabyyy",
        "\x6ayyy",
        "\xa6yyy",
        "zzz\x61",
        "zzz\xab",
        "zzz\x6a",
        "zzz\xa6",
        "zzz\x61yyy",
        "zzz\xabyyy",
        "zzz\x6ayyy",
        "zzz\xa6yyy",
      };
    }
    return self::$__escaped_strings;
  }

  /**
   * Original thrift constant:-
   * bool false_c
   */
  private static ?bool $__false_c = null;
  public static function false_c(): bool {
    if (self::$__false_c === null) {
      self::$__false_c = false;
    }
    return self::$__false_c;
  }

  /**
   * Original thrift constant:-
   * bool true_c
   */
  private static ?bool $__true_c = null;
  public static function true_c(): bool {
    if (self::$__true_c === null) {
      self::$__true_c = true;
    }
    return self::$__true_c;
  }

  /**
   * Original thrift constant:-
   * byte zero_byte
   */
  private static ?int $__zero_byte = null;
  public static function zero_byte(): int {
    if (self::$__zero_byte === null) {
      self::$__zero_byte = 0;
    }
    return self::$__zero_byte;
  }

  /**
   * Original thrift constant:-
   * i16 zero16
   */
  private static ?int $__zero16 = null;
  public static function zero16(): int {
    if (self::$__zero16 === null) {
      self::$__zero16 = 0;
    }
    return self::$__zero16;
  }

  /**
   * Original thrift constant:-
   * i32 zero32
   */
  private static ?int $__zero32 = null;
  public static function zero32(): int {
    if (self::$__zero32 === null) {
      self::$__zero32 = 0;
    }
    return self::$__zero32;
  }

  /**
   * Original thrift constant:-
   * i64 zero64
   */
  private static ?int $__zero64 = null;
  public static function zero64(): int {
    if (self::$__zero64 === null) {
      self::$__zero64 = 0;
    }
    return self::$__zero64;
  }

  /**
   * Original thrift constant:-
   * double zero_dot_zero
   */
  private static ?float $__zero_dot_zero = null;
  public static function zero_dot_zero(): float {
    if (self::$__zero_dot_zero === null) {
      self::$__zero_dot_zero = 0.0;
    }
    return self::$__zero_dot_zero;
  }

  /**
   * Original thrift constant:-
   * string empty_string
   */
  private static ?string $__empty_string = null;
  public static function empty_string(): string {
    if (self::$__empty_string === null) {
      self::$__empty_string = "";
    }
    return self::$__empty_string;
  }

  /**
   * Original thrift constant:-
   * list<i32> empty_int_list
   */
  private static ?Vector<int> $__empty_int_list = null;
  public static function empty_int_list(): Vector<int> {
    if (self::$__empty_int_list === null) {
      self::$__empty_int_list = Vector {
      };
    }
    return self::$__empty_int_list;
  }

  /**
   * Original thrift constant:-
   * list<string> empty_string_list
   */
  private static ?Vector<string> $__empty_string_list = null;
  public static function empty_string_list(): Vector<string> {
    if (self::$__empty_string_list === null) {
      self::$__empty_string_list = Vector {
      };
    }
    return self::$__empty_string_list;
  }

  /**
   * Original thrift constant:-
   * set<i32> empty_int_set
   */
  private static ?Set<int> $__empty_int_set = null;
  public static function empty_int_set(): Set<int> {
    if (self::$__empty_int_set === null) {
      self::$__empty_int_set = Set {
      };
    }
    return self::$__empty_int_set;
  }

  /**
   * Original thrift constant:-
   * set<string> empty_string_set
   */
  private static ?Set<string> $__empty_string_set = null;
  public static function empty_string_set(): Set<string> {
    if (self::$__empty_string_set === null) {
      self::$__empty_string_set = Set {
      };
    }
    return self::$__empty_string_set;
  }

  /**
   * Original thrift constant:-
   * map<i32, i32> empty_int_int_map
   */
  private static ?Map<int, int> $__empty_int_int_map = null;
  public static function empty_int_int_map(): Map<int, int> {
    if (self::$__empty_int_int_map === null) {
      self::$__empty_int_int_map = Map {
      };
    }
    return self::$__empty_int_int_map;
  }

  /**
   * Original thrift constant:-
   * map<i32, string> empty_int_string_map
   */
  private static ?Map<int, string> $__empty_int_string_map = null;
  public static function empty_int_string_map(): Map<int, string> {
    if (self::$__empty_int_string_map === null) {
      self::$__empty_int_string_map = Map {
      };
    }
    return self::$__empty_int_string_map;
  }

  /**
   * Original thrift constant:-
   * map<string, i32> empty_string_int_map
   */
  private static ?Map<string, int> $__empty_string_int_map = null;
  public static function empty_string_int_map(): Map<string, int> {
    if (self::$__empty_string_int_map === null) {
      self::$__empty_string_int_map = Map {
      };
    }
    return self::$__empty_string_int_map;
  }

  /**
   * Original thrift constant:-
   * map<string, string> empty_string_string_map
   */
  private static ?Map<string, string> $__empty_string_string_map = null;
  public static function empty_string_string_map(): Map<string, string> {
    if (self::$__empty_string_string_map === null) {
      self::$__empty_string_string_map = Map {
      };
    }
    return self::$__empty_string_string_map;
  }


  private static ?dict<string, mixed> $____values = null;
  public static function __values(): dict<string, mixed> {
    if (self::$____values === null) {
      self::$____values = dict[
        "myInt" => 1337,
        "name" => "Mark Zuckerberg",
        "states" => Vector {
          Map {
            "San Diego" => 3211000,
            "Sacramento" => 479600,
            "SF" => 837400,
          },
          Map {
            "New York" => 8406000,
            "Albany" => 98400,
          },
        },
        "x" => 1.0,
        "y" => 1000000.0,
        "z" => 1e+09,
        "zeroDoubleValue" => 0.0,
        "longDoubleValue" => 2.59961e-05,
        "foo" => "foo",
        "bar" => 42,
        "instagram" => new Internship(
          12,
          "Software Engineer",
          Company::INSTAGRAM,
        ),
        "partial_const" => new Internship(
          8,
          "Some Job",
          null,
        ),
        "kRanges" => Vector {
          new Range(
            1,
            2,
          ),
          new Range(
            5,
            6,
          ),
        },
        "internList" => Vector {
          new Internship(
            12,
            "Software Engineer",
            Company::INSTAGRAM,
          ),
          new Internship(
            10,
            "Sales Intern",
            Company::FACEBOOK,
          ),
        },
        "pod_0" => new struct1(
          null,
          null,
        ),
        "pod_1" => new struct1(
          10,
          "foo",
        ),
        "pod_2" => new struct2(
          98,
          "gaz",
          new struct1(
            12,
            "bar",
          ),
          Vector {
            11,
            22,
            33,
          },
        ),
        "pod_3" => new struct3(
          "abc",
          456,
          new struct2(
            888,
            null,
            new struct1(
              null,
              "gaz",
            ),
            Vector {
              1,
              2,
              3,
            },
          ),
        ),
        "u_1_1" => new union1(
          97,
          null,
        ),
        "u_1_2" => new union1(
          null,
          5.6,
        ),
        "u_1_3" => new union1(
          null,
          null,
        ),
        "u_2_1" => new union2(
          51,
          null,
          null,
          null,
        ),
        "u_2_2" => new union2(
          null,
          6.7,
          null,
          null,
        ),
        "u_2_3" => new union2(
          null,
          null,
          new struct1(
            8,
            "abacabb",
          ),
          null,
        ),
        "u_2_4" => new union2(
          null,
          null,
          null,
          new union1(
            43,
            null,
          ),
        ),
        "u_2_5" => new union2(
          null,
          null,
          null,
          new union1(
            null,
            9.8,
          ),
        ),
        "u_2_6" => new union2(
          null,
          null,
          null,
          new union1(
            null,
            null,
          ),
        ),
        "apostrophe" => "'",
        "tripleApostrophe" => "'''",
        "quotationMark" => "\"",
        "backslash" => "\\",
        "escaped_a" => "\x61",
        "char2ascii" => Map {
          "'" => 39,
          "\"" => 34,
          "\\" => 92,
          "\x61" => 97,
        },
        "escaped_strings" => Vector {
          "\x61",
          "\xab",
          "\x6a",
          "\xa6",
          "\x61yyy",
          "\xabyyy",
          "\x6ayyy",
          "\xa6yyy",
          "zzz\x61",
          "zzz\xab",
          "zzz\x6a",
          "zzz\xa6",
          "zzz\x61yyy",
          "zzz\xabyyy",
          "zzz\x6ayyy",
          "zzz\xa6yyy",
        },
        "false_c" => false,
        "true_c" => true,
        "zero_byte" => 0,
        "zero16" => 0,
        "zero32" => 0,
        "zero64" => 0,
        "zero_dot_zero" => 0.0,
        "empty_string" => "",
        "empty_int_list" => Vector {
        },
        "empty_string_list" => Vector {
        },
        "empty_int_set" => Set {
        },
        "empty_string_set" => Set {
        },
        "empty_int_int_map" => Map {
        },
        "empty_int_string_map" => Map {
        },
        "empty_string_int_map" => Map {
        },
        "empty_string_string_map" => Map {
        },
      ];
    }
    return self::$____values;
  }

}

