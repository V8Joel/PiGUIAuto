//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl.cpp
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.3
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Wed Aug 30 20:42:25 2023
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
    // Outputs for Function Call SubSystem: '<Root>/Model_Step'
    // SignalConversion generated from: '<S2>/RPM_Raw'
    ClusterControl_B.RPM_Raw = ClusterControl_B.RPM_In;

    // Outport: '<Root>/RPM_Out' incorporates:
    //   Constant: '<S2>/Constant'
    //   Product: '<S2>/Product'

    ClusterControl_Y.RPM_Out = ClusterControl_B.RPM_Raw *
      ClusterControl_P.Constant_Value;

    // End of Outputs for SubSystem: '<Root>/Model_Step'
  }

  // Model step function
  void ClusterControl::RPM_Update()
  {
    // Outputs for Function Call SubSystem: '<Root>/RPM_Intake'
    // SignalConversion generated from: '<S3>/RPM_In' incorporates:
    //   Inport: '<Root>/RPM_In'

    ClusterControl_B.RPM_In = ClusterControl_U.RPM_In;

    // End of Outputs for SubSystem: '<Root>/RPM_Intake'
  }

  // Model initialize function
  void ClusterControl::Initialize()
  {
    // SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Model_Step' incorporates:
    //   SubSystem: '<Root>/Model_Step'

    // SystemInitialize for Outport: '<Root>/RPM_Out' incorporates:
    //   Outport: '<S2>/RPM_Out'

    ClusterControl_Y.RPM_Out = ClusterControl_P.RPM_Out_Y0;

    // End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Model_Step' 

    // SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/RPM_Intake' incorporates:
    //   SubSystem: '<Root>/RPM_Intake'

    // SystemInitialize for SignalConversion generated from: '<S3>/RPM_In' incorporates:
    //   Outport: '<S3>/RPM_Raw'

    ClusterControl_B.RPM_In = ClusterControl_P.RPM_Raw_Y0;

    // End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/RPM_Intake' 
  }

  // Model terminate function
  void ClusterControl::Terminate()
  {
    // (no terminate code required)
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
