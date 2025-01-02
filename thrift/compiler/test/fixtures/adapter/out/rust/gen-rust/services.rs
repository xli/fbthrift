// @generated by Thrift for thrift/compiler/test/fixtures/adapter/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift service definitions for `module`.


/// Service definitions for `Service`.
pub mod service {
    #[derive(Clone, Debug)]
    pub enum FuncExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<FuncExn> for ::fbthrift::NonthrowingFunctionError {
        fn from(err: FuncExn) -> Self {
            match err {
                FuncExn::ApplicationException(aexn) => ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::NonthrowingFunctionError> for FuncExn {
        fn from(err: ::fbthrift::NonthrowingFunctionError) -> Self {
            match err {
                ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn) => FuncExn::ApplicationException(aexn),
                ::fbthrift::NonthrowingFunctionError::ThriftError(err) => FuncExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for FuncExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for FuncExn {
        fn exn_name(&self) -> &'static ::std::primitive::str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for FuncExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::help::SerializeExn for FuncExn {
        type Success = crate::types::MyI32_4873;

        fn write_result<P>(
            res: ::std::result::Result<&Self::Success, &Self>,
            p: &mut P,
            function_name: &'static ::std::primitive::str,
        )
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin(function_name);
            match res {
                ::std::result::Result::Ok(_success) => {
                    p.write_field_begin("Success", ::fbthrift::TType::I32, 0i16);
                    ::fbthrift::Serialize::write(&<crate::types::adapters::MyI32 as ::fbthrift::adapter::ThriftAdapter>::to_thrift_field::<::fbthrift::metadata::NoThriftAnnotations>(_success, 0), p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }
}
/// Service definitions for `AdapterService`.
pub mod adapter_service {
    #[derive(Clone, Debug)]
    pub enum CountExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<CountExn> for ::fbthrift::NonthrowingFunctionError {
        fn from(err: CountExn) -> Self {
            match err {
                CountExn::ApplicationException(aexn) => ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::NonthrowingFunctionError> for CountExn {
        fn from(err: ::fbthrift::NonthrowingFunctionError) -> Self {
            match err {
                ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn) => CountExn::ApplicationException(aexn),
                ::fbthrift::NonthrowingFunctionError::ThriftError(err) => CountExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for CountExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for CountExn {
        fn exn_name(&self) -> &'static ::std::primitive::str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for CountExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::help::SerializeExn for CountExn {
        type Success = crate::types::CountingStruct;

        fn write_result<P>(
            res: ::std::result::Result<&Self::Success, &Self>,
            p: &mut P,
            function_name: &'static ::std::primitive::str,
        )
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin(function_name);
            match res {
                ::std::result::Result::Ok(_success) => {
                    p.write_field_begin("Success", ::fbthrift::TType::Struct, 0i16);
                    ::fbthrift::Serialize::write(_success, p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    #[derive(Clone, Debug)]
    pub enum AdaptedTypesExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<AdaptedTypesExn> for ::fbthrift::NonthrowingFunctionError {
        fn from(err: AdaptedTypesExn) -> Self {
            match err {
                AdaptedTypesExn::ApplicationException(aexn) => ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::NonthrowingFunctionError> for AdaptedTypesExn {
        fn from(err: ::fbthrift::NonthrowingFunctionError) -> Self {
            match err {
                ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn) => AdaptedTypesExn::ApplicationException(aexn),
                ::fbthrift::NonthrowingFunctionError::ThriftError(err) => AdaptedTypesExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for AdaptedTypesExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for AdaptedTypesExn {
        fn exn_name(&self) -> &'static ::std::primitive::str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for AdaptedTypesExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::help::SerializeExn for AdaptedTypesExn {
        type Success = crate::types::HeapAllocated;

        fn write_result<P>(
            res: ::std::result::Result<&Self::Success, &Self>,
            p: &mut P,
            function_name: &'static ::std::primitive::str,
        )
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin(function_name);
            match res {
                ::std::result::Result::Ok(_success) => {
                    p.write_field_begin("Success", ::fbthrift::TType::Struct, 0i16);
                    ::fbthrift::Serialize::write(_success, p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }
}
