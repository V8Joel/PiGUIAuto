var dataJson = {"arch":{"ispc":false,"isunix":true,"ismac":true},"build":"ClusterControl","ref":false,"files":[{"name":"ert_main.cpp","type":"source","group":"main","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/ClusterControl_ert_rtw","tag":"","groupDisplay":"Main file","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: ert_main.cpp\n//\n// Code generated for Simulink model 'ClusterControl'.\n//\n// Model version                  : 1.3\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Wed Aug 30 20:42:25 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#include <stdio.h>\n#include \"ClusterControl.h\"            // Model header file\n\nstatic BenchTest::ClusterControl ClusterControl_Obj;// Instance of model class\n\n//\n// The example main function illustrates what is required by your\n// application code to initialize, execute, and terminate the generated code.\n// Attaching exported functions to a real-time clock is target specific.\n//\nint_T main(int_T argc, const char *argv[])\n{\n  // Unused arguments\n  (void)(argc);\n  (void)(argv);\n\n  // Initialize model\n  ClusterControl_Obj.Initialize();\n  while (rtmGetErrorStatus(ClusterControl_Obj.getRTM()) == (NULL)) {\n    //  Perform application tasks here.\n  }\n\n  // Terminate model\n  ClusterControl_Obj.Terminate();\n  return 0;\n}\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"ClusterControl.cpp","type":"source","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/ClusterControl_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: ClusterControl.cpp\n//\n// Code generated for Simulink model 'ClusterControl'.\n//\n// Model version                  : 1.3\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Wed Aug 30 20:42:25 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#include \"ClusterControl.h\"\n\nnamespace BenchTest\n{\n  // Model step function\n  void ClusterControl::Model_Step_10Hz()\n  {\n    // Outputs for Function Call SubSystem: '<Root>/Model_Step'\n    // SignalConversion generated from: '<S2>/RPM_Raw'\n    ClusterControl_B.RPM_Raw = ClusterControl_B.RPM_In;\n\n    // Outport: '<Root>/RPM_Out' incorporates:\n    //   Constant: '<S2>/Constant'\n    //   Product: '<S2>/Product'\n\n    ClusterControl_Y.RPM_Out = ClusterControl_B.RPM_Raw *\n      ClusterControl_P.Constant_Value;\n\n    // End of Outputs for SubSystem: '<Root>/Model_Step'\n  }\n\n  // Model step function\n  void ClusterControl::RPM_Update()\n  {\n    // Outputs for Function Call SubSystem: '<Root>/RPM_Intake'\n    // SignalConversion generated from: '<S3>/RPM_In' incorporates:\n    //   Inport: '<Root>/RPM_In'\n\n    ClusterControl_B.RPM_In = ClusterControl_U.RPM_In;\n\n    // End of Outputs for SubSystem: '<Root>/RPM_Intake'\n  }\n\n  // Model initialize function\n  void ClusterControl::Initialize()\n  {\n    // SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Model_Step' incorporates:\n    //   SubSystem: '<Root>/Model_Step'\n\n    // SystemInitialize for Outport: '<Root>/RPM_Out' incorporates:\n    //   Outport: '<S2>/RPM_Out'\n\n    ClusterControl_Y.RPM_Out = ClusterControl_P.RPM_Out_Y0;\n\n    // End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Model_Step' \n\n    // SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/RPM_Intake' incorporates:\n    //   SubSystem: '<Root>/RPM_Intake'\n\n    // SystemInitialize for SignalConversion generated from: '<S3>/RPM_In' incorporates:\n    //   Outport: '<S3>/RPM_Raw'\n\n    ClusterControl_B.RPM_In = ClusterControl_P.RPM_Raw_Y0;\n\n    // End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/RPM_Intake' \n  }\n\n  // Model terminate function\n  void ClusterControl::Terminate()\n  {\n    // (no terminate code required)\n  }\n\n  // Constructor\n  ClusterControl::ClusterControl() :\n    ClusterControl_U(),\n    ClusterControl_Y(),\n    ClusterControl_B(),\n    ClusterControl_M()\n  {\n    // Currently there is no constructor body generated.\n  }\n\n  // Destructor\n  ClusterControl::~ClusterControl()\n  {\n    // Currently there is no destructor body generated.\n  }\n\n  // Real-Time Model get method\n  ClusterControl::RT_MODEL_ClusterControl_T * ClusterControl::getRTM()\n  {\n    return (&ClusterControl_M);\n  }\n}\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"ClusterControl.h","type":"header","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/ClusterControl_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: ClusterControl.h\n//\n// Code generated for Simulink model 'ClusterControl'.\n//\n// Model version                  : 1.3\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Wed Aug 30 20:42:25 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#ifndef RTW_HEADER_ClusterControl_h_\n#define RTW_HEADER_ClusterControl_h_\n#include \"rtwtypes.h\"\n#include \"ClusterControl_types.h\"\n#include <stddef.h>\n\n// Macros for accessing real-time model data structure\n#ifndef rtmGetErrorStatus\n#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)\n#endif\n\n#ifndef rtmSetErrorStatus\n#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))\n#endif\n\n// Code_Instrumentation_Declarations_Placeholder\n\n// Class declaration for model ClusterControl\nnamespace BenchTest\n{\n  class ClusterControl\n  {\n    // public data and function members\n   public:\n    // Block signals (default storage)\n    struct B_ClusterControl_T {\n      real_T RPM_In;\n      real_T RPM_Raw;\n    };\n\n    // External inputs (root inport signals with default storage)\n    struct ExtU_ClusterControl_T {\n      real_T RPM_In;                   // '<Root>/RPM_In'\n    };\n\n    // External outputs (root outports fed by signals with default storage)\n    struct ExtY_ClusterControl_T {\n      real_T RPM_Out;                  // '<Root>/RPM_Out'\n    };\n\n    // Parameters (default storage)\n    struct P_ClusterControl_T {\n      real_T RPM_Out_Y0;               // Computed Parameter: RPM_Out_Y0\n                                          //  Referenced by: '<S2>/RPM_Out'\n\n      real_T Constant_Value;           // Expression: RPM_Gain\n                                          //  Referenced by: '<S2>/Constant'\n\n      real_T RPM_Raw_Y0;               // Computed Parameter: RPM_Raw_Y0\n                                          //  Referenced by: '<S3>/RPM_Raw'\n\n    };\n\n    // Real-time Model Data Structure\n    struct RT_MODEL_ClusterControl_T {\n      const char_T * volatile errorStatus;\n    };\n\n    // Real-Time Model get method\n    ClusterControl::RT_MODEL_ClusterControl_T * getRTM();\n\n    // External inputs\n    ExtU_ClusterControl_T ClusterControl_U;\n\n    // External outputs\n    ExtY_ClusterControl_T ClusterControl_Y;\n\n    // Tunable parameters\n    static P_ClusterControl_T ClusterControl_P;\n\n    // model initialize function\n    void Initialize();\n\n    // model step function\n    void Model_Step_10Hz();\n\n    // model step function\n    void RPM_Update();\n\n    // model terminate function\n    static void Terminate();\n\n    // Constructor\n    ClusterControl();\n\n    // Destructor\n    ~ClusterControl();\n\n    // private data and function members\n   private:\n    // Block signals\n    B_ClusterControl_T ClusterControl_B;\n\n    // Real-Time Model\n    RT_MODEL_ClusterControl_T ClusterControl_M;\n  };\n}\n\n//-\n//  The generated code includes comments that allow you to trace directly\n//  back to the appropriate location in the model.  The basic format\n//  is <system>/block_name, where system is the system number (uniquely\n//  assigned by Simulink) and block_name is the name of the block.\n//\n//  Use the MATLAB hilite_system command to trace the generated code back\n//  to the model.  For example,\n//\n//  hilite_system('<S3>')    - opens system 3\n//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3\n//\n//  Here is the system hierarchy for this model\n//\n//  '<Root>' : 'ClusterControl'\n//  '<S1>'   : 'ClusterControl/Initialize Function'\n//  '<S2>'   : 'ClusterControl/Model_Step'\n//  '<S3>'   : 'ClusterControl/RPM_Intake'\n//  '<S4>'   : 'ClusterControl/Terminate Function'\n\n#endif                                 // RTW_HEADER_ClusterControl_h_\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"ClusterControl_private.h","type":"header","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/ClusterControl_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: ClusterControl_private.h\n//\n// Code generated for Simulink model 'ClusterControl'.\n//\n// Model version                  : 1.3\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Wed Aug 30 20:42:25 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#ifndef RTW_HEADER_ClusterControl_private_h_\n#define RTW_HEADER_ClusterControl_private_h_\n#include \"rtwtypes.h\"\n#include \"ClusterControl_types.h\"\n#endif                                 // RTW_HEADER_ClusterControl_private_h_\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"ClusterControl_types.h","type":"header","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/ClusterControl_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: ClusterControl_types.h\n//\n// Code generated for Simulink model 'ClusterControl'.\n//\n// Model version                  : 1.3\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Wed Aug 30 20:42:25 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#ifndef RTW_HEADER_ClusterControl_types_h_\n#define RTW_HEADER_ClusterControl_types_h_\n#endif                                 // RTW_HEADER_ClusterControl_types_h_\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"ClusterControl_data.cpp","type":"source","group":"data","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/ClusterControl_ert_rtw","tag":"","groupDisplay":"Data files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: ClusterControl_data.cpp\n//\n// Code generated for Simulink model 'ClusterControl'.\n//\n// Model version                  : 1.3\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Wed Aug 30 20:42:25 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives: Unspecified\n// Validation result: Not run\n//\n#include \"ClusterControl.h\"\n\n// Block parameters (default storage)\nBenchTest::ClusterControl::P_ClusterControl_T BenchTest::ClusterControl::\n  ClusterControl_P = {\n  // Computed Parameter: RPM_Out_Y0\n  //  Referenced by: '<S2>/RPM_Out'\n\n  0.0,\n\n  // Expression: RPM_Gain\n  //  Referenced by: '<S2>/Constant'\n\n  2.0,\n\n  // Computed Parameter: RPM_Raw_Y0\n  //  Referenced by: '<S3>/RPM_Raw'\n\n  0.0\n};\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"rtwtypes.h","type":"header","group":"sharedutility","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/ClusterControl/slprj/ert/_sharedutils","tag":"","groupDisplay":"Shared files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: rtwtypes.h\n//\n// Code generated for Simulink model 'ClusterControl'.\n//\n// Model version                  : 1.1\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Tue Aug 22 21:10:09 2023\n//\n#ifndef RTWTYPES_H\n#define RTWTYPES_H\n\n// Logical type definitions\n#if (!defined(__cplusplus))\n#ifndef false\n#define false                          (0U)\n#endif\n\n#ifndef true\n#define true                           (1U)\n#endif\n#endif\n\n//=======================================================================*\n//  Target hardware information\n//    Device type: ARM Compatible->ARM Cortex-A (64-bit)\n//    Number of bits:     char:   8    short:   16    int:  32\n//                        long:  64    long long:  64\n//                        native word size:  64\n//    Byte ordering: LittleEndian\n//    Signed integer division rounds to: Zero\n//    Shift right on a signed integer as arithmetic shift: on\n// =======================================================================\n\n//=======================================================================*\n//  Fixed width word size data types:                                     *\n//    int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *\n//    uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *\n//    real32_T, real64_T           - 32 and 64 bit floating point numbers *\n// =======================================================================\ntypedef signed char int8_T;\ntypedef unsigned char uint8_T;\ntypedef short int16_T;\ntypedef unsigned short uint16_T;\ntypedef int int32_T;\ntypedef unsigned int uint32_T;\ntypedef long int64_T;\ntypedef unsigned long uint64_T;\ntypedef float real32_T;\ntypedef double real64_T;\n\n//===========================================================================*\n//  Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *\n//                            real_T, time_T, ulong_T, ulonglong_T.           *\n// ===========================================================================\ntypedef double real_T;\ntypedef double time_T;\ntypedef unsigned char boolean_T;\ntypedef int int_T;\ntypedef unsigned int uint_T;\ntypedef unsigned long ulong_T;\ntypedef unsigned long long ulonglong_T;\ntypedef char char_T;\ntypedef unsigned char uchar_T;\ntypedef char_T byte_T;\n\n//===========================================================================*\n//  Complex number type definitions                                           *\n// ===========================================================================\n#define CREAL_T\n\ntypedef struct {\n  real32_T re;\n  real32_T im;\n} creal32_T;\n\ntypedef struct {\n  real64_T re;\n  real64_T im;\n} creal64_T;\n\ntypedef struct {\n  real_T re;\n  real_T im;\n} creal_T;\n\n#define CINT8_T\n\ntypedef struct {\n  int8_T re;\n  int8_T im;\n} cint8_T;\n\n#define CUINT8_T\n\ntypedef struct {\n  uint8_T re;\n  uint8_T im;\n} cuint8_T;\n\n#define CINT16_T\n\ntypedef struct {\n  int16_T re;\n  int16_T im;\n} cint16_T;\n\n#define CUINT16_T\n\ntypedef struct {\n  uint16_T re;\n  uint16_T im;\n} cuint16_T;\n\n#define CINT32_T\n\ntypedef struct {\n  int32_T re;\n  int32_T im;\n} cint32_T;\n\n#define CUINT32_T\n\ntypedef struct {\n  uint32_T re;\n  uint32_T im;\n} cuint32_T;\n\n#define CINT64_T\n\ntypedef struct {\n  int64_T re;\n  int64_T im;\n} cint64_T;\n\n#define CUINT64_T\n\ntypedef struct {\n  uint64_T re;\n  uint64_T im;\n} cuint64_T;\n\n//=======================================================================*\n//  Min and Max:                                                          *\n//    int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *\n//    uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *\n// =======================================================================\n#define MAX_int8_T                     ((int8_T)(127))\n#define MIN_int8_T                     ((int8_T)(-128))\n#define MAX_uint8_T                    ((uint8_T)(255U))\n#define MAX_int16_T                    ((int16_T)(32767))\n#define MIN_int16_T                    ((int16_T)(-32768))\n#define MAX_uint16_T                   ((uint16_T)(65535U))\n#define MAX_int32_T                    ((int32_T)(2147483647))\n#define MIN_int32_T                    ((int32_T)(-2147483647-1))\n#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFU))\n#define MAX_int64_T                    ((int64_T)(9223372036854775807L))\n#define MIN_int64_T                    ((int64_T)(-9223372036854775807L-1L))\n#define MAX_uint64_T                   ((uint64_T)(0xFFFFFFFFFFFFFFFFUL))\n\n// Block D-Work pointer type\ntypedef void * pointer_T;\n\n#endif                                 // RTWTYPES_H\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"}],"features":{"annotation":false,"coverage":true,"profiling":true,"tooltip":true,"coverageTooltip":true,"showJustificationLinks":true,"useMWTable":false,"showProfilingInfo":true,"showTaskSummary":true}};