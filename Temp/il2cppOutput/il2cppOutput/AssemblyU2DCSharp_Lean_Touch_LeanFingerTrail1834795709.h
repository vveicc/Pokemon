#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// Lean.Touch.LeanFingerTrail/LeanFingerEvent
struct LeanFingerEvent_t1328495940;
// System.Collections.Generic.List`1<Lean.Touch.LeanFingerTrail/Link>
struct List_1_t478470215;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerTrail
struct  LeanFingerTrail_t1834795709  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanFingerTrail::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// UnityEngine.LineRenderer Lean.Touch.LeanFingerTrail::Prefab
	LineRenderer_t849157671 * ___Prefab_3;
	// System.Single Lean.Touch.LeanFingerTrail::Distance
	float ___Distance_4;
	// System.Int32 Lean.Touch.LeanFingerTrail::MaxLines
	int32_t ___MaxLines_5;
	// Lean.Touch.LeanFingerTrail/LeanFingerEvent Lean.Touch.LeanFingerTrail::OnFingerUp
	LeanFingerEvent_t1328495940 * ___OnFingerUp_6;
	// System.Collections.Generic.List`1<Lean.Touch.LeanFingerTrail/Link> Lean.Touch.LeanFingerTrail::links
	List_1_t478470215 * ___links_7;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1834795709, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_Prefab_3() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1834795709, ___Prefab_3)); }
	inline LineRenderer_t849157671 * get_Prefab_3() const { return ___Prefab_3; }
	inline LineRenderer_t849157671 ** get_address_of_Prefab_3() { return &___Prefab_3; }
	inline void set_Prefab_3(LineRenderer_t849157671 * value)
	{
		___Prefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_3, value);
	}

	inline static int32_t get_offset_of_Distance_4() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1834795709, ___Distance_4)); }
	inline float get_Distance_4() const { return ___Distance_4; }
	inline float* get_address_of_Distance_4() { return &___Distance_4; }
	inline void set_Distance_4(float value)
	{
		___Distance_4 = value;
	}

	inline static int32_t get_offset_of_MaxLines_5() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1834795709, ___MaxLines_5)); }
	inline int32_t get_MaxLines_5() const { return ___MaxLines_5; }
	inline int32_t* get_address_of_MaxLines_5() { return &___MaxLines_5; }
	inline void set_MaxLines_5(int32_t value)
	{
		___MaxLines_5 = value;
	}

	inline static int32_t get_offset_of_OnFingerUp_6() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1834795709, ___OnFingerUp_6)); }
	inline LeanFingerEvent_t1328495940 * get_OnFingerUp_6() const { return ___OnFingerUp_6; }
	inline LeanFingerEvent_t1328495940 ** get_address_of_OnFingerUp_6() { return &___OnFingerUp_6; }
	inline void set_OnFingerUp_6(LeanFingerEvent_t1328495940 * value)
	{
		___OnFingerUp_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerUp_6, value);
	}

	inline static int32_t get_offset_of_links_7() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1834795709, ___links_7)); }
	inline List_1_t478470215 * get_links_7() const { return ___links_7; }
	inline List_1_t478470215 ** get_address_of_links_7() { return &___links_7; }
	inline void set_links_7(List_1_t478470215 * value)
	{
		___links_7 = value;
		Il2CppCodeGenWriteBarrier(&___links_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
