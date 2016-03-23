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

#include "mscorlib_System_ValueType4014882752.h"

// DiamondProperty
struct  DiamondProperty_t1654949673 
{
	// System.Boolean DiamondProperty::isSpinning
	bool ___isSpinning_0;
	// System.Boolean DiamondProperty::isFloating
	bool ___isFloating_1;
	// System.Single DiamondProperty::movingSpeed
	float ___movingSpeed_2;
	// System.Single DiamondProperty::floatSpeed
	float ___floatSpeed_3;
	// System.Single DiamondProperty::movementDistance
	float ___movementDistance_4;
	// System.Single DiamondProperty::startingY
	float ___startingY_5;
	// System.Boolean DiamondProperty::isMovingUp
	bool ___isMovingUp_6;
	// System.Single DiamondProperty::newY
	float ___newY_7;
	// SoundBreaking DiamondProperty::soundBreakingDiamond
	SoundBreaking_t2714241170 * ___soundBreakingDiamond_8;
	// UpdateScore DiamondProperty::updateScore
	UpdateScore_t1082839849 * ___updateScore_9;
};
