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

// Lean.Touch.LeanCameraZoom
struct  LeanCameraZoom_t449823926  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Lean.Touch.LeanCameraZoom::Camera
	Camera_t189460977 * ___Camera_2;
	// System.Boolean Lean.Touch.LeanCameraZoom::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_3;
	// System.Int32 Lean.Touch.LeanCameraZoom::RequiredFingerCount
	int32_t ___RequiredFingerCount_4;
	// System.Single Lean.Touch.LeanCameraZoom::WheelSensitivity
	float ___WheelSensitivity_5;
	// System.Single Lean.Touch.LeanCameraZoom::Zoom
	float ___Zoom_6;
	// System.Boolean Lean.Touch.LeanCameraZoom::ZoomClamp
	bool ___ZoomClamp_7;
	// System.Single Lean.Touch.LeanCameraZoom::ZoomMin
	float ___ZoomMin_8;
	// System.Single Lean.Touch.LeanCameraZoom::ZoomMax
	float ___ZoomMax_9;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t449823926, ___Camera_2)); }
	inline Camera_t189460977 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t189460977 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t189460977 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_IgnoreGuiFingers_3() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t449823926, ___IgnoreGuiFingers_3)); }
	inline bool get_IgnoreGuiFingers_3() const { return ___IgnoreGuiFingers_3; }
	inline bool* get_address_of_IgnoreGuiFingers_3() { return &___IgnoreGuiFingers_3; }
	inline void set_IgnoreGuiFingers_3(bool value)
	{
		___IgnoreGuiFingers_3 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_4() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t449823926, ___RequiredFingerCount_4)); }
	inline int32_t get_RequiredFingerCount_4() const { return ___RequiredFingerCount_4; }
	inline int32_t* get_address_of_RequiredFingerCount_4() { return &___RequiredFingerCount_4; }
	inline void set_RequiredFingerCount_4(int32_t value)
	{
		___RequiredFingerCount_4 = value;
	}

	inline static int32_t get_offset_of_WheelSensitivity_5() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t449823926, ___WheelSensitivity_5)); }
	inline float get_WheelSensitivity_5() const { return ___WheelSensitivity_5; }
	inline float* get_address_of_WheelSensitivity_5() { return &___WheelSensitivity_5; }
	inline void set_WheelSensitivity_5(float value)
	{
		___WheelSensitivity_5 = value;
	}

	inline static int32_t get_offset_of_Zoom_6() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t449823926, ___Zoom_6)); }
	inline float get_Zoom_6() const { return ___Zoom_6; }
	inline float* get_address_of_Zoom_6() { return &___Zoom_6; }
	inline void set_Zoom_6(float value)
	{
		___Zoom_6 = value;
	}

	inline static int32_t get_offset_of_ZoomClamp_7() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t449823926, ___ZoomClamp_7)); }
	inline bool get_ZoomClamp_7() const { return ___ZoomClamp_7; }
	inline bool* get_address_of_ZoomClamp_7() { return &___ZoomClamp_7; }
	inline void set_ZoomClamp_7(bool value)
	{
		___ZoomClamp_7 = value;
	}

	inline static int32_t get_offset_of_ZoomMin_8() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t449823926, ___ZoomMin_8)); }
	inline float get_ZoomMin_8() const { return ___ZoomMin_8; }
	inline float* get_address_of_ZoomMin_8() { return &___ZoomMin_8; }
	inline void set_ZoomMin_8(float value)
	{
		___ZoomMin_8 = value;
	}

	inline static int32_t get_offset_of_ZoomMax_9() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t449823926, ___ZoomMax_9)); }
	inline float get_ZoomMax_9() const { return ___ZoomMax_9; }
	inline float* get_address_of_ZoomMax_9() { return &___ZoomMax_9; }
	inline void set_ZoomMax_9(float value)
	{
		___ZoomMax_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
