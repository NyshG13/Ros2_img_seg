// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from erc_rover_interfaces:srv/GetDepth.idl
// generated code does not contain a copyright notice
#include "erc_rover_interfaces/srv/detail/get_depth__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
erc_rover_interfaces__srv__GetDepth_Request__init(erc_rover_interfaces__srv__GetDepth_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pixel_x
  // pixel_y
  return true;
}

void
erc_rover_interfaces__srv__GetDepth_Request__fini(erc_rover_interfaces__srv__GetDepth_Request * msg)
{
  if (!msg) {
    return;
  }
  // pixel_x
  // pixel_y
}

bool
erc_rover_interfaces__srv__GetDepth_Request__are_equal(const erc_rover_interfaces__srv__GetDepth_Request * lhs, const erc_rover_interfaces__srv__GetDepth_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pixel_x
  if (lhs->pixel_x != rhs->pixel_x) {
    return false;
  }
  // pixel_y
  if (lhs->pixel_y != rhs->pixel_y) {
    return false;
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetDepth_Request__copy(
  const erc_rover_interfaces__srv__GetDepth_Request * input,
  erc_rover_interfaces__srv__GetDepth_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pixel_x
  output->pixel_x = input->pixel_x;
  // pixel_y
  output->pixel_y = input->pixel_y;
  return true;
}

erc_rover_interfaces__srv__GetDepth_Request *
erc_rover_interfaces__srv__GetDepth_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetDepth_Request * msg = (erc_rover_interfaces__srv__GetDepth_Request *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetDepth_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(erc_rover_interfaces__srv__GetDepth_Request));
  bool success = erc_rover_interfaces__srv__GetDepth_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
erc_rover_interfaces__srv__GetDepth_Request__destroy(erc_rover_interfaces__srv__GetDepth_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    erc_rover_interfaces__srv__GetDepth_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
erc_rover_interfaces__srv__GetDepth_Request__Sequence__init(erc_rover_interfaces__srv__GetDepth_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetDepth_Request * data = NULL;

  if (size) {
    data = (erc_rover_interfaces__srv__GetDepth_Request *)allocator.zero_allocate(size, sizeof(erc_rover_interfaces__srv__GetDepth_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = erc_rover_interfaces__srv__GetDepth_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        erc_rover_interfaces__srv__GetDepth_Request__fini(&data[i - 1]);
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
erc_rover_interfaces__srv__GetDepth_Request__Sequence__fini(erc_rover_interfaces__srv__GetDepth_Request__Sequence * array)
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
      erc_rover_interfaces__srv__GetDepth_Request__fini(&array->data[i]);
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

erc_rover_interfaces__srv__GetDepth_Request__Sequence *
erc_rover_interfaces__srv__GetDepth_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetDepth_Request__Sequence * array = (erc_rover_interfaces__srv__GetDepth_Request__Sequence *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetDepth_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = erc_rover_interfaces__srv__GetDepth_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
erc_rover_interfaces__srv__GetDepth_Request__Sequence__destroy(erc_rover_interfaces__srv__GetDepth_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    erc_rover_interfaces__srv__GetDepth_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
erc_rover_interfaces__srv__GetDepth_Request__Sequence__are_equal(const erc_rover_interfaces__srv__GetDepth_Request__Sequence * lhs, const erc_rover_interfaces__srv__GetDepth_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!erc_rover_interfaces__srv__GetDepth_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetDepth_Request__Sequence__copy(
  const erc_rover_interfaces__srv__GetDepth_Request__Sequence * input,
  erc_rover_interfaces__srv__GetDepth_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(erc_rover_interfaces__srv__GetDepth_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    erc_rover_interfaces__srv__GetDepth_Request * data =
      (erc_rover_interfaces__srv__GetDepth_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!erc_rover_interfaces__srv__GetDepth_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          erc_rover_interfaces__srv__GetDepth_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!erc_rover_interfaces__srv__GetDepth_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
erc_rover_interfaces__srv__GetDepth_Response__init(erc_rover_interfaces__srv__GetDepth_Response * msg)
{
  if (!msg) {
    return false;
  }
  // depth
  return true;
}

void
erc_rover_interfaces__srv__GetDepth_Response__fini(erc_rover_interfaces__srv__GetDepth_Response * msg)
{
  if (!msg) {
    return;
  }
  // depth
}

bool
erc_rover_interfaces__srv__GetDepth_Response__are_equal(const erc_rover_interfaces__srv__GetDepth_Response * lhs, const erc_rover_interfaces__srv__GetDepth_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetDepth_Response__copy(
  const erc_rover_interfaces__srv__GetDepth_Response * input,
  erc_rover_interfaces__srv__GetDepth_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // depth
  output->depth = input->depth;
  return true;
}

erc_rover_interfaces__srv__GetDepth_Response *
erc_rover_interfaces__srv__GetDepth_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetDepth_Response * msg = (erc_rover_interfaces__srv__GetDepth_Response *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetDepth_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(erc_rover_interfaces__srv__GetDepth_Response));
  bool success = erc_rover_interfaces__srv__GetDepth_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
erc_rover_interfaces__srv__GetDepth_Response__destroy(erc_rover_interfaces__srv__GetDepth_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    erc_rover_interfaces__srv__GetDepth_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
erc_rover_interfaces__srv__GetDepth_Response__Sequence__init(erc_rover_interfaces__srv__GetDepth_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetDepth_Response * data = NULL;

  if (size) {
    data = (erc_rover_interfaces__srv__GetDepth_Response *)allocator.zero_allocate(size, sizeof(erc_rover_interfaces__srv__GetDepth_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = erc_rover_interfaces__srv__GetDepth_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        erc_rover_interfaces__srv__GetDepth_Response__fini(&data[i - 1]);
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
erc_rover_interfaces__srv__GetDepth_Response__Sequence__fini(erc_rover_interfaces__srv__GetDepth_Response__Sequence * array)
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
      erc_rover_interfaces__srv__GetDepth_Response__fini(&array->data[i]);
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

erc_rover_interfaces__srv__GetDepth_Response__Sequence *
erc_rover_interfaces__srv__GetDepth_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetDepth_Response__Sequence * array = (erc_rover_interfaces__srv__GetDepth_Response__Sequence *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetDepth_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = erc_rover_interfaces__srv__GetDepth_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
erc_rover_interfaces__srv__GetDepth_Response__Sequence__destroy(erc_rover_interfaces__srv__GetDepth_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    erc_rover_interfaces__srv__GetDepth_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
erc_rover_interfaces__srv__GetDepth_Response__Sequence__are_equal(const erc_rover_interfaces__srv__GetDepth_Response__Sequence * lhs, const erc_rover_interfaces__srv__GetDepth_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!erc_rover_interfaces__srv__GetDepth_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetDepth_Response__Sequence__copy(
  const erc_rover_interfaces__srv__GetDepth_Response__Sequence * input,
  erc_rover_interfaces__srv__GetDepth_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(erc_rover_interfaces__srv__GetDepth_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    erc_rover_interfaces__srv__GetDepth_Response * data =
      (erc_rover_interfaces__srv__GetDepth_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!erc_rover_interfaces__srv__GetDepth_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          erc_rover_interfaces__srv__GetDepth_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!erc_rover_interfaces__srv__GetDepth_Response__copy(
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
// #include "erc_rover_interfaces/srv/detail/get_depth__functions.h"

bool
erc_rover_interfaces__srv__GetDepth_Event__init(erc_rover_interfaces__srv__GetDepth_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    erc_rover_interfaces__srv__GetDepth_Event__fini(msg);
    return false;
  }
  // request
  if (!erc_rover_interfaces__srv__GetDepth_Request__Sequence__init(&msg->request, 0)) {
    erc_rover_interfaces__srv__GetDepth_Event__fini(msg);
    return false;
  }
  // response
  if (!erc_rover_interfaces__srv__GetDepth_Response__Sequence__init(&msg->response, 0)) {
    erc_rover_interfaces__srv__GetDepth_Event__fini(msg);
    return false;
  }
  return true;
}

void
erc_rover_interfaces__srv__GetDepth_Event__fini(erc_rover_interfaces__srv__GetDepth_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  erc_rover_interfaces__srv__GetDepth_Request__Sequence__fini(&msg->request);
  // response
  erc_rover_interfaces__srv__GetDepth_Response__Sequence__fini(&msg->response);
}

bool
erc_rover_interfaces__srv__GetDepth_Event__are_equal(const erc_rover_interfaces__srv__GetDepth_Event * lhs, const erc_rover_interfaces__srv__GetDepth_Event * rhs)
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
  if (!erc_rover_interfaces__srv__GetDepth_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!erc_rover_interfaces__srv__GetDepth_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetDepth_Event__copy(
  const erc_rover_interfaces__srv__GetDepth_Event * input,
  erc_rover_interfaces__srv__GetDepth_Event * output)
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
  if (!erc_rover_interfaces__srv__GetDepth_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!erc_rover_interfaces__srv__GetDepth_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

erc_rover_interfaces__srv__GetDepth_Event *
erc_rover_interfaces__srv__GetDepth_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetDepth_Event * msg = (erc_rover_interfaces__srv__GetDepth_Event *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetDepth_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(erc_rover_interfaces__srv__GetDepth_Event));
  bool success = erc_rover_interfaces__srv__GetDepth_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
erc_rover_interfaces__srv__GetDepth_Event__destroy(erc_rover_interfaces__srv__GetDepth_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    erc_rover_interfaces__srv__GetDepth_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
erc_rover_interfaces__srv__GetDepth_Event__Sequence__init(erc_rover_interfaces__srv__GetDepth_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetDepth_Event * data = NULL;

  if (size) {
    data = (erc_rover_interfaces__srv__GetDepth_Event *)allocator.zero_allocate(size, sizeof(erc_rover_interfaces__srv__GetDepth_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = erc_rover_interfaces__srv__GetDepth_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        erc_rover_interfaces__srv__GetDepth_Event__fini(&data[i - 1]);
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
erc_rover_interfaces__srv__GetDepth_Event__Sequence__fini(erc_rover_interfaces__srv__GetDepth_Event__Sequence * array)
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
      erc_rover_interfaces__srv__GetDepth_Event__fini(&array->data[i]);
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

erc_rover_interfaces__srv__GetDepth_Event__Sequence *
erc_rover_interfaces__srv__GetDepth_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erc_rover_interfaces__srv__GetDepth_Event__Sequence * array = (erc_rover_interfaces__srv__GetDepth_Event__Sequence *)allocator.allocate(sizeof(erc_rover_interfaces__srv__GetDepth_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = erc_rover_interfaces__srv__GetDepth_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
erc_rover_interfaces__srv__GetDepth_Event__Sequence__destroy(erc_rover_interfaces__srv__GetDepth_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    erc_rover_interfaces__srv__GetDepth_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
erc_rover_interfaces__srv__GetDepth_Event__Sequence__are_equal(const erc_rover_interfaces__srv__GetDepth_Event__Sequence * lhs, const erc_rover_interfaces__srv__GetDepth_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!erc_rover_interfaces__srv__GetDepth_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
erc_rover_interfaces__srv__GetDepth_Event__Sequence__copy(
  const erc_rover_interfaces__srv__GetDepth_Event__Sequence * input,
  erc_rover_interfaces__srv__GetDepth_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(erc_rover_interfaces__srv__GetDepth_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    erc_rover_interfaces__srv__GetDepth_Event * data =
      (erc_rover_interfaces__srv__GetDepth_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!erc_rover_interfaces__srv__GetDepth_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          erc_rover_interfaces__srv__GetDepth_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!erc_rover_interfaces__srv__GetDepth_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
