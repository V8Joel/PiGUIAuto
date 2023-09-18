//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: rt_roundd_snf.cpp
//
// Code generated for Simulink model 'ClusterControl'.
//
// Model version                  : 1.16
// Simulink Coder version         : 23.2 (R2023b) 19-May-2023
// C/C++ source code generated on : Sun Sep 17 20:26:14 2023
//
#include "rtwtypes.h"
#include "rt_roundd_snf.h"
#include <cmath>

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

//
// File trailer for generated code.
//
// [EOF]
//
