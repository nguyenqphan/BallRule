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

// Facebook.Unity.IGraphResult
struct IGraphResult_t2342947041;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.String
struct String_t;
// System.Action`1<UnityEngine.Texture>
struct Action_1_t1918174889;
// UnityEngine.Texture
struct Texture_t1769722184;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"

// System.Void FBGraph::GetPlayerInfo()
extern "C"  void FBGraph_GetPlayerInfo_m1977855676 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::GetPlayerInfoCallback(Facebook.Unity.IGraphResult)
extern "C"  void FBGraph_GetPlayerInfoCallback_m585684430 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::GetPlayerPicture()
extern "C"  void FBGraph_GetPlayerPicture_m1599699666 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::GetFriends()
extern "C"  void FBGraph_GetFriends_m2921996938 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::GetFriendsCallback(Facebook.Unity.IGraphResult)
extern "C"  void FBGraph_GetFriendsCallback_m1175772992 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::GetInvitableFriends()
extern "C"  void FBGraph_GetInvitableFriends_m4117510924 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::GetInvitableFriendsCallback(Facebook.Unity.IGraphResult)
extern "C"  void FBGraph_GetInvitableFriendsCallback_m485910398 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::CacheFriends(System.Collections.Generic.List`1<System.Object>)
extern "C"  void FBGraph_CacheFriends_m2578017600 (Object_t * __this /* static, unused */, List_1_t1634065389 * ___newFriends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::GetScores()
extern "C"  void FBGraph_GetScores_m3802773806 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::GetScoresCallback(Facebook.Unity.IGraphResult)
extern "C"  void FBGraph_GetScoresCallback_m213755420 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::HandleScoresData(System.Collections.Generic.List`1<System.Object>)
extern "C"  void FBGraph_HandleScoresData_m1482114112 (Object_t * __this /* static, unused */, List_1_t1634065389 * ___scoresResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::LoadFriendImgFromID(System.String,System.Action`1<UnityEngine.Texture>)
extern "C"  void FBGraph_LoadFriendImgFromID_m1067899055 (Object_t * __this /* static, unused */, String_t* ___userID, Action_1_t1918174889 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::<GetPlayerInfoCallback>m__7(UnityEngine.Texture)
extern "C"  void FBGraph_U3CGetPlayerInfoCallbackU3Em__7_m3494480061 (Object_t * __this /* static, unused */, Texture_t1769722184 * ___pictureTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBGraph::<GetPlayerPicture>m__8(Facebook.Unity.IGraphResult)
extern "C"  void FBGraph_U3CGetPlayerPictureU3Em__8_m3970915838 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
