/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct content;
struct content;
struct content;
struct sink;
struct reason;
struct reason;
struct reason;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_content
#define APACHE_THRIFT_ACCESSOR_content
APACHE_THRIFT_DEFINE_ACCESSOR(content);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_content
#define APACHE_THRIFT_ACCESSOR_content
APACHE_THRIFT_DEFINE_ACCESSOR(content);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_content
#define APACHE_THRIFT_ACCESSOR_content
APACHE_THRIFT_DEFINE_ACCESSOR(content);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_sink
#define APACHE_THRIFT_ACCESSOR_sink
APACHE_THRIFT_DEFINE_ACCESSOR(sink);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_reason
#define APACHE_THRIFT_ACCESSOR_reason
APACHE_THRIFT_DEFINE_ACCESSOR(reason);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_reason
#define APACHE_THRIFT_ACCESSOR_reason
APACHE_THRIFT_DEFINE_ACCESSOR(reason);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_reason
#define APACHE_THRIFT_ACCESSOR_reason
APACHE_THRIFT_DEFINE_ACCESSOR(reason);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class InitialResponse;
class FinalResponse;
class SinkPayload;
class CompatibleWithKeywordSink;
class InitialException;
class SinkException1;
class SinkException2;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class InitialResponse final : private apache::thrift::detail::st::ComparisonOperators<InitialResponse> {
 public:

  InitialResponse() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  InitialResponse(apache::thrift::FragileConstructor, ::std::string content__arg);

  InitialResponse(InitialResponse&&) = default;

  InitialResponse(const InitialResponse&) = default;

  InitialResponse& operator=(InitialResponse&&) = default;

  InitialResponse& operator=(const InitialResponse&) = default;
  void __clear();
 public:
  ::std::string content;

 public:
  struct __isset {
    bool content;
  } __isset = {};
  bool operator==(const InitialResponse& rhs) const;
  bool operator<(const InitialResponse& rhs) const;

  const ::std::string& get_content() const& {
    return content;
  }

  ::std::string get_content() && {
    return std::move(content);
  }

  template <typename T_InitialResponse_content_struct_setter = ::std::string>
  ::std::string& set_content(T_InitialResponse_content_struct_setter&& content_) {
    content = std::forward<T_InitialResponse_content_struct_setter>(content_);
    __isset.content = true;
    return content;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< InitialResponse >;
};

void swap(InitialResponse& a, InitialResponse& b);

template <class Protocol_>
uint32_t InitialResponse::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class FinalResponse final : private apache::thrift::detail::st::ComparisonOperators<FinalResponse> {
 public:

  FinalResponse() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  FinalResponse(apache::thrift::FragileConstructor, ::std::string content__arg);

  FinalResponse(FinalResponse&&) = default;

  FinalResponse(const FinalResponse&) = default;

  FinalResponse& operator=(FinalResponse&&) = default;

  FinalResponse& operator=(const FinalResponse&) = default;
  void __clear();
 public:
  ::std::string content;

 public:
  struct __isset {
    bool content;
  } __isset = {};
  bool operator==(const FinalResponse& rhs) const;
  bool operator<(const FinalResponse& rhs) const;

  const ::std::string& get_content() const& {
    return content;
  }

  ::std::string get_content() && {
    return std::move(content);
  }

  template <typename T_FinalResponse_content_struct_setter = ::std::string>
  ::std::string& set_content(T_FinalResponse_content_struct_setter&& content_) {
    content = std::forward<T_FinalResponse_content_struct_setter>(content_);
    __isset.content = true;
    return content;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< FinalResponse >;
};

void swap(FinalResponse& a, FinalResponse& b);

template <class Protocol_>
uint32_t FinalResponse::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class SinkPayload final : private apache::thrift::detail::st::ComparisonOperators<SinkPayload> {
 public:

  SinkPayload() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SinkPayload(apache::thrift::FragileConstructor, ::std::string content__arg);

  SinkPayload(SinkPayload&&) = default;

  SinkPayload(const SinkPayload&) = default;

  SinkPayload& operator=(SinkPayload&&) = default;

  SinkPayload& operator=(const SinkPayload&) = default;
  void __clear();
 public:
  ::std::string content;

 public:
  struct __isset {
    bool content;
  } __isset = {};
  bool operator==(const SinkPayload& rhs) const;
  bool operator<(const SinkPayload& rhs) const;

  const ::std::string& get_content() const& {
    return content;
  }

  ::std::string get_content() && {
    return std::move(content);
  }

  template <typename T_SinkPayload_content_struct_setter = ::std::string>
  ::std::string& set_content(T_SinkPayload_content_struct_setter&& content_) {
    content = std::forward<T_SinkPayload_content_struct_setter>(content_);
    __isset.content = true;
    return content;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< SinkPayload >;
};

void swap(SinkPayload& a, SinkPayload& b);

template <class Protocol_>
uint32_t SinkPayload::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class CompatibleWithKeywordSink final : private apache::thrift::detail::st::ComparisonOperators<CompatibleWithKeywordSink> {
 public:

  CompatibleWithKeywordSink() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  CompatibleWithKeywordSink(apache::thrift::FragileConstructor, ::std::string sink__arg);

  CompatibleWithKeywordSink(CompatibleWithKeywordSink&&) = default;

  CompatibleWithKeywordSink(const CompatibleWithKeywordSink&) = default;

  CompatibleWithKeywordSink& operator=(CompatibleWithKeywordSink&&) = default;

  CompatibleWithKeywordSink& operator=(const CompatibleWithKeywordSink&) = default;
  void __clear();
 public:
  ::std::string sink;

 public:
  struct __isset {
    bool sink;
  } __isset = {};
  bool operator==(const CompatibleWithKeywordSink& rhs) const;
  bool operator<(const CompatibleWithKeywordSink& rhs) const;

  const ::std::string& get_sink() const& {
    return sink;
  }

  ::std::string get_sink() && {
    return std::move(sink);
  }

  template <typename T_CompatibleWithKeywordSink_sink_struct_setter = ::std::string>
  ::std::string& set_sink(T_CompatibleWithKeywordSink_sink_struct_setter&& sink_) {
    sink = std::forward<T_CompatibleWithKeywordSink_sink_struct_setter>(sink_);
    __isset.sink = true;
    return sink;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< CompatibleWithKeywordSink >;
};

void swap(CompatibleWithKeywordSink& a, CompatibleWithKeywordSink& b);

template <class Protocol_>
uint32_t CompatibleWithKeywordSink::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class InitialException final : private apache::thrift::detail::st::ComparisonOperators<InitialException>, public apache::thrift::TException {
 public:

  InitialException() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  InitialException(apache::thrift::FragileConstructor, ::std::string reason__arg);

  InitialException(InitialException&&) = default;

  InitialException(const InitialException&) = default;

  InitialException& operator=(InitialException&&) = default;

  InitialException& operator=(const InitialException&) = default;
  void __clear();
 public:
  ::std::string reason;

 public:
  struct __isset {
    bool reason;
  } __isset = {};
  bool operator==(const InitialException& rhs) const;
  bool operator<(const InitialException& rhs) const;

  const ::std::string& get_reason() const& {
    return reason;
  }

  ::std::string get_reason() && {
    return std::move(reason);
  }

  template <typename T_InitialException_reason_struct_setter = ::std::string>
  ::std::string& set_reason(T_InitialException_reason_struct_setter&& reason_) {
    reason = std::forward<T_InitialException_reason_struct_setter>(reason_);
    __isset.reason = true;
    return reason;
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
    return "::cpp2::InitialException";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< InitialException >;
};

void swap(InitialException& a, InitialException& b);

template <class Protocol_>
uint32_t InitialException::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class SinkException1 final : private apache::thrift::detail::st::ComparisonOperators<SinkException1>, public apache::thrift::TException {
 public:

  SinkException1() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SinkException1(apache::thrift::FragileConstructor, ::std::string reason__arg);

  SinkException1(SinkException1&&) = default;

  SinkException1(const SinkException1&) = default;

  SinkException1& operator=(SinkException1&&) = default;

  SinkException1& operator=(const SinkException1&) = default;
  void __clear();
 public:
  ::std::string reason;

 public:
  struct __isset {
    bool reason;
  } __isset = {};
  bool operator==(const SinkException1& rhs) const;
  bool operator<(const SinkException1& rhs) const;

  const ::std::string& get_reason() const& {
    return reason;
  }

  ::std::string get_reason() && {
    return std::move(reason);
  }

  template <typename T_SinkException1_reason_struct_setter = ::std::string>
  ::std::string& set_reason(T_SinkException1_reason_struct_setter&& reason_) {
    reason = std::forward<T_SinkException1_reason_struct_setter>(reason_);
    __isset.reason = true;
    return reason;
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
    return "::cpp2::SinkException1";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< SinkException1 >;
};

void swap(SinkException1& a, SinkException1& b);

template <class Protocol_>
uint32_t SinkException1::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class SinkException2 final : private apache::thrift::detail::st::ComparisonOperators<SinkException2>, public apache::thrift::TException {
 public:

  SinkException2() :
      reason(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SinkException2(apache::thrift::FragileConstructor, int64_t reason__arg);

  SinkException2(SinkException2&&) = default;

  SinkException2(const SinkException2&) = default;

  SinkException2& operator=(SinkException2&&) = default;

  SinkException2& operator=(const SinkException2&) = default;
  void __clear();
 public:
  int64_t reason;

 public:
  struct __isset {
    bool reason;
  } __isset = {};
  bool operator==(const SinkException2& rhs) const;
  bool operator<(const SinkException2& rhs) const;

  int64_t get_reason() const {
    return reason;
  }

  int64_t& set_reason(int64_t reason_) {
    reason = reason_;
    __isset.reason = true;
    return reason;
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
    return "::cpp2::SinkException2";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< SinkException2 >;
};

void swap(SinkException2& a, SinkException2& b);

template <class Protocol_>
uint32_t SinkException2::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
