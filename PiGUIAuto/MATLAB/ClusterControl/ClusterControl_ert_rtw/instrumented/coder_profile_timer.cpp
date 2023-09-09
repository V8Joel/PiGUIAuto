/*
 * File: coder_profile_timer.cpp
 *
 * Code generated for instrumentation.
 *
 * This file contains stub implementations of the instrumentation utility
 * functions. These stubs allow instrumented code to be compiled
 * into an executable that does not support collection of execution
 * instrumentation data.
 *
 */

#include "coder_profile_timer.h"

/* Code instrumentation offset(s) for model Single_Degree_of_Freedom */

/* Code instrumentation offset(s) for model ClusterControl */
#define profileStart_ClusterControl_offset 0
#define profileEnd_ClusterControl_offset 0

/* A function parameter may be intentionally unused */
#ifndef UNUSED_PARAMETER
# if defined(__LCC__)
#   define UNUSED_PARAMETER(x)
# else
#   define UNUSED_PARAMETER(x)         (void) (x)
# endif
#endif

void xilProfilingTimerFreezeInternal(void)
{
}

void xilProfilingTimerFreeze(void)
{
}

void xilProfilingTimerUnFreezeInternal(void)
{
}

void xilProfilingTimerUnFreeze(void)
{
}

void profileStart(uint32_T sectionId)
{
  UNUSED_PARAMETER(sectionId);
}

void profileEnd(uint32_T sectionId)
{
  UNUSED_PARAMETER(sectionId);
}

/* Code instrumentation method(s) for model Single_Degree_of_Freedom */

/* Code instrumentation method(s) for model ClusterControl */
void profileStart_ClusterControl(uint32_T sectionId)
{
  profileStart(profileStart_ClusterControl_offset + sectionId);
}

void profileEnd_ClusterControl(uint32_T sectionId)
{
  profileEnd(profileEnd_ClusterControl_offset + sectionId);
}
