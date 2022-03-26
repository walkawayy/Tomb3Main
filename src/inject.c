#include "inject.h"

#include "game/lara.h"
#include "inject_util.h"

void Inject_All(void)
{
    INJECT(0x00440DB0, Lara_State_ForwardJump, 1);
    INJECT(0x00440E90, Lara_State_Walk, 1);
    INJECT(0x00440F20, Lara_State_Run, 1);
    INJECT(0x004410A0, Lara_State_FastBack, 1);
    INJECT(0x00441100, Lara_State_TurnRight, 1);
}
