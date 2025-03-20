// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from bumperbot_msgs:srv/GetTransform.idl
// generated code does not contain a copyright notice

#include "bumperbot_msgs/srv/detail/get_transform__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_bumperbot_msgs
const rosidl_type_hash_t *
bumperbot_msgs__srv__GetTransform__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x5a, 0xd0, 0x62, 0xba, 0xdc, 0x58, 0xda,
      0xdc, 0x9e, 0xac, 0xde, 0x39, 0x86, 0x6f, 0x66,
      0xc9, 0x60, 0x73, 0x17, 0x4f, 0x6c, 0xca, 0xf4,
      0x23, 0x86, 0x12, 0xd9, 0xe0, 0x1c, 0x81, 0x3f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bumperbot_msgs
const rosidl_type_hash_t *
bumperbot_msgs__srv__GetTransform_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x06, 0x1d, 0x4f, 0x17, 0x5a, 0xee, 0x2c,
      0xed, 0x1c, 0xeb, 0xc0, 0x6f, 0x3f, 0x50, 0x1f,
      0x13, 0x71, 0xfb, 0xec, 0x15, 0xc5, 0xc5, 0xfa,
      0xc5, 0xd4, 0xed, 0x9a, 0x1b, 0x1f, 0xad, 0x72,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bumperbot_msgs
const rosidl_type_hash_t *
bumperbot_msgs__srv__GetTransform_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0xf1, 0xfc, 0x27, 0x18, 0x5b, 0xd6, 0x21,
      0xff, 0x15, 0xbd, 0x4c, 0x52, 0xeb, 0xa8, 0x4d,
      0xae, 0xc0, 0x7e, 0x6b, 0x35, 0xa0, 0x34, 0x54,
      0xd9, 0x54, 0x14, 0xde, 0xc8, 0xf2, 0xc7, 0x9e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bumperbot_msgs
const rosidl_type_hash_t *
bumperbot_msgs__srv__GetTransform_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xb6, 0x45, 0xb1, 0x0d, 0x5f, 0x5b, 0xaf,
      0x05, 0x40, 0xa1, 0x6d, 0x26, 0x3d, 0x17, 0x6f,
      0x96, 0x32, 0x74, 0x7c, 0xa8, 0xef, 0x7c, 0xdc,
      0x4d, 0x60, 0x13, 0xcf, 0x59, 0x10, 0xc8, 0xa6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/transform__functions.h"
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Transform__EXPECTED_HASH = {1, {
    0xbe, 0xb8, 0x3f, 0xbe, 0x69, 0x86, 0x36, 0x35,
    0x14, 0x61, 0xf6, 0xf3, 0x5d, 0x1a, 0xbb, 0x20,
    0x01, 0x0c, 0x43, 0xd5, 0x53, 0x74, 0xd8, 0x1b,
    0xd0, 0x41, 0xf1, 0xba, 0x25, 0x81, 0xfd, 0xdc,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__TransformStamped__EXPECTED_HASH = {1, {
    0x0a, 0x24, 0x1f, 0x87, 0xd0, 0x46, 0x68, 0xd9,
    0x40, 0x99, 0xcb, 0xb5, 0xba, 0x11, 0x69, 0x1d,
    0x5a, 0xd3, 0x2c, 0x2f, 0x29, 0x68, 0x2e, 0x4e,
    0xb5, 0x65, 0x34, 0x24, 0xbd, 0x27, 0x52, 0x06,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char bumperbot_msgs__srv__GetTransform__TYPE_NAME[] = "bumperbot_msgs/srv/GetTransform";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char bumperbot_msgs__srv__GetTransform_Event__TYPE_NAME[] = "bumperbot_msgs/srv/GetTransform_Event";
static char bumperbot_msgs__srv__GetTransform_Request__TYPE_NAME[] = "bumperbot_msgs/srv/GetTransform_Request";
static char bumperbot_msgs__srv__GetTransform_Response__TYPE_NAME[] = "bumperbot_msgs/srv/GetTransform_Response";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Transform__TYPE_NAME[] = "geometry_msgs/msg/Transform";
static char geometry_msgs__msg__TransformStamped__TYPE_NAME[] = "geometry_msgs/msg/TransformStamped";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char bumperbot_msgs__srv__GetTransform__FIELD_NAME__request_message[] = "request_message";
static char bumperbot_msgs__srv__GetTransform__FIELD_NAME__response_message[] = "response_message";
static char bumperbot_msgs__srv__GetTransform__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field bumperbot_msgs__srv__GetTransform__FIELDS[] = {
  {
    {bumperbot_msgs__srv__GetTransform__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bumperbot_msgs__srv__GetTransform_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bumperbot_msgs__srv__GetTransform_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bumperbot_msgs__srv__GetTransform_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bumperbot_msgs__srv__GetTransform__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__TransformStamped__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bumperbot_msgs__srv__GetTransform__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bumperbot_msgs__srv__GetTransform__TYPE_NAME, 31, 31},
      {bumperbot_msgs__srv__GetTransform__FIELDS, 3, 3},
    },
    {bumperbot_msgs__srv__GetTransform__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bumperbot_msgs__srv__GetTransform_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = bumperbot_msgs__srv__GetTransform_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = bumperbot_msgs__srv__GetTransform_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__TransformStamped__EXPECTED_HASH, geometry_msgs__msg__TransformStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__TransformStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bumperbot_msgs__srv__GetTransform_Request__FIELD_NAME__frame_id[] = "frame_id";
static char bumperbot_msgs__srv__GetTransform_Request__FIELD_NAME__child_frame_id[] = "child_frame_id";

static rosidl_runtime_c__type_description__Field bumperbot_msgs__srv__GetTransform_Request__FIELDS[] = {
  {
    {bumperbot_msgs__srv__GetTransform_Request__FIELD_NAME__frame_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform_Request__FIELD_NAME__child_frame_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bumperbot_msgs__srv__GetTransform_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bumperbot_msgs__srv__GetTransform_Request__TYPE_NAME, 39, 39},
      {bumperbot_msgs__srv__GetTransform_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bumperbot_msgs__srv__GetTransform_Response__FIELD_NAME__transform[] = "transform";
static char bumperbot_msgs__srv__GetTransform_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field bumperbot_msgs__srv__GetTransform_Response__FIELDS[] = {
  {
    {bumperbot_msgs__srv__GetTransform_Response__FIELD_NAME__transform, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__TransformStamped__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bumperbot_msgs__srv__GetTransform_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__TransformStamped__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bumperbot_msgs__srv__GetTransform_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bumperbot_msgs__srv__GetTransform_Response__TYPE_NAME, 40, 40},
      {bumperbot_msgs__srv__GetTransform_Response__FIELDS, 2, 2},
    },
    {bumperbot_msgs__srv__GetTransform_Response__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__TransformStamped__EXPECTED_HASH, geometry_msgs__msg__TransformStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__TransformStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bumperbot_msgs__srv__GetTransform_Event__FIELD_NAME__info[] = "info";
static char bumperbot_msgs__srv__GetTransform_Event__FIELD_NAME__request[] = "request";
static char bumperbot_msgs__srv__GetTransform_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field bumperbot_msgs__srv__GetTransform_Event__FIELDS[] = {
  {
    {bumperbot_msgs__srv__GetTransform_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bumperbot_msgs__srv__GetTransform_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bumperbot_msgs__srv__GetTransform_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bumperbot_msgs__srv__GetTransform_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {bumperbot_msgs__srv__GetTransform_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__TransformStamped__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bumperbot_msgs__srv__GetTransform_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bumperbot_msgs__srv__GetTransform_Event__TYPE_NAME, 37, 37},
      {bumperbot_msgs__srv__GetTransform_Event__FIELDS, 3, 3},
    },
    {bumperbot_msgs__srv__GetTransform_Event__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bumperbot_msgs__srv__GetTransform_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = bumperbot_msgs__srv__GetTransform_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__TransformStamped__EXPECTED_HASH, geometry_msgs__msg__TransformStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__TransformStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request \n"
  "string frame_id\n"
  "string child_frame_id\n"
  "---\n"
  "# Response\n"
  "geometry_msgs/TransformStamped transform\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
bumperbot_msgs__srv__GetTransform__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bumperbot_msgs__srv__GetTransform__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 117, 117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bumperbot_msgs__srv__GetTransform_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bumperbot_msgs__srv__GetTransform_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bumperbot_msgs__srv__GetTransform_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bumperbot_msgs__srv__GetTransform_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bumperbot_msgs__srv__GetTransform_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bumperbot_msgs__srv__GetTransform_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bumperbot_msgs__srv__GetTransform__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bumperbot_msgs__srv__GetTransform__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *bumperbot_msgs__srv__GetTransform_Event__get_individual_type_description_source(NULL);
    sources[3] = *bumperbot_msgs__srv__GetTransform_Request__get_individual_type_description_source(NULL);
    sources[4] = *bumperbot_msgs__srv__GetTransform_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__TransformStamped__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[9] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[10] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bumperbot_msgs__srv__GetTransform_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bumperbot_msgs__srv__GetTransform_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bumperbot_msgs__srv__GetTransform_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bumperbot_msgs__srv__GetTransform_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__TransformStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bumperbot_msgs__srv__GetTransform_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bumperbot_msgs__srv__GetTransform_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *bumperbot_msgs__srv__GetTransform_Request__get_individual_type_description_source(NULL);
    sources[3] = *bumperbot_msgs__srv__GetTransform_Response__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__TransformStamped__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[9] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
