#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Single_Degree_of_Freedom_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "Single_Degree_of_Freedom.h"
#include "Single_Degree_of_Freedom_capi.h"
#include "Single_Degree_of_Freedom_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING ( "Single_Degree_of_Freedom/X" ) , TARGET_STRING ( "DSTATE" )
, "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 , TARGET_STRING (
"Single_Degree_of_Freedom/X'" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0
, 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1 , TARGET_STRING (
"Single_Degree_of_Freedom/Discrete Derivative/UD" ) , TARGET_STRING (
"DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 , ( NULL ) ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 1 , 0 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void Single_Degree_of_Freedom_InitializeDataAddr ( void * dataAddr [ ]
, kvlufhbszv * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
cajwi5zsub ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> acobtkrbbu ) ;
dataAddr [ 2 ] = ( void * ) ( & localDW -> kkjabdybqd ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Single_Degree_of_Freedom_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Single_Degree_of_Freedom_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ;
loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 2 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 3 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 3151798531U , 307037798U , 3497644851U , 2796796450U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Single_Degree_of_Freedom_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Single_Degree_of_Freedom_InitializeSystemRan ( jh2nhh3ffs * const
cfpbm0ohe3 , sysRanDType * systemRan [ ] , kvlufhbszv * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
cfpbm0ohe3 ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = cfpbm0ohe3
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Single_Degree_of_Freedom_InitializeDataMapInfo ( jh2nhh3ffs * const
cfpbm0ohe3 , kvlufhbszv * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( cfpbm0ohe3 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( cfpbm0ohe3 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( cfpbm0ohe3 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; Single_Degree_of_Freedom_InitializeDataAddr (
cfpbm0ohe3 -> DataMapInfo . dataAddress , localDW ) ;
rtwCAPI_SetDataAddressMap ( cfpbm0ohe3 -> DataMapInfo . mmi , cfpbm0ohe3 ->
DataMapInfo . dataAddress ) ; Single_Degree_of_Freedom_InitializeVarDimsAddr
( cfpbm0ohe3 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap
( cfpbm0ohe3 -> DataMapInfo . mmi , cfpbm0ohe3 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetPath ( cfpbm0ohe3 -> DataMapInfo . mmi , ( NULL
) ) ; rtwCAPI_SetFullPath ( cfpbm0ohe3 -> DataMapInfo . mmi , ( NULL ) ) ;
Single_Degree_of_Freedom_InitializeLoggingFunctions ( cfpbm0ohe3 ->
DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( cfpbm0ohe3 ->
DataMapInfo . mmi , cfpbm0ohe3 -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( cfpbm0ohe3 -> DataMapInfo . mmi , &
cfpbm0ohe3 -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
cfpbm0ohe3 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
cfpbm0ohe3 -> DataMapInfo . mmi , 0 ) ;
Single_Degree_of_Freedom_InitializeSystemRan ( cfpbm0ohe3 , cfpbm0ohe3 ->
DataMapInfo . systemRan , localDW , cfpbm0ohe3 -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( cfpbm0ohe3 -> DataMapInfo .
mmi , cfpbm0ohe3 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
cfpbm0ohe3 -> DataMapInfo . mmi , cfpbm0ohe3 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( cfpbm0ohe3 -> DataMapInfo . mmi , & cfpbm0ohe3 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Single_Degree_of_Freedom_host_InitializeDataMapInfo (
Single_Degree_of_Freedom_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
