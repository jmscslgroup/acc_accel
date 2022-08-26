#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block acc_accel/ACC_ACCEL/Subscribe7
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_acc_accel_geometry_msgs_Twist> Sub_acc_accel_653;

// For Block acc_accel/ACC_ACCEL/Subscribe8
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_acc_accel_geometry_msgs_Twist> Sub_acc_accel_648;

// For Block acc_accel/ACC_ACCEL/Publish1
extern SimulinkPublisher<std_msgs::Int32, SL_Bus_acc_accel_std_msgs_Int32> Pub_acc_accel_664;

// For Block acc_accel/ACC_ACCEL/Publish2
extern SimulinkPublisher<std_msgs::Int32, SL_Bus_acc_accel_std_msgs_Int32> Pub_acc_accel_661;

// For Block acc_accel/ACC_ACCEL/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_acc_accel_655;

// For Block acc_accel/ACC_ACCEL/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_acc_accel_657;

void slros_node_init(int argc, char** argv);

#endif
