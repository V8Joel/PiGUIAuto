//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl.cpp
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.12
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Fri Sep 15 22:06:10 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ClusterControl.h"
#include "rtwtypes.h"
#include "ClusterControl_private.h"

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
    // Outputs for Atomic SubSystem: '<Root>/Model_Step100'
    // Outputs for Atomic SubSystem: '<S3>/SDOF'
    // DiscreteIntegrator: '<S5>/X''
    ClusterControl_B.Velocity = ClusterControl_DW.X_DSTATE;

    // Product: '<S5>/Cx'' incorporates:
    //   Constant: '<S5>/C'

    ClusterControl_B.Cx = ClusterControl_B.Velocity * ClusterControl_P.C_Value;

    // Outport: '<Root>/RPM_Out' incorporates:
    //   DiscreteIntegrator: '<S5>/X'

    ClusterControl_Y.RPM_Out = ClusterControl_DW.X_DSTATE_c;

    // Product: '<S5>/Kx' incorporates:
    //   Constant: '<S5>/K'
    //   Outport: '<Root>/RPM_Out'

    ClusterControl_B.Kx = ClusterControl_Y.RPM_Out * ClusterControl_P.K_Value;

    // WeightedSampleTime: '<S6>/TSamp' incorporates:
    //   Inport: '<Root>/RPM_In'
    //
    //  About '<S6>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )
    //   Multiplication by K = weightedTsampQuantized is being
    //   done implicitly by changing the scaling of the input signal.
    //   No work needs to be done here.  Downstream blocks may need
    //   to do work to handle the scaling of the output; this happens
    //   automatically.

    ClusterControl_B.TSamp = ClusterControl_U.RPM_In;

    // UnitDelay: '<S6>/UD'
    //
    //  Block description for '<S6>/UD':
    //
    //   Store in Global RAM

    ClusterControl_B.Uk1 = ClusterControl_DW.UD_DSTATE;

    // Sum: '<S6>/Diff' incorporates:
    //   UnitDelay: '<S6>/UD'
    //   WeightedSampleTime: '<S6>/TSamp'
    //
    //  About '<S6>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )
    //   Multiplication by K = weightedTsampQuantized is being
    //   done implicitly by changing the scaling of the input signal.
    //   No work needs to be done here.  Downstream blocks may need
    //   to do work to handle the scaling of the output; this happens
    //   automatically.
    //
    //  Block description for '<S6>/Diff':
    //
    //   Add in CPU
    //
    //  Block description for '<S6>/UD':
    //
    //   Store in Global RAM

    ClusterControl_B.Diff = ClusterControl_B.TSamp - ClusterControl_B.Uk1;

    // Product: '<S5>/Cu'' incorporates:
    //   Constant: '<S5>/C'
    //   Sum: '<S6>/Diff'
    //
    //  Block description for '<S6>/Diff':
    //
    //   Add in CPU

    ClusterControl_B.Cu = static_cast<real_T>(ClusterControl_B.Diff) * 100.0 *
      ClusterControl_P.C_Value;

    // Product: '<S5>/Ku' incorporates:
    //   Constant: '<S5>/K'
    //   Inport: '<Root>/RPM_In'

    ClusterControl_B.Ku = static_cast<real_T>(ClusterControl_U.RPM_In) *
      ClusterControl_P.K_Value;

    // Sum: '<S5>/Add'
    ClusterControl_B.Add = ((ClusterControl_B.Cu - ClusterControl_B.Cx) -
      ClusterControl_B.Kx) + ClusterControl_B.Ku;

    // Product: '<S5>/Divide' incorporates:
    //   Constant: '<S5>/m'

    ClusterControl_B.Acceleration = ClusterControl_B.Add /
      ClusterControl_P.m_Value;

    // Update for DiscreteIntegrator: '<S5>/X''
    ClusterControl_DW.X_DSTATE += ClusterControl_P.X_gainval *
      ClusterControl_B.Acceleration;

    // Update for DiscreteIntegrator: '<S5>/X'
    ClusterControl_DW.X_DSTATE_c += ClusterControl_P.X_gainval_k *
      ClusterControl_B.Velocity;

    // Update for UnitDelay: '<S6>/UD' incorporates:
    //   WeightedSampleTime: '<S6>/TSamp'
    //
    //  About '<S6>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )
    //   Multiplication by K = weightedTsampQuantized is being
    //   done implicitly by changing the scaling of the input signal.
    //   No work needs to be done here.  Downstream blocks may need
    //   to do work to handle the scaling of the output; this happens
    //   automatically.
    //
    //  Block description for '<S6>/UD':
    //
    //   Store in Global RAM

    ClusterControl_DW.UD_DSTATE = ClusterControl_B.TSamp;

    // End of Outputs for SubSystem: '<S3>/SDOF'
    // End of Outputs for SubSystem: '<Root>/Model_Step100'
  }

  // Model initialize function
  void ClusterControl::Initialize()
  {
    // SystemInitialize for Atomic SubSystem: '<Root>/Model_Step100'
    // SystemInitialize for Atomic SubSystem: '<S3>/SDOF'
    // InitializeConditions for DiscreteIntegrator: '<S5>/X''
    ClusterControl_DW.X_DSTATE = ClusterControl_P.X_IC;

    // InitializeConditions for DiscreteIntegrator: '<S5>/X'
    ClusterControl_DW.X_DSTATE_c = ClusterControl_P.X_IC_g;

    // InitializeConditions for UnitDelay: '<S6>/UD'
    //
    //  Block description for '<S6>/UD':
    //
    //   Store in Global RAM

    ClusterControl_DW.UD_DSTATE =
      ClusterControl_P.DiscreteDerivative_ICPrevScaled;

    // End of SystemInitialize for SubSystem: '<S3>/SDOF'
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
  real_T ClusterControl::getRPM_Out() const
  {
    return ClusterControl_Y.RPM_Out;
  }

  // Constructor
  ClusterControl::ClusterControl() :
    ClusterControl_U(),
    ClusterControl_Y(),
    ClusterControl_B(),
    ClusterControl_DW(),
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
