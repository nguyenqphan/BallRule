#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Texture[]
struct TextureU5BU5D_t3618347161;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// FriendMarker
struct  FriendMarker_t4012634264  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Texture FriendMarker::FriendTexture
	Texture_t1769722184 * ___FriendTexture_2;
	// UnityEngine.Texture FriendMarker::EnemyTexture
	Texture_t1769722184 * ___EnemyTexture_3;
	// System.Single FriendMarker::FriendThreshold
	float ___FriendThreshold_4;
	// UnityEngine.Texture[] FriendMarker::CelebTextures
	TextureU5BU5D_t3618347161* ___CelebTextures_5;
};
