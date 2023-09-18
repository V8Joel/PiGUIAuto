//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl_data.cpp
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

// Block parameters (default storage)
BenchTest::ClusterControl::P_ClusterControl_T BenchTest::ClusterControl::
  ClusterControl_P = {
  // Mask Parameter: SDOF_DampingConstant
  //  Referenced by: '<S4>/C'

  3.0,

  // Mask Parameter: SDOF_MassConstant
  //  Referenced by: '<S4>/m'

  0.3,

  // Mask Parameter: SDOF_SpringConstant
  //  Referenced by: '<S4>/K'

  20.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S5>/UD'

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

  0.0
};

//
// File trailer for generated code.
//
// [EOF]
//
