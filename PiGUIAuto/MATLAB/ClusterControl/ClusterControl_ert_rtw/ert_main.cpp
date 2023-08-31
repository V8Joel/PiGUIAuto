//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ert_main.cpp
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.3
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Wed Aug 30 20:42:25 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include <stdio.h>
#include "ClusterControl.h"            // Model header file

static BenchTest::ClusterControl ClusterControl_Obj;// Instance of model class

//
// The example main function illustrates what is required by your
// application code to initialize, execute, and terminate the generated code.
// Attaching exported functions to a real-time clock is target specific.
//
int_T main(int_T argc, const char *argv[])
{
  // Unused arguments
  (void)(argc);
  (void)(argv);

  // Initialize model
  ClusterControl_Obj.Initialize();
  while (rtmGetErrorStatus(ClusterControl_Obj.getRTM()) == (NULL)) {
    //  Perform application tasks here.
  }

  // Terminate model
  ClusterControl_Obj.Terminate();
  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
