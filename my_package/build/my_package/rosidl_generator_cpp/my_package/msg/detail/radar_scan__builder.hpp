// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_package:msg/RadarScan.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__RADAR_SCAN__BUILDER_HPP_
#define MY_PACKAGE__MSG__DETAIL__RADAR_SCAN__BUILDER_HPP_

#include "my_package/msg/detail/radar_scan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_package
{

namespace msg
{

namespace builder
{

class Init_RadarScan_intensity
{
public:
  explicit Init_RadarScan_intensity(::my_package::msg::RadarScan & msg)
  : msg_(msg)
  {}
  ::my_package::msg::RadarScan intensity(::my_package::msg::RadarScan::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

class Init_RadarScan_bearing
{
public:
  explicit Init_RadarScan_bearing(::my_package::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_intensity bearing(::my_package::msg::RadarScan::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return Init_RadarScan_intensity(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

class Init_RadarScan_doppler_bin
{
public:
  explicit Init_RadarScan_doppler_bin(::my_package::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_bearing doppler_bin(::my_package::msg::RadarScan::_doppler_bin_type arg)
  {
    msg_.doppler_bin = std::move(arg);
    return Init_RadarScan_bearing(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

class Init_RadarScan_velocity
{
public:
  explicit Init_RadarScan_velocity(::my_package::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_doppler_bin velocity(::my_package::msg::RadarScan::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RadarScan_doppler_bin(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

class Init_RadarScan_range
{
public:
  explicit Init_RadarScan_range(::my_package::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_velocity range(::my_package::msg::RadarScan::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_RadarScan_velocity(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

class Init_RadarScan_z
{
public:
  explicit Init_RadarScan_z(::my_package::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_range z(::my_package::msg::RadarScan::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_RadarScan_range(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

class Init_RadarScan_y
{
public:
  explicit Init_RadarScan_y(::my_package::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_z y(::my_package::msg::RadarScan::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RadarScan_z(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

class Init_RadarScan_x
{
public:
  explicit Init_RadarScan_x(::my_package::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_y x(::my_package::msg::RadarScan::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RadarScan_y(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

class Init_RadarScan_point_id
{
public:
  explicit Init_RadarScan_point_id(::my_package::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_x point_id(::my_package::msg::RadarScan::_point_id_type arg)
  {
    msg_.point_id = std::move(arg);
    return Init_RadarScan_x(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

class Init_RadarScan_header
{
public:
  Init_RadarScan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarScan_point_id header(::my_package::msg::RadarScan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarScan_point_id(msg_);
  }

private:
  ::my_package::msg::RadarScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_package::msg::RadarScan>()
{
  return my_package::msg::builder::Init_RadarScan_header();
}

}  // namespace my_package

#endif  // MY_PACKAGE__MSG__DETAIL__RADAR_SCAN__BUILDER_HPP_
