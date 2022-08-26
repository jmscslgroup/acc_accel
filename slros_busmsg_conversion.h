#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Vector3.h>
#include <std_msgs/Int32.h>
#include "acc_accel_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_acc_accel_geometry_msgs_Twist const* busPtr);
void convertToBus(SL_Bus_acc_accel_geometry_msgs_Twist* busPtr, geometry_msgs::Twist const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_acc_accel_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_acc_accel_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(std_msgs::Int32* msgPtr, SL_Bus_acc_accel_std_msgs_Int32 const* busPtr);
void convertToBus(SL_Bus_acc_accel_std_msgs_Int32* busPtr, std_msgs::Int32 const* msgPtr);


#endif
