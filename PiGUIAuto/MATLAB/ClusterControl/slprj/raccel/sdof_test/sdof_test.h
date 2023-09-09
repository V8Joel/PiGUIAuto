#ifndef RTW_HEADER_sdof_test_h_
#define RTW_HEADER_sdof_test_h_
#ifndef sdof_test_COMMON_INCLUDES_
#define sdof_test_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "sdof_test_types.h"
#include "Single_Degree_of_Freedom.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rt_nonfinite.h"
#define MODEL_NAME sdof_test
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (2) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T cxe3h4xef2 ; real_T d3b0xxwiwp ; } hzyen4ssol ;
typedef struct { iinny4bxlm1 mnnq0ce2ex ; } e1ysxzj50o ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [ 1 ] ; }
DataMapInfo ; struct myqfoqygxog_ { real_T Step_Time ; real_T Step_Y0 ;
real_T Step_YFinal ; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ;
extern hzyen4ssol hzyen4ssolv ; extern e1ysxzj50o e1ysxzj50oo ; extern
myqfoqygxog myqfoqygxo ; extern mxArray * mr_sdof_test_GetDWork ( ) ; extern
void mr_sdof_test_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_sdof_test_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * sdof_test_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
