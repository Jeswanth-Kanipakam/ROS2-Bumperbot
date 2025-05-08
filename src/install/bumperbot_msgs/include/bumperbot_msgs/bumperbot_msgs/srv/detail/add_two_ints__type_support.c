// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bumperbot_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bumperbot_msgs/srv/detail/add_two_ints__rosidl_typesupport_introspection_c.h"
#include "bumperbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bumperbot_msgs/srv/detail/add_two_ints__functions.h"
#include "bumperbot_msgs/srv/detail/add_two_ints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bumperbot_msgs__srv__AddTwoInts_Request__init(message_memory);
}

void bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_fini_function(void * message_memory)
{
  bumperbot_msgs__srv__AddTwoInts_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bumperbot_msgs__srv__AddTwoInts_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bumperbot_msgs__srv__AddTwoInts_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_members = {
  "bumperbot_msgs__srv",  // message namespace
  "AddTwoInts_Request",  // message name
  2,  // number of fields
  sizeof(bumperbot_msgs__srv__AddTwoInts_Request),
  false,  // has_any_key_member_
  bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_member_array,  // message members
  bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_type_support_handle = {
  0,
  &bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_members,
  get_message_typesupport_handle_function,
  &bumperbot_msgs__srv__AddTwoInts_Request__get_type_hash,
  &bumperbot_msgs__srv__AddTwoInts_Request__get_type_description,
  &bumperbot_msgs__srv__AddTwoInts_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bumperbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Request)() {
  if (!bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_type_support_handle.typesupport_identifier) {
    bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bumperbot_msgs/srv/detail/add_two_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bumperbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bumperbot_msgs/srv/detail/add_two_ints__functions.h"
// already included above
// #include "bumperbot_msgs/srv/detail/add_two_ints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bumperbot_msgs__srv__AddTwoInts_Response__init(message_memory);
}

void bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_fini_function(void * message_memory)
{
  bumperbot_msgs__srv__AddTwoInts_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bumperbot_msgs__srv__AddTwoInts_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_members = {
  "bumperbot_msgs__srv",  // message namespace
  "AddTwoInts_Response",  // message name
  1,  // number of fields
  sizeof(bumperbot_msgs__srv__AddTwoInts_Response),
  false,  // has_any_key_member_
  bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_member_array,  // message members
  bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_type_support_handle = {
  0,
  &bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_members,
  get_message_typesupport_handle_function,
  &bumperbot_msgs__srv__AddTwoInts_Response__get_type_hash,
  &bumperbot_msgs__srv__AddTwoInts_Response__get_type_description,
  &bumperbot_msgs__srv__AddTwoInts_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bumperbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Response)() {
  if (!bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_type_support_handle.typesupport_identifier) {
    bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bumperbot_msgs/srv/detail/add_two_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bumperbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bumperbot_msgs/srv/detail/add_two_ints__functions.h"
// already included above
// #include "bumperbot_msgs/srv/detail/add_two_ints__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "bumperbot_msgs/srv/add_two_ints.h"
// Member `request`
// Member `response`
// already included above
// #include "bumperbot_msgs/srv/detail/add_two_ints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bumperbot_msgs__srv__AddTwoInts_Event__init(message_memory);
}

void bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_fini_function(void * message_memory)
{
  bumperbot_msgs__srv__AddTwoInts_Event__fini(message_memory);
}

size_t bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__size_function__AddTwoInts_Event__request(
  const void * untyped_member)
{
  const bumperbot_msgs__srv__AddTwoInts_Request__Sequence * member =
    (const bumperbot_msgs__srv__AddTwoInts_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddTwoInts_Event__request(
  const void * untyped_member, size_t index)
{
  const bumperbot_msgs__srv__AddTwoInts_Request__Sequence * member =
    (const bumperbot_msgs__srv__AddTwoInts_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_function__AddTwoInts_Event__request(
  void * untyped_member, size_t index)
{
  bumperbot_msgs__srv__AddTwoInts_Request__Sequence * member =
    (bumperbot_msgs__srv__AddTwoInts_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddTwoInts_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bumperbot_msgs__srv__AddTwoInts_Request * item =
    ((const bumperbot_msgs__srv__AddTwoInts_Request *)
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddTwoInts_Event__request(untyped_member, index));
  bumperbot_msgs__srv__AddTwoInts_Request * value =
    (bumperbot_msgs__srv__AddTwoInts_Request *)(untyped_value);
  *value = *item;
}

void bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__assign_function__AddTwoInts_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bumperbot_msgs__srv__AddTwoInts_Request * item =
    ((bumperbot_msgs__srv__AddTwoInts_Request *)
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_function__AddTwoInts_Event__request(untyped_member, index));
  const bumperbot_msgs__srv__AddTwoInts_Request * value =
    (const bumperbot_msgs__srv__AddTwoInts_Request *)(untyped_value);
  *item = *value;
}

bool bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__resize_function__AddTwoInts_Event__request(
  void * untyped_member, size_t size)
{
  bumperbot_msgs__srv__AddTwoInts_Request__Sequence * member =
    (bumperbot_msgs__srv__AddTwoInts_Request__Sequence *)(untyped_member);
  bumperbot_msgs__srv__AddTwoInts_Request__Sequence__fini(member);
  return bumperbot_msgs__srv__AddTwoInts_Request__Sequence__init(member, size);
}

size_t bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__size_function__AddTwoInts_Event__response(
  const void * untyped_member)
{
  const bumperbot_msgs__srv__AddTwoInts_Response__Sequence * member =
    (const bumperbot_msgs__srv__AddTwoInts_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddTwoInts_Event__response(
  const void * untyped_member, size_t index)
{
  const bumperbot_msgs__srv__AddTwoInts_Response__Sequence * member =
    (const bumperbot_msgs__srv__AddTwoInts_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_function__AddTwoInts_Event__response(
  void * untyped_member, size_t index)
{
  bumperbot_msgs__srv__AddTwoInts_Response__Sequence * member =
    (bumperbot_msgs__srv__AddTwoInts_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddTwoInts_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bumperbot_msgs__srv__AddTwoInts_Response * item =
    ((const bumperbot_msgs__srv__AddTwoInts_Response *)
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddTwoInts_Event__response(untyped_member, index));
  bumperbot_msgs__srv__AddTwoInts_Response * value =
    (bumperbot_msgs__srv__AddTwoInts_Response *)(untyped_value);
  *value = *item;
}

void bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__assign_function__AddTwoInts_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bumperbot_msgs__srv__AddTwoInts_Response * item =
    ((bumperbot_msgs__srv__AddTwoInts_Response *)
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_function__AddTwoInts_Event__response(untyped_member, index));
  const bumperbot_msgs__srv__AddTwoInts_Response * value =
    (const bumperbot_msgs__srv__AddTwoInts_Response *)(untyped_value);
  *item = *value;
}

bool bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__resize_function__AddTwoInts_Event__response(
  void * untyped_member, size_t size)
{
  bumperbot_msgs__srv__AddTwoInts_Response__Sequence * member =
    (bumperbot_msgs__srv__AddTwoInts_Response__Sequence *)(untyped_member);
  bumperbot_msgs__srv__AddTwoInts_Response__Sequence__fini(member);
  return bumperbot_msgs__srv__AddTwoInts_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bumperbot_msgs__srv__AddTwoInts_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(bumperbot_msgs__srv__AddTwoInts_Event, request),  // bytes offset in struct
    NULL,  // default value
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__size_function__AddTwoInts_Event__request,  // size() function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddTwoInts_Event__request,  // get_const(index) function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_function__AddTwoInts_Event__request,  // get(index) function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddTwoInts_Event__request,  // fetch(index, &value) function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__assign_function__AddTwoInts_Event__request,  // assign(index, value) function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__resize_function__AddTwoInts_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(bumperbot_msgs__srv__AddTwoInts_Event, response),  // bytes offset in struct
    NULL,  // default value
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__size_function__AddTwoInts_Event__response,  // size() function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddTwoInts_Event__response,  // get_const(index) function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__get_function__AddTwoInts_Event__response,  // get(index) function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddTwoInts_Event__response,  // fetch(index, &value) function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__assign_function__AddTwoInts_Event__response,  // assign(index, value) function pointer
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__resize_function__AddTwoInts_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_members = {
  "bumperbot_msgs__srv",  // message namespace
  "AddTwoInts_Event",  // message name
  3,  // number of fields
  sizeof(bumperbot_msgs__srv__AddTwoInts_Event),
  false,  // has_any_key_member_
  bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_member_array,  // message members
  bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_type_support_handle = {
  0,
  &bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_members,
  get_message_typesupport_handle_function,
  &bumperbot_msgs__srv__AddTwoInts_Event__get_type_hash,
  &bumperbot_msgs__srv__AddTwoInts_Event__get_type_description,
  &bumperbot_msgs__srv__AddTwoInts_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bumperbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Event)() {
  bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Request)();
  bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Response)();
  if (!bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_type_support_handle.typesupport_identifier) {
    bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bumperbot_msgs/srv/detail/add_two_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_service_members = {
  "bumperbot_msgs__srv",  // service namespace
  "AddTwoInts",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_type_support_handle,
  NULL,  // response message
  // bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_type_support_handle
  NULL  // event_message
  // bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_type_support_handle
};


static rosidl_service_type_support_t bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle = {
  0,
  &bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_service_members,
  get_service_typesupport_handle_function,
  &bumperbot_msgs__srv__AddTwoInts_Request__rosidl_typesupport_introspection_c__AddTwoInts_Request_message_type_support_handle,
  &bumperbot_msgs__srv__AddTwoInts_Response__rosidl_typesupport_introspection_c__AddTwoInts_Response_message_type_support_handle,
  &bumperbot_msgs__srv__AddTwoInts_Event__rosidl_typesupport_introspection_c__AddTwoInts_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    bumperbot_msgs,
    srv,
    AddTwoInts
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    bumperbot_msgs,
    srv,
    AddTwoInts
  ),
  &bumperbot_msgs__srv__AddTwoInts__get_type_hash,
  &bumperbot_msgs__srv__AddTwoInts__get_type_description,
  &bumperbot_msgs__srv__AddTwoInts__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bumperbot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts)(void) {
  if (!bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle.typesupport_identifier) {
    bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bumperbot_msgs, srv, AddTwoInts_Event)()->data;
  }

  return &bumperbot_msgs__srv__detail__add_two_ints__rosidl_typesupport_introspection_c__AddTwoInts_service_type_support_handle;
}
