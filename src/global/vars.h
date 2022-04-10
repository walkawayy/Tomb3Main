#pragma once

#include "global/types.h"
#include "inject_util.h"

#define g_Input VAR(0x0069FDF0, uint32_t)
#define g_Lara VAR(0x006D61A0, struct LARA_INFO)
#define g_Anims VAR(0x006E2074, struct ANIM_INFO *)
#define g_DashTimer VAR(0x006D62A0, int16_t)
#define g_Camera VAR(0x006E3040, struct CAMERA_INFO)
#define g_Rooms VAR(0x006E2890, struct ROOM_INFO *)
#define g_TriggerIndex VAR(0x006E29A8, int16_t *)
#define g_Wibble VAR(0x006261A8, int32_t)
#define g_Items VAR(0x006E2A1C, struct ITEM_INFO *)
#define g_LaraItem VAR(0x006D62A4, struct ITEM_INFO *)
#define g_LaraOnPad VAR(0x006E2A14, uint8_t)
#define g_LaraCollisionRoutines ARR(0x004C75F0, LaraCollisionRoutine, [])
#define g_LaraControlRoutines ARR(0x004C7450, LaraControlRoutine, [])
#define g_LaraExtraControlRoutines ARR(0x004C75B8, LaraControlRoutine, [])
#define g_HeightType VAR(0x006E2A24, int32_t)
#define g_MatrixPtr VAR(0x005A6A2C, struct MATRIX *)
#define g_W2VMatrix VAR(0x005A6AC0, struct MATRIX)
#define g_Objects VAR(0x006E22E8, struct OBJECT_INFO *)
#define g_Bones VAR(0x006E22E8, int32_t *)
#define g_GotJointPos ARR(0x006D6190, uint8_t, [15])
#define g_ZFar VAR(0x004F6D44, int32_t)
#define g_IsJointUnderwater ARR(0x006D6290, uint8_t, [15])
