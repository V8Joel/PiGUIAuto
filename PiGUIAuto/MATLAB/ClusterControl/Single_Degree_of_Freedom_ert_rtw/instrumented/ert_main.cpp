//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: ert_main.cpp
//
// Code generated for Simulink model 'Single_Degree_of_Freedom'.
//
// Model version                  : 6.5
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sat Sep  9 16:43:33 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include <stddef.h>
#include <stdio.h>              // This example main program uses printf/fflush
#include "Single_Degree_of_Freedom.h"  // Model header file

static Single_Degree_of_Freedom Single_Degree_of_Freedom_Obj;// Instance of model class 

//
// Associating rt_OneStep with a real-time clock or interrupt service routine
// is what makes the generated code "real-time".  The function rt_OneStep is
// always associated with the base rate of the model.  Subrates are managed
// by the base rate from inside the generated code.  Enabling/disabling
// interrupts and floating point context switches are target specific.  This
// example code indicates where these should take place relative to executing
// the generated code step function.  Overrun behavior should be tailored to
// your application needs.  This example simply sets an error status in the
// real-time model and returns from rt_OneStep.
//
void rt_OneStep(void);
void rt_OneStep(void)
{
  static boolean_T OverrunFlag = false;

  // Disable interrupts here

  // Check for overrun
  if (OverrunFlag) {
    rtmSetErrorStatus(Single_Degree_of_Freedom_Obj.getRTM(), "Overrun");
    return;
  }

  OverrunFlag = true;

  // Save FPU context here (if necessary)
  // Re-enable timer or interrupt here
  // Set model inputs here

  // Step the model
  Single_Degree_of_Freedom_Obj.step();

  // Get model outputs here

  // Indicate task complete
  OverrunFlag = false;

  // Disable interrupts here
  // Restore FPU context here (if necessary)
  // Enable interrupts here
}

//
// The example main function illustrates what is required by your
// application code to initialize, execute, and terminate the generated code.
// Attaching rt_OneStep to a real-time clock is target specific. This example
// illustrates how you do this relative to initializing the model.
//
int_T main(int_T argc, const char *argv[])
{
  // Unused arguments
  (void)(argc);
  (void)(argv);

  // Initialize model
  Single_Degree_of_Freedom_Obj.initialize();

  // Attach rt_OneStep to a timer or interrupt service routine with
  //  period 0.01 seconds (base rate of the model) here.
  //  The call syntax for rt_OneStep is
  //
  //   rt_OneStep();

  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (rtmGetErrorStatus(Single_Degree_of_Freedom_Obj.getRTM()) == (NULL)) {
    //  Perform application tasks here
  }

  // Terminate model
  Single_Degree_of_Freedom_Obj.terminate();
  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
