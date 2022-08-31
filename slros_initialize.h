#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block acc_settings/ACC_SETTINGS/Subscribe7
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_acc_settings_geometry_msgs_Twist> Sub_acc_settings_653;

// For Block acc_settings/ACC_SETTINGS/Subscribe8
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_acc_settings_geometry_msgs_Twist> Sub_acc_settings_648;

// For Block acc_settings/ACC_SETTINGS/Publish1
extern SimulinkPublisher<std_msgs::Int32, SL_Bus_acc_settings_std_msgs_Int32> Pub_acc_settings_664;

// For Block acc_settings/ACC_SETTINGS/Publish2
extern SimulinkPublisher<std_msgs::Int32, SL_Bus_acc_settings_std_msgs_Int32> Pub_acc_settings_661;

// For Block acc_settings/ACC_SETTINGS/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_acc_settings_655;

// For Block acc_settings/ACC_SETTINGS/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_acc_settings_657;

void slros_node_init(int argc, char** argv);

#endif
