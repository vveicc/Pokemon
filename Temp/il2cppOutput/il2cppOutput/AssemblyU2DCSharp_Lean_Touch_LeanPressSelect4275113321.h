#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanPressSelect_Selec1810901247.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanPressSelect_Searc3326327913.h"

// System.Collections.Generic.List`1<Lean.Touch.LeanSelectable>
struct List_1_t3061697582;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanPressSelect
struct  LeanPressSelect_t4275113321  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanPressSelect::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Boolean Lean.Touch.LeanPressSelect::DeselectOnExit
	bool ___DeselectOnExit_3;
	// Lean.Touch.LeanPressSelect/SelectType Lean.Touch.LeanPressSelect::SelectUsing
	int32_t ___SelectUsing_4;
	// UnityEngine.LayerMask Lean.Touch.LeanPressSelect::LayerMask
	LayerMask_t3188175821  ___LayerMask_5;
	// Lean.Touch.LeanPressSelect/SearchType Lean.Touch.LeanPressSelect::Search
	int32_t ___Search_6;
	// System.Collections.Generic.List`1<Lean.Touch.LeanSelectable> Lean.Touch.LeanPressSelect::CurrentSelectables
	List_1_t3061697582 * ___CurrentSelectables_7;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_DeselectOnExit_3() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___DeselectOnExit_3)); }
	inline bool get_DeselectOnExit_3() const { return ___DeselectOnExit_3; }
	inline bool* get_address_of_DeselectOnExit_3() { return &___DeselectOnExit_3; }
	inline void set_DeselectOnExit_3(bool value)
	{
		___DeselectOnExit_3 = value;
	}

	inline static int32_t get_offset_of_SelectUsing_4() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___SelectUsing_4)); }
	inline int32_t get_SelectUsing_4() const { return ___SelectUsing_4; }
	inline int32_t* get_address_of_SelectUsing_4() { return &___SelectUsing_4; }
	inline void set_SelectUsing_4(int32_t value)
	{
		___SelectUsing_4 = value;
	}

	inline static int32_t get_offset_of_LayerMask_5() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___LayerMask_5)); }
	inline LayerMask_t3188175821  get_LayerMask_5() const { return ___LayerMask_5; }
	inline LayerMask_t3188175821 * get_address_of_LayerMask_5() { return &___LayerMask_5; }
	inline void set_LayerMask_5(LayerMask_t3188175821  value)
	{
		___LayerMask_5 = value;
	}

	inline static int32_t get_offset_of_Search_6() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___Search_6)); }
	inline int32_t get_Search_6() const { return ___Search_6; }
	inline int32_t* get_address_of_Search_6() { return &___Search_6; }
	inline void set_Search_6(int32_t value)
	{
		___Search_6 = value;
	}

	inline static int32_t get_offset_of_CurrentSelectables_7() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___CurrentSelectables_7)); }
	inline List_1_t3061697582 * get_CurrentSelectables_7() const { return ___CurrentSelectables_7; }
	inline List_1_t3061697582 ** get_address_of_CurrentSelectables_7() { return &___CurrentSelectables_7; }
	inline void set_CurrentSelectables_7(List_1_t3061697582 * value)
	{
		___CurrentSelectables_7 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentSelectables_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
