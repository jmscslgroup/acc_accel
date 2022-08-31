#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "acc_settings";

// For Block acc_settings/ACC_SETTINGS/Subscribe7
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_acc_settings_geometry_msgs_Twist> Sub_acc_settings_653;

// For Block acc_settings/ACC_SETTINGS/Subscribe8
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_acc_settings_geometry_msgs_Twist> Sub_acc_settings_648;

// For Block acc_settings/ACC_SETTINGS/Publish1
SimulinkPublisher<std_msgs::Int32, SL_Bus_acc_settings_std_msgs_Int32> Pub_acc_settings_664;

// For Block acc_settings/ACC_SETTINGS/Publish2
SimulinkPublisher<std_msgs::Int32, SL_Bus_acc_settings_std_msgs_Int32> Pub_acc_settings_661;

// For Block acc_settings/ACC_SETTINGS/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_acc_settings_655;

// For Block acc_settings/ACC_SETTINGS/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_acc_settings_657;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

