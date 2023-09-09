//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: Single_Degree_of_Freedom.cpp
//
// Code generated for Simulink model 'Single_Degree_of_Freedom'.
//
// Model version                  : 6.5
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sat Sep  9 16:43:33 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Single_Degree_of_Freedom.h"

// Model step function
void Single_Degree_of_Freedom::step()
{
  // Outport: '<Root>/Output' incorporates:
  //   DiscreteIntegrator: '<Root>/X'

  Single_Degree_of_Freedom_Y.Output = Single_Degree_of_Freedom_DW.X_DSTATE;

  // DiscreteIntegrator: '<Root>/X''
  Single_Degree_of_Freedom_B.Velocity = Single_Degree_of_Freedom_DW.X_DSTATE_o;

  // Product: '<Root>/Cx'' incorporates:
  //   Constant: '<Root>/C'

  Single_Degree_of_Freedom_B.Cx = Single_Degree_of_Freedom_B.Velocity *
    Single_Degree_of_Freedom_P.C_Value;

  // Product: '<Root>/Kx' incorporates:
  //   Constant: '<Root>/K'
  //   Outport: '<Root>/Output'

  Single_Degree_of_Freedom_B.Kx = Single_Degree_of_Freedom_Y.Output *
    Single_Degree_of_Freedom_P.K_Value;

  // WeightedSampleTime: '<S1>/TSamp' incorporates:
  //   Inport: '<Root>/Input'
  //
  //  About '<S1>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  Single_Degree_of_Freedom_B.TSamp = Single_Degree_of_Freedom_U.Input *
    Single_Degree_of_Freedom_P.TSamp_WtEt;

  // UnitDelay: '<S1>/UD'
  //
  //  Block description for '<S1>/UD':
  //
  //   Store in Global RAM

  Single_Degree_of_Freedom_B.Uk1 = Single_Degree_of_Freedom_DW.UD_DSTATE;

  // Sum: '<S1>/Diff'
  //
  //  Block description for '<S1>/Diff':
  //
  //   Add in CPU

  Single_Degree_of_Freedom_B.Diff = Single_Degree_of_Freedom_B.TSamp -
    Single_Degree_of_Freedom_B.Uk1;

  // Product: '<Root>/Cu'' incorporates:
  //   Constant: '<Root>/C'

  Single_Degree_of_Freedom_B.Cu = Single_Degree_of_Freedom_B.Diff *
    Single_Degree_of_Freedom_P.C_Value;

  // Product: '<Root>/Ku' incorporates:
  //   Constant: '<Root>/K'
  //   Inport: '<Root>/Input'

  Single_Degree_of_Freedom_B.Ku = Single_Degree_of_Freedom_U.Input *
    Single_Degree_of_Freedom_P.K_Value;

  // Sum: '<Root>/Add'
  Single_Degree_of_Freedom_B.Add = ((Single_Degree_of_Freedom_B.Cu -
    Single_Degree_of_Freedom_B.Cx) - Single_Degree_of_Freedom_B.Kx) +
    Single_Degree_of_Freedom_B.Ku;

  // Product: '<Root>/Divide' incorporates:
  //   Constant: '<Root>/m'

  Single_Degree_of_Freedom_B.Acceleration = Single_Degree_of_Freedom_B.Add /
    Single_Degree_of_Freedom_P.m_Value;

  // Update for DiscreteIntegrator: '<Root>/X'
  Single_Degree_of_Freedom_DW.X_DSTATE += Single_Degree_of_Freedom_P.X_gainval *
    Single_Degree_of_Freedom_B.Velocity;

  // Update for DiscreteIntegrator: '<Root>/X''
  Single_Degree_of_Freedom_DW.X_DSTATE_o +=
    Single_Degree_of_Freedom_P.X_gainval_h *
    Single_Degree_of_Freedom_B.Acceleration;

  // Update for UnitDelay: '<S1>/UD'
  //
  //  Block description for '<S1>/UD':
  //
  //   Store in Global RAM

  Single_Degree_of_Freedom_DW.UD_DSTATE = Single_Degree_of_Freedom_B.TSamp;
}

// Model initialize function
void Single_Degree_of_Freedom::initialize()
{
  // InitializeConditions for DiscreteIntegrator: '<Root>/X'
  Single_Degree_of_Freedom_DW.X_DSTATE = Single_Degree_of_Freedom_P.X_IC;

  // InitializeConditions for DiscreteIntegrator: '<Root>/X''
  Single_Degree_of_Freedom_DW.X_DSTATE_o = Single_Degree_of_Freedom_P.X_IC_c;

  // InitializeConditions for UnitDelay: '<S1>/UD'
  //
  //  Block description for '<S1>/UD':
  //
  //   Store in Global RAM

  Single_Degree_of_Freedom_DW.UD_DSTATE =
    Single_Degree_of_Freedom_P.DiscreteDerivative_ICPrevScaled;
}

// Model terminate function
void Single_Degree_of_Freedom::terminate()
{
  // (no terminate code required)
}

// Root inport: '<Root>/Input' set method
void Single_Degree_of_Freedom::setInput(real_T localArgInput)
{
  Single_Degree_of_Freedom_U.Input = localArgInput;
}

// Root outport: '<Root>/Output' get method
real_T Single_Degree_of_Freedom::getOutput() const
{
  return Single_Degree_of_Freedom_Y.Output;
}

// Constructor
Single_Degree_of_Freedom::Single_Degree_of_Freedom() :
  Single_Degree_of_Freedom_U(),
  Single_Degree_of_Freedom_Y(),
  Single_Degree_of_Freedom_B(),
  Single_Degree_of_Freedom_DW(),
  Single_Degree_of_Freedom_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
Single_Degree_of_Freedom::~Single_Degree_of_Freedom()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
Single_Degree_of_Freedom::RT_MODEL_Single_Degree_of_Fre_T
  * Single_Degree_of_Freedom::getRTM()
{
  return (&Single_Degree_of_Freedom_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
