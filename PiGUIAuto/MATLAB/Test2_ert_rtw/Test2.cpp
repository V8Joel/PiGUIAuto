//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: Test2.cpp
//
// Code generated for Simulink model 'Test2'.
//
// Model version                  : 6.1
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sat Aug 19 11:08:29 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives:
//    1. Execution efficiency
//    2. Traceability
// Validation result: Passed (9), Warning (1), Error (0)
//
#include "Test2.h"

// Model step function
void Test2::step()
{
  // Outport: '<Root>/Test2Out' incorporates:
  //   Gain: '<Root>/Gain'
  //   Inport: '<Root>/Test2In'

  rtY.Test2Out = rtP.Gain_Gain * rtU.Data2In;
}

// Model initialize function
void Test2::initialize()
{
  // (no initialization code required)
}

// Model terminate function
void Test2::terminate()
{
  // (no terminate code required)
}

// Constructor
Test2::Test2():
  rtU(),
  rtY()
{
  // Currently there is no constructor body generated.
}

// Destructor
Test2::~Test2()
{
  // Currently there is no destructor body generated.
}

//
// File trailer for generated code.
//
// [EOF]
//
