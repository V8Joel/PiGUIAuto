//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl.cpp
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.9
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sat Sep  2 15:52:27 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ClusterControl.h"

namespace BenchTest
{
  // Model step function
  void ClusterControl::Model_Step_10Hz()
  {
    // (no output/update code required)
  }

  // Model step function
  void ClusterControl::Model_Step_100Hz()
  {
    // Outputs for Function Call SubSystem: '<Root>/Model_Step1'
    // SignalConversion generated from: '<S3>/RPM_Raw' incorporates:
    //   Inport: '<Root>/RPM_In'

    ClusterControl_B.RPM_In = ClusterControl_U.RPM_In;

    // Outport: '<Root>/RPM_Out' incorporates:
    //   Constant: '<S3>/Constant'
    //   Product: '<S3>/Product'

    ClusterControl_Y.RPM_Out = ClusterControl_B.RPM_In *
      ClusterControl_P.Constant_Value;

    // End of Outputs for SubSystem: '<Root>/Model_Step1'
  }

  // Model initialize function
  void ClusterControl::Initialize()
  {
    // SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Model_Step1' incorporates:
    //   SubSystem: '<Root>/Model_Step1'

    // SystemInitialize for Outport: '<Root>/RPM_Out' incorporates:
    //   Outport: '<S3>/RPM_Out'

    ClusterControl_Y.RPM_Out = ClusterControl_P.RPM_Out_Y0;

    // End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Model_Step1' 
  }

  // Model terminate function
  void ClusterControl::Terminate()
  {
    // (no terminate code required)
  }

  // Root inport: '<Root>/RPM_In' set method
  void ClusterControl::setRPM_In(int32_T localArgInput)
  {
    ClusterControl_U.RPM_In = localArgInput;
  }

  // Root outport: '<Root>/RPM_Out' get method
  int32_T ClusterControl::getRPM_Out() const
  {
    return ClusterControl_Y.RPM_Out;
  }

  // Constructor
  ClusterControl::ClusterControl() :
    ClusterControl_U(),
    ClusterControl_Y(),
    ClusterControl_B(),
    ClusterControl_M()
  {
    // Currently there is no constructor body generated.
  }

  // Destructor
  ClusterControl::~ClusterControl()
  {
    // Currently there is no destructor body generated.
  }

  // Real-Time Model get method
  ClusterControl::RT_MODEL_ClusterControl_T * ClusterControl::getRTM()
  {
    return (&ClusterControl_M);
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
