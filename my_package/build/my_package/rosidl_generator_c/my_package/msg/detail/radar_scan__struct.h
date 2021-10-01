// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_package:msg/RadarScan.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__RADAR_SCAN__STRUCT_H_
#define MY_PACKAGE__MSG__DETAIL__RADAR_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "my_package/msg/detail/header__struct.h"

// Struct defined in msg/RadarScan in the package my_package.
typedef struct my_package__msg__RadarScan
{
  my_package__msg__Header header;
  uint16_t point_id;
  float x;
  float y;
  float z;
  float range;
  float velocity;
  uint16_t doppler_bin;
  float bearing;
  float intensity;
} my_package__msg__RadarScan;

// Struct for a sequence of my_package__msg__RadarScan.
typedef struct my_package__msg__RadarScan__Sequence
{
  my_package__msg__RadarScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__msg__RadarScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PACKAGE__MSG__DETAIL__RADAR_SCAN__STRUCT_H_
