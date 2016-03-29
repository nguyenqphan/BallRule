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

// GameStateManager
struct GameStateManager_t648042254;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;

#include "codegen/il2cpp-codegen.h"

// System.Void GameStateManager::.ctor()
extern "C"  void GameStateManager__ctor_m2267733837 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::.cctor()
extern "C"  void GameStateManager__cctor_m1098176000 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameStateManager GameStateManager::get_Instance()
extern "C"  GameStateManager_t648042254 * GameStateManager_get_Instance_m2805704868 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::Awake()
extern "C"  void GameStateManager_Awake_m2505339056 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameStateManager::get_LivesRemaining()
extern "C"  int32_t GameStateManager_get_LivesRemaining_m1860578333 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> GameStateManager::get_Scores()
extern "C"  List_1_t1634065389 * GameStateManager_get_Scores_m1522763744 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::set_Scores(System.Collections.Generic.List`1<System.Object>)
extern "C"  void GameStateManager_set_Scores_m662854871 (Object_t * __this /* static, unused */, List_1_t1634065389 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameStateManager::get_NumBerOfGame()
extern "C"  int32_t GameStateManager_get_NumBerOfGame_m3132017888 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::set_NumBerOfGame(System.Int32)
extern "C"  void GameStateManager_set_NumBerOfGame_m4062883735 (GameStateManager_t648042254 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameStateManager::get_SceneMaterialNum()
extern "C"  int32_t GameStateManager_get_SceneMaterialNum_m1026470881 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::set_SceneMaterialNum(System.Int32)
extern "C"  void GameStateManager_set_SceneMaterialNum_m564263448 (GameStateManager_t648042254 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameStateManager::get_Score()
extern "C"  int32_t GameStateManager_get_Score_m1514295878 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameStateManager::get_HighScore()
extern "C"  int32_t GameStateManager_get_HighScore_m1143406788 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::set_HighScore(System.Int32)
extern "C"  void GameStateManager_set_HighScore_m1444715631 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameStateManager::get_BestScore()
extern "C"  int32_t GameStateManager_get_BestScore_m3345504834 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::set_BestScore(System.Int32)
extern "C"  void GameStateManager_set_BestScore_m4053641453 (GameStateManager_t648042254 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameStateManager::get_BallTimer()
extern "C"  int32_t GameStateManager_get_BallTimer_m3898314170 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::set_BallTimer(System.Int32)
extern "C"  void GameStateManager_set_BallTimer_m633825381 (GameStateManager_t648042254 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameStateManager::get_NumCoins()
extern "C"  int32_t GameStateManager_get_NumCoins_m3254984202 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::set_NumCoins(System.Int32)
extern "C"  void GameStateManager_set_NumCoins_m939472065 (GameStateManager_t648042254 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameStateManager::get_IndexMaterial()
extern "C"  int32_t GameStateManager_get_IndexMaterial_m2160061197 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::set_IndexMaterial(System.Int32)
extern "C"  void GameStateManager_set_IndexMaterial_m2107745336 (GameStateManager_t648042254 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameStateManager::get_IsStarted()
extern "C"  bool GameStateManager_get_IsStarted_m545514757 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::set_IsStarted(System.Boolean)
extern "C"  void GameStateManager_set_IsStarted_m1939308796 (GameStateManager_t648042254 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::StartGame()
extern "C"  void GameStateManager_StartGame_m3277387231 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::Restart()
extern "C"  void GameStateManager_Restart_m3827787834 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::EndGame()
extern "C"  void GameStateManager_EndGame_m2639154712 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::CallUIRedraw()
extern "C"  void GameStateManager_CallUIRedraw_m2882927136 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::Save()
extern "C"  void GameStateManager_Save_m2100463252 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameStateManager::Load()
extern "C"  void GameStateManager_Load_m1912361917 (GameStateManager_t648042254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameStateManager GameStateManager::<init>m__10()
extern "C"  GameStateManager_t648042254 * GameStateManager_U3CinitU3Em__10_m2564355830 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameStateManager GameStateManager::<final>m__11()
extern "C"  GameStateManager_t648042254 * GameStateManager_U3CfinalU3Em__11_m3495785487 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
