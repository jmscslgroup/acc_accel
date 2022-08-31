//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: acc_settings.cpp
//
// Code generated for Simulink model 'acc_settings'.
//
// Model version                  : 3.241
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Wed Aug 31 15:13:51 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "acc_settings.h"
#include "acc_settings_private.h"

// Block signals (default storage)
B_acc_settings_T acc_settings_B;

// Block states (default storage)
DW_acc_settings_T acc_settings_DW;

// Real-time model
RT_MODEL_acc_settings_T acc_settings_M_ = RT_MODEL_acc_settings_T();
RT_MODEL_acc_settings_T *const acc_settings_M = &acc_settings_M_;

// Model step function
void acc_settings_step(void)
{
  SL_Bus_acc_settings_std_msgs_Int32 rtb_BusAssignment1;
  SL_Bus_acc_settings_std_msgs_Int32 rtb_BusAssignment2;
  real_T rtb_Leader1;
  real_T value;
  real_T value_0;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<S1>/Subscribe8'
  // MATLABSystem: '<S8>/SourceBlock' incorporates:
  //   Inport: '<S10>/In1'

  b_varargout_1 = Sub_acc_settings_648.getLatestMessage
    (&acc_settings_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S10>/Enable'

  if (b_varargout_1) {
    acc_settings_B.In1 = acc_settings_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe8'

  // Outputs for Atomic SubSystem: '<S1>/Subscribe7'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S9>/In1'

  b_varargout_1 = Sub_acc_settings_653.getLatestMessage
    (&acc_settings_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S9>/Enable'

  if (b_varargout_1) {
    acc_settings_B.In1_k = acc_settings_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe7'

  // Sum: '<S1>/Leader1'
  rtb_Leader1 = acc_settings_B.In1_k.Linear.Z + acc_settings_B.In1.Linear.X;

  // MATLABSystem: '<S1>/Get Parameter'
  ParamGet_acc_settings_655.get_parameter(&value);

  // MATLABSystem: '<S1>/Get Parameter1'
  ParamGet_acc_settings_657.get_parameter(&value_0);

  // MATLAB Function: '<S1>/MATLAB Function' incorporates:
  //   MATLABSystem: '<S1>/Get Parameter'
  //   MATLABSystem: '<S1>/Get Parameter1'

  if (value == -1.0) {
    if (rtb_Leader1 < 8.9408) {
      value = rtb_Leader1;
      if (fabs(acc_settings_B.In1.Linear.X - rtb_Leader1) < 2.0) {
        // BusAssignment: '<S1>/Bus Assignment2'
        rtb_BusAssignment2.Data = 2;
      } else if (acc_settings_B.In1.Linear.X > rtb_Leader1) {
        // BusAssignment: '<S1>/Bus Assignment2'
        rtb_BusAssignment2.Data = 1;
      } else {
        // BusAssignment: '<S1>/Bus Assignment2'
        rtb_BusAssignment2.Data = 3;
      }
    } else if (acc_settings_B.In1.Linear.X > rtb_Leader1 + 2.0) {
      // BusAssignment: '<S1>/Bus Assignment2'
      rtb_BusAssignment2.Data = 1;
      value = rtb_Leader1;
    } else {
      // BusAssignment: '<S1>/Bus Assignment2'
      rtb_BusAssignment2.Data = 3;
      value = (acc_settings_B.In1.Linear.X + rtb_Leader1) / 2.0;
    }
  } else {
    if (value < rtb_Leader1) {
      value = value * 0.6 + rtb_Leader1 * 0.4;
    }

    if (value_0 != 0.0) {
      // BusAssignment: '<S1>/Bus Assignment2'
      rtb_BusAssignment2.Data = 1;
    } else {
      // BusAssignment: '<S1>/Bus Assignment2'
      rtb_BusAssignment2.Data = 3;
    }
  }

  if (!(value > 8.9408)) {
    value = 8.9408;
  }

  // End of MATLAB Function: '<S1>/MATLAB Function'

  // DataTypeConversion: '<S1>/Cast1'
  rtb_Leader1 = floor(value);
  if (rtIsInf(rtb_Leader1)) {
    // BusAssignment: '<S1>/Bus Assignment1'
    rtb_BusAssignment1.Data = 0;
  } else {
    // BusAssignment: '<S1>/Bus Assignment1'
    rtb_BusAssignment1.Data = static_cast<int32_T>(static_cast<uint32_T>(fmod
      (rtb_Leader1, 4.294967296E+9)));
  }

  // End of DataTypeConversion: '<S1>/Cast1'

  // Outputs for Atomic SubSystem: '<S1>/Publish1'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_acc_settings_664.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<S1>/Publish1'

  // Outputs for Atomic SubSystem: '<S1>/Publish2'
  // MATLABSystem: '<S6>/SinkBlock'
  Pub_acc_settings_661.publish(&rtb_BusAssignment2);

  // End of Outputs for SubSystem: '<S1>/Publish2'
}

// Model initialize function
void acc_settings_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_1[14];
    char_T b_zeroDelimName[13];
    char_T b_zeroDelimTopic_2[12];
    char_T b_zeroDelimTopic_0[8];
    char_T b_zeroDelimTopic[4];
    static const char_T tmp[7] = { 'r', 'e', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[13] = { 's', 'p', 'e', 'e', 'd', '_', 's', 'e',
      't', 't', 'i', 'n', 'g' };

    static const char_T tmp_1[11] = { 'g', 'a', 'p', '_', 's', 'e', 't', 't',
      'i', 'n', 'g' };

    static const char_T tmp_2[12] = { 't', 'a', 'r', 'g', 'e', 't', '_', 's',
      'p', 'e', 'e', 'd' };

    static const char_T tmp_3[11] = { 'm', 'a', 'x', '_', 'h', 'e', 'a', 'd',
      'w', 'a', 'y' };

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe8'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S10>/Out1' incorporates:
    //   Inport: '<S10>/In1'

    acc_settings_B.In1 = acc_settings_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

    // Start for MATLABSystem: '<S8>/SourceBlock'
    acc_settings_DW.obj_k.matlabCodegenIsDeleted = false;
    acc_settings_DW.obj_k.isInitialized = 1;
    b_zeroDelimTopic[0] = 'v';
    b_zeroDelimTopic[1] = 'e';
    b_zeroDelimTopic[2] = 'l';
    b_zeroDelimTopic[3] = '\x00';
    Sub_acc_settings_648.createSubscriber(&b_zeroDelimTopic[0], 1);
    acc_settings_DW.obj_k.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S1>/Subscribe8'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe7'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S9>/Out1' incorporates:
    //   Inport: '<S9>/In1'

    acc_settings_B.In1_k = acc_settings_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    acc_settings_DW.obj_ks.matlabCodegenIsDeleted = false;
    acc_settings_DW.obj_ks.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_0[i] = tmp[i];
    }

    b_zeroDelimTopic_0[7] = '\x00';
    Sub_acc_settings_653.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    acc_settings_DW.obj_ks.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe7'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish1'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    acc_settings_DW.obj_l.matlabCodegenIsDeleted = false;
    acc_settings_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      b_zeroDelimTopic_1[i] = tmp_0[i];
    }

    b_zeroDelimTopic_1[13] = '\x00';
    Pub_acc_settings_664.createPublisher(&b_zeroDelimTopic_1[0], 1);
    acc_settings_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish2'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    acc_settings_DW.obj_d.matlabCodegenIsDeleted = false;
    acc_settings_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_2[i] = tmp_1[i];
    }

    b_zeroDelimTopic_2[11] = '\x00';
    Pub_acc_settings_661.createPublisher(&b_zeroDelimTopic_2[0], 1);
    acc_settings_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish2'

    // Start for MATLABSystem: '<S1>/Get Parameter'
    acc_settings_DW.obj_a.matlabCodegenIsDeleted = false;
    acc_settings_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 12; i++) {
      b_zeroDelimName[i] = tmp_2[i];
    }

    b_zeroDelimName[12] = '\x00';
    ParamGet_acc_settings_655.initialize(&b_zeroDelimName[0]);
    ParamGet_acc_settings_655.initialize_error_codes(0, 1, 2, 3);
    ParamGet_acc_settings_655.set_initial_value(25.0);
    acc_settings_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter'

    // Start for MATLABSystem: '<S1>/Get Parameter1'
    acc_settings_DW.obj.matlabCodegenIsDeleted = false;
    acc_settings_DW.obj.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_2[i] = tmp_3[i];
    }

    b_zeroDelimTopic_2[11] = '\x00';
    ParamGet_acc_settings_657.initialize(&b_zeroDelimTopic_2[0]);
    ParamGet_acc_settings_657.initialize_error_codes(0, 1, 2, 3);
    ParamGet_acc_settings_657.set_initial_value(50.0);
    acc_settings_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter1'
  }
}

// Model terminate function
void acc_settings_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S1>/Subscribe8'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!acc_settings_DW.obj_k.matlabCodegenIsDeleted) {
    acc_settings_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe8'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe7'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!acc_settings_DW.obj_ks.matlabCodegenIsDeleted) {
    acc_settings_DW.obj_ks.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe7'

  // Terminate for MATLABSystem: '<S1>/Get Parameter'
  if (!acc_settings_DW.obj_a.matlabCodegenIsDeleted) {
    acc_settings_DW.obj_a.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S1>/Get Parameter'

  // Terminate for MATLABSystem: '<S1>/Get Parameter1'
  if (!acc_settings_DW.obj.matlabCodegenIsDeleted) {
    acc_settings_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S1>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<S1>/Publish1'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  if (!acc_settings_DW.obj_l.matlabCodegenIsDeleted) {
    acc_settings_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish1'

  // Terminate for Atomic SubSystem: '<S1>/Publish2'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  if (!acc_settings_DW.obj_d.matlabCodegenIsDeleted) {
    acc_settings_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish2'
}

//
// File trailer for generated code.
//
// [EOF]
//
