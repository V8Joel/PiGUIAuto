//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ClusterControl.h
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
      real_T TSamp;                    // '<S7>/TSamp'
      real_T Uk1;                      // '<S7>/UD'
      real_T Diff;                     // '<S7>/Diff'
      real_T Cu;                       // '<S5>/Cu''
      real_T Ku;                       // '<S5>/Ku'
      real_T Add;                      // '<S5>/Add'
      real_T Acceleration;             // '<S5>/Divide'
      real_T Velocity_b;               // '<S4>/X''
      real_T Cx_h;                     // '<S4>/Cx''
      real_T Kx_f;                     // '<S4>/Kx'
      real_T Cu_p;                     // '<S4>/Cu''
      real_T Ku_j;                     // '<S4>/Ku'
      real_T Add_e;                    // '<S4>/Add'
      real_T Acceleration_j;           // '<S4>/Divide'
      int32_T TSamp_i;                 // '<S6>/TSamp'
      int32_T Uk1_p;                   // '<S6>/UD'
      int32_T Diff_h;                  // '<S6>/Diff'
    };

    // Block states (default storage) for system '<Root>'
    struct DW_ClusterControl_T {
      real_T X_DSTATE;                 // '<S5>/X''
      real_T X_DSTATE_h;               // '<S5>/X'
      real_T UD_DSTATE;                // '<S7>/UD'
      real_T X_DSTATE_l;               // '<S4>/X''
      real_T X_DSTATE_i;               // '<S4>/X'
      real_T PrevY;                    // '<S2>/Rate Limiter'
      real_T PrevY_n;                  // '<S2>/Rate Limiter1'
      real_T PrevY_a;                  // '<S2>/Rate Limiter2'
      int32_T UD_DSTATE_e;             // '<S6>/UD'
      int32_T Diff_DWORK1;             // '<S6>/Diff'
    };

    // External inputs (root inport signals with default storage)
    struct ExtU_ClusterControl_T {
      int32_T RPM_In;                  // '<Root>/RPM_In'
      real_T Speed_In;                 // '<Root>/Speed_In'
      real_T FuelPc_In;                // '<Root>/Fuel_In'
      real_T Coolant_Temp_In;          // '<Root>/Coolant_Temp_In'
      real_T Batt_V_In;                // '<Root>/Batt_V_In'
    };

    // External outputs (root outports fed by signals with default storage)
    struct ExtY_ClusterControl_T {
      real_T RPM_Out;                  // '<Root>/RPM_Out'
      real_T Speed_Out;                // '<Root>/Speed_Out'
      real_T Fuel_Out;                 // '<Root>/Fuel_Out'
      real_T Coolant_Temp_Out;         // '<Root>/Coolant_Temp_Out'
      real_T Batt_V_Out;               // '<Root>/Batt_V_Out'
    };

    // Parameters (default storage)
    struct P_ClusterControl_T {
      real_T SDOF_DampingConstant;     // Mask Parameter: SDOF_DampingConstant
                                          //  Referenced by: '<S4>/C'

      real_T SDOF1_DampingConstant;    // Mask Parameter: SDOF1_DampingConstant
                                          //  Referenced by: '<S5>/C'

      real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S7>/UD'

      real_T SDOF_MassConstant;        // Mask Parameter: SDOF_MassConstant
                                          //  Referenced by: '<S4>/m'

      real_T SDOF1_MassConstant;       // Mask Parameter: SDOF1_MassConstant
                                          //  Referenced by: '<S5>/m'

      real_T SDOF_SpringConstant;      // Mask Parameter: SDOF_SpringConstant
                                          //  Referenced by: '<S4>/K'

      real_T SDOF1_SpringConstant;     // Mask Parameter: SDOF1_SpringConstant
                                          //  Referenced by: '<S5>/K'

      int32_T DiscreteDerivative_ICPrevScal_d;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_d
                                 //  Referenced by: '<S6>/UD'

      real_T X_gainval;                // Computed Parameter: X_gainval
                                          //  Referenced by: '<S4>/X''

      real_T X_IC;                     // Expression: 0
                                          //  Referenced by: '<S4>/X''

      real_T X_gainval_l;              // Computed Parameter: X_gainval_l
                                          //  Referenced by: '<S4>/X'

      real_T X_IC_a;                   // Expression: 0
                                          //  Referenced by: '<S4>/X'

      real_T X_gainval_n;              // Computed Parameter: X_gainval_n
                                          //  Referenced by: '<S5>/X''

      real_T X_IC_o;                   // Expression: 0
                                          //  Referenced by: '<S5>/X''

      real_T X_gainval_h;              // Computed Parameter: X_gainval_h
                                          //  Referenced by: '<S5>/X'

      real_T X_IC_p;                   // Expression: 0
                                          //  Referenced by: '<S5>/X'

      real_T TSamp_WtEt;               // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S7>/TSamp'

      real_T RateLimiter_RisingLim;    // Expression: 1
                                          //  Referenced by: '<S2>/Rate Limiter'

      real_T RateLimiter_FallingLim;   // Expression: -1
                                          //  Referenced by: '<S2>/Rate Limiter'

      real_T RateLimiter_IC;           // Expression: 0
                                          //  Referenced by: '<S2>/Rate Limiter'

      real_T RateLimiter1_RisingLim;   // Expression: 5
                                          //  Referenced by: '<S2>/Rate Limiter1'

      real_T RateLimiter1_FallingLim;  // Expression: -5
                                          //  Referenced by: '<S2>/Rate Limiter1'

      real_T RateLimiter1_IC;          // Expression: 0
                                          //  Referenced by: '<S2>/Rate Limiter1'

      real_T RateLimiter2_RisingLim;   // Expression: 5
                                          //  Referenced by: '<S2>/Rate Limiter2'

      real_T RateLimiter2_FallingLim;  // Expression: -5
                                          //  Referenced by: '<S2>/Rate Limiter2'

      real_T RateLimiter2_IC;          // Expression: 0
                                          //  Referenced by: '<S2>/Rate Limiter2'

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

    // Root inport: '<Root>/RPM_In' set method
    void setRPM_In(int32_T localArgInput);

    // Root inport: '<Root>/Speed_In' set method
    void setSpeed_In(real_T localArgInput);

    // Root inport: '<Root>/Fuel_In' set method
    void setFuel_In(real_T localArgInput);

    // Root inport: '<Root>/Coolant_Temp_In' set method
    void setCoolant_Temp_In(real_T localArgInput);

    // Root inport: '<Root>/Batt_V_In' set method
    void setBatt_V_In(real_T localArgInput);

    // Root outport: '<Root>/RPM_Out' get method
    real_T getRPM_Out() const;

    // Root outport: '<Root>/Speed_Out' get method
    real_T getSpeed_Out() const;

    // Root outport: '<Root>/Fuel_Out' get method
    real_T getFuel_Out() const;

    // Root outport: '<Root>/Coolant_Temp_Out' get method
    real_T getCoolant_Temp_Out() const;

    // Root outport: '<Root>/Batt_V_Out' get method
    real_T getBatt_V_Out() const;

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

    // Tunable parameters
    static P_ClusterControl_T ClusterControl_P;

    // Real-Time Model
    RT_MODEL_ClusterControl_T ClusterControl_M;
  };
}

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S6>/Data Type Duplicate' : Unused code path elimination
//  Block '<S7>/Data Type Duplicate' : Unused code path elimination


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
//  '<S2>'   : 'ClusterControl/Model_Step100 '
//  '<S3>'   : 'ClusterControl/Terminate Function'
//  '<S4>'   : 'ClusterControl/Model_Step100 /SDOF'
//  '<S5>'   : 'ClusterControl/Model_Step100 /SDOF1'
//  '<S6>'   : 'ClusterControl/Model_Step100 /SDOF/Discrete Derivative'
//  '<S7>'   : 'ClusterControl/Model_Step100 /SDOF1/Discrete Derivative'

#endif                                 // RTW_HEADER_ClusterControl_h_

//
// File trailer for generated code.
//
// [EOF]
//
