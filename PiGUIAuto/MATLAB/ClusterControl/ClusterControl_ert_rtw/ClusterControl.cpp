//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl.cpp
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.23
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Mon Sep 18 15:23:57 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ClusterControl.h"
#include "rtwtypes.h"
#include "ClusterControl_private.h"

const real_T ClusterControl_period = 0.01;
namespace BenchTest
{
  // Model step function
  void ClusterControl::Model_Step_100Hz()
  {
    real_T rateLimiterRate;

    // Outputs for Atomic SubSystem: '<Root>/Model_Step100 '
    // RateLimiter: '<S2>/Rate Limiter' incorporates:
    //   Inport: '<Root>/Fuel_In'
    //   Outport: '<Root>/Fuel_Out'

    rateLimiterRate = ClusterControl_U.FuelPc_In - ClusterControl_DW.PrevY;
    if (rateLimiterRate > ClusterControl_P.RateLimiter_RisingLim *
        ClusterControl_period) {
      ClusterControl_Y.Fuel_Out = ClusterControl_P.RateLimiter_RisingLim *
        ClusterControl_period + ClusterControl_DW.PrevY;
    } else if (rateLimiterRate < ClusterControl_P.RateLimiter_FallingLim *
               ClusterControl_period) {
      ClusterControl_Y.Fuel_Out = ClusterControl_P.RateLimiter_FallingLim *
        ClusterControl_period + ClusterControl_DW.PrevY;
    } else {
      ClusterControl_Y.Fuel_Out = ClusterControl_U.FuelPc_In;
    }

    ClusterControl_DW.PrevY = ClusterControl_Y.Fuel_Out;

    // End of RateLimiter: '<S2>/Rate Limiter'

    // RateLimiter: '<S2>/Rate Limiter1' incorporates:
    //   Inport: '<Root>/Coolant_Temp_In'
    //   Outport: '<Root>/Coolant_Temp_Out'

    rateLimiterRate = ClusterControl_U.Coolant_Temp_In -
      ClusterControl_DW.PrevY_n;
    if (rateLimiterRate > ClusterControl_P.RateLimiter1_RisingLim *
        ClusterControl_period) {
      ClusterControl_Y.Coolant_Temp_Out =
        ClusterControl_P.RateLimiter1_RisingLim * ClusterControl_period +
        ClusterControl_DW.PrevY_n;
    } else if (rateLimiterRate < ClusterControl_P.RateLimiter1_FallingLim *
               ClusterControl_period) {
      ClusterControl_Y.Coolant_Temp_Out =
        ClusterControl_P.RateLimiter1_FallingLim * ClusterControl_period +
        ClusterControl_DW.PrevY_n;
    } else {
      ClusterControl_Y.Coolant_Temp_Out = ClusterControl_U.Coolant_Temp_In;
    }

    ClusterControl_DW.PrevY_n = ClusterControl_Y.Coolant_Temp_Out;

    // End of RateLimiter: '<S2>/Rate Limiter1'

    // RateLimiter: '<S2>/Rate Limiter2' incorporates:
    //   Inport: '<Root>/Batt_V_In'
    //   Outport: '<Root>/Batt_V_Out'

    rateLimiterRate = ClusterControl_U.Batt_V_In - ClusterControl_DW.PrevY_a;
    if (rateLimiterRate > ClusterControl_P.RateLimiter2_RisingLim *
        ClusterControl_period) {
      ClusterControl_Y.Batt_V_Out = ClusterControl_P.RateLimiter2_RisingLim *
        ClusterControl_period + ClusterControl_DW.PrevY_a;
    } else if (rateLimiterRate < ClusterControl_P.RateLimiter2_FallingLim *
               ClusterControl_period) {
      ClusterControl_Y.Batt_V_Out = ClusterControl_P.RateLimiter2_FallingLim *
        ClusterControl_period + ClusterControl_DW.PrevY_a;
    } else {
      ClusterControl_Y.Batt_V_Out = ClusterControl_U.Batt_V_In;
    }

    ClusterControl_DW.PrevY_a = ClusterControl_Y.Batt_V_Out;

    // End of RateLimiter: '<S2>/Rate Limiter2'

    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // DiscreteIntegrator: '<S4>/X''
    ClusterControl_B.Velocity_b = ClusterControl_DW.X_DSTATE_l;

    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // Product: '<S4>/Cx''
    ClusterControl_B.Cx_h = ClusterControl_B.Velocity_b *
      ClusterControl_P.SDOF_DampingConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF'

    // Outport: '<Root>/RPM_Out' incorporates:
    //   DiscreteIntegrator: '<S4>/X'

    ClusterControl_Y.RPM_Out = ClusterControl_DW.X_DSTATE_i;

    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // Product: '<S4>/Kx' incorporates:
    //   Outport: '<Root>/RPM_Out'

    ClusterControl_B.Kx_f = ClusterControl_Y.RPM_Out *
      ClusterControl_P.SDOF_SpringConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF'

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

    ClusterControl_B.TSamp_i = ClusterControl_U.RPM_In;

    // UnitDelay: '<S6>/UD'
    //
    //  Block description for '<S6>/UD':
    //
    //   Store in Global RAM

    ClusterControl_B.Uk1_p = ClusterControl_DW.UD_DSTATE_e;

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

    ClusterControl_B.Diff_h = ClusterControl_B.TSamp_i - ClusterControl_B.Uk1_p;

    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // Product: '<S4>/Cu'' incorporates:
    //   Sum: '<S6>/Diff'
    //
    //  Block description for '<S6>/Diff':
    //
    //   Add in CPU

    ClusterControl_B.Cu_p = static_cast<real_T>(ClusterControl_B.Diff_h) * 100.0
      * ClusterControl_P.SDOF_DampingConstant;

    // Product: '<S4>/Ku' incorporates:
    //   Inport: '<Root>/RPM_In'

    ClusterControl_B.Ku_j = static_cast<real_T>(ClusterControl_U.RPM_In) *
      ClusterControl_P.SDOF_SpringConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF'

    // Sum: '<S4>/Add'
    ClusterControl_B.Add_e = ((ClusterControl_B.Cu_p - ClusterControl_B.Cx_h) -
      ClusterControl_B.Kx_f) + ClusterControl_B.Ku_j;

    // Outputs for Atomic SubSystem: '<S2>/SDOF'
    // Product: '<S4>/Divide'
    ClusterControl_B.Acceleration_j = ClusterControl_B.Add_e /
      ClusterControl_P.SDOF_MassConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF'

    // Update for DiscreteIntegrator: '<S4>/X''
    ClusterControl_DW.X_DSTATE_l += ClusterControl_P.X_gainval *
      ClusterControl_B.Acceleration_j;

    // Update for DiscreteIntegrator: '<S4>/X'
    ClusterControl_DW.X_DSTATE_i += ClusterControl_P.X_gainval_l *
      ClusterControl_B.Velocity_b;

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

    ClusterControl_DW.UD_DSTATE_e = ClusterControl_B.TSamp_i;

    // End of Outputs for SubSystem: '<S2>/SDOF'

    // Outputs for Atomic SubSystem: '<S2>/SDOF1'
    // DiscreteIntegrator: '<S5>/X''
    ClusterControl_B.Velocity = ClusterControl_DW.X_DSTATE;

    // Outputs for Atomic SubSystem: '<S2>/SDOF1'
    // Product: '<S5>/Cx''
    ClusterControl_B.Cx = ClusterControl_B.Velocity *
      ClusterControl_P.SDOF1_DampingConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF1'

    // Outport: '<Root>/Speed_Out' incorporates:
    //   DiscreteIntegrator: '<S5>/X'

    ClusterControl_Y.Speed_Out = ClusterControl_DW.X_DSTATE_h;

    // Outputs for Atomic SubSystem: '<S2>/SDOF1'
    // Product: '<S5>/Kx' incorporates:
    //   Outport: '<Root>/Speed_Out'

    ClusterControl_B.Kx = ClusterControl_Y.Speed_Out *
      ClusterControl_P.SDOF1_SpringConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF1'

    // WeightedSampleTime: '<S7>/TSamp' incorporates:
    //   Inport: '<Root>/Speed_In'
    //
    //  About '<S7>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )

    ClusterControl_B.TSamp = ClusterControl_U.Speed_In *
      ClusterControl_P.TSamp_WtEt;

    // UnitDelay: '<S7>/UD'
    //
    //  Block description for '<S7>/UD':
    //
    //   Store in Global RAM

    ClusterControl_B.Uk1 = ClusterControl_DW.UD_DSTATE;

    // Sum: '<S7>/Diff'
    //
    //  Block description for '<S7>/Diff':
    //
    //   Add in CPU

    ClusterControl_B.Diff = ClusterControl_B.TSamp - ClusterControl_B.Uk1;

    // Outputs for Atomic SubSystem: '<S2>/SDOF1'
    // Product: '<S5>/Cu''
    ClusterControl_B.Cu = ClusterControl_B.Diff *
      ClusterControl_P.SDOF1_DampingConstant;

    // Product: '<S5>/Ku' incorporates:
    //   Inport: '<Root>/Speed_In'

    ClusterControl_B.Ku = ClusterControl_U.Speed_In *
      ClusterControl_P.SDOF1_SpringConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF1'

    // Sum: '<S5>/Add'
    ClusterControl_B.Add = ((ClusterControl_B.Cu - ClusterControl_B.Cx) -
      ClusterControl_B.Kx) + ClusterControl_B.Ku;

    // Outputs for Atomic SubSystem: '<S2>/SDOF1'
    // Product: '<S5>/Divide'
    ClusterControl_B.Acceleration = ClusterControl_B.Add /
      ClusterControl_P.SDOF1_MassConstant;

    // End of Outputs for SubSystem: '<S2>/SDOF1'

    // Update for DiscreteIntegrator: '<S5>/X''
    ClusterControl_DW.X_DSTATE += ClusterControl_P.X_gainval_n *
      ClusterControl_B.Acceleration;

    // Update for DiscreteIntegrator: '<S5>/X'
    ClusterControl_DW.X_DSTATE_h += ClusterControl_P.X_gainval_h *
      ClusterControl_B.Velocity;

    // Update for UnitDelay: '<S7>/UD'
    //
    //  Block description for '<S7>/UD':
    //
    //   Store in Global RAM

    ClusterControl_DW.UD_DSTATE = ClusterControl_B.TSamp;

    // End of Outputs for SubSystem: '<S2>/SDOF1'
    // End of Outputs for SubSystem: '<Root>/Model_Step100 '
  }

  // Model initialize function
  void ClusterControl::Initialize()
  {
    // SystemInitialize for Atomic SubSystem: '<Root>/Model_Step100 '
    // InitializeConditions for RateLimiter: '<S2>/Rate Limiter'
    ClusterControl_DW.PrevY = ClusterControl_P.RateLimiter_IC;

    // InitializeConditions for RateLimiter: '<S2>/Rate Limiter1'
    ClusterControl_DW.PrevY_n = ClusterControl_P.RateLimiter1_IC;

    // InitializeConditions for RateLimiter: '<S2>/Rate Limiter2'
    ClusterControl_DW.PrevY_a = ClusterControl_P.RateLimiter2_IC;

    // SystemInitialize for Atomic SubSystem: '<S2>/SDOF'
    // InitializeConditions for DiscreteIntegrator: '<S4>/X''
    ClusterControl_DW.X_DSTATE_l = ClusterControl_P.X_IC;

    // InitializeConditions for DiscreteIntegrator: '<S4>/X'
    ClusterControl_DW.X_DSTATE_i = ClusterControl_P.X_IC_a;

    // InitializeConditions for UnitDelay: '<S6>/UD'
    //
    //  Block description for '<S6>/UD':
    //
    //   Store in Global RAM

    ClusterControl_DW.UD_DSTATE_e =
      ClusterControl_P.DiscreteDerivative_ICPrevScal_d;

    // End of SystemInitialize for SubSystem: '<S2>/SDOF'

    // SystemInitialize for Atomic SubSystem: '<S2>/SDOF1'
    // InitializeConditions for DiscreteIntegrator: '<S5>/X''
    ClusterControl_DW.X_DSTATE = ClusterControl_P.X_IC_o;

    // InitializeConditions for DiscreteIntegrator: '<S5>/X'
    ClusterControl_DW.X_DSTATE_h = ClusterControl_P.X_IC_p;

    // InitializeConditions for UnitDelay: '<S7>/UD'
    //
    //  Block description for '<S7>/UD':
    //
    //   Store in Global RAM

    ClusterControl_DW.UD_DSTATE =
      ClusterControl_P.DiscreteDerivative_ICPrevScaled;

    // End of SystemInitialize for SubSystem: '<S2>/SDOF1'
    // End of SystemInitialize for SubSystem: '<Root>/Model_Step100 '
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

  // Root inport: '<Root>/Speed_In' set method
  void ClusterControl::setSpeed_In(real_T localArgInput)
  {
    ClusterControl_U.Speed_In = localArgInput;
  }

  // Root inport: '<Root>/Fuel_In' set method
  void ClusterControl::setFuel_In(real_T localArgInput)
  {
    ClusterControl_U.FuelPc_In = localArgInput;
  }

  // Root inport: '<Root>/Coolant_Temp_In' set method
  void ClusterControl::setCoolant_Temp_In(real_T localArgInput)
  {
    ClusterControl_U.Coolant_Temp_In = localArgInput;
  }

  // Root inport: '<Root>/Batt_V_In' set method
  void ClusterControl::setBatt_V_In(real_T localArgInput)
  {
    ClusterControl_U.Batt_V_In = localArgInput;
  }

  // Root outport: '<Root>/RPM_Out' get method
  real_T ClusterControl::getRPM_Out() const
  {
    return ClusterControl_Y.RPM_Out;
  }

  // Root outport: '<Root>/Speed_Out' get method
  real_T ClusterControl::getSpeed_Out() const
  {
    return ClusterControl_Y.Speed_Out;
  }

  // Root outport: '<Root>/Fuel_Out' get method
  real_T ClusterControl::getFuel_Out() const
  {
    return ClusterControl_Y.Fuel_Out;
  }

  // Root outport: '<Root>/Coolant_Temp_Out' get method
  real_T ClusterControl::getCoolant_Temp_Out() const
  {
    return ClusterControl_Y.Coolant_Temp_Out;
  }

  // Root outport: '<Root>/Batt_V_Out' get method
  real_T ClusterControl::getBatt_V_Out() const
  {
    return ClusterControl_Y.Batt_V_Out;
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
