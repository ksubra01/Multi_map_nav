// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multi_map_nav:action/NavigateToGoal.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAV__ACTION__DETAIL__NAVIGATE_TO_GOAL__BUILDER_HPP_
#define MULTI_MAP_NAV__ACTION__DETAIL__NAVIGATE_TO_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multi_map_nav/action/detail/navigate_to_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multi_map_nav
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_Goal_target_map
{
public:
  explicit Init_NavigateToGoal_Goal_target_map(::multi_map_nav::action::NavigateToGoal_Goal & msg)
  : msg_(msg)
  {}
  ::multi_map_nav::action::NavigateToGoal_Goal target_map(::multi_map_nav::action::NavigateToGoal_Goal::_target_map_type arg)
  {
    msg_.target_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_Goal msg_;
};

class Init_NavigateToGoal_Goal_target_y
{
public:
  explicit Init_NavigateToGoal_Goal_target_y(::multi_map_nav::action::NavigateToGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigateToGoal_Goal_target_map target_y(::multi_map_nav::action::NavigateToGoal_Goal::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_NavigateToGoal_Goal_target_map(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_Goal msg_;
};

class Init_NavigateToGoal_Goal_target_x
{
public:
  Init_NavigateToGoal_Goal_target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_Goal_target_y target_x(::multi_map_nav::action::NavigateToGoal_Goal::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_NavigateToGoal_Goal_target_y(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_nav::action::NavigateToGoal_Goal>()
{
  return multi_map_nav::action::builder::Init_NavigateToGoal_Goal_target_x();
}

}  // namespace multi_map_nav


namespace multi_map_nav
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_Result_message
{
public:
  explicit Init_NavigateToGoal_Result_message(::multi_map_nav::action::NavigateToGoal_Result & msg)
  : msg_(msg)
  {}
  ::multi_map_nav::action::NavigateToGoal_Result message(::multi_map_nav::action::NavigateToGoal_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_Result msg_;
};

class Init_NavigateToGoal_Result_success
{
public:
  Init_NavigateToGoal_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_Result_message success(::multi_map_nav::action::NavigateToGoal_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_NavigateToGoal_Result_message(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_nav::action::NavigateToGoal_Result>()
{
  return multi_map_nav::action::builder::Init_NavigateToGoal_Result_success();
}

}  // namespace multi_map_nav


namespace multi_map_nav
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_Feedback_feedback_msg
{
public:
  Init_NavigateToGoal_Feedback_feedback_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::multi_map_nav::action::NavigateToGoal_Feedback feedback_msg(::multi_map_nav::action::NavigateToGoal_Feedback::_feedback_msg_type arg)
  {
    msg_.feedback_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_nav::action::NavigateToGoal_Feedback>()
{
  return multi_map_nav::action::builder::Init_NavigateToGoal_Feedback_feedback_msg();
}

}  // namespace multi_map_nav


namespace multi_map_nav
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_SendGoal_Request_goal
{
public:
  explicit Init_NavigateToGoal_SendGoal_Request_goal(::multi_map_nav::action::NavigateToGoal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::multi_map_nav::action::NavigateToGoal_SendGoal_Request goal(::multi_map_nav::action::NavigateToGoal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_SendGoal_Request msg_;
};

class Init_NavigateToGoal_SendGoal_Request_goal_id
{
public:
  Init_NavigateToGoal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_SendGoal_Request_goal goal_id(::multi_map_nav::action::NavigateToGoal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToGoal_SendGoal_Request_goal(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_nav::action::NavigateToGoal_SendGoal_Request>()
{
  return multi_map_nav::action::builder::Init_NavigateToGoal_SendGoal_Request_goal_id();
}

}  // namespace multi_map_nav


namespace multi_map_nav
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateToGoal_SendGoal_Response_stamp(::multi_map_nav::action::NavigateToGoal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::multi_map_nav::action::NavigateToGoal_SendGoal_Response stamp(::multi_map_nav::action::NavigateToGoal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_SendGoal_Response msg_;
};

class Init_NavigateToGoal_SendGoal_Response_accepted
{
public:
  Init_NavigateToGoal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_SendGoal_Response_stamp accepted(::multi_map_nav::action::NavigateToGoal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateToGoal_SendGoal_Response_stamp(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_nav::action::NavigateToGoal_SendGoal_Response>()
{
  return multi_map_nav::action::builder::Init_NavigateToGoal_SendGoal_Response_accepted();
}

}  // namespace multi_map_nav


namespace multi_map_nav
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_GetResult_Request_goal_id
{
public:
  Init_NavigateToGoal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::multi_map_nav::action::NavigateToGoal_GetResult_Request goal_id(::multi_map_nav::action::NavigateToGoal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_nav::action::NavigateToGoal_GetResult_Request>()
{
  return multi_map_nav::action::builder::Init_NavigateToGoal_GetResult_Request_goal_id();
}

}  // namespace multi_map_nav


namespace multi_map_nav
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_GetResult_Response_result
{
public:
  explicit Init_NavigateToGoal_GetResult_Response_result(::multi_map_nav::action::NavigateToGoal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::multi_map_nav::action::NavigateToGoal_GetResult_Response result(::multi_map_nav::action::NavigateToGoal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_GetResult_Response msg_;
};

class Init_NavigateToGoal_GetResult_Response_status
{
public:
  Init_NavigateToGoal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_GetResult_Response_result status(::multi_map_nav::action::NavigateToGoal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateToGoal_GetResult_Response_result(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_nav::action::NavigateToGoal_GetResult_Response>()
{
  return multi_map_nav::action::builder::Init_NavigateToGoal_GetResult_Response_status();
}

}  // namespace multi_map_nav


namespace multi_map_nav
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateToGoal_FeedbackMessage_feedback(::multi_map_nav::action::NavigateToGoal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::multi_map_nav::action::NavigateToGoal_FeedbackMessage feedback(::multi_map_nav::action::NavigateToGoal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_FeedbackMessage msg_;
};

class Init_NavigateToGoal_FeedbackMessage_goal_id
{
public:
  Init_NavigateToGoal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_FeedbackMessage_feedback goal_id(::multi_map_nav::action::NavigateToGoal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToGoal_FeedbackMessage_feedback(msg_);
  }

private:
  ::multi_map_nav::action::NavigateToGoal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_nav::action::NavigateToGoal_FeedbackMessage>()
{
  return multi_map_nav::action::builder::Init_NavigateToGoal_FeedbackMessage_goal_id();
}

}  // namespace multi_map_nav

#endif  // MULTI_MAP_NAV__ACTION__DETAIL__NAVIGATE_TO_GOAL__BUILDER_HPP_
