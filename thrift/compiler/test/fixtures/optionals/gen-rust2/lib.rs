// @generated by Thrift. This file is probably not the place you want to edit!

#![feature(async_await)]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals)]

pub use self::errors::*;
pub use self::types::*;

pub mod types {
    use fbthrift::{
        Deserialize, GetTType, ProtocolReader, ProtocolWriter, Serialize, TType,
    };

    pub type PersonID = i64;

    #[derive(Clone, Debug, PartialEq)]
    pub struct Color {
        pub red: f64,
        pub green: f64,
        pub blue: f64,
        pub alpha: f64,
    }

    #[derive(Clone, Debug, PartialEq)]
    pub struct Vehicle {
        pub color: crate::types::Color,
        pub licensePlate: Option<String>,
        pub description: Option<String>,
        pub name: Option<String>,
        pub hasAC: Option<bool>,
    }

    #[derive(Clone, Debug, PartialEq)]
    pub struct Person {
        pub id: crate::types::PersonID,
        pub name: String,
        pub age: Option<i16>,
        pub address: Option<String>,
        pub favoriteColor: Option<crate::types::Color>,
        pub friends: Option<std::collections::BTreeSet<crate::types::PersonID>>,
        pub bestFriend: Option<crate::types::PersonID>,
        pub petNames: Option<std::collections::BTreeMap<crate::types::Animal, String>>,
        pub afraidOfAnimal: Option<crate::types::Animal>,
        pub vehicles: Option<Vec<crate::types::Vehicle>>,
    }

    #[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
    pub struct Animal(pub i32);

    impl Animal {
        pub const DOG: Self = Animal(1i32);
        pub const CAT: Self = Animal(2i32);
        pub const TARANTULA: Self = Animal(3i32);
    }

    impl Default for Animal {
        fn default() -> Self {
            Animal(fbthrift::__UNKNOWN_ID)
        }
    }

    impl<'a> From<&'a Animal> for i32 {
        #[inline]
        fn from(x: &'a Animal) -> i32 {
            x.0
        }
    }

    impl From<Animal> for i32 {
        #[inline]
        fn from(x: Animal) -> i32 {
            x.0
        }
    }

    impl From<i32> for Animal {
        #[inline]
        fn from(x: i32) -> Self {
            Self(x)
        }
    }

    impl std::fmt::Display for Animal {
        fn fmt(&self, fmt: &mut std::fmt::Formatter) -> std::fmt::Result {
            let s: &str = match *self {
                Animal::DOG => "DOG",
                Animal::CAT => "CAT",
                Animal::TARANTULA => "TARANTULA",
                Animal(x) => return write!(fmt, "{}", x),
            };
            write!(fmt, "{}", s)
        }
    }

    impl std::fmt::Debug for Animal {
        fn fmt(&self, fmt: &mut std::fmt::Formatter) -> std::fmt::Result {
            write!(fmt, "{}::{}", "Animal", self)
        }
    }

    impl std::str::FromStr for Animal {
        type Err = failure::Error;

        fn from_str(string: &str) -> Result<Self, Self::Err> {
            match string {
                "DOG" => Ok(Animal::DOG),
                "CAT" => Ok(Animal::CAT),
                "TARANTULA" => Ok(Animal::TARANTULA),
                _ => failure::bail!("Unable to parse {} as {}", string, "Animal"),
            }
        }
    }

    impl GetTType for Animal {
        const TTYPE: TType = TType::I32;
    }

    impl<'a, P: ProtocolWriter> Serialize<P> for &'a Animal {
        #[inline]
        fn write(self, p: &mut P) {
            p.write_i32(self.into())
        }
    }

    impl<P: ProtocolReader> Deserialize<P> for Animal {
        #[inline]
        fn read(p: &mut P) -> failure::Fallible<Self> {
            Ok(Animal::from(p.read_i32()?))
        }
    }


    impl Default for self::Color {
        fn default() -> Self {
            Self {
                red: Default::default(),
                green: Default::default(),
                blue: Default::default(),
                alpha: Default::default(),
            }
        }
    }

    impl GetTType for self::Color {
        const TTYPE: TType = TType::Struct;
    }

    impl<'a, P: ProtocolWriter> Serialize<P> for &'a self::Color {
        fn write(self, p: &mut P) {
            p.write_struct_begin("Color");
            p.write_field_begin("red", TType::Double, 1);
            Serialize::write(&self.red, p);
            p.write_field_end();
            p.write_field_begin("green", TType::Double, 2);
            Serialize::write(&self.green, p);
            p.write_field_end();
            p.write_field_begin("blue", TType::Double, 3);
            Serialize::write(&self.blue, p);
            p.write_field_end();
            p.write_field_begin("alpha", TType::Double, 4);
            Serialize::write(&self.alpha, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P: ProtocolReader> Deserialize<P> for self::Color {
        fn read(p: &mut P) -> failure::Fallible<Self> {
            let mut field_red = None;
            let mut field_green = None;
            let mut field_blue = None;
            let mut field_alpha = None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| ())?;
                match (fty, fid as i32) {
                    (TType::Stop, _) => break,
                    (TType::Double, 1) => field_red = Some(Deserialize::read(p)?),
                    (TType::Double, 2) => field_green = Some(Deserialize::read(p)?),
                    (TType::Double, 3) => field_blue = Some(Deserialize::read(p)?),
                    (TType::Double, 4) => field_alpha = Some(Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            Ok(Self {
                red: field_red.unwrap_or_default(),
                green: field_green.unwrap_or_default(),
                blue: field_blue.unwrap_or_default(),
                alpha: field_alpha.unwrap_or_default(),
            })
        }
    }


    impl Default for self::Vehicle {
        fn default() -> Self {
            Self {
                color: Default::default(),
                licensePlate: None,
                description: None,
                name: None,
                hasAC: Some(false),
            }
        }
    }

    impl GetTType for self::Vehicle {
        const TTYPE: TType = TType::Struct;
    }

    impl<'a, P: ProtocolWriter> Serialize<P> for &'a self::Vehicle {
        fn write(self, p: &mut P) {
            p.write_struct_begin("Vehicle");
            p.write_field_begin("color", TType::Struct, 1);
            Serialize::write(&self.color, p);
            p.write_field_end();
            if let Some(some) = &self.licensePlate {
                p.write_field_begin("licensePlate", TType::String, 2);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.description {
                p.write_field_begin("description", TType::String, 3);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.name {
                p.write_field_begin("name", TType::String, 4);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.hasAC {
                p.write_field_begin("hasAC", TType::Bool, 5);
                Serialize::write(some, p);
                p.write_field_end();
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P: ProtocolReader> Deserialize<P> for self::Vehicle {
        fn read(p: &mut P) -> failure::Fallible<Self> {
            let mut field_color = None;
            let mut field_licensePlate = None;
            let mut field_description = None;
            let mut field_name = None;
            let mut field_hasAC = None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| ())?;
                match (fty, fid as i32) {
                    (TType::Stop, _) => break,
                    (TType::Struct, 1) => field_color = Some(Deserialize::read(p)?),
                    (TType::String, 2) => field_licensePlate = Some(Deserialize::read(p)?),
                    (TType::String, 3) => field_description = Some(Deserialize::read(p)?),
                    (TType::String, 4) => field_name = Some(Deserialize::read(p)?),
                    (TType::Bool, 5) => field_hasAC = Some(Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            Ok(Self {
                color: field_color.unwrap_or_default(),
                licensePlate: field_licensePlate,
                description: field_description,
                name: field_name,
                hasAC: field_hasAC,
            })
        }
    }


    impl Default for self::Person {
        fn default() -> Self {
            Self {
                id: Default::default(),
                name: Default::default(),
                age: None,
                address: None,
                favoriteColor: None,
                friends: None,
                bestFriend: None,
                petNames: None,
                afraidOfAnimal: None,
                vehicles: None,
            }
        }
    }

    impl GetTType for self::Person {
        const TTYPE: TType = TType::Struct;
    }

    impl<'a, P: ProtocolWriter> Serialize<P> for &'a self::Person {
        fn write(self, p: &mut P) {
            p.write_struct_begin("Person");
            p.write_field_begin("id", TType::I64, 1);
            Serialize::write(&self.id, p);
            p.write_field_end();
            p.write_field_begin("name", TType::String, 2);
            Serialize::write(&self.name, p);
            p.write_field_end();
            if let Some(some) = &self.age {
                p.write_field_begin("age", TType::I16, 3);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.address {
                p.write_field_begin("address", TType::String, 4);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.favoriteColor {
                p.write_field_begin("favoriteColor", TType::Struct, 5);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.friends {
                p.write_field_begin("friends", TType::Set, 6);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.bestFriend {
                p.write_field_begin("bestFriend", TType::I64, 7);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.petNames {
                p.write_field_begin("petNames", TType::Map, 8);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.afraidOfAnimal {
                p.write_field_begin("afraidOfAnimal", TType::I32, 9);
                Serialize::write(some, p);
                p.write_field_end();
            }
            if let Some(some) = &self.vehicles {
                p.write_field_begin("vehicles", TType::List, 10);
                Serialize::write(some, p);
                p.write_field_end();
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P: ProtocolReader> Deserialize<P> for self::Person {
        fn read(p: &mut P) -> failure::Fallible<Self> {
            let mut field_id = None;
            let mut field_name = None;
            let mut field_age = None;
            let mut field_address = None;
            let mut field_favoriteColor = None;
            let mut field_friends = None;
            let mut field_bestFriend = None;
            let mut field_petNames = None;
            let mut field_afraidOfAnimal = None;
            let mut field_vehicles = None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| ())?;
                match (fty, fid as i32) {
                    (TType::Stop, _) => break,
                    (TType::I64, 1) => field_id = Some(Deserialize::read(p)?),
                    (TType::String, 2) => field_name = Some(Deserialize::read(p)?),
                    (TType::I16, 3) => field_age = Some(Deserialize::read(p)?),
                    (TType::String, 4) => field_address = Some(Deserialize::read(p)?),
                    (TType::Struct, 5) => field_favoriteColor = Some(Deserialize::read(p)?),
                    (TType::Set, 6) => field_friends = Some(Deserialize::read(p)?),
                    (TType::I64, 7) => field_bestFriend = Some(Deserialize::read(p)?),
                    (TType::Map, 8) => field_petNames = Some(Deserialize::read(p)?),
                    (TType::I32, 9) => field_afraidOfAnimal = Some(Deserialize::read(p)?),
                    (TType::List, 10) => field_vehicles = Some(Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            Ok(Self {
                id: field_id.unwrap_or_default(),
                name: field_name.unwrap_or_default(),
                age: field_age,
                address: field_address,
                favoriteColor: field_favoriteColor,
                friends: field_friends,
                bestFriend: field_bestFriend,
                petNames: field_petNames,
                afraidOfAnimal: field_afraidOfAnimal,
                vehicles: field_vehicles,
            })
        }
    }

}

pub mod errors {
    use failure::Fail;
    use fbthrift::ApplicationException;

    #[derive(Debug, Fail)]
    pub enum ErrorKind {
        #[fail(display = "Application exception: {:?}", _0)]
        ApplicationException(ApplicationException),
    }

    impl From<ApplicationException> for ErrorKind {
        fn from(exn: ApplicationException) -> Self {
            ErrorKind::ApplicationException(exn).into()
        }
    }
}
