var dataJson = {"arch":{"ispc":false,"isunix":true,"ismac":true},"build":"Single_Degree_of_Freedom","ref":false,"files":[{"name":"ert_main.cpp","type":"source","group":"main","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/Single_Degree_of_Freedom_ert_rtw","tag":"","groupDisplay":"Main file","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: ert_main.cpp\n//\n// Code generated for Simulink model 'Single_Degree_of_Freedom'.\n//\n// Model version                  : 6.5\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Sep  9 16:43:33 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#include <stddef.h>\n#include <stdio.h>              // This example main program uses printf/fflush\n#include \"Single_Degree_of_Freedom.h\"  // Model header file\n\nstatic Single_Degree_of_Freedom Single_Degree_of_Freedom_Obj;// Instance of model class \n\n//\n// Associating rt_OneStep with a real-time clock or interrupt service routine\n// is what makes the generated code \"real-time\".  The function rt_OneStep is\n// always associated with the base rate of the model.  Subrates are managed\n// by the base rate from inside the generated code.  Enabling/disabling\n// interrupts and floating point context switches are target specific.  This\n// example code indicates where these should take place relative to executing\n// the generated code step function.  Overrun behavior should be tailored to\n// your application needs.  This example simply sets an error status in the\n// real-time model and returns from rt_OneStep.\n//\nvoid rt_OneStep(void);\nvoid rt_OneStep(void)\n{\n  static boolean_T OverrunFlag = false;\n\n  // Disable interrupts here\n\n  // Check for overrun\n  if (OverrunFlag) {\n    rtmSetErrorStatus(Single_Degree_of_Freedom_Obj.getRTM(), \"Overrun\");\n    return;\n  }\n\n  OverrunFlag = true;\n\n  // Save FPU context here (if necessary)\n  // Re-enable timer or interrupt here\n  // Set model inputs here\n\n  // Step the model\n  Single_Degree_of_Freedom_Obj.step();\n\n  // Get model outputs here\n\n  // Indicate task complete\n  OverrunFlag = false;\n\n  // Disable interrupts here\n  // Restore FPU context here (if necessary)\n  // Enable interrupts here\n}\n\n//\n// The example main function illustrates what is required by your\n// application code to initialize, execute, and terminate the generated code.\n// Attaching rt_OneStep to a real-time clock is target specific. This example\n// illustrates how you do this relative to initializing the model.\n//\nint_T main(int_T argc, const char *argv[])\n{\n  // Unused arguments\n  (void)(argc);\n  (void)(argv);\n\n  // Initialize model\n  Single_Degree_of_Freedom_Obj.initialize();\n\n  // Attach rt_OneStep to a timer or interrupt service routine with\n  //  period 0.01 seconds (base rate of the model) here.\n  //  The call syntax for rt_OneStep is\n  //\n  //   rt_OneStep();\n\n  printf(\"Warning: The simulation will run forever. \"\n         \"Generated ERT main won't simulate model step behavior. \"\n         \"To change this behavior select the 'MAT-file logging' option.\\n\");\n  fflush((NULL));\n  while (rtmGetErrorStatus(Single_Degree_of_Freedom_Obj.getRTM()) == (NULL)) {\n    //  Perform application tasks here\n  }\n\n  // Terminate model\n  Single_Degree_of_Freedom_Obj.terminate();\n  return 0;\n}\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Single_Degree_of_Freedom.cpp","type":"source","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/Single_Degree_of_Freedom_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Single_Degree_of_Freedom.cpp\n//\n// Code generated for Simulink model 'Single_Degree_of_Freedom'.\n//\n// Model version                  : 6.5\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Sep  9 16:43:33 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#include \"Single_Degree_of_Freedom.h\"\n\n// Model step function\nvoid Single_Degree_of_Freedom::step()\n{\n  // Outport: '<Root>/Output' incorporates:\n  //   DiscreteIntegrator: '<Root>/X'\n\n  Single_Degree_of_Freedom_Y.Output = Single_Degree_of_Freedom_DW.X_DSTATE;\n\n  // DiscreteIntegrator: '<Root>/X''\n  Single_Degree_of_Freedom_B.Velocity = Single_Degree_of_Freedom_DW.X_DSTATE_o;\n\n  // Product: '<Root>/Cx'' incorporates:\n  //   Constant: '<Root>/C'\n\n  Single_Degree_of_Freedom_B.Cx = Single_Degree_of_Freedom_B.Velocity *\n    Single_Degree_of_Freedom_P.C_Value;\n\n  // Product: '<Root>/Kx' incorporates:\n  //   Constant: '<Root>/K'\n  //   Outport: '<Root>/Output'\n\n  Single_Degree_of_Freedom_B.Kx = Single_Degree_of_Freedom_Y.Output *\n    Single_Degree_of_Freedom_P.K_Value;\n\n  // WeightedSampleTime: '<S1>/TSamp' incorporates:\n  //   Inport: '<Root>/Input'\n  //\n  //  About '<S1>/TSamp':\n  //   y = u * K where K = 1 / ( w * Ts )\n\n  Single_Degree_of_Freedom_B.TSamp = Single_Degree_of_Freedom_U.Input *\n    Single_Degree_of_Freedom_P.TSamp_WtEt;\n\n  // UnitDelay: '<S1>/UD'\n  //\n  //  Block description for '<S1>/UD':\n  //\n  //   Store in Global RAM\n\n  Single_Degree_of_Freedom_B.Uk1 = Single_Degree_of_Freedom_DW.UD_DSTATE;\n\n  // Sum: '<S1>/Diff'\n  //\n  //  Block description for '<S1>/Diff':\n  //\n  //   Add in CPU\n\n  Single_Degree_of_Freedom_B.Diff = Single_Degree_of_Freedom_B.TSamp -\n    Single_Degree_of_Freedom_B.Uk1;\n\n  // Product: '<Root>/Cu'' incorporates:\n  //   Constant: '<Root>/C'\n\n  Single_Degree_of_Freedom_B.Cu = Single_Degree_of_Freedom_B.Diff *\n    Single_Degree_of_Freedom_P.C_Value;\n\n  // Product: '<Root>/Ku' incorporates:\n  //   Constant: '<Root>/K'\n  //   Inport: '<Root>/Input'\n\n  Single_Degree_of_Freedom_B.Ku = Single_Degree_of_Freedom_U.Input *\n    Single_Degree_of_Freedom_P.K_Value;\n\n  // Sum: '<Root>/Add'\n  Single_Degree_of_Freedom_B.Add = ((Single_Degree_of_Freedom_B.Cu -\n    Single_Degree_of_Freedom_B.Cx) - Single_Degree_of_Freedom_B.Kx) +\n    Single_Degree_of_Freedom_B.Ku;\n\n  // Product: '<Root>/Divide' incorporates:\n  //   Constant: '<Root>/m'\n\n  Single_Degree_of_Freedom_B.Acceleration = Single_Degree_of_Freedom_B.Add /\n    Single_Degree_of_Freedom_P.m_Value;\n\n  // Update for DiscreteIntegrator: '<Root>/X'\n  Single_Degree_of_Freedom_DW.X_DSTATE += Single_Degree_of_Freedom_P.X_gainval *\n    Single_Degree_of_Freedom_B.Velocity;\n\n  // Update for DiscreteIntegrator: '<Root>/X''\n  Single_Degree_of_Freedom_DW.X_DSTATE_o +=\n    Single_Degree_of_Freedom_P.X_gainval_h *\n    Single_Degree_of_Freedom_B.Acceleration;\n\n  // Update for UnitDelay: '<S1>/UD'\n  //\n  //  Block description for '<S1>/UD':\n  //\n  //   Store in Global RAM\n\n  Single_Degree_of_Freedom_DW.UD_DSTATE = Single_Degree_of_Freedom_B.TSamp;\n}\n\n// Model initialize function\nvoid Single_Degree_of_Freedom::initialize()\n{\n  // InitializeConditions for DiscreteIntegrator: '<Root>/X'\n  Single_Degree_of_Freedom_DW.X_DSTATE = Single_Degree_of_Freedom_P.X_IC;\n\n  // InitializeConditions for DiscreteIntegrator: '<Root>/X''\n  Single_Degree_of_Freedom_DW.X_DSTATE_o = Single_Degree_of_Freedom_P.X_IC_c;\n\n  // InitializeConditions for UnitDelay: '<S1>/UD'\n  //\n  //  Block description for '<S1>/UD':\n  //\n  //   Store in Global RAM\n\n  Single_Degree_of_Freedom_DW.UD_DSTATE =\n    Single_Degree_of_Freedom_P.DiscreteDerivative_ICPrevScaled;\n}\n\n// Model terminate function\nvoid Single_Degree_of_Freedom::terminate()\n{\n  // (no terminate code required)\n}\n\n// Root inport: '<Root>/Input' set method\nvoid Single_Degree_of_Freedom::setInput(real_T localArgInput)\n{\n  Single_Degree_of_Freedom_U.Input = localArgInput;\n}\n\n// Root outport: '<Root>/Output' get method\nreal_T Single_Degree_of_Freedom::getOutput() const\n{\n  return Single_Degree_of_Freedom_Y.Output;\n}\n\n// Constructor\nSingle_Degree_of_Freedom::Single_Degree_of_Freedom() :\n  Single_Degree_of_Freedom_U(),\n  Single_Degree_of_Freedom_Y(),\n  Single_Degree_of_Freedom_B(),\n  Single_Degree_of_Freedom_DW(),\n  Single_Degree_of_Freedom_M()\n{\n  // Currently there is no constructor body generated.\n}\n\n// Destructor\nSingle_Degree_of_Freedom::~Single_Degree_of_Freedom()\n{\n  // Currently there is no destructor body generated.\n}\n\n// Real-Time Model get method\nSingle_Degree_of_Freedom::RT_MODEL_Single_Degree_of_Fre_T\n  * Single_Degree_of_Freedom::getRTM()\n{\n  return (&Single_Degree_of_Freedom_M);\n}\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Single_Degree_of_Freedom.h","type":"header","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/Single_Degree_of_Freedom_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Single_Degree_of_Freedom.h\n//\n// Code generated for Simulink model 'Single_Degree_of_Freedom'.\n//\n// Model version                  : 6.5\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Sep  9 16:43:33 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#ifndef RTW_HEADER_Single_Degree_of_Freedom_h_\n#define RTW_HEADER_Single_Degree_of_Freedom_h_\n#include \"rtwtypes.h\"\n#include \"Single_Degree_of_Freedom_types.h\"\n\n// Macros for accessing real-time model data structure\n#ifndef rtmGetErrorStatus\n#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)\n#endif\n\n#ifndef rtmSetErrorStatus\n#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))\n#endif\n\n// Code_Instrumentation_Declarations_Placeholder\n\n// Class declaration for model Single_Degree_of_Freedom\nclass Single_Degree_of_Freedom\n{\n  // public data and function members\n public:\n  // Block signals (default storage)\n  struct B_Single_Degree_of_Freedom_T {\n    real_T Velocity;                   // '<Root>/X''\n    real_T Cx;                         // '<Root>/Cx''\n    real_T Kx;                         // '<Root>/Kx'\n    real_T TSamp;                      // '<S1>/TSamp'\n    real_T Uk1;                        // '<S1>/UD'\n    real_T Diff;                       // '<S1>/Diff'\n    real_T Cu;                         // '<Root>/Cu''\n    real_T Ku;                         // '<Root>/Ku'\n    real_T Add;                        // '<Root>/Add'\n    real_T Acceleration;               // '<Root>/Divide'\n  };\n\n  // Block states (default storage) for system '<Root>'\n  struct DW_Single_Degree_of_Freedom_T {\n    real_T X_DSTATE;                   // '<Root>/X'\n    real_T X_DSTATE_o;                 // '<Root>/X''\n    real_T UD_DSTATE;                  // '<S1>/UD'\n  };\n\n  // External inputs (root inport signals with default storage)\n  struct ExtU_Single_Degree_of_Freedom_T {\n    real_T Input;                      // '<Root>/Input'\n  };\n\n  // External outputs (root outports fed by signals with default storage)\n  struct ExtY_Single_Degree_of_Freedom_T {\n    real_T Output;                     // '<Root>/Output'\n  };\n\n  // Parameters (default storage)\n  struct P_Single_Degree_of_Freedom_T {\n    real_T DiscreteDerivative_ICPrevScaled;\n                              // Mask Parameter: DiscreteDerivative_ICPrevScaled\n                                 //  Referenced by: '<S1>/UD'\n\n    real_T X_gainval;                  // Computed Parameter: X_gainval\n                                          //  Referenced by: '<Root>/X'\n\n    real_T X_IC;                       // Expression: 0\n                                          //  Referenced by: '<Root>/X'\n\n    real_T X_gainval_h;                // Computed Parameter: X_gainval_h\n                                          //  Referenced by: '<Root>/X''\n\n    real_T X_IC_c;                     // Expression: 0\n                                          //  Referenced by: '<Root>/X''\n\n    real_T C_Value;                    // Expression: 1\n                                          //  Referenced by: '<Root>/C'\n\n    real_T K_Value;                    // Expression: 3\n                                          //  Referenced by: '<Root>/K'\n\n    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt\n                                          //  Referenced by: '<S1>/TSamp'\n\n    real_T m_Value;                    // Expression: 0.1\n                                          //  Referenced by: '<Root>/m'\n\n  };\n\n  // Real-time Model Data Structure\n  struct RT_MODEL_Single_Degree_of_Fre_T {\n    const char_T * volatile errorStatus;\n  };\n\n  // Real-Time Model get method\n  Single_Degree_of_Freedom::RT_MODEL_Single_Degree_of_Fre_T * getRTM();\n\n  // External inputs\n  ExtU_Single_Degree_of_Freedom_T Single_Degree_of_Freedom_U;\n\n  // External outputs\n  ExtY_Single_Degree_of_Freedom_T Single_Degree_of_Freedom_Y;\n\n  // Tunable parameters\n  static P_Single_Degree_of_Freedom_T Single_Degree_of_Freedom_P;\n\n  // Root inport: '<Root>/Input' set method\n  void setInput(real_T localArgInput);\n\n  // Root outport: '<Root>/Output' get method\n  real_T getOutput() const;\n\n  // model initialize function\n  void initialize();\n\n  // model step function\n  void step();\n\n  // model terminate function\n  static void terminate();\n\n  // Constructor\n  Single_Degree_of_Freedom();\n\n  // Destructor\n  ~Single_Degree_of_Freedom();\n\n  // private data and function members\n private:\n  // Block signals\n  B_Single_Degree_of_Freedom_T Single_Degree_of_Freedom_B;\n\n  // Block states\n  DW_Single_Degree_of_Freedom_T Single_Degree_of_Freedom_DW;\n\n  // Real-Time Model\n  RT_MODEL_Single_Degree_of_Fre_T Single_Degree_of_Freedom_M;\n};\n\n//-\n//  These blocks were eliminated from the model due to optimizations:\n//\n//  Block '<Root>/Acceleration (X\")' : Unused code path elimination\n//  Block '<Root>/Car vs. Road' : Unused code path elimination\n//  Block '<S1>/Data Type Duplicate' : Unused code path elimination\n//  Block '<Root>/Displacement (X)' : Unused code path elimination\n//  Block '<Root>/Road Surface (X)' : Unused code path elimination\n//  Block '<Root>/Velocity (X')' : Unused code path elimination\n\n\n//-\n//  The generated code includes comments that allow you to trace directly\n//  back to the appropriate location in the model.  The basic format\n//  is <system>/block_name, where system is the system number (uniquely\n//  assigned by Simulink) and block_name is the name of the block.\n//\n//  Use the MATLAB hilite_system command to trace the generated code back\n//  to the model.  For example,\n//\n//  hilite_system('<S3>')    - opens system 3\n//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3\n//\n//  Here is the system hierarchy for this model\n//\n//  '<Root>' : 'Single_Degree_of_Freedom'\n//  '<S1>'   : 'Single_Degree_of_Freedom/Discrete Derivative'\n\n#endif                                // RTW_HEADER_Single_Degree_of_Freedom_h_\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Single_Degree_of_Freedom_private.h","type":"header","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/Single_Degree_of_Freedom_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Single_Degree_of_Freedom_private.h\n//\n// Code generated for Simulink model 'Single_Degree_of_Freedom'.\n//\n// Model version                  : 6.5\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Sep  9 16:43:33 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#ifndef RTW_HEADER_Single_Degree_of_Freedom_private_h_\n#define RTW_HEADER_Single_Degree_of_Freedom_private_h_\n#include \"rtwtypes.h\"\n#include \"Single_Degree_of_Freedom_types.h\"\n#endif                        // RTW_HEADER_Single_Degree_of_Freedom_private_h_\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Single_Degree_of_Freedom_types.h","type":"header","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/Single_Degree_of_Freedom_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Single_Degree_of_Freedom_types.h\n//\n// Code generated for Simulink model 'Single_Degree_of_Freedom'.\n//\n// Model version                  : 6.5\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Sep  9 16:43:33 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#ifndef RTW_HEADER_Single_Degree_of_Freedom_types_h_\n#define RTW_HEADER_Single_Degree_of_Freedom_types_h_\n#endif                          // RTW_HEADER_Single_Degree_of_Freedom_types_h_\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Single_Degree_of_Freedom_data.cpp","type":"source","group":"data","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/Single_Degree_of_Freedom_ert_rtw","tag":"","groupDisplay":"Data files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Single_Degree_of_Freedom_data.cpp\n//\n// Code generated for Simulink model 'Single_Degree_of_Freedom'.\n//\n// Model version                  : 6.5\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Sep  9 16:43:33 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#include \"Single_Degree_of_Freedom.h\"\n\n// Block parameters (default storage)\nSingle_Degree_of_Freedom::P_Single_Degree_of_Freedom_T Single_Degree_of_Freedom::\n  Single_Degree_of_Freedom_P = {\n  // Mask Parameter: DiscreteDerivative_ICPrevScaled\n  //  Referenced by: '<S1>/UD'\n\n  0.0,\n\n  // Computed Parameter: X_gainval\n  //  Referenced by: '<Root>/X'\n\n  0.01,\n\n  // Expression: 0\n  //  Referenced by: '<Root>/X'\n\n  0.0,\n\n  // Computed Parameter: X_gainval_h\n  //  Referenced by: '<Root>/X''\n\n  0.01,\n\n  // Expression: 0\n  //  Referenced by: '<Root>/X''\n\n  0.0,\n\n  // Expression: 1\n  //  Referenced by: '<Root>/C'\n\n  1.0,\n\n  // Expression: 3\n  //  Referenced by: '<Root>/K'\n\n  3.0,\n\n  // Computed Parameter: TSamp_WtEt\n  //  Referenced by: '<S1>/TSamp'\n\n  100.0,\n\n  // Expression: 0.1\n  //  Referenced by: '<Root>/m'\n\n  0.1\n};\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"rtwtypes.h","type":"header","group":"sharedutility","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/slprj/ert/_sharedutils","tag":"","groupDisplay":"Shared files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: rtwtypes.h\n//\n// Code generated for Simulink model 'ClusterControl'.\n//\n// Model version                  : 1.1\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Tue Aug 22 21:10:09 2023\n//\n#ifndef RTWTYPES_H\n#define RTWTYPES_H\n\n// Logical type definitions\n#if (!defined(__cplusplus))\n#ifndef false\n#define false                          (0U)\n#endif\n\n#ifndef true\n#define true                           (1U)\n#endif\n#endif\n\n//=======================================================================*\n//  Target hardware information\n//    Device type: ARM Compatible->ARM Cortex-A (64-bit)\n//    Number of bits:     char:   8    short:   16    int:  32\n//                        long:  64    long long:  64\n//                        native word size:  64\n//    Byte ordering: LittleEndian\n//    Signed integer division rounds to: Zero\n//    Shift right on a signed integer as arithmetic shift: on\n// =======================================================================\n\n//=======================================================================*\n//  Fixed width word size data types:                                     *\n//    int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *\n//    uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *\n//    real32_T, real64_T           - 32 and 64 bit floating point numbers *\n// =======================================================================\ntypedef signed char int8_T;\ntypedef unsigned char uint8_T;\ntypedef short int16_T;\ntypedef unsigned short uint16_T;\ntypedef int int32_T;\ntypedef unsigned int uint32_T;\ntypedef long int64_T;\ntypedef unsigned long uint64_T;\ntypedef float real32_T;\ntypedef double real64_T;\n\n//===========================================================================*\n//  Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *\n//                            real_T, time_T, ulong_T, ulonglong_T.           *\n// ===========================================================================\ntypedef double real_T;\ntypedef double time_T;\ntypedef unsigned char boolean_T;\ntypedef int int_T;\ntypedef unsigned int uint_T;\ntypedef unsigned long ulong_T;\ntypedef unsigned long long ulonglong_T;\ntypedef char char_T;\ntypedef unsigned char uchar_T;\ntypedef char_T byte_T;\n\n//===========================================================================*\n//  Complex number type definitions                                           *\n// ===========================================================================\n#define CREAL_T\n\ntypedef struct {\n  real32_T re;\n  real32_T im;\n} creal32_T;\n\ntypedef struct {\n  real64_T re;\n  real64_T im;\n} creal64_T;\n\ntypedef struct {\n  real_T re;\n  real_T im;\n} creal_T;\n\n#define CINT8_T\n\ntypedef struct {\n  int8_T re;\n  int8_T im;\n} cint8_T;\n\n#define CUINT8_T\n\ntypedef struct {\n  uint8_T re;\n  uint8_T im;\n} cuint8_T;\n\n#define CINT16_T\n\ntypedef struct {\n  int16_T re;\n  int16_T im;\n} cint16_T;\n\n#define CUINT16_T\n\ntypedef struct {\n  uint16_T re;\n  uint16_T im;\n} cuint16_T;\n\n#define CINT32_T\n\ntypedef struct {\n  int32_T re;\n  int32_T im;\n} cint32_T;\n\n#define CUINT32_T\n\ntypedef struct {\n  uint32_T re;\n  uint32_T im;\n} cuint32_T;\n\n#define CINT64_T\n\ntypedef struct {\n  int64_T re;\n  int64_T im;\n} cint64_T;\n\n#define CUINT64_T\n\ntypedef struct {\n  uint64_T re;\n  uint64_T im;\n} cuint64_T;\n\n//=======================================================================*\n//  Min and Max:                                                          *\n//    int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *\n//    uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *\n// =======================================================================\n#define MAX_int8_T                     ((int8_T)(127))\n#define MIN_int8_T                     ((int8_T)(-128))\n#define MAX_uint8_T                    ((uint8_T)(255U))\n#define MAX_int16_T                    ((int16_T)(32767))\n#define MIN_int16_T                    ((int16_T)(-32768))\n#define MAX_uint16_T                   ((uint16_T)(65535U))\n#define MAX_int32_T                    ((int32_T)(2147483647))\n#define MIN_int32_T                    ((int32_T)(-2147483647-1))\n#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFU))\n#define MAX_int64_T                    ((int64_T)(9223372036854775807L))\n#define MIN_int64_T                    ((int64_T)(-9223372036854775807L-1L))\n#define MAX_uint64_T                   ((uint64_T)(0xFFFFFFFFFFFFFFFFUL))\n\n// Block D-Work pointer type\ntypedef void * pointer_T;\n\n#endif                                 // RTWTYPES_H\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"}],"features":{"annotation":false,"coverage":true,"profiling":true,"tooltip":true,"coverageTooltip":true,"showJustificationLinks":true,"useMWTable":false,"showProfilingInfo":true,"showTaskSummary":true}};