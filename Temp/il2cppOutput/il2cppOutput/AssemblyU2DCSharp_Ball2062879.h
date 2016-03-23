#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ball/ActionScaling
struct ActionScaling_t4098096209;
// Ball/ActionExplode
struct ActionExplode_t878049707;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_BallP63949329.h"

// Ball
struct  Ball_t2062879  : public MonoBehaviour_t3012272455
{
	// BallP Ball::ballP
	BallP_t63949329  ___ballP_2;
};
struct Ball_t2062879_StaticFields{
	// Ball/ActionScaling Ball::Scalling
	ActionScaling_t4098096209 * ___Scalling_3;
	// Ball/ActionExplode Ball::ExplodeBall
	ActionExplode_t878049707 * ___ExplodeBall_4;
};
