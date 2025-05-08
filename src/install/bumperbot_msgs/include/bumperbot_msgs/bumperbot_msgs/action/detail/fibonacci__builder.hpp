// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bumperbot_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bumperbot_msgs/action/fibonacci.hpp"


#ifndef BUMPERBOT_MSGS__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
#define BUMPERBOT_MSGS__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bumperbot_msgs/action/detail/fibonacci__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Goal_order
{
public:
  Init_Fibonacci_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bumperbot_msgs::action::Fibonacci_Goal order(::bumperbot_msgs::action::Fibonacci_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_Goal>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_Goal_order();
}

}  // namespace bumperbot_msgs


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Result_sequence
{
public:
  Init_Fibonacci_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bumperbot_msgs::action::Fibonacci_Result sequence(::bumperbot_msgs::action::Fibonacci_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_Result>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_Result_sequence();
}

}  // namespace bumperbot_msgs


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Feedback_partial_sequence
{
public:
  Init_Fibonacci_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bumperbot_msgs::action::Fibonacci_Feedback partial_sequence(::bumperbot_msgs::action::Fibonacci_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_Feedback>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_Feedback_partial_sequence();
}

}  // namespace bumperbot_msgs


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Request_goal
{
public:
  explicit Init_Fibonacci_SendGoal_Request_goal(::bumperbot_msgs::action::Fibonacci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Request goal(::bumperbot_msgs::action::Fibonacci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Request msg_;
};

class Init_Fibonacci_SendGoal_Request_goal_id
{
public:
  Init_Fibonacci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Request_goal goal_id(::bumperbot_msgs::action::Fibonacci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_SendGoal_Request_goal(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_SendGoal_Request>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_SendGoal_Request_goal_id();
}

}  // namespace bumperbot_msgs


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Response_stamp
{
public:
  explicit Init_Fibonacci_SendGoal_Response_stamp(::bumperbot_msgs::action::Fibonacci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Response stamp(::bumperbot_msgs::action::Fibonacci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Response msg_;
};

class Init_Fibonacci_SendGoal_Response_accepted
{
public:
  Init_Fibonacci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Response_stamp accepted(::bumperbot_msgs::action::Fibonacci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Fibonacci_SendGoal_Response_stamp(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_SendGoal_Response>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_SendGoal_Response_accepted();
}

}  // namespace bumperbot_msgs


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Event_response
{
public:
  explicit Init_Fibonacci_SendGoal_Event_response(::bumperbot_msgs::action::Fibonacci_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Event response(::bumperbot_msgs::action::Fibonacci_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Event msg_;
};

class Init_Fibonacci_SendGoal_Event_request
{
public:
  explicit Init_Fibonacci_SendGoal_Event_request(::bumperbot_msgs::action::Fibonacci_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Fibonacci_SendGoal_Event_response request(::bumperbot_msgs::action::Fibonacci_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Fibonacci_SendGoal_Event_response(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Event msg_;
};

class Init_Fibonacci_SendGoal_Event_info
{
public:
  Init_Fibonacci_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Event_request info(::bumperbot_msgs::action::Fibonacci_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Fibonacci_SendGoal_Event_request(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_SendGoal_Event>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_SendGoal_Event_info();
}

}  // namespace bumperbot_msgs


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Request_goal_id
{
public:
  Init_Fibonacci_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bumperbot_msgs::action::Fibonacci_GetResult_Request goal_id(::bumperbot_msgs::action::Fibonacci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_GetResult_Request>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_GetResult_Request_goal_id();
}

}  // namespace bumperbot_msgs


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Response_result
{
public:
  explicit Init_Fibonacci_GetResult_Response_result(::bumperbot_msgs::action::Fibonacci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::bumperbot_msgs::action::Fibonacci_GetResult_Response result(::bumperbot_msgs::action::Fibonacci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_GetResult_Response msg_;
};

class Init_Fibonacci_GetResult_Response_status
{
public:
  Init_Fibonacci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Response_result status(::bumperbot_msgs::action::Fibonacci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Fibonacci_GetResult_Response_result(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_GetResult_Response>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_GetResult_Response_status();
}

}  // namespace bumperbot_msgs


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Event_response
{
public:
  explicit Init_Fibonacci_GetResult_Event_response(::bumperbot_msgs::action::Fibonacci_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::bumperbot_msgs::action::Fibonacci_GetResult_Event response(::bumperbot_msgs::action::Fibonacci_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_GetResult_Event msg_;
};

class Init_Fibonacci_GetResult_Event_request
{
public:
  explicit Init_Fibonacci_GetResult_Event_request(::bumperbot_msgs::action::Fibonacci_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Fibonacci_GetResult_Event_response request(::bumperbot_msgs::action::Fibonacci_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Fibonacci_GetResult_Event_response(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_GetResult_Event msg_;
};

class Init_Fibonacci_GetResult_Event_info
{
public:
  Init_Fibonacci_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Event_request info(::bumperbot_msgs::action::Fibonacci_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Fibonacci_GetResult_Event_request(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_GetResult_Event>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_GetResult_Event_info();
}

}  // namespace bumperbot_msgs


namespace bumperbot_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_FeedbackMessage_feedback
{
public:
  explicit Init_Fibonacci_FeedbackMessage_feedback(::bumperbot_msgs::action::Fibonacci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::bumperbot_msgs::action::Fibonacci_FeedbackMessage feedback(::bumperbot_msgs::action::Fibonacci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_FeedbackMessage msg_;
};

class Init_Fibonacci_FeedbackMessage_goal_id
{
public:
  Init_Fibonacci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_FeedbackMessage_feedback goal_id(::bumperbot_msgs::action::Fibonacci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_FeedbackMessage_feedback(msg_);
  }

private:
  ::bumperbot_msgs::action::Fibonacci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bumperbot_msgs::action::Fibonacci_FeedbackMessage>()
{
  return bumperbot_msgs::action::builder::Init_Fibonacci_FeedbackMessage_goal_id();
}

}  // namespace bumperbot_msgs

#endif  // BUMPERBOT_MSGS__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
