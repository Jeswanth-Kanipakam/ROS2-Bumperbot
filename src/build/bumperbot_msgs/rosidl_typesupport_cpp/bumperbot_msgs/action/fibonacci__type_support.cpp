// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from bumperbot_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "bumperbot_msgs/action/detail/fibonacci__functions.h"
#include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Goal_type_support_ids_t;

static const _Fibonacci_Goal_type_support_ids_t _Fibonacci_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Goal_type_support_symbol_names_t _Fibonacci_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_Goal)),
  }
};

typedef struct _Fibonacci_Goal_type_support_data_t
{
  void * data[2];
} _Fibonacci_Goal_type_support_data_t;

static _Fibonacci_Goal_type_support_data_t _Fibonacci_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Goal_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_Goal__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_Goal__get_type_description,
  &bumperbot_msgs__action__Fibonacci_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_Goal>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_Goal)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Result_type_support_ids_t;

static const _Fibonacci_Result_type_support_ids_t _Fibonacci_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Result_type_support_symbol_names_t _Fibonacci_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_Result)),
  }
};

typedef struct _Fibonacci_Result_type_support_data_t
{
  void * data[2];
} _Fibonacci_Result_type_support_data_t;

static _Fibonacci_Result_type_support_data_t _Fibonacci_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Result_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_Result__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_Result__get_type_description,
  &bumperbot_msgs__action__Fibonacci_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_Result>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_Result)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Feedback_type_support_ids_t;

static const _Fibonacci_Feedback_type_support_ids_t _Fibonacci_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Feedback_type_support_symbol_names_t _Fibonacci_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_Feedback)),
  }
};

typedef struct _Fibonacci_Feedback_type_support_data_t
{
  void * data[2];
} _Fibonacci_Feedback_type_support_data_t;

static _Fibonacci_Feedback_type_support_data_t _Fibonacci_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Feedback_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_Feedback__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_Feedback__get_type_description,
  &bumperbot_msgs__action__Fibonacci_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_Feedback>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_Feedback)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_Request_type_support_ids_t;

static const _Fibonacci_SendGoal_Request_type_support_ids_t _Fibonacci_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Request_type_support_symbol_names_t _Fibonacci_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_SendGoal_Request)),
  }
};

typedef struct _Fibonacci_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_Request_type_support_data_t;

static _Fibonacci_SendGoal_Request_type_support_data_t _Fibonacci_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_Request_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_SendGoal_Request__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_SendGoal_Request__get_type_description,
  &bumperbot_msgs__action__Fibonacci_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal_Request>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_SendGoal_Request)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_Response_type_support_ids_t;

static const _Fibonacci_SendGoal_Response_type_support_ids_t _Fibonacci_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Response_type_support_symbol_names_t _Fibonacci_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_SendGoal_Response)),
  }
};

typedef struct _Fibonacci_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_Response_type_support_data_t;

static _Fibonacci_SendGoal_Response_type_support_data_t _Fibonacci_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_Response_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_SendGoal_Response__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_SendGoal_Response__get_type_description,
  &bumperbot_msgs__action__Fibonacci_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal_Response>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_SendGoal_Response)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_Event_type_support_ids_t;

static const _Fibonacci_SendGoal_Event_type_support_ids_t _Fibonacci_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Event_type_support_symbol_names_t _Fibonacci_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_SendGoal_Event)),
  }
};

typedef struct _Fibonacci_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_Event_type_support_data_t;

static _Fibonacci_SendGoal_Event_type_support_data_t _Fibonacci_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_Event_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_SendGoal_Event__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_SendGoal_Event__get_type_description,
  &bumperbot_msgs__action__Fibonacci_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal_Event>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_SendGoal_Event)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_type_support_ids_t;

static const _Fibonacci_SendGoal_type_support_ids_t _Fibonacci_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_type_support_symbol_names_t _Fibonacci_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_SendGoal)),
  }
};

typedef struct _Fibonacci_SendGoal_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_type_support_data_t;

static _Fibonacci_SendGoal_type_support_data_t _Fibonacci_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_service_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Fibonacci_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<bumperbot_msgs::action::Fibonacci_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<bumperbot_msgs::action::Fibonacci_SendGoal>,
  &bumperbot_msgs__action__Fibonacci_SendGoal__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_SendGoal__get_type_description,
  &bumperbot_msgs__action__Fibonacci_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<bumperbot_msgs::action::Fibonacci_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_Request_type_support_ids_t;

static const _Fibonacci_GetResult_Request_type_support_ids_t _Fibonacci_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Request_type_support_symbol_names_t _Fibonacci_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_GetResult_Request)),
  }
};

typedef struct _Fibonacci_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_Request_type_support_data_t;

static _Fibonacci_GetResult_Request_type_support_data_t _Fibonacci_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_Request_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_GetResult_Request__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_GetResult_Request__get_type_description,
  &bumperbot_msgs__action__Fibonacci_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult_Request>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_GetResult_Request)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_Response_type_support_ids_t;

static const _Fibonacci_GetResult_Response_type_support_ids_t _Fibonacci_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Response_type_support_symbol_names_t _Fibonacci_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_GetResult_Response)),
  }
};

typedef struct _Fibonacci_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_Response_type_support_data_t;

static _Fibonacci_GetResult_Response_type_support_data_t _Fibonacci_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_Response_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_GetResult_Response__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_GetResult_Response__get_type_description,
  &bumperbot_msgs__action__Fibonacci_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult_Response>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_GetResult_Response)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_Event_type_support_ids_t;

static const _Fibonacci_GetResult_Event_type_support_ids_t _Fibonacci_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Event_type_support_symbol_names_t _Fibonacci_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_GetResult_Event)),
  }
};

typedef struct _Fibonacci_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_Event_type_support_data_t;

static _Fibonacci_GetResult_Event_type_support_data_t _Fibonacci_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_Event_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_GetResult_Event__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_GetResult_Event__get_type_description,
  &bumperbot_msgs__action__Fibonacci_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult_Event>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_GetResult_Event)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_type_support_ids_t;

static const _Fibonacci_GetResult_type_support_ids_t _Fibonacci_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_type_support_symbol_names_t _Fibonacci_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_GetResult)),
  }
};

typedef struct _Fibonacci_GetResult_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_type_support_data_t;

static _Fibonacci_GetResult_type_support_data_t _Fibonacci_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_service_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Fibonacci_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<bumperbot_msgs::action::Fibonacci_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<bumperbot_msgs::action::Fibonacci_GetResult>,
  &bumperbot_msgs__action__Fibonacci_GetResult__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_GetResult__get_type_description,
  &bumperbot_msgs__action__Fibonacci_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<bumperbot_msgs::action::Fibonacci_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_FeedbackMessage_type_support_ids_t;

static const _Fibonacci_FeedbackMessage_type_support_ids_t _Fibonacci_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_FeedbackMessage_type_support_symbol_names_t _Fibonacci_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bumperbot_msgs, action, Fibonacci_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, action, Fibonacci_FeedbackMessage)),
  }
};

typedef struct _Fibonacci_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Fibonacci_FeedbackMessage_type_support_data_t;

static _Fibonacci_FeedbackMessage_type_support_data_t _Fibonacci_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_FeedbackMessage_message_typesupport_map = {
  2,
  "bumperbot_msgs",
  &_Fibonacci_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bumperbot_msgs__action__Fibonacci_FeedbackMessage__get_type_hash,
  &bumperbot_msgs__action__Fibonacci_FeedbackMessage__get_type_description,
  &bumperbot_msgs__action__Fibonacci_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_FeedbackMessage>()
{
  return &::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci_FeedbackMessage)() {
  return get_message_type_support_handle<bumperbot_msgs::action::Fibonacci_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace bumperbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Fibonacci_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &bumperbot_msgs__action__Fibonacci__get_type_hash,
  &bumperbot_msgs__action__Fibonacci__get_type_description,
  &bumperbot_msgs__action__Fibonacci__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace bumperbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<bumperbot_msgs::action::Fibonacci>()
{
  using ::bumperbot_msgs::action::rosidl_typesupport_cpp::Fibonacci_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Fibonacci_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::bumperbot_msgs::action::Fibonacci::Impl::SendGoalService>();
  Fibonacci_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::bumperbot_msgs::action::Fibonacci::Impl::GetResultService>();
  Fibonacci_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::bumperbot_msgs::action::Fibonacci::Impl::CancelGoalService>();
  Fibonacci_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::bumperbot_msgs::action::Fibonacci::Impl::FeedbackMessage>();
  Fibonacci_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::bumperbot_msgs::action::Fibonacci::Impl::GoalStatusMessage>();
  return &Fibonacci_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, bumperbot_msgs, action, Fibonacci)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<bumperbot_msgs::action::Fibonacci>();
}

#ifdef __cplusplus
}
#endif
