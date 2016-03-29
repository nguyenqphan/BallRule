#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.RawImage
struct RawImage_t3831555132;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// LeaderBoardElement
struct  LeaderBoardElement_t3363596543  : public MonoBehaviour_t3012272455
{
	// UnityEngine.UI.Image LeaderBoardElement::Background
	Image_t3354615620 * ___Background_2;
	// UnityEngine.UI.RawImage LeaderBoardElement::ProfilePicture
	RawImage_t3831555132 * ___ProfilePicture_3;
	// UnityEngine.UI.Text LeaderBoardElement::Rank
	Text_t3286458198 * ___Rank_4;
	// UnityEngine.UI.Text LeaderBoardElement::Name
	Text_t3286458198 * ___Name_5;
	// UnityEngine.UI.Text LeaderBoardElement::Score
	Text_t3286458198 * ___Score_6;
};
