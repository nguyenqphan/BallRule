#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SoundBreaking
struct SoundBreaking_t2714241170;
// UpdateScore
struct UpdateScore_t1082839849;
// Diamond/ActionBreaking
struct ActionBreaking_t3455992569;
// Diamond/EmissiveAction
struct EmissiveAction_t997068685;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DiamondProperty1654949673.h"

// Diamond
struct  Diamond_t3319707956  : public MonoBehaviour_t3012272455
{
	// SoundBreaking Diamond::soundBreakingDiamond
	SoundBreaking_t2714241170 * ___soundBreakingDiamond_2;
	// DiamondProperty Diamond::diamondP
	DiamondProperty_t1654949673  ___diamondP_3;
	// UpdateScore Diamond::updateScore
	UpdateScore_t1082839849 * ___updateScore_4;
};
struct Diamond_t3319707956_StaticFields{
	// Diamond/ActionBreaking Diamond::BreakingDiamond
	ActionBreaking_t3455992569 * ___BreakingDiamond_5;
	// Diamond/EmissiveAction Diamond::EmissiveDiamond
	EmissiveAction_t997068685 * ___EmissiveDiamond_6;
};
