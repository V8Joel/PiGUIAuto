//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl.h
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.12
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Fri Sep 15 22:06:10 2023
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
      real_T Velocity;                 // '<S5>/X''
      real_T Cx;                       // '<S5>/Cx''
      real_T Kx;                       // '<S5>/Kx'
      real_T Cu;                       // '<S5>/Cu''
      real_T Ku;                       // '<S5>/Ku'
      real_T Add;                      // '<S5>/Add'
      real_T Acceleration;             // '<S5>/Divide'
      int32_T TSamp;                   // '<S6>/TSamp'
      int32_T Uk1;                     // '<S6>/UD'
      int32_T Diff;                    // '<S6>/Diff'
    };

    // Block states (default storage) for system '<Root>'
    struct DW_ClusterControl_T {
      real_T X_DSTATE;                 // '<S5>/X''
      real_T X_DSTATE_c;               // '<S5>/X'
      int32_T UD_DSTATE;               // '<S6>/UD'
      int32_T Diff_DWORK1;             // '<S6>/Diff'
    };

    // External inputs (root inport signals with default storage)
    struct ExtU_ClusterControl_T {
      int32_T RPM_In;                  // '<Root>/RPM_In'
    };

    // External outputs (root outports fed by signals with default storage)
    struct ExtY_ClusterControl_T {
      real_T RPM_Out;                  // '<Root>/RPM_Out'
    };

    // Parameters (default storage)
    struct P_ClusterControl_T {
      int32_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S6>/UD'

      real_T X_gainval;                // Computed Parameter: X_gainval
                                          //  Referenced by: '<S5>/X''

      real_T X_IC;                     // Expression: 0
                                          //  Referenced by: '<S5>/X''

      real_T C_Value;                  // Expression: 4
                                          //  Referenced by: '<S5>/C'

      real_T X_gainval_k;              // Computed Parameter: X_gainval_k
                                          //  Referenced by: '<S5>/X'

      real_T X_IC_g;                   // Expression: 0
                                          //  Referenced by: '<S5>/X'

      real_T K_Value;                  // Expression: 15
                                          //  Referenced by: '<S5>/K'

      real_T m_Value;                  // Expression: 0.2
                                          //  Referenced by: '<S5>/m'

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
    real_T getRPM_Out() const;

    // model initialize function
    void Initialize();

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

    // Block states
    DW_ClusterControl_T ClusterControl_DW;

    // private member function(s) for subsystem '<Root>/Model_Step10'
    void Model_Step_10Hz();

    // Real-Time Model
    RT_MODEL_ClusterControl_T ClusterControl_M;
  };
}

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S6>/Data Type Duplicate' : Unused code path elimination


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
//  '<S2>'   : 'ClusterControl/Model_Step10'
//  '<S3>'   : 'ClusterControl/Model_Step100'
//  '<S4>'   : 'ClusterControl/Terminate Function'
//  '<S5>'   : 'ClusterControl/Model_Step100/SDOF'
//  '<S6>'   : 'ClusterControl/Model_Step100/SDOF/Discrete Derivative'

#endif                                 // RTW_HEADER_ClusterControl_h_

//
// File trailer for generated code.
//
// [EOF]
//
