// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from agbot_msgs:action/AgbotArmTask.idl
// generated code does not contain a copyright notice

#ifndef AGBOT_MSGS__ACTION__DETAIL__AGBOT_ARM_TASK__BUILDER_HPP_
#define AGBOT_MSGS__ACTION__DETAIL__AGBOT_ARM_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace agbot_msgs
{

namespace action
{

namespace builder
{

class Init_AgbotArmTask_Goal_task_number
{
public:
  Init_AgbotArmTask_Goal_task_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::agbot_msgs::action::AgbotArmTask_Goal task_number(::agbot_msgs::action::AgbotArmTask_Goal::_task_number_type arg)
  {
    msg_.task_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::agbot_msgs::action::AgbotArmTask_Goal>()
{
  return agbot_msgs::action::builder::Init_AgbotArmTask_Goal_task_number();
}

}  // namespace agbot_msgs


namespace agbot_msgs
{

namespace action
{

namespace builder
{

class Init_AgbotArmTask_Result_success
{
public:
  Init_AgbotArmTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::agbot_msgs::action::AgbotArmTask_Result success(::agbot_msgs::action::AgbotArmTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::agbot_msgs::action::AgbotArmTask_Result>()
{
  return agbot_msgs::action::builder::Init_AgbotArmTask_Result_success();
}

}  // namespace agbot_msgs


namespace agbot_msgs
{

namespace action
{

namespace builder
{

class Init_AgbotArmTask_Feedback_percentage
{
public:
  Init_AgbotArmTask_Feedback_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::agbot_msgs::action::AgbotArmTask_Feedback percentage(::agbot_msgs::action::AgbotArmTask_Feedback::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::agbot_msgs::action::AgbotArmTask_Feedback>()
{
  return agbot_msgs::action::builder::Init_AgbotArmTask_Feedback_percentage();
}

}  // namespace agbot_msgs


namespace agbot_msgs
{

namespace action
{

namespace builder
{

class Init_AgbotArmTask_SendGoal_Request_goal
{
public:
  explicit Init_AgbotArmTask_SendGoal_Request_goal(::agbot_msgs::action::AgbotArmTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::agbot_msgs::action::AgbotArmTask_SendGoal_Request goal(::agbot_msgs::action::AgbotArmTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_SendGoal_Request msg_;
};

class Init_AgbotArmTask_SendGoal_Request_goal_id
{
public:
  Init_AgbotArmTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgbotArmTask_SendGoal_Request_goal goal_id(::agbot_msgs::action::AgbotArmTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AgbotArmTask_SendGoal_Request_goal(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::agbot_msgs::action::AgbotArmTask_SendGoal_Request>()
{
  return agbot_msgs::action::builder::Init_AgbotArmTask_SendGoal_Request_goal_id();
}

}  // namespace agbot_msgs


namespace agbot_msgs
{

namespace action
{

namespace builder
{

class Init_AgbotArmTask_SendGoal_Response_stamp
{
public:
  explicit Init_AgbotArmTask_SendGoal_Response_stamp(::agbot_msgs::action::AgbotArmTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::agbot_msgs::action::AgbotArmTask_SendGoal_Response stamp(::agbot_msgs::action::AgbotArmTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_SendGoal_Response msg_;
};

class Init_AgbotArmTask_SendGoal_Response_accepted
{
public:
  Init_AgbotArmTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgbotArmTask_SendGoal_Response_stamp accepted(::agbot_msgs::action::AgbotArmTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AgbotArmTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::agbot_msgs::action::AgbotArmTask_SendGoal_Response>()
{
  return agbot_msgs::action::builder::Init_AgbotArmTask_SendGoal_Response_accepted();
}

}  // namespace agbot_msgs


namespace agbot_msgs
{

namespace action
{

namespace builder
{

class Init_AgbotArmTask_GetResult_Request_goal_id
{
public:
  Init_AgbotArmTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::agbot_msgs::action::AgbotArmTask_GetResult_Request goal_id(::agbot_msgs::action::AgbotArmTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::agbot_msgs::action::AgbotArmTask_GetResult_Request>()
{
  return agbot_msgs::action::builder::Init_AgbotArmTask_GetResult_Request_goal_id();
}

}  // namespace agbot_msgs


namespace agbot_msgs
{

namespace action
{

namespace builder
{

class Init_AgbotArmTask_GetResult_Response_result
{
public:
  explicit Init_AgbotArmTask_GetResult_Response_result(::agbot_msgs::action::AgbotArmTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::agbot_msgs::action::AgbotArmTask_GetResult_Response result(::agbot_msgs::action::AgbotArmTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_GetResult_Response msg_;
};

class Init_AgbotArmTask_GetResult_Response_status
{
public:
  Init_AgbotArmTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgbotArmTask_GetResult_Response_result status(::agbot_msgs::action::AgbotArmTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AgbotArmTask_GetResult_Response_result(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::agbot_msgs::action::AgbotArmTask_GetResult_Response>()
{
  return agbot_msgs::action::builder::Init_AgbotArmTask_GetResult_Response_status();
}

}  // namespace agbot_msgs


namespace agbot_msgs
{

namespace action
{

namespace builder
{

class Init_AgbotArmTask_FeedbackMessage_feedback
{
public:
  explicit Init_AgbotArmTask_FeedbackMessage_feedback(::agbot_msgs::action::AgbotArmTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::agbot_msgs::action::AgbotArmTask_FeedbackMessage feedback(::agbot_msgs::action::AgbotArmTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_FeedbackMessage msg_;
};

class Init_AgbotArmTask_FeedbackMessage_goal_id
{
public:
  Init_AgbotArmTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgbotArmTask_FeedbackMessage_feedback goal_id(::agbot_msgs::action::AgbotArmTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AgbotArmTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::agbot_msgs::action::AgbotArmTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::agbot_msgs::action::AgbotArmTask_FeedbackMessage>()
{
  return agbot_msgs::action::builder::Init_AgbotArmTask_FeedbackMessage_goal_id();
}

}  // namespace agbot_msgs

#endif  // AGBOT_MSGS__ACTION__DETAIL__AGBOT_ARM_TASK__BUILDER_HPP_
