var dataJson = {"arch":{"ispc":false,"isunix":true,"ismac":true},"build":"Test2","ref":false,"files":[{"name":"ert_main.cpp","type":"source","group":"main","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/Test2_ert_rtw","tag":"","groupDisplay":"Main file","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: ert_main.cpp\n//\n// Code generated for Simulink model 'Test2'.\n//\n// Model version                  : 6.1\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Aug 19 11:08:29 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives:\n//    1. Execution efficiency\n//    2. Traceability\n// Validation result: Passed (9), Warning (1), Error (0)\n//\n#include <stddef.h>\n#include <stdio.h>              // This example main program uses printf/fflush\n#include \"Test2.h\"                     // Model header file\n\nstatic Test2 rtObj;                    // Instance of model class\n\n//\n// Associating rt_OneStep with a real-time clock or interrupt service routine\n// is what makes the generated code \"real-time\".  The function rt_OneStep is\n// always associated with the base rate of the model.  Subrates are managed\n// by the base rate from inside the generated code.  Enabling/disabling\n// interrupts and floating point context switches are target specific.  This\n// example code indicates where these should take place relative to executing\n// the generated code step function.  Overrun behavior should be tailored to\n// your application needs.  This example simply sets an error status in the\n// real-time model and returns from rt_OneStep.\n//\nvoid rt_OneStep(void);\nvoid rt_OneStep(void)\n{\n  static boolean_T OverrunFlag = false;\n\n  // Disable interrupts here\n\n  // Check for overrun\n  if (OverrunFlag) {\n    return;\n  }\n\n  OverrunFlag = true;\n\n  // Save FPU context here (if necessary)\n  // Re-enable timer or interrupt here\n  // Set model inputs here\n\n  // Step the model\n  rtObj.step();\n\n  // Get model outputs here\n\n  // Indicate task complete\n  OverrunFlag = false;\n\n  // Disable interrupts here\n  // Restore FPU context here (if necessary)\n  // Enable interrupts here\n}\n\n//\n// The example main function illustrates what is required by your\n// application code to initialize, execute, and terminate the generated code.\n// Attaching rt_OneStep to a real-time clock is target specific. This example\n// illustrates how you do this relative to initializing the model.\n//\nint_T main(int_T argc, const char *argv[])\n{\n  // Unused arguments\n  (void)(argc);\n  (void)(argv);\n\n  // Initialize model\n  rtObj.initialize();\n\n  // Attach rt_OneStep to a timer or interrupt service routine with\n  //  period 0.1 seconds (base rate of the model) here.\n  //  The call syntax for rt_OneStep is\n  //\n  //   rt_OneStep();\n\n  printf(\"Warning: The simulation will run forever. \"\n         \"Generated ERT main won't simulate model step behavior. \"\n         \"To change this behavior select the 'MAT-file logging' option.\\n\");\n  fflush((NULL));\n  while (1) {\n    //  Perform application tasks here\n  }\n\n  // The option 'Remove error status field in real-time model data structure'\n  //  is selected, therefore the following code does not need to execute.\n\n\n  // Terminate model\n  rtObj.terminate();\n  return 0;\n}\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Test2.cpp","type":"source","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/Test2_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Test2.cpp\n//\n// Code generated for Simulink model 'Test2'.\n//\n// Model version                  : 6.1\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Aug 19 11:08:29 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives:\n//    1. Execution efficiency\n//    2. Traceability\n// Validation result: Passed (9), Warning (1), Error (0)\n//\n#include \"Test2.h\"\n\n// Model step function\nvoid Test2::step()\n{\n  // Outport: '<Root>/Test2Out' incorporates:\n  //   Gain: '<Root>/Gain'\n  //   Inport: '<Root>/Test2In'\n\n  rtY.Test2Out = rtP.Gain_Gain * rtU.Data2In;\n}\n\n// Model initialize function\nvoid Test2::initialize()\n{\n  // (no initialization code required)\n}\n\n// Model terminate function\nvoid Test2::terminate()\n{\n  // (no terminate code required)\n}\n\n// Constructor\nTest2::Test2():\n  rtU(),\n  rtY()\n{\n  // Currently there is no constructor body generated.\n}\n\n// Destructor\nTest2::~Test2()\n{\n  // Currently there is no destructor body generated.\n}\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Test2.h","type":"header","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/Test2_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Test2.h\n//\n// Code generated for Simulink model 'Test2'.\n//\n// Model version                  : 6.1\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Aug 19 11:08:29 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives:\n//    1. Execution efficiency\n//    2. Traceability\n// Validation result: Passed (9), Warning (1), Error (0)\n//\n#ifndef RTW_HEADER_Test2_h_\n#define RTW_HEADER_Test2_h_\n#include \"rtwtypes.h\"\n#include \"Test2_types.h\"\n\n// Class declaration for model Test2\nclass Test2\n{\n  // public data and function members\n public:\n  // External inputs (root inport signals with default storage)\n  struct ExtU {\n    real_T Data2In;                    // '<Root>/Test2In'\n  };\n\n  // External outputs (root outports fed by signals with default storage)\n  struct ExtY {\n    real_T Test2Out;                   // '<Root>/Test2Out'\n  };\n\n  // Parameters (default storage)\n  struct P {\n    real_T Gain_Gain;                  // Expression: 2\n                                          //  Referenced by: '<Root>/Gain'\n\n  };\n\n  // External inputs\n  ExtU rtU;\n\n  // External outputs\n  ExtY rtY;\n\n  // Tunable parameters\n  static P rtP;\n\n  // model initialize function\n  static void initialize();\n\n  // model step function\n  void step();\n\n  // model terminate function\n  static void terminate();\n\n  // Constructor\n  Test2();\n\n  // Destructor\n  ~Test2();\n};\n\n//-\n//  The generated code includes comments that allow you to trace directly\n//  back to the appropriate location in the model.  The basic format\n//  is <system>/block_name, where system is the system number (uniquely\n//  assigned by Simulink) and block_name is the name of the block.\n//\n//  Use the MATLAB hilite_system command to trace the generated code back\n//  to the model.  For example,\n//\n//  hilite_system('<S3>')    - opens system 3\n//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3\n//\n//  Here is the system hierarchy for this model\n//\n//  '<Root>' : 'Test2'\n//  '<S1>'   : 'Test2/Initialize Function'\n//  '<S2>'   : 'Test2/Terminate Function'\n\n\n//-\n//  Requirements for '<Root>': Test2\n\n\n#endif                                 // RTW_HEADER_Test2_h_\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Test2_private.h","type":"header","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/Test2_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Test2_private.h\n//\n// Code generated for Simulink model 'Test2'.\n//\n// Model version                  : 6.1\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Aug 19 11:08:29 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives:\n//    1. Execution efficiency\n//    2. Traceability\n// Validation result: Passed (9), Warning (1), Error (0)\n//\n#ifndef RTW_HEADER_Test2_private_h_\n#define RTW_HEADER_Test2_private_h_\n#include \"rtwtypes.h\"\n#include \"Test2_types.h\"\n#endif                                 // RTW_HEADER_Test2_private_h_\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Test2_types.h","type":"header","group":"model","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/Test2_ert_rtw","tag":"","groupDisplay":"Model files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Test2_types.h\n//\n// Code generated for Simulink model 'Test2'.\n//\n// Model version                  : 6.1\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Aug 19 11:08:29 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives:\n//    1. Execution efficiency\n//    2. Traceability\n// Validation result: Passed (9), Warning (1), Error (0)\n//\n#ifndef RTW_HEADER_Test2_types_h_\n#define RTW_HEADER_Test2_types_h_\n#endif                                 // RTW_HEADER_Test2_types_h_\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"Test2_data.cpp","type":"source","group":"data","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/Test2_ert_rtw","tag":"","groupDisplay":"Data files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: Test2_data.cpp\n//\n// Code generated for Simulink model 'Test2'.\n//\n// Model version                  : 6.1\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Aug 19 11:08:29 2023\n//\n// Target selection: ert.tlc\n// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)\n// Code generation objectives:\n//    1. Execution efficiency\n//    2. Traceability\n// Validation result: Passed (9), Warning (1), Error (0)\n//\n#include \"Test2.h\"\n\n// Block parameters (default storage)\nTest2::P Test2::rtP = {\n  // Expression: 2\n  //  Referenced by: '<Root>/Gain'\n\n  2.0\n};\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"},{"name":"rtwtypes.h","type":"header","group":"sharedutility","path":"/Users/joel/GitHub/PiGUIAuto/PiGUIAuto/MATLAB/slprj/ert/_sharedutils","tag":"","groupDisplay":"Shared files","code":"//\n// Prerelease License - for engineering feedback and testing purposes\n// only. Not for sale.\n//\n// File: rtwtypes.h\n//\n// Code generated for Simulink model 'Test2'.\n//\n// Model version                  : 6.1\n// Simulink Coder version         : 23.2 (R2023b) 19-May-2023\n// C/C++ source code generated on : Sat Aug 19 11:08:29 2023\n//\n#ifndef RTWTYPES_H\n#define RTWTYPES_H\n\n// Logical type definitions\n#if (!defined(__cplusplus))\n#ifndef false\n#define false                          (0U)\n#endif\n\n#ifndef true\n#define true                           (1U)\n#endif\n#endif\n\n//=======================================================================*\n//  Target hardware information\n//    Device type: ARM Compatible->ARM Cortex-A (64-bit)\n//    Number of bits:     char:   8    short:   16    int:  32\n//                        long:  64    long long:  64\n//                        native word size:  64\n//    Byte ordering: LittleEndian\n//    Signed integer division rounds to: Zero\n//    Shift right on a signed integer as arithmetic shift: on\n// =======================================================================\n\n//=======================================================================*\n//  Fixed width word size data types:                                     *\n//    int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *\n//    uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *\n//    real32_T, real64_T           - 32 and 64 bit floating point numbers *\n// =======================================================================\ntypedef signed char int8_T;\ntypedef unsigned char uint8_T;\ntypedef short int16_T;\ntypedef unsigned short uint16_T;\ntypedef int int32_T;\ntypedef unsigned int uint32_T;\ntypedef long int64_T;\ntypedef unsigned long uint64_T;\ntypedef float real32_T;\ntypedef double real64_T;\n\n//===========================================================================*\n//  Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *\n//                            real_T, time_T, ulong_T, ulonglong_T.           *\n// ===========================================================================\ntypedef double real_T;\ntypedef double time_T;\ntypedef unsigned char boolean_T;\ntypedef int int_T;\ntypedef unsigned int uint_T;\ntypedef unsigned long ulong_T;\ntypedef unsigned long long ulonglong_T;\ntypedef char char_T;\ntypedef unsigned char uchar_T;\ntypedef char_T byte_T;\n\n//=======================================================================*\n//  Min and Max:                                                          *\n//    int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *\n//    uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *\n// =======================================================================\n#define MAX_int8_T                     ((int8_T)(127))\n#define MIN_int8_T                     ((int8_T)(-128))\n#define MAX_uint8_T                    ((uint8_T)(255U))\n#define MAX_int16_T                    ((int16_T)(32767))\n#define MIN_int16_T                    ((int16_T)(-32768))\n#define MAX_uint16_T                   ((uint16_T)(65535U))\n#define MAX_int32_T                    ((int32_T)(2147483647))\n#define MIN_int32_T                    ((int32_T)(-2147483647-1))\n#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFU))\n#define MAX_int64_T                    ((int64_T)(9223372036854775807L))\n#define MIN_int64_T                    ((int64_T)(-9223372036854775807L-1L))\n#define MAX_uint64_T                   ((uint64_T)(0xFFFFFFFFFFFFFFFFUL))\n\n// Block D-Work pointer type\ntypedef void * pointer_T;\n\n#endif                                 // RTWTYPES_H\n\n//\n// File trailer for generated code.\n//\n// [EOF]\n//\n"}],"features":{"annotation":false,"coverage":true,"profiling":true,"tooltip":true,"coverageTooltip":true,"showJustificationLinks":true,"useMWTable":false,"showProfilingInfo":true,"showTaskSummary":true}};