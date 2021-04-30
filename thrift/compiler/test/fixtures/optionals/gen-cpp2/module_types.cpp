/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::Animal>::size;
folly::Range<::cpp2::Animal const*> const TEnumTraits<::cpp2::Animal>::values = folly::range(TEnumDataStorage<::cpp2::Animal>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::Animal>::names = folly::range(TEnumDataStorage<::cpp2::Animal>::names);

char const* TEnumTraits<::cpp2::Animal>::findName(type value) {
  using factory = ::cpp2::_Animal_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::Animal>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_Animal_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _Animal_EnumMapFactory::ValuesToNamesMapType _Animal_VALUES_TO_NAMES = _Animal_EnumMapFactory::makeValuesToNamesMap();
const _Animal_EnumMapFactory::NamesToValuesMapType _Animal_NAMES_TO_VALUES = _Animal_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Color>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Color>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Color::Color(apache::thrift::FragileConstructor, double red__arg, double green__arg, double blue__arg, double alpha__arg) :
    red(std::move(red__arg)),
    green(std::move(green__arg)),
    blue(std::move(blue__arg)),
    alpha(std::move(alpha__arg)) {
  __isset.red = true;
  __isset.green = true;
  __isset.blue = true;
  __isset.alpha = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Color::__clear() {
  // clear all fields
  this->red = 0;
  this->green = 0;
  this->blue = 0;
  this->alpha = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Color::operator==(const Color& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.red == rhs.red)) {
    return false;
  }
  if (!(lhs.green == rhs.green)) {
    return false;
  }
  if (!(lhs.blue == rhs.blue)) {
    return false;
  }
  if (!(lhs.alpha == rhs.alpha)) {
    return false;
  }
  return true;
}

bool Color::operator<(const Color& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.red == rhs.red)) {
    return lhs.red < rhs.red;
  }
  if (!(lhs.green == rhs.green)) {
    return lhs.green < rhs.green;
  }
  if (!(lhs.blue == rhs.blue)) {
    return lhs.blue < rhs.blue;
  }
  if (!(lhs.alpha == rhs.alpha)) {
    return lhs.alpha < rhs.alpha;
  }
  return false;
}


void swap(Color& a, Color& b) {
  using ::std::swap;
  swap(a.red_ref().value(), b.red_ref().value());
  swap(a.green_ref().value(), b.green_ref().value());
  swap(a.blue_ref().value(), b.blue_ref().value());
  swap(a.alpha_ref().value(), b.alpha_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Color::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Color::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Color::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Color::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Color::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Color::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Color::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Color::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Vehicle>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Vehicle>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Vehicle::Vehicle(const Vehicle&) = default;
Vehicle& Vehicle::operator=(const Vehicle&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Vehicle::Vehicle() :
      hasAC(false) {}

THRIFT_IGNORE_ISSET_USE_WARNING_END

Vehicle::~Vehicle() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Vehicle::Vehicle(Vehicle&& other) noexcept  :
    color(std::move(other.color)),
    licensePlate(std::move(other.licensePlate)),
    description(std::move(other.description)),
    name(std::move(other.name)),
    hasAC(std::move(other.hasAC)),
    __isset(other.__isset) {}

Vehicle& Vehicle::operator=(FOLLY_MAYBE_UNUSED Vehicle&& other) noexcept {
    this->color = std::move(other.color);
    this->licensePlate = std::move(other.licensePlate);
    this->description = std::move(other.description);
    this->name = std::move(other.name);
    this->hasAC = std::move(other.hasAC);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Vehicle::Vehicle(apache::thrift::FragileConstructor, ::cpp2::Color color__arg, ::std::string licensePlate__arg, ::std::string description__arg, ::std::string name__arg, bool hasAC__arg) :
    color(std::move(color__arg)),
    licensePlate(std::move(licensePlate__arg)),
    description(std::move(description__arg)),
    name(std::move(name__arg)),
    hasAC(std::move(hasAC__arg)) {
  __isset.color = true;
  __isset.licensePlate = true;
  __isset.description = true;
  __isset.name = true;
  __isset.hasAC = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Vehicle::__clear() {
  // clear all fields
  this->color.__clear();
  this->licensePlate = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->description = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->name = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->hasAC = false;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Vehicle::operator==(const Vehicle& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.color == rhs.color)) {
    return false;
  }
  if (lhs.licensePlate_ref() != rhs.licensePlate_ref()) {
    return false;
  }
  if (lhs.description_ref() != rhs.description_ref()) {
    return false;
  }
  if (lhs.name_ref() != rhs.name_ref()) {
    return false;
  }
  if (lhs.hasAC_ref() != rhs.hasAC_ref()) {
    return false;
  }
  return true;
}

bool Vehicle::operator<(const Vehicle& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.color == rhs.color)) {
    return lhs.color < rhs.color;
  }
  if (lhs.licensePlate_ref() != rhs.licensePlate_ref()) {
    return lhs.licensePlate_ref() < rhs.licensePlate_ref();
  }
  if (lhs.description_ref() != rhs.description_ref()) {
    return lhs.description_ref() < rhs.description_ref();
  }
  if (lhs.name_ref() != rhs.name_ref()) {
    return lhs.name_ref() < rhs.name_ref();
  }
  if (lhs.hasAC_ref() != rhs.hasAC_ref()) {
    return lhs.hasAC_ref() < rhs.hasAC_ref();
  }
  return false;
}

const ::cpp2::Color& Vehicle::get_color() const& {
  return color;
}

::cpp2::Color Vehicle::get_color() && {
  return std::move(color);
}


void swap(Vehicle& a, Vehicle& b) {
  using ::std::swap;
  swap(a.color_ref().value(), b.color_ref().value());
  swap(a.licensePlate_ref().value_unchecked(), b.licensePlate_ref().value_unchecked());
  swap(a.description_ref().value_unchecked(), b.description_ref().value_unchecked());
  swap(a.name_ref().value_unchecked(), b.name_ref().value_unchecked());
  swap(a.hasAC_ref().value_unchecked(), b.hasAC_ref().value_unchecked());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Vehicle::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Vehicle::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Vehicle::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Vehicle::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Vehicle::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Vehicle::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Vehicle,
        ::apache::thrift::type_class::structure,
        ::cpp2::Color>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Vehicle,
        ::apache::thrift::type_class::structure,
        ::cpp2::Color>,
    "inconsistent use of nimble option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Person>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Person>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Person::Person(const Person&) = default;
Person& Person::operator=(const Person&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Person::Person() :
      id(0),
      age(0),
      bestFriend(0),
      afraidOfAnimal(static_cast< ::cpp2::Animal>(0)) {}

THRIFT_IGNORE_ISSET_USE_WARNING_END

Person::~Person() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Person::Person(Person&& other) noexcept  :
    id(std::move(other.id)),
    name(std::move(other.name)),
    age(std::move(other.age)),
    address(std::move(other.address)),
    favoriteColor(std::move(other.favoriteColor)),
    friends(std::move(other.friends)),
    bestFriend(std::move(other.bestFriend)),
    petNames(std::move(other.petNames)),
    afraidOfAnimal(std::move(other.afraidOfAnimal)),
    vehicles(std::move(other.vehicles)),
    __isset(other.__isset) {}

Person& Person::operator=(FOLLY_MAYBE_UNUSED Person&& other) noexcept {
    this->id = std::move(other.id);
    this->name = std::move(other.name);
    this->age = std::move(other.age);
    this->address = std::move(other.address);
    this->favoriteColor = std::move(other.favoriteColor);
    this->friends = std::move(other.friends);
    this->bestFriend = std::move(other.bestFriend);
    this->petNames = std::move(other.petNames);
    this->afraidOfAnimal = std::move(other.afraidOfAnimal);
    this->vehicles = std::move(other.vehicles);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Person::Person(apache::thrift::FragileConstructor, ::cpp2::PersonID id__arg, ::std::string name__arg, ::std::int16_t age__arg, ::std::string address__arg, ::cpp2::Color favoriteColor__arg, ::std::set<::cpp2::PersonID> friends__arg, ::cpp2::PersonID bestFriend__arg, ::std::map<::cpp2::Animal, ::std::string> petNames__arg, ::cpp2::Animal afraidOfAnimal__arg, ::std::vector<::cpp2::Vehicle> vehicles__arg) :
    id(std::move(id__arg)),
    name(std::move(name__arg)),
    age(std::move(age__arg)),
    address(std::move(address__arg)),
    favoriteColor(std::move(favoriteColor__arg)),
    friends(std::move(friends__arg)),
    bestFriend(std::move(bestFriend__arg)),
    petNames(std::move(petNames__arg)),
    afraidOfAnimal(std::move(afraidOfAnimal__arg)),
    vehicles(std::move(vehicles__arg)) {
  __isset.id = true;
  __isset.name = true;
  __isset.age = true;
  __isset.address = true;
  __isset.favoriteColor = true;
  __isset.friends = true;
  __isset.bestFriend = true;
  __isset.petNames = true;
  __isset.afraidOfAnimal = true;
  __isset.vehicles = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Person::__clear() {
  // clear all fields
  this->id = 0;
  this->name = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->age = 0;
  this->address = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->favoriteColor.__clear();
  this->friends.clear();
  this->bestFriend = 0;
  this->petNames.clear();
  this->afraidOfAnimal = static_cast< ::cpp2::Animal>(0);
  this->vehicles.clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Person::operator==(const Person& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.id == rhs.id)) {
    return false;
  }
  if (!(lhs.name == rhs.name)) {
    return false;
  }
  if (lhs.age_ref() != rhs.age_ref()) {
    return false;
  }
  if (lhs.address_ref() != rhs.address_ref()) {
    return false;
  }
  if (lhs.favoriteColor_ref() != rhs.favoriteColor_ref()) {
    return false;
  }
  if (lhs.friends_ref() != rhs.friends_ref()) {
    return false;
  }
  if (lhs.bestFriend_ref() != rhs.bestFriend_ref()) {
    return false;
  }
  if (lhs.petNames_ref() != rhs.petNames_ref()) {
    return false;
  }
  if (lhs.afraidOfAnimal_ref() != rhs.afraidOfAnimal_ref()) {
    return false;
  }
  if (lhs.vehicles_ref() != rhs.vehicles_ref()) {
    return false;
  }
  return true;
}

bool Person::operator<(const Person& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.id == rhs.id)) {
    return lhs.id < rhs.id;
  }
  if (!(lhs.name == rhs.name)) {
    return lhs.name < rhs.name;
  }
  if (lhs.age_ref() != rhs.age_ref()) {
    return lhs.age_ref() < rhs.age_ref();
  }
  if (lhs.address_ref() != rhs.address_ref()) {
    return lhs.address_ref() < rhs.address_ref();
  }
  if (lhs.favoriteColor_ref() != rhs.favoriteColor_ref()) {
    return lhs.favoriteColor_ref() < rhs.favoriteColor_ref();
  }
  if (lhs.friends_ref() != rhs.friends_ref()) {
    return lhs.friends_ref() < rhs.friends_ref();
  }
  if (lhs.bestFriend_ref() != rhs.bestFriend_ref()) {
    return lhs.bestFriend_ref() < rhs.bestFriend_ref();
  }
  if (lhs.petNames_ref() != rhs.petNames_ref()) {
    return lhs.petNames_ref() < rhs.petNames_ref();
  }
  if (lhs.afraidOfAnimal_ref() != rhs.afraidOfAnimal_ref()) {
    return lhs.afraidOfAnimal_ref() < rhs.afraidOfAnimal_ref();
  }
  if (lhs.vehicles_ref() != rhs.vehicles_ref()) {
    return lhs.vehicles_ref() < rhs.vehicles_ref();
  }
  return false;
}

const ::cpp2::Color* Person::get_favoriteColor() const& {
  return favoriteColor_ref().has_value() ? std::addressof(favoriteColor) : nullptr;
}

::cpp2::Color* Person::get_favoriteColor() & {
  return favoriteColor_ref().has_value() ? std::addressof(favoriteColor) : nullptr;
}

const ::std::set<::cpp2::PersonID>* Person::get_friends() const& {
  return friends_ref().has_value() ? std::addressof(friends) : nullptr;
}

::std::set<::cpp2::PersonID>* Person::get_friends() & {
  return friends_ref().has_value() ? std::addressof(friends) : nullptr;
}

const ::std::map<::cpp2::Animal, ::std::string>* Person::get_petNames() const& {
  return petNames_ref().has_value() ? std::addressof(petNames) : nullptr;
}

::std::map<::cpp2::Animal, ::std::string>* Person::get_petNames() & {
  return petNames_ref().has_value() ? std::addressof(petNames) : nullptr;
}

const ::std::vector<::cpp2::Vehicle>* Person::get_vehicles() const& {
  return vehicles_ref().has_value() ? std::addressof(vehicles) : nullptr;
}

::std::vector<::cpp2::Vehicle>* Person::get_vehicles() & {
  return vehicles_ref().has_value() ? std::addressof(vehicles) : nullptr;
}


void swap(Person& a, Person& b) {
  using ::std::swap;
  swap(a.id_ref().value(), b.id_ref().value());
  swap(a.name_ref().value(), b.name_ref().value());
  swap(a.age_ref().value_unchecked(), b.age_ref().value_unchecked());
  swap(a.address_ref().value_unchecked(), b.address_ref().value_unchecked());
  swap(a.favoriteColor_ref().value_unchecked(), b.favoriteColor_ref().value_unchecked());
  swap(a.friends_ref().value_unchecked(), b.friends_ref().value_unchecked());
  swap(a.bestFriend_ref().value_unchecked(), b.bestFriend_ref().value_unchecked());
  swap(a.petNames_ref().value_unchecked(), b.petNames_ref().value_unchecked());
  swap(a.afraidOfAnimal_ref().value_unchecked(), b.afraidOfAnimal_ref().value_unchecked());
  swap(a.vehicles_ref().value_unchecked(), b.vehicles_ref().value_unchecked());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Person::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Person::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Person::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Person::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Person::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Person::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Person::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Person::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Person,
        ::apache::thrift::type_class::structure,
        ::cpp2::Color>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Person,
        ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>,
        ::std::vector<::cpp2::Vehicle>>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Person,
        ::apache::thrift::type_class::structure,
        ::cpp2::Color>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Person,
        ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>,
        ::std::vector<::cpp2::Vehicle>>,
    "inconsistent use of nimble option");

} // cpp2
