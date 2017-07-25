#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Vuforia_ReconstructionBehaviour4009935945.h"
#include "AssemblyU2DCSharp_Vuforia_ReconstructionFromTarget2111803406.h"
#include "AssemblyU2DCSharp_Vuforia_SurfaceBehaviour2405314212.h"
#include "AssemblyU2DCSharp_Vuforia_TextRecoBehaviour3400239837.h"
#include "AssemblyU2DCSharp_Vuforia_TurnOffBehaviour3058161409.h"
#include "AssemblyU2DCSharp_Vuforia_TurnOffWordBehaviour584991835.h"
#include "AssemblyU2DCSharp_Vuforia_UserDefinedTargetBuildin4184040062.h"
#include "AssemblyU2DCSharp_VRIntegrationHelper556656694.h"
#include "AssemblyU2DCSharp_Vuforia_VideoBackgroundBehaviour3161817952.h"
#include "AssemblyU2DCSharp_Vuforia_VirtualButtonBehaviour2515041812.h"
#include "AssemblyU2DCSharp_Vuforia_VuMarkBehaviour2060629989.h"
#include "AssemblyU2DCSharp_Vuforia_VuforiaBehaviour359035403.h"
#include "AssemblyU2DCSharp_Vuforia_VuforiaConfiguration3823746026.h"
#include "AssemblyU2DCSharp_Vuforia_VuforiaRuntimeInitializa1850075444.h"
#include "AssemblyU2DCSharp_Vuforia_WireframeBehaviour2494532455.h"
#include "AssemblyU2DCSharp_Vuforia_WireframeTrackableEventH1535150527.h"
#include "AssemblyU2DCSharp_Vuforia_WordBehaviour3366478421.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (ReconstructionBehaviour_t4009935945), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (ReconstructionFromTargetBehaviour_t2111803406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (SurfaceBehaviour_t2405314212), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (TextRecoBehaviour_t3400239837), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (TurnOffBehaviour_t3058161409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (TurnOffWordBehaviour_t584991835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (UserDefinedTargetBuildingBehaviour_t4184040062), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (VRIntegrationHelper_t556656694), -1, sizeof(VRIntegrationHelper_t556656694_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2107[12] = 
{
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mLeftCameraMatrixOriginal_2(),
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mRightCameraMatrixOriginal_3(),
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mLeftCamera_4(),
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mRightCamera_5(),
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mLeftExcessAreaBehaviour_6(),
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mRightExcessAreaBehaviour_7(),
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mLeftCameraPixelRect_8(),
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mRightCameraPixelRect_9(),
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mLeftCameraDataAcquired_10(),
	VRIntegrationHelper_t556656694_StaticFields::get_offset_of_mRightCameraDataAcquired_11(),
	VRIntegrationHelper_t556656694::get_offset_of_IsLeft_12(),
	VRIntegrationHelper_t556656694::get_offset_of_TrackableParent_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (VideoBackgroundBehaviour_t3161817952), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (VirtualButtonBehaviour_t2515041812), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (VuMarkBehaviour_t2060629989), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (VuforiaBehaviour_t359035403), -1, sizeof(VuforiaBehaviour_t359035403_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2111[1] = 
{
	VuforiaBehaviour_t359035403_StaticFields::get_offset_of_mVuforiaBehaviour_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (VuforiaConfiguration_t3823746026), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (VuforiaRuntimeInitialization_t1850075444), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (WireframeBehaviour_t2494532455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2114[4] = 
{
	WireframeBehaviour_t2494532455::get_offset_of_lineMaterial_2(),
	WireframeBehaviour_t2494532455::get_offset_of_ShowLines_3(),
	WireframeBehaviour_t2494532455::get_offset_of_LineColor_4(),
	WireframeBehaviour_t2494532455::get_offset_of_mLineMaterial_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (WireframeTrackableEventHandler_t1535150527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2115[1] = 
{
	WireframeTrackableEventHandler_t1535150527::get_offset_of_mTrackableBehaviour_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (WordBehaviour_t3366478421), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
