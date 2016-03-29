#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PopupScript
struct PopupScript_t2200872055;
// System.String
struct String_t;
// System.Action
struct Action_t437523947;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Core_System_Action437523947.h"

// System.Void PopupScript::.ctor()
extern "C"  void PopupScript__ctor_m509144276 (PopupScript_t2200872055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopupScript::SetPopup(System.String,System.Single,System.Action)
extern "C"  void PopupScript_SetPopup_m4224439492 (Object_t * __this /* static, unused */, String_t* ___message, float ___delay, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopupScript::ConfigurePopup(System.String,System.Single,System.Action)
extern "C"  void PopupScript_ConfigurePopup_m1297992328 (PopupScript_t2200872055 * __this, String_t* ___message, float ___delay, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PopupScript::ClearPopup(System.Single,System.Action)
extern "C"  Object_t * PopupScript_ClearPopup_m2590104763 (PopupScript_t2200872055 * __this, float ___delay, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
