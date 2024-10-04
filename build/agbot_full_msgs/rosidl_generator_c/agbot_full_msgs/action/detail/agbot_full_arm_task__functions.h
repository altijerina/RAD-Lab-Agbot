// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from agbot_full_msgs:action/AgbotFullArmTask.idl
// generated code does not contain a copyright notice

#ifndef AGBOT_FULL_MSGS__ACTION__DETAIL__AGBOT_FULL_ARM_TASK__FUNCTIONS_H_
#define AGBOT_FULL_MSGS__ACTION__DETAIL__AGBOT_FULL_ARM_TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "agbot_full_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.h"

/// Initialize action/AgbotFullArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * agbot_full_msgs__action__AgbotFullArmTask_Goal
 * )) before or use
 * agbot_full_msgs__action__AgbotFullArmTask_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__init(agbot_full_msgs__action__AgbotFullArmTask_Goal * msg);

/// Finalize action/AgbotFullArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Goal__fini(agbot_full_msgs__action__AgbotFullArmTask_Goal * msg);

/// Create action/AgbotFullArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * agbot_full_msgs__action__AgbotFullArmTask_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_Goal *
agbot_full_msgs__action__AgbotFullArmTask_Goal__create();

/// Destroy action/AgbotFullArmTask message.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Goal__destroy(agbot_full_msgs__action__AgbotFullArmTask_Goal * msg);

/// Check for action/AgbotFullArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Goal * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Goal * rhs);

/// Copy a action/AgbotFullArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Goal * input,
  agbot_full_msgs__action__AgbotFullArmTask_Goal * output);

/// Initialize array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * agbot_full_msgs__action__AgbotFullArmTask_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * array, size_t size);

/// Finalize array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * array);

/// Create array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the array and calls
 * agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__create(size_t size);

/// Destroy array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * array);

/// Check for action/AgbotFullArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * rhs);

/// Copy an array of action/AgbotFullArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * output);

/// Initialize action/AgbotFullArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * agbot_full_msgs__action__AgbotFullArmTask_Result
 * )) before or use
 * agbot_full_msgs__action__AgbotFullArmTask_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Result__init(agbot_full_msgs__action__AgbotFullArmTask_Result * msg);

/// Finalize action/AgbotFullArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Result__fini(agbot_full_msgs__action__AgbotFullArmTask_Result * msg);

/// Create action/AgbotFullArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * agbot_full_msgs__action__AgbotFullArmTask_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_Result *
agbot_full_msgs__action__AgbotFullArmTask_Result__create();

/// Destroy action/AgbotFullArmTask message.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Result__destroy(agbot_full_msgs__action__AgbotFullArmTask_Result * msg);

/// Check for action/AgbotFullArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Result__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Result * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Result * rhs);

/// Copy a action/AgbotFullArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Result__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Result * input,
  agbot_full_msgs__action__AgbotFullArmTask_Result * output);

/// Initialize array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * agbot_full_msgs__action__AgbotFullArmTask_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * array, size_t size);

/// Finalize array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * array);

/// Create array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the array and calls
 * agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__create(size_t size);

/// Destroy array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * array);

/// Check for action/AgbotFullArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * rhs);

/// Copy an array of action/AgbotFullArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * output);

/// Initialize action/AgbotFullArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * agbot_full_msgs__action__AgbotFullArmTask_Feedback
 * )) before or use
 * agbot_full_msgs__action__AgbotFullArmTask_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__init(agbot_full_msgs__action__AgbotFullArmTask_Feedback * msg);

/// Finalize action/AgbotFullArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Feedback__fini(agbot_full_msgs__action__AgbotFullArmTask_Feedback * msg);

/// Create action/AgbotFullArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * agbot_full_msgs__action__AgbotFullArmTask_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_Feedback *
agbot_full_msgs__action__AgbotFullArmTask_Feedback__create();

/// Destroy action/AgbotFullArmTask message.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Feedback__destroy(agbot_full_msgs__action__AgbotFullArmTask_Feedback * msg);

/// Check for action/AgbotFullArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Feedback * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Feedback * rhs);

/// Copy a action/AgbotFullArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Feedback * input,
  agbot_full_msgs__action__AgbotFullArmTask_Feedback * output);

/// Initialize array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * agbot_full_msgs__action__AgbotFullArmTask_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * array, size_t size);

/// Finalize array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * array);

/// Create array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the array and calls
 * agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__create(size_t size);

/// Destroy array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * array);

/// Check for action/AgbotFullArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * rhs);

/// Copy an array of action/AgbotFullArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * output);

/// Initialize action/AgbotFullArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request
 * )) before or use
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__init(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * msg);

/// Finalize action/AgbotFullArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * msg);

/// Create action/AgbotFullArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request *
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__create();

/// Destroy action/AgbotFullArmTask message.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__destroy(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * msg);

/// Check for action/AgbotFullArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * lhs, const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * rhs);

/// Copy a action/AgbotFullArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * input,
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * output);

/// Initialize array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * array);

/// Create array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the array and calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * array);

/// Check for action/AgbotFullArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/AgbotFullArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * output);

/// Initialize action/AgbotFullArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response
 * )) before or use
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__init(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * msg);

/// Finalize action/AgbotFullArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__fini(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * msg);

/// Create action/AgbotFullArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response *
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__create();

/// Destroy action/AgbotFullArmTask message.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__destroy(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * msg);

/// Check for action/AgbotFullArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * lhs, const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * rhs);

/// Copy a action/AgbotFullArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * input,
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * output);

/// Initialize array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * array);

/// Create array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the array and calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * array);

/// Check for action/AgbotFullArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/AgbotFullArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * output);

/// Initialize action/AgbotFullArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request
 * )) before or use
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__init(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * msg);

/// Finalize action/AgbotFullArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__fini(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * msg);

/// Create action/AgbotFullArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request *
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__create();

/// Destroy action/AgbotFullArmTask message.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__destroy(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * msg);

/// Check for action/AgbotFullArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * lhs, const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * rhs);

/// Copy a action/AgbotFullArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * input,
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * output);

/// Initialize array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * array);

/// Create array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the array and calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * array);

/// Check for action/AgbotFullArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * rhs);

/// Copy an array of action/AgbotFullArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * output);

/// Initialize action/AgbotFullArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response
 * )) before or use
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__init(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * msg);

/// Finalize action/AgbotFullArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__fini(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * msg);

/// Create action/AgbotFullArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response *
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__create();

/// Destroy action/AgbotFullArmTask message.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__destroy(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * msg);

/// Check for action/AgbotFullArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * lhs, const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * rhs);

/// Copy a action/AgbotFullArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * input,
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * output);

/// Initialize array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * array);

/// Create array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the array and calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * array);

/// Check for action/AgbotFullArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * rhs);

/// Copy an array of action/AgbotFullArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * output);

/// Initialize action/AgbotFullArmTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage
 * )) before or use
 * agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__init(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * msg);

/// Finalize action/AgbotFullArmTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * msg);

/// Create action/AgbotFullArmTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage *
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__create();

/// Destroy action/AgbotFullArmTask message.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__destroy(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * msg);

/// Check for action/AgbotFullArmTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * lhs, const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * rhs);

/// Copy a action/AgbotFullArmTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * input,
  agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * output);

/// Initialize array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * array);

/// Create array of action/AgbotFullArmTask messages.
/**
 * It allocates the memory for the array and calls
 * agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/AgbotFullArmTask messages.
/**
 * It calls
 * agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
void
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * array);

/// Check for action/AgbotFullArmTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/AgbotFullArmTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_agbot_full_msgs
bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AGBOT_FULL_MSGS__ACTION__DETAIL__AGBOT_FULL_ARM_TASK__FUNCTIONS_H_
