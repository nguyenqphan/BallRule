#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// System.Collections.Generic.Dictionary`2<PaymentDialog/BombPackage,System.Int32>
struct Dictionary_2_t2319142109;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// PaymentDialog
struct  PaymentDialog_t1790062286  : public MonoBehaviour_t3012272455
{
	// UnityEngine.UI.Text PaymentDialog::CoinText
	Text_t3286458198 * ___CoinText_2;
	// UnityEngine.UI.Text PaymentDialog::BombText
	Text_t3286458198 * ___BombText_3;
	// System.Collections.Generic.Dictionary`2<PaymentDialog/BombPackage,System.Int32> PaymentDialog::BombPackageCost
	Dictionary_2_t2319142109 * ___BombPackageCost_4;
};
