// @generated by Thrift for thrift/compiler/test/fixtures/rust-noserver/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift error definitions for `module`.

/// Error definitions for `MyService`.
pub mod my_service {

    pub type PingError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::PingExn> for PingError {
        fn from(e: crate::services::my_service::PingExn) -> Self {
            match e {
                crate::services::my_service::PingExn::ApplicationException(aexn) =>
                    PingError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum PingReader {}

    impl ::fbthrift::help::DeserializeExn for PingReader {
        type Success = ();
        type Error = PingError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::Void, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::result::Result::Ok(());
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::Void, 0i32), false) => {
                        once = true;
                        alt = ::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?);
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "PingError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(alt)
        }
    }

    pub type GetRandomDataError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::GetRandomDataExn> for GetRandomDataError {
        fn from(e: crate::services::my_service::GetRandomDataExn) -> Self {
            match e {
                crate::services::my_service::GetRandomDataExn::ApplicationException(aexn) =>
                    GetRandomDataError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum GetRandomDataReader {}

    impl ::fbthrift::help::DeserializeExn for GetRandomDataReader {
        type Success = ::std::string::String;
        type Error = GetRandomDataError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::String, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::option::Option::None;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::String, 0i32), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?));
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "GetRandomDataError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            alt.ok_or_else(||
                ::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                    format!("Empty union {}", "GetRandomDataError"),
                )
                .into(),
            )
        }
    }

    pub type HasDataByIdError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::HasDataByIdExn> for HasDataByIdError {
        fn from(e: crate::services::my_service::HasDataByIdExn) -> Self {
            match e {
                crate::services::my_service::HasDataByIdExn::ApplicationException(aexn) =>
                    HasDataByIdError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum HasDataByIdReader {}

    impl ::fbthrift::help::DeserializeExn for HasDataByIdReader {
        type Success = ::std::primitive::bool;
        type Error = HasDataByIdError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::Bool, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::option::Option::None;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::Bool, 0i32), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?));
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "HasDataByIdError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            alt.ok_or_else(||
                ::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                    format!("Empty union {}", "HasDataByIdError"),
                )
                .into(),
            )
        }
    }

    pub type GetDataByIdError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::GetDataByIdExn> for GetDataByIdError {
        fn from(e: crate::services::my_service::GetDataByIdExn) -> Self {
            match e {
                crate::services::my_service::GetDataByIdExn::ApplicationException(aexn) =>
                    GetDataByIdError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum GetDataByIdReader {}

    impl ::fbthrift::help::DeserializeExn for GetDataByIdReader {
        type Success = ::std::string::String;
        type Error = GetDataByIdError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::String, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::option::Option::None;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::String, 0i32), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?));
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "GetDataByIdError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            alt.ok_or_else(||
                ::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                    format!("Empty union {}", "GetDataByIdError"),
                )
                .into(),
            )
        }
    }

    pub type PutDataByIdError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::PutDataByIdExn> for PutDataByIdError {
        fn from(e: crate::services::my_service::PutDataByIdExn) -> Self {
            match e {
                crate::services::my_service::PutDataByIdExn::ApplicationException(aexn) =>
                    PutDataByIdError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum PutDataByIdReader {}

    impl ::fbthrift::help::DeserializeExn for PutDataByIdReader {
        type Success = ();
        type Error = PutDataByIdError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::Void, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::result::Result::Ok(());
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::Void, 0i32), false) => {
                        once = true;
                        alt = ::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?);
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "PutDataByIdError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(alt)
        }
    }

    pub type LobDataByIdError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::LobDataByIdExn> for LobDataByIdError {
        fn from(e: crate::services::my_service::LobDataByIdExn) -> Self {
            match e {
                crate::services::my_service::LobDataByIdExn::ApplicationException(aexn) =>
                    LobDataByIdError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum LobDataByIdReader {}

    impl ::fbthrift::help::DeserializeExn for LobDataByIdReader {
        type Success = ();
        type Error = LobDataByIdError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::Void, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::result::Result::Ok(());
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::Void, 0i32), false) => {
                        once = true;
                        alt = ::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?);
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "LobDataByIdError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(alt)
        }
    }

}

