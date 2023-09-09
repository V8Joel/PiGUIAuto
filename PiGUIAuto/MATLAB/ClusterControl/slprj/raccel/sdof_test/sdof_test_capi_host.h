#ifndef RTW_HEADER_sdof_test_cap_host_h__
#define RTW_HEADER_sdof_test_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "Single_Degree_of_Freedom_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 1 ] ; Single_Degree_of_Freedom_host_DataMapInfo_T child0 ; }
sdof_test_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void sdof_test_host_InitializeDataMapInfo ( sdof_test_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
