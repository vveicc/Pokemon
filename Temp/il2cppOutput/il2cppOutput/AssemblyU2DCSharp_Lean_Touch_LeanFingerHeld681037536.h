#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Lean.Touch.LeanFingerHeld/FingerEvent
struct FingerEvent_t1929589405;
// System.Collections.Generic.List`1<Lean.Touch.LeanFingerHeld>
struct List_1_t50158668;
// System.Action`1<Lean.Touch.LeanFinger>
struct Action_1_t4172829195;
// System.Collections.Generic.List`1<Lean.Touch.LeanFingerHeld/Link>
struct List_1_t3846725228;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerHeld
struct  LeanFingerHeld_t681037536  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanFingerHeld::IgnoreIfStartedOverGui
	bool ___IgnoreIfStartedOverGui_2;
	// System.Single Lean.Touch.LeanFingerHeld::MinimumAge
	float ___MinimumAge_3;
	// System.Single Lean.Touch.LeanFingerHeld::MaximumMovement
	float ___MaximumMovement_4;
	// Lean.Touch.LeanFingerHeld/FingerEvent Lean.Touch.LeanFingerHeld::onFingerHeldDown
	FingerEvent_t1929589405 * ___onFingerHeldDown_5;
	// Lean.Touch.LeanFingerHeld/FingerEvent Lean.Touch.LeanFingerHeld::onFingerHeldSet
	FingerEvent_t1929589405 * ___onFingerHeldSet_6;
	// Lean.Touch.LeanFingerHeld/FingerEvent Lean.Touch.LeanFingerHeld::onFingerHeldUp
	FingerEvent_t1929589405 * ___onFingerHeldUp_7;
	// System.Collections.Generic.List`1<Lean.Touch.LeanFingerHeld/Link> Lean.Touch.LeanFingerHeld::links
	List_1_t3846725228 * ___links_12;

public:
	inline static int32_t get_offset_of_IgnoreIfStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536, ___IgnoreIfStartedOverGui_2)); }
	inline bool get_IgnoreIfStartedOverGui_2() const { return ___IgnoreIfStartedOverGui_2; }
	inline bool* get_address_of_IgnoreIfStartedOverGui_2() { return &___IgnoreIfStartedOverGui_2; }
	inline void set_IgnoreIfStartedOverGui_2(bool value)
	{
		___IgnoreIfStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_MinimumAge_3() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536, ___MinimumAge_3)); }
	inline float get_MinimumAge_3() const { return ___MinimumAge_3; }
	inline float* get_address_of_MinimumAge_3() { return &___MinimumAge_3; }
	inline void set_MinimumAge_3(float value)
	{
		___MinimumAge_3 = value;
	}

	inline static int32_t get_offset_of_MaximumMovement_4() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536, ___MaximumMovement_4)); }
	inline float get_MaximumMovement_4() const { return ___MaximumMovement_4; }
	inline float* get_address_of_MaximumMovement_4() { return &___MaximumMovement_4; }
	inline void set_MaximumMovement_4(float value)
	{
		___MaximumMovement_4 = value;
	}

	inline static int32_t get_offset_of_onFingerHeldDown_5() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536, ___onFingerHeldDown_5)); }
	inline FingerEvent_t1929589405 * get_onFingerHeldDown_5() const { return ___onFingerHeldDown_5; }
	inline FingerEvent_t1929589405 ** get_address_of_onFingerHeldDown_5() { return &___onFingerHeldDown_5; }
	inline void set_onFingerHeldDown_5(FingerEvent_t1929589405 * value)
	{
		___onFingerHeldDown_5 = value;
		Il2CppCodeGenWriteBarrier(&___onFingerHeldDown_5, value);
	}

	inline static int32_t get_offset_of_onFingerHeldSet_6() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536, ___onFingerHeldSet_6)); }
	inline FingerEvent_t1929589405 * get_onFingerHeldSet_6() const { return ___onFingerHeldSet_6; }
	inline FingerEvent_t1929589405 ** get_address_of_onFingerHeldSet_6() { return &___onFingerHeldSet_6; }
	inline void set_onFingerHeldSet_6(FingerEvent_t1929589405 * value)
	{
		___onFingerHeldSet_6 = value;
		Il2CppCodeGenWriteBarrier(&___onFingerHeldSet_6, value);
	}

	inline static int32_t get_offset_of_onFingerHeldUp_7() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536, ___onFingerHeldUp_7)); }
	inline FingerEvent_t1929589405 * get_onFingerHeldUp_7() const { return ___onFingerHeldUp_7; }
	inline FingerEvent_t1929589405 ** get_address_of_onFingerHeldUp_7() { return &___onFingerHeldUp_7; }
	inline void set_onFingerHeldUp_7(FingerEvent_t1929589405 * value)
	{
		___onFingerHeldUp_7 = value;
		Il2CppCodeGenWriteBarrier(&___onFingerHeldUp_7, value);
	}

	inline static int32_t get_offset_of_links_12() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536, ___links_12)); }
	inline List_1_t3846725228 * get_links_12() const { return ___links_12; }
	inline List_1_t3846725228 ** get_address_of_links_12() { return &___links_12; }
	inline void set_links_12(List_1_t3846725228 * value)
	{
		___links_12 = value;
		Il2CppCodeGenWriteBarrier(&___links_12, value);
	}
};

struct LeanFingerHeld_t681037536_StaticFields
{
public:
	// System.Collections.Generic.List`1<Lean.Touch.LeanFingerHeld> Lean.Touch.LeanFingerHeld::Instances
	List_1_t50158668 * ___Instances_8;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanFingerHeld::OnFingerHeldDown
	Action_1_t4172829195 * ___OnFingerHeldDown_9;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanFingerHeld::OnFingerHeldSet
	Action_1_t4172829195 * ___OnFingerHeldSet_10;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanFingerHeld::OnFingerHeldUp
	Action_1_t4172829195 * ___OnFingerHeldUp_11;

public:
	inline static int32_t get_offset_of_Instances_8() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536_StaticFields, ___Instances_8)); }
	inline List_1_t50158668 * get_Instances_8() const { return ___Instances_8; }
	inline List_1_t50158668 ** get_address_of_Instances_8() { return &___Instances_8; }
	inline void set_Instances_8(List_1_t50158668 * value)
	{
		___Instances_8 = value;
		Il2CppCodeGenWriteBarrier(&___Instances_8, value);
	}

	inline static int32_t get_offset_of_OnFingerHeldDown_9() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536_StaticFields, ___OnFingerHeldDown_9)); }
	inline Action_1_t4172829195 * get_OnFingerHeldDown_9() const { return ___OnFingerHeldDown_9; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerHeldDown_9() { return &___OnFingerHeldDown_9; }
	inline void set_OnFingerHeldDown_9(Action_1_t4172829195 * value)
	{
		___OnFingerHeldDown_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerHeldDown_9, value);
	}

	inline static int32_t get_offset_of_OnFingerHeldSet_10() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536_StaticFields, ___OnFingerHeldSet_10)); }
	inline Action_1_t4172829195 * get_OnFingerHeldSet_10() const { return ___OnFingerHeldSet_10; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerHeldSet_10() { return &___OnFingerHeldSet_10; }
	inline void set_OnFingerHeldSet_10(Action_1_t4172829195 * value)
	{
		___OnFingerHeldSet_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerHeldSet_10, value);
	}

	inline static int32_t get_offset_of_OnFingerHeldUp_11() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t681037536_StaticFields, ___OnFingerHeldUp_11)); }
	inline Action_1_t4172829195 * get_OnFingerHeldUp_11() const { return ___OnFingerHeldUp_11; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerHeldUp_11() { return &___OnFingerHeldUp_11; }
	inline void set_OnFingerHeldUp_11(Action_1_t4172829195 * value)
	{
		___OnFingerHeldUp_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerHeldUp_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
