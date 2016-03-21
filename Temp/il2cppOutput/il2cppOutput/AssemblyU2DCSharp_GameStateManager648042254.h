#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameStateManager
struct GameStateManager_t648042254;
// GameStateManager/InstanceStep
struct InstanceStep_t3721597217;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// GameStateManager
struct  GameStateManager_t648042254  : public MonoBehaviour_t3012272455
{
	// System.Int32 GameStateManager::testIndex
	int32_t ___testIndex_6;
	// System.Int32 GameStateManager::score
	int32_t ___score_7;
	// System.Int32 GameStateManager::StartingScore
	int32_t ___StartingScore_8;
	// System.Nullable`1<System.Int32> GameStateManager::highScore
	Nullable_1_t1438485399  ___highScore_9;
	// System.Int32 GameStateManager::bestScore
	int32_t ___bestScore_12;
	// System.Int32 GameStateManager::ballTimer
	int32_t ___ballTimer_13;
	// System.Int32 GameStateManager::numCoins
	int32_t ___numCoins_14;
	// System.Int32 GameStateManager::startCoints
	int32_t ___startCoints_15;
	// System.Int32 GameStateManager::indexMaterial
	int32_t ___indexMaterial_16;
	// UnityEngine.GameObject GameStateManager::cube
	GameObject_t4012695102 * ___cube_17;
	// System.Boolean GameStateManager::isStarted
	bool ___isStarted_18;
};
struct GameStateManager_t648042254_StaticFields{
	// GameStateManager GameStateManager::instance
	GameStateManager_t648042254 * ___instance_2;
	// GameStateManager/InstanceStep GameStateManager::init
	InstanceStep_t3721597217 * ___init_3;
	// GameStateManager/InstanceStep GameStateManager::final
	InstanceStep_t3721597217 * ___final_4;
	// GameStateManager/InstanceStep GameStateManager::current
	InstanceStep_t3721597217 * ___current_5;
	// System.Boolean GameStateManager::ScoringLockout
	bool ___ScoringLockout_10;
	// System.Boolean GameStateManager::highScorePending
	bool ___highScorePending_11;
	// GameStateManager/InstanceStep GameStateManager::<>f__am$cache11
	InstanceStep_t3721597217 * ___U3CU3Ef__amU24cache11_19;
	// GameStateManager/InstanceStep GameStateManager::<>f__am$cache12
	InstanceStep_t3721597217 * ___U3CU3Ef__amU24cache12_20;
};
