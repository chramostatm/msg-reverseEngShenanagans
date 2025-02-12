#ifndef _JPEGCAM_H
#define _JPEGCAM_H

#include "libgv/libgv.h"
#include "Game/game.h"
#include "Game/control.h"
#include "Thing/sight.h"

typedef signed char TMat8x8B[8][8];     // Matrix with 8 rows by 8 bytes
typedef signed char TMat16x16B[16][16]; // Matrix with 16 rows by 16 bytes
typedef int         TMat8x8I[8][8];

typedef struct Actor_jpegcam
{
    GV_ACT             field_0_actor;
    CONTROL        *field_20_pCtrl;
    OBJECT            *field_24_parent;
    OBJECT_NO_ROTS     field_28_goggles;
    short              field_4c_head_saved_packs;
    short              field_4e_head_saved_raise;
    GV_PAD*            field_50_pInput;
    SVECTOR            field_54_vec;
    SVECTOR            field_5C_ang;
    int                field_64_state;
    int                field_68;
    struct map_record *field_6C_pMap;
    int                field_70;
    int                field_74;
    int                field_78;
    int                field_7C;
    int                field_80;
    char              *field_84;
    char              *field_88;
    int                field_8C_size;
    Actor_Sight       *field_90_pSight;
    int                field_94_bMakeVisible;
    int                field_98;
} Actor_jpegcam;
STATIC_ASSERT_SIZE(Actor_jpegcam, 0x9c);

void jpegcam_act_80064C50(Actor_jpegcam *pActor);
void jpegcam_kill_80065008(Actor_jpegcam *pActor);
int  jpegcam_loader_80065098(Actor_jpegcam *pActor, CONTROL *pCtrl, OBJECT *pParent);

GV_ACT * NewJpegcam_80065118(CONTROL *pCtrl, OBJECT *pParent, int unused);

#endif // _JPEGCAM_H
