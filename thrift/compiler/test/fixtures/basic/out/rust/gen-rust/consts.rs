// @generated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift constant definitions for `module`.

pub const FLAG: ::std::primitive::bool = true;

pub const OFFSET: ::std::primitive::i8 = -10;

pub const COUNT: ::std::primitive::i16 = 200;

pub const MASK: ::std::primitive::i32 = 16388846;

pub const E: ::std::primitive::f64 = 2.718281828459;

pub const DATE: &::std::primitive::str = "June 28, 2017";

pub static AList: ::std::sync::LazyLock<::std::vec::Vec<::std::primitive::i32>> = ::std::sync::LazyLock::new(|| vec![
            2,
            3,
            5,
            7,
        ]);

pub static ASet: ::std::sync::LazyLock<::std::collections::BTreeSet<::std::string::String>> = ::std::sync::LazyLock::new(|| {
            let mut set = ::std::collections::BTreeSet::new();
            set.insert("foo".to_owned());
            set.insert("bar".to_owned());
            set.insert("baz".to_owned());
            set
        });

pub static AMap: ::std::sync::LazyLock<::std::collections::BTreeMap<::std::string::String, ::std::vec::Vec<::std::primitive::i32>>> = ::std::sync::LazyLock::new(|| {
            let mut map = ::std::collections::BTreeMap::new();
            {
                #[inline(never)]
                fn __do_insert(map: &mut ::std::collections::BTreeMap<::std::string::String, ::std::vec::Vec<::std::primitive::i32>>) {
                    map.insert("foo".to_owned(), vec![
                        1,
                        2,
                        3,
                        4,
                    ]);
                }
                __do_insert(&mut map);
            }
            {
                #[inline(never)]
                fn __do_insert(map: &mut ::std::collections::BTreeMap<::std::string::String, ::std::vec::Vec<::std::primitive::i32>>) {
                    map.insert("bar".to_owned(), vec![
                        10,
                        32,
                        54,
                    ]);
                }
                __do_insert(&mut map);
            }
            map
        });

