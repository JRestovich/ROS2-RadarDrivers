// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_package:msg/RadarScan.idl
// generated code does not contain a copyright notice
#include "my_package/msg/detail/radar_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "my_package/msg/detail/header__functions.h"

bool
my_package__msg__RadarScan__init(my_package__msg__RadarScan * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!my_package__msg__Header__init(&msg->header)) {
    my_package__msg__RadarScan__fini(msg);
    return false;
  }
  // point_id
  // x
  // y
  // z
  // range
  // velocity
  // doppler_bin
  // bearing
  // intensity
  return true;
}

void
my_package__msg__RadarScan__fini(my_package__msg__RadarScan * msg)
{
  if (!msg) {
    return;
  }
  // header
  my_package__msg__Header__fini(&msg->header);
  // point_id
  // x
  // y
  // z
  // range
  // velocity
  // doppler_bin
  // bearing
  // intensity
}

my_package__msg__RadarScan *
my_package__msg__RadarScan__create()
{
  my_package__msg__RadarScan * msg = (my_package__msg__RadarScan *)malloc(sizeof(my_package__msg__RadarScan));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_package__msg__RadarScan));
  bool success = my_package__msg__RadarScan__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_package__msg__RadarScan__destroy(my_package__msg__RadarScan * msg)
{
  if (msg) {
    my_package__msg__RadarScan__fini(msg);
  }
  free(msg);
}


bool
my_package__msg__RadarScan__Sequence__init(my_package__msg__RadarScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_package__msg__RadarScan * data = NULL;
  if (size) {
    data = (my_package__msg__RadarScan *)calloc(size, sizeof(my_package__msg__RadarScan));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_package__msg__RadarScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_package__msg__RadarScan__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_package__msg__RadarScan__Sequence__fini(my_package__msg__RadarScan__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_package__msg__RadarScan__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_package__msg__RadarScan__Sequence *
my_package__msg__RadarScan__Sequence__create(size_t size)
{
  my_package__msg__RadarScan__Sequence * array = (my_package__msg__RadarScan__Sequence *)malloc(sizeof(my_package__msg__RadarScan__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_package__msg__RadarScan__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_package__msg__RadarScan__Sequence__destroy(my_package__msg__RadarScan__Sequence * array)
{
  if (array) {
    my_package__msg__RadarScan__Sequence__fini(array);
  }
  free(array);
}
