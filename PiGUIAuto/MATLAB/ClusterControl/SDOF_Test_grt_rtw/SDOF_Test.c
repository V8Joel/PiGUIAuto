/*
 * SDOF_Test.c
 *
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * Code generation for model "SDOF_Test".
 *
 * Model version              : 1.3
 * Simulink Coder version : 23.2 (R2023b) 19-May-2023
 * C source code generated on : Sun Sep 17 21:35:30 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SDOF_Test.h"
#include "SDOF_Test_private.h"
#include "rt_nonfinite.h"

/* Real-time model */
static RT_MODEL_SDOF_Test_T SDOF_Test_M_;
RT_MODEL_SDOF_Test_T *const SDOF_Test_M = &SDOF_Test_M_;

/* Model step function */
void SDOF_Test_step(void)
{
  /* Matfile logging */
  rt_UpdateTXYLogVars(SDOF_Test_M->rtwLogInfo, (&SDOF_Test_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(SDOF_Test_M)!=-1) &&
        !((rtmGetTFinal(SDOF_Test_M)-SDOF_Test_M->Timing.taskTime0) >
          SDOF_Test_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(SDOF_Test_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SDOF_Test_M->Timing.clockTick0)) {
    ++SDOF_Test_M->Timing.clockTickH0;
  }

  SDOF_Test_M->Timing.taskTime0 = SDOF_Test_M->Timing.clockTick0 *
    SDOF_Test_M->Timing.stepSize0 + SDOF_Test_M->Timing.clockTickH0 *
    SDOF_Test_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void SDOF_Test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SDOF_Test_M, 0,
                sizeof(RT_MODEL_SDOF_Test_T));
  rtmSetTFinal(SDOF_Test_M, 3.0);
  SDOF_Test_M->Timing.stepSize0 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    SDOF_Test_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(SDOF_Test_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(SDOF_Test_M->rtwLogInfo, (NULL));
    rtliSetLogT(SDOF_Test_M->rtwLogInfo, "tout");
    rtliSetLogX(SDOF_Test_M->rtwLogInfo, "");
    rtliSetLogXFinal(SDOF_Test_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(SDOF_Test_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(SDOF_Test_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(SDOF_Test_M->rtwLogInfo, 0);
    rtliSetLogDecimation(SDOF_Test_M->rtwLogInfo, 1);
    rtliSetLogY(SDOF_Test_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(SDOF_Test_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(SDOF_Test_M->rtwLogInfo, (NULL));
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(SDOF_Test_M->rtwLogInfo, 0.0, rtmGetTFinal
    (SDOF_Test_M), SDOF_Test_M->Timing.stepSize0, (&rtmGetErrorStatus
    (SDOF_Test_M)));
}

/* Model terminate function */
void SDOF_Test_terminate(void)
{
  /* (no terminate code required) */
}
