#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "acc_accel";

// For Block acc_accel/ACC_ACCEL/Subscribe7
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_acc_accel_geometry_msgs_Twist> Sub_acc_accel_653;

// For Block acc_accel/ACC_ACCEL/Subscribe8
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_acc_accel_geometry_msgs_Twist> Sub_acc_accel_648;

// For Block acc_accel/ACC_ACCEL/Publish1
SimulinkPublisher<std_msgs::Int32, SL_Bus_acc_accel_std_msgs_Int32> Pub_acc_accel_664;

// For Block acc_accel/ACC_ACCEL/Publish2
SimulinkPublisher<std_msgs::Int32, SL_Bus_acc_accel_std_msgs_Int32> Pub_acc_accel_661;

// For Block acc_accel/ACC_ACCEL/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_acc_accel_655;

// For Block acc_accel/ACC_ACCEL/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_acc_accel_657;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

