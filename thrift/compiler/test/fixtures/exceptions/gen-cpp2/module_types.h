/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct message;
struct sonnet;
struct error_message;
struct internal_error_message;
struct error_message;
struct internal_error_message;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_message
#define APACHE_THRIFT_ACCESSOR_message
APACHE_THRIFT_DEFINE_ACCESSOR(message);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_sonnet
#define APACHE_THRIFT_ACCESSOR_sonnet
APACHE_THRIFT_DEFINE_ACCESSOR(sonnet);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_error_message
#define APACHE_THRIFT_ACCESSOR_error_message
APACHE_THRIFT_DEFINE_ACCESSOR(error_message);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_internal_error_message
#define APACHE_THRIFT_ACCESSOR_internal_error_message
APACHE_THRIFT_DEFINE_ACCESSOR(internal_error_message);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_error_message
#define APACHE_THRIFT_ACCESSOR_error_message
APACHE_THRIFT_DEFINE_ACCESSOR(error_message);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_internal_error_message
#define APACHE_THRIFT_ACCESSOR_internal_error_message
APACHE_THRIFT_DEFINE_ACCESSOR(internal_error_message);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Banal;
class Fiery;
class Serious;
class ComplexFieldNames;
class CustomFieldNames;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class Banal final : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::PERMANENT;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::SAFE;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::CLIENT;

 public:
  using __fbthrift_cpp2_type = Banal;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Banal() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Banal(apache::thrift::FragileConstructor);

  Banal(Banal&&) noexcept;

  Banal(const Banal& src);


  Banal& operator=(Banal&&) noexcept;
  Banal& operator=(const Banal& src);
  void __clear();

  bool operator==(const Banal&) const;
  bool operator<(const Banal&) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::Banal";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Banal>;
  friend void swap(Banal& a, Banal& b);
};

template <class Protocol_>
uint32_t Banal::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class Fiery final : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::TRANSIENT;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::SERVER;

 public:
  using __fbthrift_cpp2_type = Fiery;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Fiery() {}

  explicit Fiery(const std::string& __message) :
      message(__message) {}

  explicit Fiery(std::string&& __message) :
      message(std::move(__message)) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Fiery(apache::thrift::FragileConstructor, ::std::string message__arg);

  Fiery(Fiery&&) noexcept;

  Fiery(const Fiery& src);


  Fiery& operator=(Fiery&&) noexcept;
  Fiery& operator=(const Fiery& src);
  void __clear();
 public:
  ::std::string message;

 public:

  bool operator==(const Fiery&) const;
  bool operator<(const Fiery&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&> message_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&&> message_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->message)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&> message_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&&> message_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->message)};
  }

  const ::std::string& get_message() const& {
    return message;
  }

  ::std::string get_message() && {
    return std::move(message);
  }

  template <typename T_Fiery_message_struct_setter = ::std::string>
  ::std::string& set_message(T_Fiery_message_struct_setter&& message_) {
    message = std::forward<T_Fiery_message_struct_setter>(message_);
    return message;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return message.c_str();
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Fiery>;
  friend void swap(Fiery& a, Fiery& b);
};

template <class Protocol_>
uint32_t Fiery::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class Serious final : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::STATEFUL;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::SAFE;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = Serious;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Serious() {}

  explicit Serious(const std::string& __message) :
      sonnet(__message) {}

  explicit Serious(std::string&& __message) :
      sonnet(std::move(__message)) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Serious(apache::thrift::FragileConstructor, ::std::string sonnet__arg);

  Serious(Serious&&) noexcept;

  Serious(const Serious& src);


  Serious& operator=(Serious&&) noexcept;
  Serious& operator=(const Serious& src);
  void __clear();
 private:
  ::std::string sonnet;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool sonnet;
  } __isset = {};

  bool operator==(const Serious&) const;
  bool operator<(const Serious&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> sonnet_ref() const& {
    return {this->sonnet, __isset.sonnet};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> sonnet_ref() const&& {
    return {std::move(this->sonnet), __isset.sonnet};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> sonnet_ref() & {
    return {this->sonnet, __isset.sonnet};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> sonnet_ref() && {
    return {std::move(this->sonnet), __isset.sonnet};
  }

  const ::std::string* get_sonnet() const& {
    return sonnet_ref() ? std::addressof(sonnet) : nullptr;
  }

  ::std::string* get_sonnet() & {
    return sonnet_ref() ? std::addressof(sonnet) : nullptr;
  }
  ::std::string* get_sonnet() && = delete;

  template <typename T_Serious_sonnet_struct_setter = ::std::string>
  ::std::string& set_sonnet(T_Serious_sonnet_struct_setter&& sonnet_) {
    sonnet = std::forward<T_Serious_sonnet_struct_setter>(sonnet_);
    __isset.sonnet = true;
    return sonnet;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return sonnet.c_str();
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Serious>;
  friend void swap(Serious& a, Serious& b);
};

template <class Protocol_>
uint32_t Serious::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class ComplexFieldNames final : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::CLIENT;

 public:
  using __fbthrift_cpp2_type = ComplexFieldNames;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  ComplexFieldNames() {}

  explicit ComplexFieldNames(const std::string& __message) :
      internal_error_message(__message) {}

  explicit ComplexFieldNames(std::string&& __message) :
      internal_error_message(std::move(__message)) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  ComplexFieldNames(apache::thrift::FragileConstructor, ::std::string error_message__arg, ::std::string internal_error_message__arg);

  ComplexFieldNames(ComplexFieldNames&&) noexcept;

  ComplexFieldNames(const ComplexFieldNames& src);


  ComplexFieldNames& operator=(ComplexFieldNames&&) noexcept;
  ComplexFieldNames& operator=(const ComplexFieldNames& src);
  void __clear();
 private:
  ::std::string error_message;
 private:
  ::std::string internal_error_message;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool error_message;
    bool internal_error_message;
  } __isset = {};

  bool operator==(const ComplexFieldNames&) const;
  bool operator<(const ComplexFieldNames&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> error_message_ref() const& {
    return {this->error_message, __isset.error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> error_message_ref() const&& {
    return {std::move(this->error_message), __isset.error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> error_message_ref() & {
    return {this->error_message, __isset.error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> error_message_ref() && {
    return {std::move(this->error_message), __isset.error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> internal_error_message_ref() const& {
    return {this->internal_error_message, __isset.internal_error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> internal_error_message_ref() const&& {
    return {std::move(this->internal_error_message), __isset.internal_error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> internal_error_message_ref() & {
    return {this->internal_error_message, __isset.internal_error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> internal_error_message_ref() && {
    return {std::move(this->internal_error_message), __isset.internal_error_message};
  }

  const ::std::string& get_error_message() const& {
    return error_message;
  }

  ::std::string get_error_message() && {
    return std::move(error_message);
  }

  template <typename T_ComplexFieldNames_error_message_struct_setter = ::std::string>
  ::std::string& set_error_message(T_ComplexFieldNames_error_message_struct_setter&& error_message_) {
    error_message = std::forward<T_ComplexFieldNames_error_message_struct_setter>(error_message_);
    __isset.error_message = true;
    return error_message;
  }

  const ::std::string& get_internal_error_message() const& {
    return internal_error_message;
  }

  ::std::string get_internal_error_message() && {
    return std::move(internal_error_message);
  }

  template <typename T_ComplexFieldNames_internal_error_message_struct_setter = ::std::string>
  ::std::string& set_internal_error_message(T_ComplexFieldNames_internal_error_message_struct_setter&& internal_error_message_) {
    internal_error_message = std::forward<T_ComplexFieldNames_internal_error_message_struct_setter>(internal_error_message_);
    __isset.internal_error_message = true;
    return internal_error_message;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return internal_error_message.c_str();
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<ComplexFieldNames>;
  friend void swap(ComplexFieldNames& a, ComplexFieldNames& b);
};

template <class Protocol_>
uint32_t ComplexFieldNames::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class CustomFieldNames final : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = CustomFieldNames;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  CustomFieldNames() {}

  explicit CustomFieldNames(const std::string& __message) :
      internal_error_message(__message) {}

  explicit CustomFieldNames(std::string&& __message) :
      internal_error_message(std::move(__message)) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  CustomFieldNames(apache::thrift::FragileConstructor, ::std::string error_message__arg, ::std::string internal_error_message__arg);

  CustomFieldNames(CustomFieldNames&&) noexcept;

  CustomFieldNames(const CustomFieldNames& src);


  CustomFieldNames& operator=(CustomFieldNames&&) noexcept;
  CustomFieldNames& operator=(const CustomFieldNames& src);
  void __clear();
 private:
  ::std::string error_message;
 private:
  ::std::string internal_error_message;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool error_message;
    bool internal_error_message;
  } __isset = {};

  bool operator==(const CustomFieldNames&) const;
  bool operator<(const CustomFieldNames&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> error_message_ref() const& {
    return {this->error_message, __isset.error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> error_message_ref() const&& {
    return {std::move(this->error_message), __isset.error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> error_message_ref() & {
    return {this->error_message, __isset.error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> error_message_ref() && {
    return {std::move(this->error_message), __isset.error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> internal_error_message_ref() const& {
    return {this->internal_error_message, __isset.internal_error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> internal_error_message_ref() const&& {
    return {std::move(this->internal_error_message), __isset.internal_error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> internal_error_message_ref() & {
    return {this->internal_error_message, __isset.internal_error_message};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> internal_error_message_ref() && {
    return {std::move(this->internal_error_message), __isset.internal_error_message};
  }

  const ::std::string& get_error_message() const& {
    return error_message;
  }

  ::std::string get_error_message() && {
    return std::move(error_message);
  }

  template <typename T_CustomFieldNames_error_message_struct_setter = ::std::string>
  ::std::string& set_error_message(T_CustomFieldNames_error_message_struct_setter&& error_message_) {
    error_message = std::forward<T_CustomFieldNames_error_message_struct_setter>(error_message_);
    __isset.error_message = true;
    return error_message;
  }

  const ::std::string& get_internal_error_message() const& {
    return internal_error_message;
  }

  ::std::string get_internal_error_message() && {
    return std::move(internal_error_message);
  }

  template <typename T_CustomFieldNames_internal_error_message_struct_setter = ::std::string>
  ::std::string& set_internal_error_message(T_CustomFieldNames_internal_error_message_struct_setter&& internal_error_message_) {
    internal_error_message = std::forward<T_CustomFieldNames_internal_error_message_struct_setter>(internal_error_message_);
    __isset.internal_error_message = true;
    return internal_error_message;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return internal_error_message.c_str();
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<CustomFieldNames>;
  friend void swap(CustomFieldNames& a, CustomFieldNames& b);
};

template <class Protocol_>
uint32_t CustomFieldNames::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
THRIFT_IGNORE_ISSET_USE_WARNING_END
