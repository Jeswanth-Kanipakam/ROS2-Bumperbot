// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bumperbot_msgs:srv/GetTransform.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bumperbot_msgs/srv/get_transform.hpp"


#ifndef BUMPERBOT_MSGS__SRV__DETAIL__GET_TRANSFORM__TRAITS_HPP_
#define BUMPERBOT_MSGS__SRV__DETAIL__GET_TRANSFORM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bumperbot_msgs/srv/detail/get_transform__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bumperbot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTransform_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: child_frame_id
  {
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTransform_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: child_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTransform_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bumperbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bumperbot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bumperbot_msgs::srv::GetTransform_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bumperbot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bumperbot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bumperbot_msgs::srv::GetTransform_Request & msg)
{
  return bumperbot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bumperbot_msgs::srv::GetTransform_Request>()
{
  return "bumperbot_msgs::srv::GetTransform_Request";
}

template<>
inline const char * name<bumperbot_msgs::srv::GetTransform_Request>()
{
  return "bumperbot_msgs/srv/GetTransform_Request";
}

template<>
struct has_fixed_size<bumperbot_msgs::srv::GetTransform_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bumperbot_msgs::srv::GetTransform_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bumperbot_msgs::srv::GetTransform_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace bumperbot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTransform_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: transform
  {
    out << "transform: ";
    to_flow_style_yaml(msg.transform, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTransform_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform:\n";
    to_block_style_yaml(msg.transform, out, indentation + 2);
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTransform_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bumperbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bumperbot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bumperbot_msgs::srv::GetTransform_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bumperbot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bumperbot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bumperbot_msgs::srv::GetTransform_Response & msg)
{
  return bumperbot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bumperbot_msgs::srv::GetTransform_Response>()
{
  return "bumperbot_msgs::srv::GetTransform_Response";
}

template<>
inline const char * name<bumperbot_msgs::srv::GetTransform_Response>()
{
  return "bumperbot_msgs/srv/GetTransform_Response";
}

template<>
struct has_fixed_size<bumperbot_msgs::srv::GetTransform_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct has_bounded_size<bumperbot_msgs::srv::GetTransform_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct is_message<bumperbot_msgs::srv::GetTransform_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace bumperbot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTransform_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTransform_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTransform_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bumperbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bumperbot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bumperbot_msgs::srv::GetTransform_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  bumperbot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bumperbot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bumperbot_msgs::srv::GetTransform_Event & msg)
{
  return bumperbot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bumperbot_msgs::srv::GetTransform_Event>()
{
  return "bumperbot_msgs::srv::GetTransform_Event";
}

template<>
inline const char * name<bumperbot_msgs::srv::GetTransform_Event>()
{
  return "bumperbot_msgs/srv/GetTransform_Event";
}

template<>
struct has_fixed_size<bumperbot_msgs::srv::GetTransform_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bumperbot_msgs::srv::GetTransform_Event>
  : std::integral_constant<bool, has_bounded_size<bumperbot_msgs::srv::GetTransform_Request>::value && has_bounded_size<bumperbot_msgs::srv::GetTransform_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<bumperbot_msgs::srv::GetTransform_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bumperbot_msgs::srv::GetTransform>()
{
  return "bumperbot_msgs::srv::GetTransform";
}

template<>
inline const char * name<bumperbot_msgs::srv::GetTransform>()
{
  return "bumperbot_msgs/srv/GetTransform";
}

template<>
struct has_fixed_size<bumperbot_msgs::srv::GetTransform>
  : std::integral_constant<
    bool,
    has_fixed_size<bumperbot_msgs::srv::GetTransform_Request>::value &&
    has_fixed_size<bumperbot_msgs::srv::GetTransform_Response>::value
  >
{
};

template<>
struct has_bounded_size<bumperbot_msgs::srv::GetTransform>
  : std::integral_constant<
    bool,
    has_bounded_size<bumperbot_msgs::srv::GetTransform_Request>::value &&
    has_bounded_size<bumperbot_msgs::srv::GetTransform_Response>::value
  >
{
};

template<>
struct is_service<bumperbot_msgs::srv::GetTransform>
  : std::true_type
{
};

template<>
struct is_service_request<bumperbot_msgs::srv::GetTransform_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bumperbot_msgs::srv::GetTransform_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BUMPERBOT_MSGS__SRV__DETAIL__GET_TRANSFORM__TRAITS_HPP_
