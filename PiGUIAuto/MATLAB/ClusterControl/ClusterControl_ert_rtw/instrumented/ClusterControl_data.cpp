//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl_data.cpp
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

// Block parameters (default storage)
BenchTest::ClusterControl::P_ClusterControl_T BenchTest::ClusterControl::
  ClusterControl_P = {
  // Mask Parameter: SDOF_DampingConstant
  //  Referenced by: '<S4>/C'

  3.0,

  // Mask Parameter: SDOF1_DampingConstant
  //  Referenced by: '<S5>/C'

  3.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S7>/UD'

  0.0,

  // Mask Parameter: SDOF_MassConstant
  //  Referenced by: '<S4>/m'

  0.3,

  // Mask Parameter: SDOF1_MassConstant
  //  Referenced by: '<S5>/m'

  0.3,

  // Mask Parameter: SDOF_SpringConstant
  //  Referenced by: '<S4>/K'

  20.0,

  // Mask Parameter: SDOF1_SpringConstant
  //  Referenced by: '<S5>/K'

  20.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_d
  //  Referenced by: '<S6>/UD'

  0,

  // Computed Parameter: X_gainval
  //  Referenced by: '<S4>/X''

  0.01,

  // Expression: 0
  //  Referenced by: '<S4>/X''

  0.0,

  // Computed Parameter: X_gainval_l
  //  Referenced by: '<S4>/X'

  0.01,

  // Expression: 0
  //  Referenced by: '<S4>/X'

  0.0,

  // Computed Parameter: X_gainval_n
  //  Referenced by: '<S5>/X''

  0.01,

  // Expression: 0
  //  Referenced by: '<S5>/X''

  0.0,

  // Computed Parameter: X_gainval_h
  //  Referenced by: '<S5>/X'

  0.01,

  // Expression: 0
  //  Referenced by: '<S5>/X'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S7>/TSamp'

  100.0,

  // Expression: 1
  //  Referenced by: '<S2>/Rate Limiter'

  1.0,

  // Expression: -1
  //  Referenced by: '<S2>/Rate Limiter'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S2>/Rate Limiter'

  0.0,

  // Expression: 5
  //  Referenced by: '<S2>/Rate Limiter1'

  5.0,

  // Expression: -5
  //  Referenced by: '<S2>/Rate Limiter1'

  -5.0,

  // Expression: 0
  //  Referenced by: '<S2>/Rate Limiter1'

  0.0,

  // Expression: 5
  //  Referenced by: '<S2>/Rate Limiter2'

  5.0,

  // Expression: -5
  //  Referenced by: '<S2>/Rate Limiter2'

  -5.0,

  // Expression: 0
  //  Referenced by: '<S2>/Rate Limiter2'

  0.0
};

//
// File trailer for generated code.
//
// [EOF]
//
