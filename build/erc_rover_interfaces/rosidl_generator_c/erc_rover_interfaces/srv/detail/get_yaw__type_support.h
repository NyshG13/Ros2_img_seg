// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from erc_rover_interfaces:srv/GetYaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "erc_rover_interfaces/srv/get_yaw.h"


#ifndef ERC_ROVER_INTERFACES__SRV__DETAIL__GET_YAW__TYPE_SUPPORT_H_
#define ERC_ROVER_INTERFACES__SRV__DETAIL__GET_YAW__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "erc_rover_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  erc_rover_interfaces,
  srv,
  GetYaw_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  erc_rover_interfaces,
  srv,
  GetYaw_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  erc_rover_interfaces,
  srv,
  GetYaw_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  erc_rover_interfaces,
  srv,
  GetYaw
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  erc_rover_interfaces,
  srv,
  GetYaw
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  erc_rover_interfaces,
  srv,
  GetYaw
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // ERC_ROVER_INTERFACES__SRV__DETAIL__GET_YAW__TYPE_SUPPORT_H_
