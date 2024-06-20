/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/python_capi/src/containers.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <folly/container/F14Set.h>
#include <folly/FBString.h>
#include <folly/container/F14Map.h>
#include <folly/small_vector.h>

namespace apache {
namespace thrift {
namespace ident {
struct std_string;
struct deque_string;
struct small_vector_iobuf;
struct nested_small_vector;
struct small_vector_tensor;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_std_string
#define APACHE_THRIFT_ACCESSOR_std_string
APACHE_THRIFT_DEFINE_ACCESSOR(std_string);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_deque_string
#define APACHE_THRIFT_ACCESSOR_deque_string
APACHE_THRIFT_DEFINE_ACCESSOR(deque_string);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_small_vector_iobuf
#define APACHE_THRIFT_ACCESSOR_small_vector_iobuf
APACHE_THRIFT_DEFINE_ACCESSOR(small_vector_iobuf);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_nested_small_vector
#define APACHE_THRIFT_ACCESSOR_nested_small_vector
APACHE_THRIFT_DEFINE_ACCESSOR(nested_small_vector);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_small_vector_tensor
#define APACHE_THRIFT_ACCESSOR_small_vector_tensor
APACHE_THRIFT_DEFINE_ACCESSOR(small_vector_tensor);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace test::fixtures::python_capi {
class TemplateLists;
} // namespace test::fixtures::python_capi
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace test::fixtures::python_capi {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;

typedef folly::IOBuf IOBuf;
typedef folly::small_vector<::test::fixtures::python_capi::IOBuf> small_vector_iobuf;
typedef folly::fbvector<::std::string> fbvector_string;
typedef folly::fbvector<::test::fixtures::python_capi::fbvector_string> fbvector_fbvector_string;

class TemplateLists final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static const char* __fbthrift_thrift_uri();
  static std::string_view __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static std::string_view __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::std_string,
    ::apache::thrift::ident::deque_string,
    ::apache::thrift::ident::small_vector_iobuf,
    ::apache::thrift::ident::nested_small_vector,
    ::apache::thrift::ident::small_vector_tensor
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2,3,4,5};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::cpp_type<std::vector<::std::string>, ::apache::thrift::type::list<::apache::thrift::type::string_t>>,
    ::apache::thrift::type::cpp_type<std::deque<::std::string>, ::apache::thrift::type::list<::apache::thrift::type::binary_t>>,
    ::apache::thrift::type::cpp_type<folly::small_vector<::test::fixtures::python_capi::IOBuf>, ::apache::thrift::type::list<::apache::thrift::type::cpp_type<folly::IOBuf, ::apache::thrift::type::binary_t>>>,
    ::apache::thrift::type::cpp_type<folly::small_vector<::test::fixtures::python_capi::fbvector_string>, ::apache::thrift::type::list<::apache::thrift::type::cpp_type<folly::fbvector<::std::string>, ::apache::thrift::type::list<::apache::thrift::type::string_t>>>>,
    ::apache::thrift::type::cpp_type<folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>, ::apache::thrift::type::list<::apache::thrift::type::cpp_type<folly::fbvector<::test::fixtures::python_capi::fbvector_string>, ::apache::thrift::type::list<::apache::thrift::type::cpp_type<folly::fbvector<::std::string>, ::apache::thrift::type::list<::apache::thrift::type::string_t>>>>>>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 5;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = TemplateLists;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;
  static constexpr bool __fbthrift_cpp2_uses_op_encode =
    false;


 public:

  TemplateLists();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  TemplateLists(apache::thrift::FragileConstructor, std::vector<::std::string> std_string__arg, std::deque<::std::string> deque_string__arg, ::test::fixtures::python_capi::small_vector_iobuf small_vector_iobuf__arg, folly::small_vector<::test::fixtures::python_capi::fbvector_string> nested_small_vector__arg, folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string> small_vector_tensor__arg);

  TemplateLists(TemplateLists&&) noexcept;

  TemplateLists(const TemplateLists& src);


  TemplateLists& operator=(TemplateLists&&) noexcept;
  TemplateLists& operator=(const TemplateLists& src);

  ~TemplateLists();

 private:
  std::vector<::std::string> __fbthrift_field_std_string;
 private:
  std::deque<::std::string> __fbthrift_field_deque_string;
 private:
  ::test::fixtures::python_capi::small_vector_iobuf __fbthrift_field_small_vector_iobuf;
 private:
  folly::small_vector<::test::fixtures::python_capi::fbvector_string> __fbthrift_field_nested_small_vector;
 private:
  folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string> __fbthrift_field_small_vector_tensor;
 private:
  apache::thrift::detail::isset_bitset<5, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  template <typename..., typename T = std::vector<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> std_string_ref() const& {
    return {this->__fbthrift_field_std_string, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = std::vector<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> std_string_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_std_string), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = std::vector<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> std_string_ref() & {
    return {this->__fbthrift_field_std_string, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = std::vector<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> std_string_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_std_string), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = std::vector<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> std_string() const& {
    return {this->__fbthrift_field_std_string, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = std::vector<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> std_string() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_std_string), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = std::vector<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> std_string() & {
    return {this->__fbthrift_field_std_string, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = std::vector<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> std_string() && {
    return {static_cast<T&&>(this->__fbthrift_field_std_string), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = std::deque<::std::string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> deque_string_ref() const& {
    return {this->__fbthrift_field_deque_string, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = std::deque<::std::string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> deque_string_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_deque_string), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = std::deque<::std::string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> deque_string_ref() & {
    return {this->__fbthrift_field_deque_string, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = std::deque<::std::string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> deque_string_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_deque_string), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = std::deque<::std::string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> deque_string() const& {
    return {this->__fbthrift_field_deque_string, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = std::deque<::std::string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> deque_string() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_deque_string), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = std::deque<::std::string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> deque_string() & {
    return {this->__fbthrift_field_deque_string, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = std::deque<::std::string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> deque_string() && {
    return {static_cast<T&&>(this->__fbthrift_field_deque_string), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::python_capi::small_vector_iobuf>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> small_vector_iobuf_ref() const& {
    return {this->__fbthrift_field_small_vector_iobuf, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::python_capi::small_vector_iobuf>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> small_vector_iobuf_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_small_vector_iobuf), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::python_capi::small_vector_iobuf>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> small_vector_iobuf_ref() & {
    return {this->__fbthrift_field_small_vector_iobuf, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::python_capi::small_vector_iobuf>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> small_vector_iobuf_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_small_vector_iobuf), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::python_capi::small_vector_iobuf>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> small_vector_iobuf() const& {
    return {this->__fbthrift_field_small_vector_iobuf, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::python_capi::small_vector_iobuf>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> small_vector_iobuf() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_small_vector_iobuf), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::python_capi::small_vector_iobuf>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> small_vector_iobuf() & {
    return {this->__fbthrift_field_small_vector_iobuf, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::python_capi::small_vector_iobuf>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> small_vector_iobuf() && {
    return {static_cast<T&&>(this->__fbthrift_field_small_vector_iobuf), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = folly::small_vector<::test::fixtures::python_capi::fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> nested_small_vector_ref() const& {
    return {this->__fbthrift_field_nested_small_vector, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = folly::small_vector<::test::fixtures::python_capi::fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> nested_small_vector_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_nested_small_vector), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = folly::small_vector<::test::fixtures::python_capi::fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> nested_small_vector_ref() & {
    return {this->__fbthrift_field_nested_small_vector, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = folly::small_vector<::test::fixtures::python_capi::fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> nested_small_vector_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_nested_small_vector), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = folly::small_vector<::test::fixtures::python_capi::fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> nested_small_vector() const& {
    return {this->__fbthrift_field_nested_small_vector, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = folly::small_vector<::test::fixtures::python_capi::fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> nested_small_vector() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_nested_small_vector), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = folly::small_vector<::test::fixtures::python_capi::fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> nested_small_vector() & {
    return {this->__fbthrift_field_nested_small_vector, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = folly::small_vector<::test::fixtures::python_capi::fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> nested_small_vector() && {
    return {static_cast<T&&>(this->__fbthrift_field_nested_small_vector), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> small_vector_tensor_ref() const& {
    return {this->__fbthrift_field_small_vector_tensor, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> small_vector_tensor_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_small_vector_tensor), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> small_vector_tensor_ref() & {
    return {this->__fbthrift_field_small_vector_tensor, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> small_vector_tensor_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_small_vector_tensor), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> small_vector_tensor() const& {
    return {this->__fbthrift_field_small_vector_tensor, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> small_vector_tensor() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_small_vector_tensor), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> small_vector_tensor() & {
    return {this->__fbthrift_field_small_vector_tensor, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> small_vector_tensor() && {
    return {static_cast<T&&>(this->__fbthrift_field_small_vector_tensor), __isset.at(4), __isset.bit(4)};
  }
  const std::vector<::std::string>* get_std_string() const&;
  std::vector<::std::string>* get_std_string() &;
  std::vector<::std::string>* get_std_string() && = delete;

  template <typename T_TemplateLists_std_string_struct_setter = std::vector<::std::string>>
  [[deprecated("Use `FOO.std_string_ref() = BAR;` instead of `FOO.set_std_string(BAR);`")]]
  std::vector<::std::string>& set_std_string(T_TemplateLists_std_string_struct_setter&& std_string_) {
    std_string_ref() = std::forward<T_TemplateLists_std_string_struct_setter>(std_string_);
    return __fbthrift_field_std_string;
  }
  const std::deque<::std::string>& get_deque_string() const&;
  std::deque<::std::string> get_deque_string() &&;

  template <typename T_TemplateLists_deque_string_struct_setter = std::deque<::std::string>>
  [[deprecated("Use `FOO.deque_string_ref() = BAR;` instead of `FOO.set_deque_string(BAR);`")]]
  std::deque<::std::string>& set_deque_string(T_TemplateLists_deque_string_struct_setter&& deque_string_) {
    deque_string_ref() = std::forward<T_TemplateLists_deque_string_struct_setter>(deque_string_);
    return __fbthrift_field_deque_string;
  }
  const ::test::fixtures::python_capi::small_vector_iobuf& get_small_vector_iobuf() const&;
  ::test::fixtures::python_capi::small_vector_iobuf get_small_vector_iobuf() &&;

  template <typename T_TemplateLists_small_vector_iobuf_struct_setter = ::test::fixtures::python_capi::small_vector_iobuf>
  [[deprecated("Use `FOO.small_vector_iobuf_ref() = BAR;` instead of `FOO.set_small_vector_iobuf(BAR);`")]]
  ::test::fixtures::python_capi::small_vector_iobuf& set_small_vector_iobuf(T_TemplateLists_small_vector_iobuf_struct_setter&& small_vector_iobuf_) {
    small_vector_iobuf_ref() = std::forward<T_TemplateLists_small_vector_iobuf_struct_setter>(small_vector_iobuf_);
    return __fbthrift_field_small_vector_iobuf;
  }
  const folly::small_vector<::test::fixtures::python_capi::fbvector_string>& get_nested_small_vector() const&;
  folly::small_vector<::test::fixtures::python_capi::fbvector_string> get_nested_small_vector() &&;

  template <typename T_TemplateLists_nested_small_vector_struct_setter = folly::small_vector<::test::fixtures::python_capi::fbvector_string>>
  [[deprecated("Use `FOO.nested_small_vector_ref() = BAR;` instead of `FOO.set_nested_small_vector(BAR);`")]]
  folly::small_vector<::test::fixtures::python_capi::fbvector_string>& set_nested_small_vector(T_TemplateLists_nested_small_vector_struct_setter&& nested_small_vector_) {
    nested_small_vector_ref() = std::forward<T_TemplateLists_nested_small_vector_struct_setter>(nested_small_vector_);
    return __fbthrift_field_nested_small_vector;
  }
  const folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>& get_small_vector_tensor() const&;
  folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string> get_small_vector_tensor() &&;

  template <typename T_TemplateLists_small_vector_tensor_struct_setter = folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>>
  [[deprecated("Use `FOO.small_vector_tensor_ref() = BAR;` instead of `FOO.set_small_vector_tensor(BAR);`")]]
  folly::fbvector<::test::fixtures::python_capi::fbvector_fbvector_string>& set_small_vector_tensor(T_TemplateLists_small_vector_tensor_struct_setter&& small_vector_tensor_) {
    small_vector_tensor_ref() = std::forward<T_TemplateLists_small_vector_tensor_struct_setter>(small_vector_tensor_);
    return __fbthrift_field_small_vector_tensor;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<TemplateLists>;
  friend void swap(TemplateLists& a, TemplateLists& b);
};

template <class Protocol_>
unsigned long TemplateLists::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // namespace test::fixtures::python_capi