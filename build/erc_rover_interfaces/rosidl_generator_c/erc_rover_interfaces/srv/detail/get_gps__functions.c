// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from erc_rover_interfaces:srv/GetGPS.idl
// generated code does not contain a copyright notice
#include "erc_rover_interfaces/srv/detail/get_gps__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
erc_rover_interfaces__srv__GetGPS_Request__init(erc_rover_interfaces__srv__GetGPS_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
erc_rover_interfaces__srv__GetGPS_Request__fini(erc_rover_interfaces__srv__GetGPS_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
erc_rover_interfaces__srv__GetGPS_Request__are_equal(const erc_rover_interfaces__srv__GetGPS_Request * lhs, const erc_rover_interfaces__srv__GetGPS_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetGPS_Request__copy(
  const erc_rover_interfaces__srv__GetGPS_Request * input,
  erc_rover_interfaces__srv__GetGPS_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

erc_rover_interfaces__srv__GetGPS_Request *
erc_rover_interfaces__srv__GetGPS_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetGPS_Request * msg = (erc_rover_interfaces__srv__GetGPS_Request *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetGPS_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(erc_rover_interfaces__srv__GetGPS_Request));
  bool success = erc_rover_interfaces__srv__GetGPS_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
erc_rover_interfaces__srv__GetGPS_Request__destroy(erc_rover_interfaces__srv__GetGPS_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    erc_rover_interfaces__srv__GetGPS_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
erc_rover_interfaces__srv__GetGPS_Request__Sequence__init(erc_rover_interfaces__srv__GetGPS_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetGPS_Request * data = NULL;

  if (size) {
    data = (erc_rover_interfaces__srv__GetGPS_Request *)allocator.zero_allocate(size, sizeof(erc_rover_interfaces__srv__GetGPS_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = erc_rover_interfaces__srv__GetGPS_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        erc_rover_interfaces__srv__GetGPS_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
erc_rover_interfaces__srv__GetGPS_Request__Sequence__fini(erc_rover_interfaces__srv__GetGPS_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      erc_rover_interfaces__srv__GetGPS_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

erc_rover_interfaces__srv__GetGPS_Request__Sequence *
erc_rover_interfaces__srv__GetGPS_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetGPS_Request__Sequence * array = (erc_rover_interfaces__srv__GetGPS_Request__Sequence *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetGPS_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = erc_rover_interfaces__srv__GetGPS_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
erc_rover_interfaces__srv__GetGPS_Request__Sequence__destroy(erc_rover_interfaces__srv__GetGPS_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    erc_rover_interfaces__srv__GetGPS_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
erc_rover_interfaces__srv__GetGPS_Request__Sequence__are_equal(const erc_rover_interfaces__srv__GetGPS_Request__Sequence * lhs, const erc_rover_interfaces__srv__GetGPS_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!erc_rover_interfaces__srv__GetGPS_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetGPS_Request__Sequence__copy(
  const erc_rover_interfaces__srv__GetGPS_Request__Sequence * input,
  erc_rover_interfaces__srv__GetGPS_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(erc_rover_interfaces__srv__GetGPS_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    erc_rover_interfaces__srv__GetGPS_Request * data =
      (erc_rover_interfaces__srv__GetGPS_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!erc_rover_interfaces__srv__GetGPS_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          erc_rover_interfaces__srv__GetGPS_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!erc_rover_interfaces__srv__GetGPS_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
erc_rover_interfaces__srv__GetGPS_Response__init(erc_rover_interfaces__srv__GetGPS_Response * msg)
{
  if (!msg) {
    return false;
  }
  // latitude
  // longitude
  return true;
}

void
erc_rover_interfaces__srv__GetGPS_Response__fini(erc_rover_interfaces__srv__GetGPS_Response * msg)
{
  if (!msg) {
    return;
  }
  // latitude
  // longitude
}

bool
erc_rover_interfaces__srv__GetGPS_Response__are_equal(const erc_rover_interfaces__srv__GetGPS_Response * lhs, const erc_rover_interfaces__srv__GetGPS_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetGPS_Response__copy(
  const erc_rover_interfaces__srv__GetGPS_Response * input,
  erc_rover_interfaces__srv__GetGPS_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  return true;
}

erc_rover_interfaces__srv__GetGPS_Response *
erc_rover_interfaces__srv__GetGPS_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetGPS_Response * msg = (erc_rover_interfaces__srv__GetGPS_Response *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetGPS_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(erc_rover_interfaces__srv__GetGPS_Response));
  bool success = erc_rover_interfaces__srv__GetGPS_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
erc_rover_interfaces__srv__GetGPS_Response__destroy(erc_rover_interfaces__srv__GetGPS_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    erc_rover_interfaces__srv__GetGPS_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
erc_rover_interfaces__srv__GetGPS_Response__Sequence__init(erc_rover_interfaces__srv__GetGPS_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetGPS_Response * data = NULL;

  if (size) {
    data = (erc_rover_interfaces__srv__GetGPS_Response *)allocator.zero_allocate(size, sizeof(erc_rover_interfaces__srv__GetGPS_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = erc_rover_interfaces__srv__GetGPS_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        erc_rover_interfaces__srv__GetGPS_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
erc_rover_interfaces__srv__GetGPS_Response__Sequence__fini(erc_rover_interfaces__srv__GetGPS_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      erc_rover_interfaces__srv__GetGPS_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

erc_rover_interfaces__srv__GetGPS_Response__Sequence *
erc_rover_interfaces__srv__GetGPS_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetGPS_Response__Sequence * array = (erc_rover_interfaces__srv__GetGPS_Response__Sequence *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetGPS_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = erc_rover_interfaces__srv__GetGPS_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
erc_rover_interfaces__srv__GetGPS_Response__Sequence__destroy(erc_rover_interfaces__srv__GetGPS_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    erc_rover_interfaces__srv__GetGPS_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
erc_rover_interfaces__srv__GetGPS_Response__Sequence__are_equal(const erc_rover_interfaces__srv__GetGPS_Response__Sequence * lhs, const erc_rover_interfaces__srv__GetGPS_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!erc_rover_interfaces__srv__GetGPS_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetGPS_Response__Sequence__copy(
  const erc_rover_interfaces__srv__GetGPS_Response__Sequence * input,
  erc_rover_interfaces__srv__GetGPS_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(erc_rover_interfaces__srv__GetGPS_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    erc_rover_interfaces__srv__GetGPS_Response * data =
      (erc_rover_interfaces__srv__GetGPS_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!erc_rover_interfaces__srv__GetGPS_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          erc_rover_interfaces__srv__GetGPS_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!erc_rover_interfaces__srv__GetGPS_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "erc_rover_interfaces/srv/detail/get_gps__functions.h"

bool
erc_rover_interfaces__srv__GetGPS_Event__init(erc_rover_interfaces__srv__GetGPS_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    erc_rover_interfaces__srv__GetGPS_Event__fini(msg);
    return false;
  }
  // request
  if (!erc_rover_interfaces__srv__GetGPS_Request__Sequence__init(&msg->request, 0)) {
    erc_rover_interfaces__srv__GetGPS_Event__fini(msg);
    return false;
  }
  // response
  if (!erc_rover_interfaces__srv__GetGPS_Response__Sequence__init(&msg->response, 0)) {
    erc_rover_interfaces__srv__GetGPS_Event__fini(msg);
    return false;
  }
  return true;
}

void
erc_rover_interfaces__srv__GetGPS_Event__fini(erc_rover_interfaces__srv__GetGPS_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  erc_rover_interfaces__srv__GetGPS_Request__Sequence__fini(&msg->request);
  // response
  erc_rover_interfaces__srv__GetGPS_Response__Sequence__fini(&msg->response);
}

bool
erc_rover_interfaces__srv__GetGPS_Event__are_equal(const erc_rover_interfaces__srv__GetGPS_Event * lhs, const erc_rover_interfaces__srv__GetGPS_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!erc_rover_interfaces__srv__GetGPS_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!erc_rover_interfaces__srv__GetGPS_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetGPS_Event__copy(
  const erc_rover_interfaces__srv__GetGPS_Event * input,
  erc_rover_interfaces__srv__GetGPS_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!erc_rover_interfaces__srv__GetGPS_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!erc_rover_interfaces__srv__GetGPS_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

erc_rover_interfaces__srv__GetGPS_Event *
erc_rover_interfaces__srv__GetGPS_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetGPS_Event * msg = (erc_rover_interfaces__srv__GetGPS_Event *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetGPS_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(erc_rover_interfaces__srv__GetGPS_Event));
  bool success = erc_rover_interfaces__srv__GetGPS_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
erc_rover_interfaces__srv__GetGPS_Event__destroy(erc_rover_interfaces__srv__GetGPS_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    erc_rover_interfaces__srv__GetGPS_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
erc_rover_interfaces__srv__GetGPS_Event__Sequence__init(erc_rover_interfaces__srv__GetGPS_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetGPS_Event * data = NULL;

  if (size) {
    data = (erc_rover_interfaces__srv__GetGPS_Event *)allocator.zero_allocate(size, sizeof(erc_rover_interfaces__srv__GetGPS_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = erc_rover_interfaces__srv__GetGPS_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        erc_rover_interfaces__srv__GetGPS_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
erc_rover_interfaces__srv__GetGPS_Event__Sequence__fini(erc_rover_interfaces__srv__GetGPS_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      erc_rover_interfaces__srv__GetGPS_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

erc_rover_interfaces__srv__GetGPS_Event__Sequence *
erc_rover_interfaces__srv__GetGPS_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetGPS_Event__Sequence * array = (erc_rover_interfaces__srv__GetGPS_Event__Sequence *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetGPS_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = erc_rover_interfaces__srv__GetGPS_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
erc_rover_interfaces__srv__GetGPS_Event__Sequence__destroy(erc_rover_interfaces__srv__GetGPS_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    erc_rover_interfaces__srv__GetGPS_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
erc_rover_interfaces__srv__GetGPS_Event__Sequence__are_equal(const erc_rover_interfaces__srv__GetGPS_Event__Sequence * lhs, const erc_rover_interfaces__srv__GetGPS_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!erc_rover_interfaces__srv__GetGPS_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetGPS_Event__Sequence__copy(
  const erc_rover_interfaces__srv__GetGPS_Event__Sequence * input,
  erc_rover_interfaces__srv__GetGPS_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(erc_rover_interfaces__srv__GetGPS_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    erc_rover_interfaces__srv__GetGPS_Event * data =
      (erc_rover_interfaces__srv__GetGPS_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!erc_rover_interfaces__srv__GetGPS_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          erc_rover_interfaces__srv__GetGPS_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!erc_rover_interfaces__srv__GetGPS_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
