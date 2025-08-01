// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from erc_rover_interfaces:srv/GetGPS.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "erc_rover_interfaces/srv/get_gps.h"


#ifndef ERC_ROVER_INTERFACES__SRV__DETAIL__GET_GPS__STRUCT_H_
#define ERC_ROVER_INTERFACES__SRV__DETAIL__GET_GPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetGPS in the package erc_rover_interfaces.
typedef struct erc_rover_interfaces__srv__GetGPS_Request
{
  uint8_t structure_needs_at_least_one_member;
} erc_rover_interfaces__srv__GetGPS_Request;

// Struct for a sequence of erc_rover_interfaces__srv__GetGPS_Request.
typedef struct erc_rover_interfaces__srv__GetGPS_Request__Sequence
{
  erc_rover_interfaces__srv__GetGPS_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} erc_rover_interfaces__srv__GetGPS_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GetGPS in the package erc_rover_interfaces.
typedef struct erc_rover_interfaces__srv__GetGPS_Response
{
  double latitude;
  double longitude;
} erc_rover_interfaces__srv__GetGPS_Response;

// Struct for a sequence of erc_rover_interfaces__srv__GetGPS_Response.
typedef struct erc_rover_interfaces__srv__GetGPS_Response__Sequence
{
  erc_rover_interfaces__srv__GetGPS_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} erc_rover_interfaces__srv__GetGPS_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  erc_rover_interfaces__srv__GetGPS_Event__request__MAX_SIZE = 1
};
// response
enum
{
  erc_rover_interfaces__srv__GetGPS_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetGPS in the package erc_rover_interfaces.
typedef struct erc_rover_interfaces__srv__GetGPS_Event
{
  service_msgs__msg__ServiceEventInfo info;
  erc_rover_interfaces__srv__GetGPS_Request__Sequence request;
  erc_rover_interfaces__srv__GetGPS_Response__Sequence response;
} erc_rover_interfaces__srv__GetGPS_Event;

// Struct for a sequence of erc_rover_interfaces__srv__GetGPS_Event.
typedef struct erc_rover_interfaces__srv__GetGPS_Event__Sequence
{
  erc_rover_interfaces__srv__GetGPS_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} erc_rover_interfaces__srv__GetGPS_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ERC_ROVER_INTERFACES__SRV__DETAIL__GET_GPS__STRUCT_H_
