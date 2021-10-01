#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "my_package::newmsg__rosidl_typesupport_c" for configuration "Debug"
set_property(TARGET my_package::newmsg__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(my_package::newmsg__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libnewmsg__rosidl_typesupport_c.so"
  IMPORTED_SONAME_DEBUG "libnewmsg__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS my_package::newmsg__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_my_package::newmsg__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libnewmsg__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
