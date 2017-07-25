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

// Lean.Touch.LeanPitchYaw
struct  LeanPitchYaw_t3312846989  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanPitchYaw::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Int32 Lean.Touch.LeanPitchYaw::RequiredFingerCount
	int32_t ___RequiredFingerCount_3;
	// UnityEngine.Camera Lean.Touch.LeanPitchYaw::Camera
	Camera_t189460977 * ___Camera_4;
	// System.Single Lean.Touch.LeanPitchYaw::Pitch
	float ___Pitch_5;
	// System.Single Lean.Touch.LeanPitchYaw::PitchSensitivity
	float ___PitchSensitivity_6;
	// System.Boolean Lean.Touch.LeanPitchYaw::PitchClamp
	bool ___PitchClamp_7;
	// System.Single Lean.Touch.LeanPitchYaw::PitchMin
	float ___PitchMin_8;
	// System.Single Lean.Touch.LeanPitchYaw::PitchMax
	float ___PitchMax_9;
	// System.Single Lean.Touch.LeanPitchYaw::Yaw
	float ___Yaw_10;
	// System.Single Lean.Touch.LeanPitchYaw::YawSensitivity
	float ___YawSensitivity_11;
	// System.Boolean Lean.Touch.LeanPitchYaw::YawClamp
	bool ___YawClamp_12;
	// System.Single Lean.Touch.LeanPitchYaw::YawMin
	float ___YawMin_13;
	// System.Single Lean.Touch.LeanPitchYaw::YawMax
	float ___YawMax_14;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_3() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___RequiredFingerCount_3)); }
	inline int32_t get_RequiredFingerCount_3() const { return ___RequiredFingerCount_3; }
	inline int32_t* get_address_of_RequiredFingerCount_3() { return &___RequiredFingerCount_3; }
	inline void set_RequiredFingerCount_3(int32_t value)
	{
		___RequiredFingerCount_3 = value;
	}

	inline static int32_t get_offset_of_Camera_4() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___Camera_4)); }
	inline Camera_t189460977 * get_Camera_4() const { return ___Camera_4; }
	inline Camera_t189460977 ** get_address_of_Camera_4() { return &___Camera_4; }
	inline void set_Camera_4(Camera_t189460977 * value)
	{
		___Camera_4 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_4, value);
	}

	inline static int32_t get_offset_of_Pitch_5() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___Pitch_5)); }
	inline float get_Pitch_5() const { return ___Pitch_5; }
	inline float* get_address_of_Pitch_5() { return &___Pitch_5; }
	inline void set_Pitch_5(float value)
	{
		___Pitch_5 = value;
	}

	inline static int32_t get_offset_of_PitchSensitivity_6() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___PitchSensitivity_6)); }
	inline float get_PitchSensitivity_6() const { return ___PitchSensitivity_6; }
	inline float* get_address_of_PitchSensitivity_6() { return &___PitchSensitivity_6; }
	inline void set_PitchSensitivity_6(float value)
	{
		___PitchSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_PitchClamp_7() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___PitchClamp_7)); }
	inline bool get_PitchClamp_7() const { return ___PitchClamp_7; }
	inline bool* get_address_of_PitchClamp_7() { return &___PitchClamp_7; }
	inline void set_PitchClamp_7(bool value)
	{
		___PitchClamp_7 = value;
	}

	inline static int32_t get_offset_of_PitchMin_8() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___PitchMin_8)); }
	inline float get_PitchMin_8() const { return ___PitchMin_8; }
	inline float* get_address_of_PitchMin_8() { return &___PitchMin_8; }
	inline void set_PitchMin_8(float value)
	{
		___PitchMin_8 = value;
	}

	inline static int32_t get_offset_of_PitchMax_9() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___PitchMax_9)); }
	inline float get_PitchMax_9() const { return ___PitchMax_9; }
	inline float* get_address_of_PitchMax_9() { return &___PitchMax_9; }
	inline void set_PitchMax_9(float value)
	{
		___PitchMax_9 = value;
	}

	inline static int32_t get_offset_of_Yaw_10() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___Yaw_10)); }
	inline float get_Yaw_10() const { return ___Yaw_10; }
	inline float* get_address_of_Yaw_10() { return &___Yaw_10; }
	inline void set_Yaw_10(float value)
	{
		___Yaw_10 = value;
	}

	inline static int32_t get_offset_of_YawSensitivity_11() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___YawSensitivity_11)); }
	inline float get_YawSensitivity_11() const { return ___YawSensitivity_11; }
	inline float* get_address_of_YawSensitivity_11() { return &___YawSensitivity_11; }
	inline void set_YawSensitivity_11(float value)
	{
		___YawSensitivity_11 = value;
	}

	inline static int32_t get_offset_of_YawClamp_12() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___YawClamp_12)); }
	inline bool get_YawClamp_12() const { return ___YawClamp_12; }
	inline bool* get_address_of_YawClamp_12() { return &___YawClamp_12; }
	inline void set_YawClamp_12(bool value)
	{
		___YawClamp_12 = value;
	}

	inline static int32_t get_offset_of_YawMin_13() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___YawMin_13)); }
	inline float get_YawMin_13() const { return ___YawMin_13; }
	inline float* get_address_of_YawMin_13() { return &___YawMin_13; }
	inline void set_YawMin_13(float value)
	{
		___YawMin_13 = value;
	}

	inline static int32_t get_offset_of_YawMax_14() { return static_cast<int32_t>(offsetof(LeanPitchYaw_t3312846989, ___YawMax_14)); }
	inline float get_YawMax_14() const { return ___YawMax_14; }
	inline float* get_address_of_YawMax_14() { return &___YawMax_14; }
	inline void set_YawMax_14(float value)
	{
		___YawMax_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
