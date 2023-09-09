//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl.cpp
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.17
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sat Sep  9 16:59:04 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ClusterControl.h"
#include <cmath>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtwtypes.h"
#include "Single_Degree_of_Freedom.h"

namespace BenchTest
{
  // Output and update for Simulink Function: '<Root>/Model_Step10'
  void ClusterControl::Model_Step_10Hz()
  {
  }
}

namespace BenchTest
{
  // Model step function
  void ClusterControl::Model_Step_100Hz()
  {
    real_T u;
    real_T v;

    // Outputs for Atomic SubSystem: '<Root>/Model_Step100'
    // DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
    //   Inport: '<Root>/RPM_In'

    ClusterControl_B.Input = ClusterControl_U.RPM_In;

    // ModelReference: '<S3>/Model'
    ModelMDLOBJ1.step(&ClusterControl_B.Input, &ClusterControl_B.Displacement);

    // DataTypeConversion: '<S3>/Data Type Conversion'
    u = ClusterControl_B.Displacement;
    v = std::abs(u);
    if (v < 4.503599627370496E+15) {
      if (v >= 0.5) {
        u = std::floor(u + 0.5);
      } else {
        u *= 0.0;
      }
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    // Outport: '<Root>/RPM_Out' incorporates:
    //   DataTypeConversion: '<S3>/Data Type Conversion'

    ClusterControl_Y.RPM_Out = u < 0.0 ? -static_cast<int32_T>
      (static_cast<uint32_T>(-u)) : static_cast<int32_T>(static_cast<uint32_T>(u));

    // End of Outputs for SubSystem: '<Root>/Model_Step100'
  }

  // Model initialize function
  void ClusterControl::Initialize()
  {
    // Registration code

    // initialize non-finites
    rt_InitInfAndNaN(sizeof(real_T));

    // Model Initialize function for ModelReference Block: '<S3>/Model'

    // Set error status pointer for ModelReference Block: '<S3>/Model'
    ModelMDLOBJ1.setErrorStatusPointer(rtmGetErrorStatusPointer
      ((&ClusterControl_M)));

    // SystemInitialize for Atomic SubSystem: '<Root>/Model_Step100'

    // SystemInitialize for ModelReference: '<S3>/Model'
    ModelMDLOBJ1.init();

    // End of SystemInitialize for SubSystem: '<Root>/Model_Step100'
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
