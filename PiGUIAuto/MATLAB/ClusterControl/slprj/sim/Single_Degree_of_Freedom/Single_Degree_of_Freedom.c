#include "Single_Degree_of_Freedom.h"
#include "rtwtypes.h"
#include "Single_Degree_of_Freedom_private.h"
#include "Single_Degree_of_Freedom_capi.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_Single_Degree_of_Freedom [ 46 ] = { {
"iinny4bxlm1" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "bxzjgewfyw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "bskektal1v" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "hnzjot1jja" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "oy5ovay32k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "hrcw02xsyi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "fshmvhhyld" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "n4jjikjlx1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "alit4zpffl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "ngdxsk3tkf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "abbr0fajgi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "psihex3gub" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "kvlufhbszv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "hof3hteg01" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "kvavbf5x5w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "ieafoiptya" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "oxj4tw1ap2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "jxab3hwzql" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "jsjjnjbsvs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "amex2n5a4n" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "bhfyobustz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "iqvtcocchx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "lofhodqgtn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "jbfq43jur5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "Single_Degree_of_Freedom" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "nqczfl0l4t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "ibcg3nb4su" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "jh2nhh3ffs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0
, - 1 , ( void * ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void *
) "int64" } , { "int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_Single_Degree_of_Freedom_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Single_Degree_of_Freedom"
} , { "mr_Single_Degree_of_Freedom_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Single_Degree_of_Freedom" } , {
"mr_Single_Degree_of_Freedom_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Single_Degree_of_Freedom" } , { "Single_Degree_of_Freedom.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"Single_Degree_of_Freedom.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Single_Degree_of_Freedom" } } ; jfxquwdbjml jfxquwdbjm = { 0.0 , 0.01 , 0.0
, 0.01 , 0.0 , 100.0 , 1.0 , 3.0 , 0.1 } ; void jbfq43jur5 ( jh2nhh3ffs *
const cfpbm0ohe3 , kvlufhbszv * localDW ) { if ( ( ssGetSimMode ( cfpbm0ohe3
-> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( cfpbm0ohe3 -> _mdlRefSfcnS
) -> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if
( slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( cfpbm0ohe3 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( cfpbm0ohe3
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Acceleration" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"Acceleration" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"Single_Degree_of_Freedom/Divide" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "Acceleration" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( cfpbm0ohe3
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , cfpbm0ohe3 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> c4owtgsonr . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , cfpbm0ohe3 -> DataMapInfo .
mmi . InstanceMap . fullPath , "8316154a-fc2e-4596-a0f8-9af4f598cc30" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> c4owtgsonr . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> c4owtgsonr . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> c4owtgsonr . AQHandles , "0.01" ,
0.01 , rtmGetTFinal ( cfpbm0ohe3 ) ) ; sdiSetSignalRefRate ( localDW ->
c4owtgsonr . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> c4owtgsonr .
AQHandles , rtmGetTaskTime ( cfpbm0ohe3 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> c4owtgsonr . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> c4owtgsonr . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> c4owtgsonr
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( cfpbm0ohe3 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( cfpbm0ohe3 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( cfpbm0ohe3 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( cfpbm0ohe3
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Input" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Input" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Single_Degree_of_Freedom/Input" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Input" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( cfpbm0ohe3
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , cfpbm0ohe3 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> mpuqrwm3fe . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , cfpbm0ohe3 -> DataMapInfo .
mmi . InstanceMap . fullPath , "dd75cb5e-abfa-4b8d-8d70-ce3d2e4b0dcd" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> mpuqrwm3fe . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> mpuqrwm3fe . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> mpuqrwm3fe . AQHandles , "0.01" ,
0.01 , rtmGetTFinal ( cfpbm0ohe3 ) ) ; sdiSetSignalRefRate ( localDW ->
mpuqrwm3fe . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> mpuqrwm3fe .
AQHandles , rtmGetTaskTime ( cfpbm0ohe3 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> mpuqrwm3fe . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> mpuqrwm3fe . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> mpuqrwm3fe
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( cfpbm0ohe3 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( cfpbm0ohe3 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( cfpbm0ohe3 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( cfpbm0ohe3
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Velocity" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Velocity" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Single_Degree_of_Freedom/X'" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "Velocity" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( cfpbm0ohe3
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , cfpbm0ohe3 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> nftn0ts3pf . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , cfpbm0ohe3 -> DataMapInfo .
mmi . InstanceMap . fullPath , "687e98cb-2842-4c5d-a3ec-93bb38427ff8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> nftn0ts3pf . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> nftn0ts3pf . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> nftn0ts3pf . AQHandles , "0.01" ,
0.01 , rtmGetTFinal ( cfpbm0ohe3 ) ) ; sdiSetSignalRefRate ( localDW ->
nftn0ts3pf . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> nftn0ts3pf .
AQHandles , rtmGetTaskTime ( cfpbm0ohe3 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> nftn0ts3pf . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> nftn0ts3pf . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> nftn0ts3pf
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( cfpbm0ohe3 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( cfpbm0ohe3 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( cfpbm0ohe3 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( cfpbm0ohe3
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Displacement" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"Displacement" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars ( "Single_Degree_of_Freedom/X" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Displacement" ) ; sdiAsyncQueueHandle hForEachParent
= ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( cfpbm0ohe3
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , cfpbm0ohe3 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> pbx0zqrx5m . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , cfpbm0ohe3 -> DataMapInfo .
mmi . InstanceMap . fullPath , "51a04089-1a3a-4a1e-9aa9-a0aa48767e62" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> pbx0zqrx5m . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> pbx0zqrx5m . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> pbx0zqrx5m . AQHandles , "0.01" ,
0.01 , rtmGetTFinal ( cfpbm0ohe3 ) ) ; sdiSetSignalRefRate ( localDW ->
pbx0zqrx5m . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> pbx0zqrx5m .
AQHandles , rtmGetTaskTime ( cfpbm0ohe3 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> pbx0zqrx5m . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> pbx0zqrx5m . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> pbx0zqrx5m
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} } void bhfyobustz ( kvlufhbszv * localDW ) { localDW -> acobtkrbbu =
jfxquwdbjm . P_2 ; localDW -> cajwi5zsub = jfxquwdbjm . P_4 ; localDW ->
kkjabdybqd = jfxquwdbjm . P_0 ; } void amex2n5a4n ( kvlufhbszv * localDW ) {
localDW -> acobtkrbbu = jfxquwdbjm . P_2 ; localDW -> cajwi5zsub = jfxquwdbjm
. P_4 ; localDW -> kkjabdybqd = jfxquwdbjm . P_0 ; } void
Single_Degree_of_Freedom ( jh2nhh3ffs * const cfpbm0ohe3 , const real_T *
cdqqruyb3j , real_T * nzncalakga , hof3hteg01 * localB , kvlufhbszv * localDW
) { localB -> b3a0cqid50 = localDW -> acobtkrbbu ; localB -> jmysw5tq4g =
localB -> b3a0cqid50 * jfxquwdbjm . P_6 ; * nzncalakga = localDW ->
cajwi5zsub ; localB -> hokzbu5pm0 = * nzncalakga * jfxquwdbjm . P_7 ; localB
-> dl0jceprre = * cdqqruyb3j * jfxquwdbjm . P_5 ; localB -> elv3yelxsb =
localDW -> kkjabdybqd ; localB -> fmq0offwhn = localB -> dl0jceprre - localB
-> elv3yelxsb ; localB -> egy3ryrkdx = localB -> fmq0offwhn * jfxquwdbjm .
P_6 ; localB -> lktllrtems = * cdqqruyb3j * jfxquwdbjm . P_7 ; localB ->
hmlw4iqgfd = ( ( localB -> egy3ryrkdx - localB -> jmysw5tq4g ) - localB ->
hokzbu5pm0 ) + localB -> lktllrtems ; localB -> afikytf1uj = localB ->
hmlw4iqgfd / jfxquwdbjm . P_8 ; { if ( localDW -> c4owtgsonr . AQHandles &&
ssGetLogOutput ( cfpbm0ohe3 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
c4owtgsonr . AQHandles , rtmGetTaskTime ( cfpbm0ohe3 , 0 ) , ( char * ) &
localB -> afikytf1uj + 0 ) ; } } { if ( localDW -> mpuqrwm3fe . AQHandles &&
ssGetLogOutput ( cfpbm0ohe3 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
mpuqrwm3fe . AQHandles , rtmGetTaskTime ( cfpbm0ohe3 , 0 ) , ( char * )
cdqqruyb3j + 0 ) ; } } { if ( localDW -> nftn0ts3pf . AQHandles &&
ssGetLogOutput ( cfpbm0ohe3 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
nftn0ts3pf . AQHandles , rtmGetTaskTime ( cfpbm0ohe3 , 0 ) , ( char * ) &
localB -> b3a0cqid50 + 0 ) ; } } { if ( localDW -> pbx0zqrx5m . AQHandles &&
ssGetLogOutput ( cfpbm0ohe3 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
pbx0zqrx5m . AQHandles , rtmGetTaskTime ( cfpbm0ohe3 , 0 ) , ( char * )
nzncalakga + 0 ) ; } } } void jsjjnjbsvs ( hof3hteg01 * localB , kvlufhbszv *
localDW ) { localDW -> acobtkrbbu += jfxquwdbjm . P_1 * localB -> afikytf1uj
; localDW -> cajwi5zsub += jfxquwdbjm . P_3 * localB -> b3a0cqid50 ; localDW
-> kkjabdybqd = localB -> dl0jceprre ; } void oxj4tw1ap2 ( jh2nhh3ffs * const
cfpbm0ohe3 , kvlufhbszv * localDW ) { if ( ( ssGetSimMode ( cfpbm0ohe3 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( cfpbm0ohe3 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> c4owtgsonr . AQHandles ) { sdiTerminateStreaming ( & localDW ->
c4owtgsonr . AQHandles ) ; } } if ( ( ssGetSimMode ( cfpbm0ohe3 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( cfpbm0ohe3 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> mpuqrwm3fe . AQHandles ) { sdiTerminateStreaming ( & localDW ->
mpuqrwm3fe . AQHandles ) ; } } if ( ( ssGetSimMode ( cfpbm0ohe3 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( cfpbm0ohe3 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> nftn0ts3pf . AQHandles ) { sdiTerminateStreaming ( & localDW ->
nftn0ts3pf . AQHandles ) ; } } if ( ( ssGetSimMode ( cfpbm0ohe3 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( cfpbm0ohe3 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> pbx0zqrx5m . AQHandles ) { sdiTerminateStreaming ( & localDW ->
pbx0zqrx5m . AQHandles ) ; } } } void ieafoiptya ( jh2nhh3ffs * const
cfpbm0ohe3 ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( cfpbm0ohe3 -> _mdlRefSfcnS , "Single_Degree_of_Freedom"
, "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void iqvtcocchx (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , jh2nhh3ffs
* const cfpbm0ohe3 , hof3hteg01 * localB , kvlufhbszv * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
cfpbm0ohe3 , 0 , sizeof ( jh2nhh3ffs ) ) ; cfpbm0ohe3 -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; cfpbm0ohe3 -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; cfpbm0ohe3 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( cfpbm0ohe3 -> _mdlRefSfcnS , "Single_Degree_of_Freedom"
, "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> b3a0cqid50 =
0.0 ; localB -> jmysw5tq4g = 0.0 ; localB -> hokzbu5pm0 = 0.0 ; localB ->
dl0jceprre = 0.0 ; localB -> elv3yelxsb = 0.0 ; localB -> fmq0offwhn = 0.0 ;
localB -> egy3ryrkdx = 0.0 ; localB -> lktllrtems = 0.0 ; localB ->
hmlw4iqgfd = 0.0 ; localB -> afikytf1uj = 0.0 ; } ( void ) memset ( ( void *
) localDW , 0 , sizeof ( kvlufhbszv ) ) ; localDW -> acobtkrbbu = 0.0 ;
localDW -> cajwi5zsub = 0.0 ; localDW -> kkjabdybqd = 0.0 ;
Single_Degree_of_Freedom_InitializeDataMapInfo ( cfpbm0ohe3 , localDW ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( cfpbm0ohe3 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
cfpbm0ohe3 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( cfpbm0ohe3 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_Single_Degree_of_Freedom_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Single_Degree_of_Freedom , 46 ) ; * retVal = 1 ; } static void
mr_Single_Degree_of_Freedom_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Single_Degree_of_Freedom_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Single_Degree_of_Freedom_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Single_Degree_of_Freedom_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Single_Degree_of_Freedom_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_Single_Degree_of_Freedom_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Single_Degree_of_Freedom_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Single_Degree_of_Freedom_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Single_Degree_of_Freedom_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_Single_Degree_of_Freedom_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Single_Degree_of_Freedom_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Single_Degree_of_Freedom_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Single_Degree_of_Freedom_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Single_Degree_of_Freedom_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_Single_Degree_of_Freedom_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_Single_Degree_of_Freedom_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Single_Degree_of_Freedom_GetDWork (
const iinny4bxlm1 * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] =
{ "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix
( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Single_Degree_of_Freedom_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void
* ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const
char_T * rtdwDataFieldNames [ 3 ] = { "mdlrefDW->rtdw.acobtkrbbu" ,
"mdlrefDW->rtdw.cajwi5zsub" , "mdlrefDW->rtdw.kkjabdybqd" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 3 , rtdwDataFieldNames ) ;
mr_Single_Degree_of_Freedom_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . acobtkrbbu ) , sizeof ( mdlrefDW -> rtdw .
acobtkrbbu ) ) ; mr_Single_Degree_of_Freedom_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . cajwi5zsub ) , sizeof (
mdlrefDW -> rtdw . cajwi5zsub ) ) ;
mr_Single_Degree_of_Freedom_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtdw . kkjabdybqd ) , sizeof ( mdlrefDW -> rtdw .
kkjabdybqd ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_Single_Degree_of_Freedom_SetDWork (
iinny4bxlm1 * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_Single_Degree_of_Freedom_restoreDataFromMxArray ( ( void * ) &
( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Single_Degree_of_Freedom_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . acobtkrbbu ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw .
acobtkrbbu ) ) ; mr_Single_Degree_of_Freedom_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . cajwi5zsub ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . cajwi5zsub ) ) ;
mr_Single_Degree_of_Freedom_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . kkjabdybqd ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
kkjabdybqd ) ) ; } } void
mr_Single_Degree_of_Freedom_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 2561328227U , 2141151088U , 1953171460U ,
1456578548U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"Single_Degree_of_Freedom" , & chksum [ 0 ] ) ; } mxArray *
mr_Single_Degree_of_Freedom_GetSimStateDisallowedBlocks ( ) { return ( NULL )
; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
