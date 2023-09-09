#ifndef RTW_HEADER_Single_Degree_of_Freedom_h_
#define RTW_HEADER_Single_Degree_of_Freedom_h_
#ifndef Single_Degree_of_Freedom_COMMON_INCLUDES_
#define Single_Degree_of_Freedom_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Single_Degree_of_Freedom_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
typedef struct { real_T b3a0cqid50 ; real_T jmysw5tq4g ; real_T hokzbu5pm0 ;
real_T dl0jceprre ; real_T elv3yelxsb ; real_T fmq0offwhn ; real_T egy3ryrkdx
; real_T lktllrtems ; real_T hmlw4iqgfd ; real_T afikytf1uj ; } hof3hteg01 ;
typedef struct { real_T acobtkrbbu ; real_T cajwi5zsub ; real_T kkjabdybqd ;
struct { void * AQHandles ; } c4owtgsonr ; struct { void * AQHandles ; }
mpuqrwm3fe ; struct { void * AQHandles ; } nftn0ts3pf ; struct { void *
AQHandles ; } pbx0zqrx5m ; } kvlufhbszv ; struct jfxquwdbjml_ { real_T P_0 ;
real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ;
real_T P_7 ; real_T P_8 ; } ; struct ibcg3nb4su { struct SimStruct_tag *
_mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
3 ] ; int32_T * vardimsAddress [ 3 ] ; RTWLoggingFcnPtr loggingPtrs [ 3 ] ;
sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
hof3hteg01 rtb ; kvlufhbszv rtdw ; jh2nhh3ffs rtm ; } iinny4bxlm1 ; extern
void iqvtcocchx ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , jh2nhh3ffs * const cfpbm0ohe3 , hof3hteg01 * localB ,
kvlufhbszv * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Single_Degree_of_Freedom_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray *
mr_Single_Degree_of_Freedom_GetDWork ( const iinny4bxlm1 * mdlrefDW ) ;
extern void mr_Single_Degree_of_Freedom_SetDWork ( iinny4bxlm1 * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_Single_Degree_of_Freedom_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_Single_Degree_of_Freedom_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
Single_Degree_of_Freedom_GetCAPIStaticMap ( void ) ; extern void jbfq43jur5 (
jh2nhh3ffs * const cfpbm0ohe3 , kvlufhbszv * localDW ) ; extern void
bhfyobustz ( kvlufhbszv * localDW ) ; extern void amex2n5a4n ( kvlufhbszv *
localDW ) ; extern void oxj4tw1ap2 ( jh2nhh3ffs * const cfpbm0ohe3 ,
kvlufhbszv * localDW ) ; extern void jsjjnjbsvs ( hof3hteg01 * localB ,
kvlufhbszv * localDW ) ; extern void Single_Degree_of_Freedom ( jh2nhh3ffs *
const cfpbm0ohe3 , const real_T * cdqqruyb3j , real_T * nzncalakga ,
hof3hteg01 * localB , kvlufhbszv * localDW ) ; extern void ieafoiptya (
jh2nhh3ffs * const cfpbm0ohe3 ) ;
#endif
