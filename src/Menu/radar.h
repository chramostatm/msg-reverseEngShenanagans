#ifndef _RADAR_H_
#define _RADAR_H_

typedef struct radar_uv
{
    char          field_0_u0;
    char          field_1_v0;
    unsigned char field_2_w;
    unsigned char field_3_h;
} radar_uv;

typedef struct radar_uv_pair
{
    radar_uv field_0;
    radar_uv field_4;
} radar_uv_pair;

typedef void (*TRadarFn_800AB48C)(Actor_MenuMan *, unsigned char *);

void menu_radar_update_8003B350(struct Actor_MenuMan* pActor, unsigned char * pOt);
void menu_init_radar_helper_8003ADAC(void);
void menu_radar_helper_8003ADD8(struct Actor_MenuMan *a1, int a2);
void menu_SetRadarFunc_80038F30(TRadarFn_800AB48C func);

void draw_radar_8003AEC0(Actor_MenuMan *pActor, unsigned char * pOt);

#endif // _RADAR_H_
