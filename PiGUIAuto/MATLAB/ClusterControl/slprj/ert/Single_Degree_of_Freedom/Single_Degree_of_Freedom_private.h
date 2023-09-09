//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: Single_Degree_of_Freedom_private.h
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
#ifndef RTW_HEADER_Single_Degree_of_Freedom_private_h_
#define RTW_HEADER_Single_Degree_of_Freedom_private_h_
#include "rtwtypes.h"
#include "Single_Degree_of_Freedom_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif
#endif                        // RTW_HEADER_Single_Degree_of_Freedom_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
