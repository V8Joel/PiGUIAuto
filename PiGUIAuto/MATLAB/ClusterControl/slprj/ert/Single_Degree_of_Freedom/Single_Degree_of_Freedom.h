//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: Single_Degree_of_Freedom.h
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
#ifndef RTW_HEADER_Single_Degree_of_Freedom_h_
#define RTW_HEADER_Single_Degree_of_Freedom_h_
#include "rtwtypes.h"
#include "Single_Degree_of_Freedom_types.h"
#include <cstring>
#include <stddef.h>

// Code_Instrumentation_Declarations_Placeholder

// Class declaration for model Single_Degree_of_Freedom
class Single_Degree_of_Freedom
{
  // public data and function members
 public:
  // Block signals for model 'Single_Degree_of_Freedom'
  struct B_Single_Degree_of_Freedom_T {
    real_T Velocity;                   // '<Root>/X''
    real_T Cx;                         // '<Root>/Cx''
    real_T Kx;                         // '<Root>/Kx'
    real_T TSamp;                      // '<S1>/TSamp'
    real_T Uk1;                        // '<S1>/UD'
    real_T Diff;                       // '<S1>/Diff'
    real_T Cu;                         // '<Root>/Cu''
    real_T Ku;                         // '<Root>/Ku'
    real_T Add;                        // '<Root>/Add'
    real_T Acceleration;               // '<Root>/Divide'
  };

  // Block states (default storage) for model 'Single_Degree_of_Freedom'
  struct DW_Single_Degree_of_Freedom_T {
    real_T X_DSTATE;                   // '<Root>/X''
    real_T X_DSTATE_g;                 // '<Root>/X'
    real_T UD_DSTATE;                  // '<S1>/UD'
  };

  // Parameters (default storage)
  struct P_Single_Degree_of_Freedom_T {
    real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S1>/UD'

    real_T X_gainval;                  // Computed Parameter: X_gainval
                                          //  Referenced by: '<Root>/X''

    real_T X_IC;                       // Expression: 0
                                          //  Referenced by: '<Root>/X''

    real_T C_Value;                    // Expression: 1
                                          //  Referenced by: '<Root>/C'

    real_T X_gainval_c;                // Computed Parameter: X_gainval_c
                                          //  Referenced by: '<Root>/X'

    real_T X_IC_i;                     // Expression: 0
                                          //  Referenced by: '<Root>/X'

    real_T K_Value;                    // Expression: 3
                                          //  Referenced by: '<Root>/K'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S1>/TSamp'

    real_T m_Value;                    // Expression: 0.1
                                          //  Referenced by: '<Root>/m'

  };

  // Real-time Model Data Structure
  struct RT_MODEL_Single_Degree_of_Fre_T {
    const char_T **errorStatus;
  };

  // Initial conditions function
  void init();

  // Real-Time Model get method
  Single_Degree_of_Freedom::RT_MODEL_Single_Degree_of_Fre_T * getRTM();

  //member function to setup error status pointer
  void setErrorStatusPointer(const char_T **rt_errorStatus);

  // model step function
  void step(const real_T *rtu_Input, real_T *rty_Output);

  // Tunable parameters
  static P_Single_Degree_of_Freedom_T Single_Degree_of_Freedom_rtP;

  // Constructor
  Single_Degree_of_Freedom();

  // Destructor
  ~Single_Degree_of_Freedom();

  // private data and function members
 private:
  // Block signals
  B_Single_Degree_of_Freedom_T Single_Degree_of_Freedom_B;

  // Block states
  DW_Single_Degree_of_Freedom_T Single_Degree_of_Freedom_DW;

  // Real-Time Model
  RT_MODEL_Single_Degree_of_Fre_T Single_Degree_of_Freedom_M;
};

extern Single_Degree_of_Freedom::P_Single_Degree_of_Freedom_T
  Single_Degree_of_Freedom_rtP;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Acceleration (X")' : Unused code path elimination
//  Block '<Root>/Car vs. Road' : Unused code path elimination
//  Block '<S1>/Data Type Duplicate' : Unused code path elimination
//  Block '<Root>/Displacement (X)' : Unused code path elimination
//  Block '<Root>/Road Surface (X)' : Unused code path elimination
//  Block '<Root>/Velocity (X')' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Single_Degree_of_Freedom'
//  '<S1>'   : 'Single_Degree_of_Freedom/Discrete Derivative'
//  '<S2>'   : 'Single_Degree_of_Freedom/Initialize Function'
//  '<S3>'   : 'Single_Degree_of_Freedom/Terminate Function'

#endif                                // RTW_HEADER_Single_Degree_of_Freedom_h_

//
// File trailer for generated code.
//
// [EOF]
//
