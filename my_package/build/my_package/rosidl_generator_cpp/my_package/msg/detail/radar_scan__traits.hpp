// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_package:msg/RadarScan.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__RADAR_SCAN__TRAITS_HPP_
#define MY_PACKAGE__MSG__DETAIL__RADAR_SCAN__TRAITS_HPP_

#include "my_package/msg/detail/radar_scan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "my_package/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_package::msg::RadarScan>()
{
  return "my_package::msg::RadarScan";
}

template<>
inline const char * name<my_package::msg::RadarScan>()
{
  return "my_package/msg/RadarScan";
}

template<>
struct has_fixed_size<my_package::msg::RadarScan>
  : std::integral_constant<bool, has_fixed_size<my_package::msg::Header>::value> {};

template<>
struct has_bounded_size<my_package::msg::RadarScan>
  : std::integral_constant<bool, has_bounded_size<my_package::msg::Header>::value> {};

template<>
struct is_message<my_package::msg::RadarScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_PACKAGE__MSG__DETAIL__RADAR_SCAN__TRAITS_HPP_
