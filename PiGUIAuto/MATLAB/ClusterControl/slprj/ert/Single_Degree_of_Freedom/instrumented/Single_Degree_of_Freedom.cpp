//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: Single_Degree_of_Freedom.cpp
//
// Code generated for Simulink model 'Single_Degree_of_Freedom'.
//
// Model version                  : 6.6
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sat Sep  9 16:58:54 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Single_Degree_of_Freedom.h"
#include "rtwtypes.h"
#include "Single_Degree_of_Freedom_private.h"

Single_Degree_of_Freedom::P_Single_Degree_of_Freedom_T Single_Degree_of_Freedom::
  Single_Degree_of_Freedom_rtP = {
  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S1>/UD'

  0.0,

  // Computed Parameter: X_gainval
  //  Referenced by: '<Root>/X''

  0.01,

  // Expression: 0
  //  Referenced by: '<Root>/X''

  0.0,

  // Expression: 1
  //  Referenced by: '<Root>/C'

  1.0,

  // Computed Parameter: X_gainval_c
  //  Referenced by: '<Root>/X'

  0.01,

  // Expression: 0
  //  Referenced by: '<Root>/X'

  0.0,

  // Expression: 3
  //  Referenced by: '<Root>/K'

  3.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S1>/TSamp'

  100.0,

  // Expression: 0.1
  //  Referenced by: '<Root>/m'

  0.1
};

// System initialize for referenced model: 'Single_Degree_of_Freedom'
void Single_Degree_of_Freedom::init(void)
{
  // InitializeConditions for DiscreteIntegrator: '<Root>/X''
  Single_Degree_of_Freedom_DW.X_DSTATE = Single_Degree_of_Freedom_rtP.X_IC;

  // InitializeConditions for DiscreteIntegrator: '<Root>/X'
  Single_Degree_of_Freedom_DW.X_DSTATE_g = Single_Degree_of_Freedom_rtP.X_IC_i;

  // InitializeConditions for UnitDelay: '<S1>/UD'
  //
  //  Block description for '<S1>/UD':
  //
  //   Store in Global RAM

  Single_Degree_of_Freedom_DW.UD_DSTATE =
    Single_Degree_of_Freedom_rtP.DiscreteDerivative_ICPrevScaled;
}

// Output and update for referenced model: 'Single_Degree_of_Freedom'
void Single_Degree_of_Freedom::step(const real_T *rtu_Input, real_T *rty_Output)
{
  // DiscreteIntegrator: '<Root>/X''
  Single_Degree_of_Freedom_B.Velocity = Single_Degree_of_Freedom_DW.X_DSTATE;

  // Product: '<Root>/Cx'' incorporates:
  //   Constant: '<Root>/C'

  Single_Degree_of_Freedom_B.Cx = Single_Degree_of_Freedom_B.Velocity *
    Single_Degree_of_Freedom_rtP.C_Value;

  // DiscreteIntegrator: '<Root>/X'
  *rty_Output = Single_Degree_of_Freedom_DW.X_DSTATE_g;

  // Product: '<Root>/Kx' incorporates:
  //   Constant: '<Root>/K'

  Single_Degree_of_Freedom_B.Kx = *rty_Output *
    Single_Degree_of_Freedom_rtP.K_Value;

  // WeightedSampleTime: '<S1>/TSamp'
  //
  //  About '<S1>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  Single_Degree_of_Freedom_B.TSamp = *rtu_Input *
    Single_Degree_of_Freedom_rtP.TSamp_WtEt;

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
    Single_Degree_of_Freedom_rtP.C_Value;

  // Product: '<Root>/Ku' incorporates:
  //   Constant: '<Root>/K'

  Single_Degree_of_Freedom_B.Ku = *rtu_Input *
    Single_Degree_of_Freedom_rtP.K_Value;

  // Sum: '<Root>/Add'
  Single_Degree_of_Freedom_B.Add = ((Single_Degree_of_Freedom_B.Cu -
    Single_Degree_of_Freedom_B.Cx) - Single_Degree_of_Freedom_B.Kx) +
    Single_Degree_of_Freedom_B.Ku;

  // Product: '<Root>/Divide' incorporates:
  //   Constant: '<Root>/m'

  Single_Degree_of_Freedom_B.Acceleration = Single_Degree_of_Freedom_B.Add /
    Single_Degree_of_Freedom_rtP.m_Value;

  // Update for DiscreteIntegrator: '<Root>/X''
  Single_Degree_of_Freedom_DW.X_DSTATE += Single_Degree_of_Freedom_rtP.X_gainval
    * Single_Degree_of_Freedom_B.Acceleration;

  // Update for DiscreteIntegrator: '<Root>/X'
  Single_Degree_of_Freedom_DW.X_DSTATE_g +=
    Single_Degree_of_Freedom_rtP.X_gainval_c *
    Single_Degree_of_Freedom_B.Velocity;

  // Update for UnitDelay: '<S1>/UD'
  //
  //  Block description for '<S1>/UD':
  //
  //   Store in Global RAM

  Single_Degree_of_Freedom_DW.UD_DSTATE = Single_Degree_of_Freedom_B.TSamp;
}

// Constructor
Single_Degree_of_Freedom::Single_Degree_of_Freedom() :
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

// member function to setup error status pointer
void Single_Degree_of_Freedom::setErrorStatusPointer(const char_T
  **rt_errorStatus)
{
  rtmSetErrorStatusPointer((&Single_Degree_of_Freedom_M), rt_errorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//
