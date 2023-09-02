//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl.h
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.9
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sat Sep  2 15:52:27 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ClusterControl_h_
#define RTW_HEADER_ClusterControl_h_
#include "rtwtypes.h"
#include "ClusterControl_types.h"
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Code_Instrumentation_Declarations_Placeholder

// Class declaration for model ClusterControl
namespace BenchTest
{
  class ClusterControl
  {
    // public data and function members
   public:
    // Block signals (default storage)
    struct B_ClusterControl_T {
      int32_T RPM_In;
    };

    // External inputs (root inport signals with default storage)
    struct ExtU_ClusterControl_T {
      int32_T RPM_In;                  // '<Root>/RPM_In'
    };

    // External outputs (root outports fed by signals with default storage)
    struct ExtY_ClusterControl_T {
      int32_T RPM_Out;                 // '<Root>/RPM_Out'
    };

    // Parameters (default storage)
    struct P_ClusterControl_T {
      int32_T RPM_Out_Y0;              // Computed Parameter: RPM_Out_Y0
                                          //  Referenced by: '<S3>/RPM_Out'

      int32_T Constant_Value;          // Expression: RPM_Gain
                                          //  Referenced by: '<S3>/Constant'

    };

    // Real-time Model Data Structure
    struct RT_MODEL_ClusterControl_T {
      const char_T * volatile errorStatus;
    };

    // Real-Time Model get method
    ClusterControl::RT_MODEL_ClusterControl_T * getRTM();

    // External inputs
    ExtU_ClusterControl_T ClusterControl_U;

    // External outputs
    ExtY_ClusterControl_T ClusterControl_Y;

    // Tunable parameters
    static P_ClusterControl_T ClusterControl_P;

    // Root inport: '<Root>/RPM_In' set method
    void setRPM_In(int32_T localArgInput);

    // Root outport: '<Root>/RPM_Out' get method
    int32_T getRPM_Out() const;

    // model initialize function
    void Initialize();

    // model step function
    void Model_Step_10Hz();

    // model step function
    void Model_Step_100Hz();

    // model terminate function
    static void Terminate();

    // Constructor
    ClusterControl();

    // Destructor
    ~ClusterControl();

    // private data and function members
   private:
    // Block signals
    B_ClusterControl_T ClusterControl_B;

    // Real-Time Model
    RT_MODEL_ClusterControl_T ClusterControl_M;
  };
}

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
//  '<Root>' : 'ClusterControl'
//  '<S1>'   : 'ClusterControl/Initialize Function'
//  '<S2>'   : 'ClusterControl/Model_Step'
//  '<S3>'   : 'ClusterControl/Model_Step1'
//  '<S4>'   : 'ClusterControl/Terminate Function'

#endif                                 // RTW_HEADER_ClusterControl_h_

//
// File trailer for generated code.
//
// [EOF]
//