//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl.cpp
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.21
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sun Sep 17 21:48:26 2023
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
  // Model step function
  void ClusterControl::Model_Step_100Hz()
  {
    // Outputs for Atomic SubSystem: '<Root>/Model_Step100'
    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // DiscreteIntegrator: '<S4>/X''
    ClusterControl_B.Velocity = ClusterControl_DW.X_DSTATE;

    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // Product: '<S4>/Cx''
    ClusterControl_B.Cx = ClusterControl_B.Velocity *
      ClusterControl_P.SDOF_DampingConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF'

    // Outport: '<Root>/RPM_Out' incorporates:
    //   DiscreteIntegrator: '<S4>/X'

    ClusterControl_Y.RPM_Out = ClusterControl_DW.X_DSTATE_i;

    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // Product: '<S4>/Kx' incorporates:
    //   Outport: '<Root>/RPM_Out'

    ClusterControl_B.Kx = ClusterControl_Y.RPM_Out *
      ClusterControl_P.SDOF_SpringConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF'

    // WeightedSampleTime: '<S5>/TSamp' incorporates:
    //   Inport: '<Root>/RPM_In'
    //
    //  About '<S5>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )
    //   Multiplication by K = weightedTsampQuantized is being
    //   done implicitly by changing the scaling of the input signal.
    //   No work needs to be done here.  Downstream blocks may need
    //   to do work to handle the scaling of the output; this happens
    //   automatically.

    ClusterControl_B.TSamp = ClusterControl_U.RPM_In;

    // UnitDelay: '<S5>/UD'
    //
    //  Block description for '<S5>/UD':
    //
    //   Store in Global RAM

    ClusterControl_B.Uk1 = ClusterControl_DW.UD_DSTATE;

    // Sum: '<S5>/Diff' incorporates:
    //   UnitDelay: '<S5>/UD'
    //   WeightedSampleTime: '<S5>/TSamp'
    //
    //  About '<S5>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )
    //   Multiplication by K = weightedTsampQuantized is being
    //   done implicitly by changing the scaling of the input signal.
    //   No work needs to be done here.  Downstream blocks may need
    //   to do work to handle the scaling of the output; this happens
    //   automatically.
    //
    //  Block description for '<S5>/Diff':
    //
    //   Add in CPU
    //
    //  Block description for '<S5>/UD':
    //
    //   Store in Global RAM

    ClusterControl_B.Diff = ClusterControl_B.TSamp - ClusterControl_B.Uk1;

    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // Product: '<S4>/Cu'' incorporates:
    //   Sum: '<S5>/Diff'
    //
    //  Block description for '<S5>/Diff':
    //
    //   Add in CPU

    ClusterControl_B.Cu = static_cast<real_T>(ClusterControl_B.Diff) * 100.0 *
      ClusterControl_P.SDOF_DampingConstant;

    // Product: '<S4>/Ku' incorporates:
    //   Inport: '<Root>/RPM_In'

    ClusterControl_B.Ku = static_cast<real_T>(ClusterControl_U.RPM_In) *
      ClusterControl_P.SDOF_SpringConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF'

    // Sum: '<S4>/Add'
    ClusterControl_B.Add = ((ClusterControl_B.Cu - ClusterControl_B.Cx) -
      ClusterControl_B.Kx) + ClusterControl_B.Ku;

    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // Product: '<S4>/Divide'
    ClusterControl_B.Acceleration = ClusterControl_B.Add /
      ClusterControl_P.SDOF_MassConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF'

    // Update for DiscreteIntegrator: '<S4>/X''
    ClusterControl_DW.X_DSTATE += ClusterControl_P.X_gainval *
      ClusterControl_B.Acceleration;

    // Update for DiscreteIntegrator: '<S4>/X'
    ClusterControl_DW.X_DSTATE_i += ClusterControl_P.X_gainval_l *
      ClusterControl_B.Velocity;

    // Update for UnitDelay: '<S5>/UD' incorporates:
    //   WeightedSampleTime: '<S5>/TSamp'
    //
    //  About '<S5>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )
    //   Multiplication by K = weightedTsampQuantized is being
    //   done implicitly by changing the scaling of the input signal.
    //   No work needs to be done here.  Downstream blocks may need
    //   to do work to handle the scaling of the output; this happens
    //   automatically.
    //
    //  Block description for '<S5>/UD':
    //
    //   Store in Global RAM

    ClusterControl_DW.UD_DSTATE = ClusterControl_B.TSamp;

    // End of Outputs for SubSystem: '<S2>/SDOF'
    // End of Outputs for SubSystem: '<Root>/Model_Step100'
  }

  // Model initialize function
  void ClusterControl::Initialize()
  {
    // SystemInitialize for Atomic SubSystem: '<Root>/Model_Step100'
    // SystemInitialize for Atomic SubSystem: '<S2>/SDOF'
    // InitializeConditions for DiscreteIntegrator: '<S4>/X''
    ClusterControl_DW.X_DSTATE = ClusterControl_P.X_IC;

    // InitializeConditions for DiscreteIntegrator: '<S4>/X'
    ClusterControl_DW.X_DSTATE_i = ClusterControl_P.X_IC_a;

    // InitializeConditions for UnitDelay: '<S5>/UD'
    //
    //  Block description for '<S5>/UD':
    //
    //   Store in Global RAM

    ClusterControl_DW.UD_DSTATE =
      ClusterControl_P.DiscreteDerivative_ICPrevScaled;

    // End of SystemInitialize for SubSystem: '<S2>/SDOF'
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
