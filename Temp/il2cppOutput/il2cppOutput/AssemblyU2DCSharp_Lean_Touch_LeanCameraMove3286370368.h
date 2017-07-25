#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanCameraMove
struct  LeanCameraMove_t3286370368  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Lean.Touch.LeanCameraMove::Camera
	Camera_t189460977 * ___Camera_2;
	// System.Boolean Lean.Touch.LeanCameraMove::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_3;
	// System.Int32 Lean.Touch.LeanCameraMove::RequiredFingerCount
	int32_t ___RequiredFingerCount_4;
	// System.Single Lean.Touch.LeanCameraMove::Distance
	float ___Distance_5;
	// System.Single Lean.Touch.LeanCameraMove::Sensitivity
	float ___Sensitivity_6;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(LeanCameraMove_t3286370368, ___Camera_2)); }
	inline Camera_t189460977 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t189460977 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t189460977 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_IgnoreGuiFingers_3() { return static_cast<int32_t>(offsetof(LeanCameraMove_t3286370368, ___IgnoreGuiFingers_3)); }
	inline bool get_IgnoreGuiFingers_3() const { return ___IgnoreGuiFingers_3; }
	inline bool* get_address_of_IgnoreGuiFingers_3() { return &___IgnoreGuiFingers_3; }
	inline void set_IgnoreGuiFingers_3(bool value)
	{
		___IgnoreGuiFingers_3 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_4() { return static_cast<int32_t>(offsetof(LeanCameraMove_t3286370368, ___RequiredFingerCount_4)); }
	inline int32_t get_RequiredFingerCount_4() const { return ___RequiredFingerCount_4; }
	inline int32_t* get_address_of_RequiredFingerCount_4() { return &___RequiredFingerCount_4; }
	inline void set_RequiredFingerCount_4(int32_t value)
	{
		___RequiredFingerCount_4 = value;
	}

	inline static int32_t get_offset_of_Distance_5() { return static_cast<int32_t>(offsetof(LeanCameraMove_t3286370368, ___Distance_5)); }
	inline float get_Distance_5() const { return ___Distance_5; }
	inline float* get_address_of_Distance_5() { return &___Distance_5; }
	inline void set_Distance_5(float value)
	{
		___Distance_5 = value;
	}

	inline static int32_t get_offset_of_Sensitivity_6() { return static_cast<int32_t>(offsetof(LeanCameraMove_t3286370368, ___Sensitivity_6)); }
	inline float get_Sensitivity_6() const { return ___Sensitivity_6; }
	inline float* get_address_of_Sensitivity_6() { return &___Sensitivity_6; }
	inline void set_Sensitivity_6(float value)
	{
		___Sensitivity_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
