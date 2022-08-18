#ifndef _LIBFS_H_
#define _LIBFS_H_

#include "Game/loader.h"

#include "data/data/data.h" // TODO: move FS_FILE_INFO_8009D49C here

typedef struct _CDBIOS_TASK {
    int field_0_state;
    int field_4_sector;
    void *field_8_buffer;
    int field_C;
    int field_10_ticks;
    int field_14;
    int field_18_size;
    int field_1C_remaining;
    void *field_20_callback;
} CDBIOS_TASK;

int                   CDBIOS_ReadSync_80022854(void);
int                   FS_CdMakePositionTable_80022B5C(void *pHeap, FS_FILE_INFO_8009D49C *pDirRecs);
int                   FS_ResetCdFilePosition_80021E2C(void *pHeap);
void                  CDBIOS_ForceStop_80022864(void);
int                   CDBIOS_Reset_80021F70(void);
void                  CDFS_Init_80021EC4();
void                  FS_CdStageFileInit_80022D00(void *pHeap, int startSector);
void                  FS_MovieFileInit_80023860(void *pHeap, int startSector);
void                  FS_StartDaemon_80014A7C(void);
void                  FS_StreamCD_80023F8C(void);
void                  FS_StreamTaskInit_80023E1C(void);
void                  CDBIOS_ReadRequest_8002280C(void *pHeap, unsigned int startSector, unsigned int sectorSize, void *fnCallBack);
void                  FS_CdStageProgBinFix_80014AAC(void);
int                   Loader_80023624(struct Loader_Record *pRec);
int                   FS_CdGetStageFileTop_80022DCC(char *pFileName);
int                   Loader_CD_Read_CallBack_80023274(int *a1);
int                   FS_LoadStageSync_800237C0(struct Loader_Record *pRec);
struct Loader_Record *FS_LoadStageRequest_800236E0(const char *pFileName);
void                  FS_LoadStageComplete_80023804(struct Loader_Record *pFileName);
int                   FS_StreamGetData_800240E0(unsigned int);
void                  FS_StreamOpen_80024060();
void                  FS_StreamClose_80024098(void);
int                   CDBIOS_TaskState_80022888(void);
unsigned int          FS_StreamTaskState_80023E0C(void);
void                  FS_StreamStop_80024028();
int                   FS_LoadFileSync_80021F48(void);
void                  CDBIOS_TaskStart_800227A8(void);

#endif // _LIBFS_H_
