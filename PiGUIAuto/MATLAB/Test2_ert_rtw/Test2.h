//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: Test2.h
//
// Code generated for Simulink model 'Test2'.
//
// Model version                  : 6.3
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sat Aug 19 14:08:34 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives:
//    1. Execution efficiency
//    2. Traceability
// Validation result: Passed (9), Warning (1), Error (0)
//
#ifndef RTW_HEADER_Test2_h_
#define RTW_HEADER_Test2_h_
#include "MATLAB/slprj/ert/_sharedutils/rtwtypes.h"
#include "Test2_types.h"

// Class declaration for model Test2
class Test2
{
  // public data and function members
 public:
  // External inputs (root inport signals with default storage)
  struct ExtU {
    real_T Data2In;                    // '<Root>/Test2In'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY {
    real_T Test2Out;                   // '<Root>/Test2Out'
    real_T model_step_time_output;     // '<Root>/model_step_time_output'
  };

  // Parameters (default storage)
  struct P {
    real_T gainVal;                    // Variable: gainVal
                                          //  Referenced by: '<Root>/Gain'

    real_T model_step_time;            // Variable: model_step_time
                                          //  Referenced by: '<Root>/Constant'

  };

  // External inputs
  ExtU rtU;

  // External outputs
  ExtY rtY;

  // Tunable parameters
  static P rtP;

  // model initialize function
  static void initialize();

  // model step function
  void step();

  // model terminate function
  static void terminate();

  // Constructor
  Test2();

  // Destructor
  ~Test2();
};

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
//  '<Root>' : 'Test2'
//  '<S1>'   : 'Test2/Initialize Function'
//  '<S2>'   : 'Test2/Terminate Function'


//-
//  Requirements for '<Root>': Test2


#endif                                 // RTW_HEADER_Test2_h_

//
// File trailer for generated code.
//
// [EOF]
//
