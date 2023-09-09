//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: Single_Degree_of_Freedom_data.cpp
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

// Block parameters (default storage)
Single_Degree_of_Freedom::P_Single_Degree_of_Freedom_T Single_Degree_of_Freedom::
  Single_Degree_of_Freedom_P = {
  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S1>/UD'

  0.0,

  // Computed Parameter: X_gainval
  //  Referenced by: '<Root>/X'

  0.01,

  // Expression: 0
  //  Referenced by: '<Root>/X'

  0.0,

  // Computed Parameter: X_gainval_h
  //  Referenced by: '<Root>/X''

  0.01,

  // Expression: 0
  //  Referenced by: '<Root>/X''

  0.0,

  // Expression: 1
  //  Referenced by: '<Root>/C'

  1.0,

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

//
// File trailer for generated code.
//
// [EOF]
//
