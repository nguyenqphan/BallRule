#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.RawImage
struct RawImage_t3831555132;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// GameUI
struct  GameUI_t2125598246  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject[] GameUI::Hearts
	GameObjectU5BU5D_t3499186955* ___Hearts_2;
	// UnityEngine.UI.Text GameUI::ScoreText
	Text_t3286458198 * ___ScoreText_3;
	// UnityEngine.UI.Text GameUI::SmashText
	Text_t3286458198 * ___SmashText_4;
	// UnityEngine.UI.RawImage GameUI::FriendImage
	RawImage_t3831555132 * ___FriendImage_5;
	// System.Int32 GameUI::lastLifeCount
	int32_t ___lastLifeCount_6;
	// System.Int32 GameUI::lastScoreCount
	int32_t ___lastScoreCount_7;
};
