﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t3653031512;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1890718142;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t1013890471;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t2432841515;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GUILayoutGroup1013890471.h"
#include "mscorlib_System_Type2779229935.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_GUIContent2432841515.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C"  void GUILayoutUtility__cctor_m1548085895 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C"  LayoutCache_t3653031512 * GUILayoutUtility_SelectIDList_m801008209 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C"  void GUILayoutUtility_Begin_m2012081982 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayoutUtility_BeginWindow_m4017651538 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
extern "C"  void GUILayoutUtility_EndGroup_m4231280832 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C"  void GUILayoutUtility_Layout_m1143185416 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C"  void GUILayoutUtility_LayoutFromEditorWindow_m3347777775 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C"  void GUILayoutUtility_LayoutFreeGroup_m2250873692 (Object_t * __this /* static, unused */, GUILayoutGroup_t1013890471 * ___toplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C"  void GUILayoutUtility_LayoutSingleGroup_m1841651392 (Object_t * __this /* static, unused */, GUILayoutGroup_t1013890471 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
extern "C"  GUILayoutGroup_t1013890471 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m3222957921 (Object_t * __this /* static, unused */, Type_t * ___LayoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
extern "C"  GUILayoutGroup_t1013890471 * GUILayoutUtility_BeginLayoutGroup_m651119829 (Object_t * __this /* static, unused */, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, Type_t * ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
extern "C"  void GUILayoutUtility_EndLayoutGroup_m3031902584 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  Rect_t1525428817  GUILayoutUtility_GetRect_m252641924 (Object_t * __this /* static, unused */, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t1525428817  GUILayoutUtility_GetRect_m1132310379 (Object_t * __this /* static, unused */, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t1525428817  GUILayoutUtility_DoGetRect_m2737509142 (Object_t * __this /* static, unused */, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t1525428817  GUILayoutUtility_GetRect_m1883029946 (Object_t * __this /* static, unused */, float ___width, float ___height, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t1525428817  GUILayoutUtility_DoGetRect_m2575129381 (Object_t * __this /* static, unused */, float ___minWidth, float ___maxWidth, float ___minHeight, float ___maxHeight, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C"  GUIStyle_t1006925219 * GUILayoutUtility_get_spaceStyle_m3628948340 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C"  Rect_t1525428817  GUILayoutUtility_Internal_GetWindowRect_m1168223211 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_GetWindowRect(System.Int32,UnityEngine.Rect&)
extern "C"  void GUILayoutUtility_INTERNAL_CALL_Internal_GetWindowRect_m1468033111 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t1525428817 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C"  void GUILayoutUtility_Internal_MoveWindow_m2191818611 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t1525428817  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C"  void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m115257690 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t1525428817 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;