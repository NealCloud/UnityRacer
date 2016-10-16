#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BarrierBehavior
struct BarrierBehavior_t3080001979;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BarrierMaker
struct  BarrierMaker_t534186871  : public MonoBehaviour_t1158329972
{
public:
	// BarrierBehavior BarrierMaker::block
	BarrierBehavior_t3080001979 * ___block_2;
	// System.Collections.IEnumerator BarrierMaker::buildwallco
	Il2CppObject * ___buildwallco_3;
	// UnityEngine.WaitForSeconds BarrierMaker::wallbuild
	WaitForSeconds_t3839502067 * ___wallbuild_4;

public:
	inline static int32_t get_offset_of_block_2() { return static_cast<int32_t>(offsetof(BarrierMaker_t534186871, ___block_2)); }
	inline BarrierBehavior_t3080001979 * get_block_2() const { return ___block_2; }
	inline BarrierBehavior_t3080001979 ** get_address_of_block_2() { return &___block_2; }
	inline void set_block_2(BarrierBehavior_t3080001979 * value)
	{
		___block_2 = value;
		Il2CppCodeGenWriteBarrier(&___block_2, value);
	}

	inline static int32_t get_offset_of_buildwallco_3() { return static_cast<int32_t>(offsetof(BarrierMaker_t534186871, ___buildwallco_3)); }
	inline Il2CppObject * get_buildwallco_3() const { return ___buildwallco_3; }
	inline Il2CppObject ** get_address_of_buildwallco_3() { return &___buildwallco_3; }
	inline void set_buildwallco_3(Il2CppObject * value)
	{
		___buildwallco_3 = value;
		Il2CppCodeGenWriteBarrier(&___buildwallco_3, value);
	}

	inline static int32_t get_offset_of_wallbuild_4() { return static_cast<int32_t>(offsetof(BarrierMaker_t534186871, ___wallbuild_4)); }
	inline WaitForSeconds_t3839502067 * get_wallbuild_4() const { return ___wallbuild_4; }
	inline WaitForSeconds_t3839502067 ** get_address_of_wallbuild_4() { return &___wallbuild_4; }
	inline void set_wallbuild_4(WaitForSeconds_t3839502067 * value)
	{
		___wallbuild_4 = value;
		Il2CppCodeGenWriteBarrier(&___wallbuild_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
