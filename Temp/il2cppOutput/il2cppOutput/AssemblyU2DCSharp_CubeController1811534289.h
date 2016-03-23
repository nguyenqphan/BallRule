#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_CubeControllerP322988191.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

// CubeController
struct  CubeController_t1811534289  : public MonoBehaviour_t3012272455
{
	// CubeControllerP CubeController::cubeControllerP
	CubeControllerP_t322988191  ___cubeControllerP_2;
	// UnityEngine.LayerMask CubeController::cube
	LayerMask_t1862190090  ___cube_3;
	// UnityEngine.AudioClip CubeController::cubeClick
	AudioClip_t3714538611 * ___cubeClick_4;
	// UnityEngine.AudioSource CubeController::cubeClickSource
	AudioSource_t3628549054 * ___cubeClickSource_5;
};
