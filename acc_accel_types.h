//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: acc_accel_types.h
//
// Code generated for Simulink model 'acc_accel'.
//
// Model version                  : 3.239
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Wed Aug 24 17:39:00 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_acc_accel_types_h_
#define RTW_HEADER_acc_accel_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_acc_accel_std_msgs_Int32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_acc_accel_std_msgs_Int32_

// MsgType=std_msgs/Int32
struct SL_Bus_acc_accel_std_msgs_Int32
{
  int32_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_acc_accel_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_acc_accel_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_acc_accel_geometry_msgs_Vector3
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_acc_accel_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_acc_accel_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
struct SL_Bus_acc_accel_geometry_msgs_Twist
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_acc_accel_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_acc_accel_geometry_msgs_Vector3 Angular;
};

#endif

#ifndef struct_f_robotics_slcore_internal_bl_T
#define struct_f_robotics_slcore_internal_bl_T

struct f_robotics_slcore_internal_bl_T
{
  int32_T __dummy;
};

#endif                                // struct_f_robotics_slcore_internal_bl_T

#ifndef struct_ros_slros_internal_block_GetP_T
#define struct_ros_slros_internal_block_GetP_T

struct ros_slros_internal_block_GetP_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                // struct_ros_slros_internal_block_GetP_T

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_S_T

// Parameters (default storage)
typedef struct P_acc_accel_T_ P_acc_accel_T;

// Forward declaration for rtModel
typedef struct tag_RTM_acc_accel_T RT_MODEL_acc_accel_T;

#endif                                 // RTW_HEADER_acc_accel_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
