#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.UI.RawImage
struct RawImage_t3831555132;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1048578170;
// GameResources
struct GameResources_t3628012083;
// System.Action`1<UnityEngine.Texture>
struct Action_1_t1918174889;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// GameMenu
struct  GameMenu_t2590240913  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject GameMenu::HeaderNotLoggedIn
	GameObject_t4012695102 * ___HeaderNotLoggedIn_2;
	// UnityEngine.GameObject GameMenu::HeaderLoggedIn
	GameObject_t4012695102 * ___HeaderLoggedIn_3;
	// UnityEngine.GameObject GameMenu::LoadingText
	GameObject_t4012695102 * ___LoadingText_4;
	// UnityEngine.UI.Button GameMenu::LoginButton
	Button_t990034267 * ___LoginButton_5;
	// UnityEngine.UI.RawImage GameMenu::ProfilePic
	RawImage_t3831555132 * ___ProfilePic_6;
	// UnityEngine.UI.Text GameMenu::WelcomeText
	Text_t3286458198 * ___WelcomeText_7;
	// UnityEngine.UI.Text GameMenu::ScoreText
	Text_t3286458198 * ___ScoreText_8;
	// UnityEngine.UI.Text GameMenu::CoinText
	Text_t3286458198 * ___CoinText_9;
	// UnityEngine.UI.Text GameMenu::BombText
	Text_t3286458198 * ___BombText_10;
	// UnityEngine.GameObject GameMenu::LeaderboardPanel
	GameObject_t4012695102 * ___LeaderboardPanel_11;
	// UnityEngine.GameObject GameMenu::LeaderboardItemPrefab
	GameObject_t4012695102 * ___LeaderboardItemPrefab_12;
	// UnityEngine.UI.ScrollRect GameMenu::LeaderboardScrollRect
	ScrollRect_t1048578170 * ___LeaderboardScrollRect_13;
	// UnityEngine.GameObject GameMenu::PaymentPanel
	GameObject_t4012695102 * ___PaymentPanel_14;
	// GameResources GameMenu::gResources
	GameResources_t3628012083 * ___gResources_15;
};
struct GameMenu_t2590240913_StaticFields{
	// System.Action`1<UnityEngine.Texture> GameMenu::<>f__am$cacheE
	Action_1_t1918174889 * ___U3CU3Ef__amU24cacheE_16;
};
