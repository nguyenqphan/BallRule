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
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t1769722184;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture>
struct Dictionary_2_t3407420088;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// GameStateManager
struct  GameStateManager_t648042254  : public MonoBehaviour_t3012272455
{
	// System.Int32 GameStateManager::lives
	int32_t ___lives_8;
	// System.Int32 GameStateManager::numberOfGame
	int32_t ___numberOfGame_22;
	// System.Int32 GameStateManager::sceneMaterialNum
	int32_t ___sceneMaterialNum_23;
	// System.Int32 GameStateManager::score
	int32_t ___score_24;
	// System.Int32 GameStateManager::StartingScore
	int32_t ___StartingScore_25;
	// System.Nullable`1<System.Int32> GameStateManager::highScore
	Nullable_1_t1438485399  ___highScore_26;
	// System.Int32 GameStateManager::bestScore
	int32_t ___bestScore_29;
	// System.Int32 GameStateManager::ballTimer
	int32_t ___ballTimer_30;
	// System.Int32 GameStateManager::numCoins
	int32_t ___numCoins_31;
	// System.Int32 GameStateManager::startCoints
	int32_t ___startCoints_32;
	// System.Int32 GameStateManager::indexMaterial
	int32_t ___indexMaterial_33;
	// UnityEngine.GameObject GameStateManager::cube
	GameObject_t4012695102 * ___cube_34;
	// System.Boolean GameStateManager::isStarted
	bool ___isStarted_35;
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
	// System.String GameStateManager::ServerURL
	String_t* ___ServerURL_6;
	// System.Int32 GameStateManager::StartingLives
	int32_t ___StartingLives_7;
	// System.Int32 GameStateManager::CoinBalance
	int32_t ___CoinBalance_9;
	// System.Int32 GameStateManager::NumBombs
	int32_t ___NumBombs_10;
	// System.String GameStateManager::FriendName
	String_t* ___FriendName_11;
	// System.String GameStateManager::FriendID
	String_t* ___FriendID_12;
	// UnityEngine.Texture GameStateManager::FriendTexture
	Texture_t1769722184 * ___FriendTexture_13;
	// System.Int32 GameStateManager::CelebFriend
	int32_t ___CelebFriend_14;
	// System.String GameStateManager::Username
	String_t* ___Username_15;
	// UnityEngine.Texture GameStateManager::UserTexture
	Texture_t1769722184 * ___UserTexture_16;
	// System.Collections.Generic.List`1<System.Object> GameStateManager::Friends
	List_1_t1634065389 * ___Friends_17;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture> GameStateManager::FriendImages
	Dictionary_2_t3407420088 * ___FriendImages_18;
	// System.Collections.Generic.List`1<System.Object> GameStateManager::InvitableFriends
	List_1_t1634065389 * ___InvitableFriends_19;
	// System.Boolean GameStateManager::ScoresReady
	bool ___ScoresReady_20;
	// System.Collections.Generic.List`1<System.Object> GameStateManager::scores
	List_1_t1634065389 * ___scores_21;
	// System.Boolean GameStateManager::ScoringLockout
	bool ___ScoringLockout_27;
	// System.Boolean GameStateManager::highScorePending
	bool ___highScorePending_28;
	// GameStateManager/InstanceStep GameStateManager::<>f__am$cache22
	InstanceStep_t3721597217 * ___U3CU3Ef__amU24cache22_36;
	// GameStateManager/InstanceStep GameStateManager::<>f__am$cache23
	InstanceStep_t3721597217 * ___U3CU3Ef__amU24cache23_37;
};
