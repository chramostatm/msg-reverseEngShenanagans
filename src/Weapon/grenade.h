#ifndef _GRENADE_H_
#define _GRENADE_H_

#include "Game/control.h"
#include "Game/game.h"
#include "Game/object.h"
#include "libdg/libdg.h"
#include "libgv/libgv.h"
#include "psyq.h"

// grenade/stun/chaff (in hands)

typedef struct _Actor_Grenade
{
	GV_ACT       field_0_actor;
	CONTROL *f20_ctrl;
	OBJECT     *f24_parent_obj;
	OBJECT      f28_obj;
	int         f4c_map_id;
	int        *f50_flags;
	SVECTOR     f54_pos;
	int         f5c_timer;
	int         f60_grenade_type;
	int         f64_has_exploded;
} Actor_Grenade;

enum GRENADE_TYPE
{
	GRD_GRENADE = 0,
	GRD_STUN = 1,
	GRD_CHAFF = 2,
	GRD_TBOMB = 3
};

STATIC_ASSERT_SIZE( Actor_Grenade, 0x68 );

Actor_Grenade *NewTimerBomb_80066ACC( CONTROL *a1, OBJECT *a2, int num_parent, int *a4, int a5 );

#endif // _GRENADE_H_
