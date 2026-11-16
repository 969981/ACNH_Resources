
void FUN_027e00c8(long param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *local_170;
  char *pcStack_168;
  undefined *local_160;
  char *pcStack_158;
  undefined1 auStack_150 [256];
  
  if (param_2 != (uint *)0x0) {
    if (*(byte *)(param_1 + 0x1e335d) < 10) {
      *param_2 = *param_2 & (1 << (ulong)(*(byte *)(param_1 + 0x1e335d) & 0x1f) ^ 0xffffffffU);
    }
    puVar3 = PTR_DAT_04bb2020;
    bVar1 = *(byte *)(param_1 + 0x1e3362);
    if (bVar1 < 10) {
      param_1 = param_1 + (ulong)bVar1 * 0x13230;
      uVar2 = ~(1 << (ulong)(bVar1 & 0x1f));
      if (*(int *)(param_1 + 0x20) != 0 && *(int *)(param_1 + 4) != 0) {
        memcpy(auStack_150,(void *)(param_1 + 0x3c),0x100);
        pcStack_158 = "NextMoveOutTalk";
        local_160 = puVar3 + 0x10;
        iVar4 = FUN_02746e10(auStack_150,&local_160);
        if (iVar4 != 0) {
          pcStack_168 = "MoveCancelTalk";
          local_170 = puVar3 + 0x10;
          iVar4 = FUN_02746e10(auStack_150,&local_170);
          if (iVar4 == 0) {
            *param_2 = *param_2 & uVar2;
          }
        }
      }
      if (*(int *)(param_1 + 0x610) != 0 && *(int *)(param_1 + 0x5f4) != 0) {
        memcpy(auStack_150,(void *)(param_1 + 0x62c),0x100);
        pcStack_158 = "NextMoveOutTalk";
        local_160 = puVar3 + 0x10;
        iVar4 = FUN_02746e10(auStack_150,&local_160);
        if (iVar4 != 0) {
          pcStack_168 = "MoveCancelTalk";
          local_170 = puVar3 + 0x10;
          iVar4 = FUN_02746e10(auStack_150,&local_170);
          if (iVar4 == 0) {
            *param_2 = *param_2 & uVar2;
          }
        }
      }
      if (*(int *)(param_1 + 0xc00) != 0 && *(int *)(param_1 + 0xbe4) != 0) {
        memcpy(auStack_150,(void *)(param_1 + 0xc1c),0x100);
        pcStack_158 = "NextMoveOutTalk";
        local_160 = puVar3 + 0x10;
        iVar4 = FUN_02746e10(auStack_150,&local_160);
        if (iVar4 != 0) {
          pcStack_168 = "MoveCancelTalk";
          local_170 = puVar3 + 0x10;
          iVar4 = FUN_02746e10(auStack_150,&local_170);
          if (iVar4 == 0) {
            *param_2 = *param_2 & uVar2;
          }
        }
      }
      if ((*(int *)(param_1 + 0x11f0) != 0) && (*(int *)(param_1 + 0x11d4) != 0)) {
        memcpy(auStack_150,(void *)(param_1 + 0x120c),0x100);
        pcStack_158 = "NextMoveOutTalk";
        local_160 = puVar3 + 0x10;
        iVar4 = FUN_02746e10(auStack_150,&local_160);
        if (iVar4 != 0) {
          pcStack_168 = "MoveCancelTalk";
          local_170 = puVar3 + 0x10;
          iVar4 = FUN_02746e10(auStack_150,&local_170);
          if (iVar4 == 0) {
            *param_2 = *param_2 & uVar2;
          }
        }
      }
      if ((*(int *)(param_1 + 0x17e0) != 0) && (*(int *)(param_1 + 0x17c4) != 0)) {
        memcpy(auStack_150,(void *)(param_1 + 0x17fc),0x100);
        pcStack_158 = "NextMoveOutTalk";
        local_160 = puVar3 + 0x10;
        iVar4 = FUN_02746e10(auStack_150,&local_160);
        if (iVar4 != 0) {
          pcStack_168 = "MoveCancelTalk";
          local_170 = puVar3 + 0x10;
          iVar4 = FUN_02746e10(auStack_150,&local_170);
          if (iVar4 == 0) {
            *param_2 = *param_2 & uVar2;
          }
        }
      }
      if ((*(int *)(param_1 + 0x1dd0) != 0) && (*(int *)(param_1 + 0x1db4) != 0)) {
        memcpy(auStack_150,(void *)(param_1 + 0x1dec),0x100);
        pcStack_158 = "NextMoveOutTalk";
        local_160 = puVar3 + 0x10;
        iVar4 = FUN_02746e10(auStack_150,&local_160);
        if (iVar4 != 0) {
          pcStack_168 = "MoveCancelTalk";
          local_170 = puVar3 + 0x10;
          iVar4 = FUN_02746e10(auStack_150,&local_170);
          if (iVar4 == 0) {
            *param_2 = *param_2 & uVar2;
          }
        }
      }
      if ((*(int *)(param_1 + 0x23c0) != 0) && (*(int *)(param_1 + 0x23a4) != 0)) {
        memcpy(auStack_150,(void *)(param_1 + 0x23dc),0x100);
        pcStack_158 = "NextMoveOutTalk";
        local_160 = puVar3 + 0x10;
        iVar4 = FUN_02746e10(auStack_150,&local_160);
        if (iVar4 != 0) {
          pcStack_168 = "MoveCancelTalk";
          local_170 = puVar3 + 0x10;
          iVar4 = FUN_02746e10(auStack_150,&local_170);
          if (iVar4 == 0) {
            *param_2 = *param_2 & uVar2;
          }
        }
      }
      if ((*(int *)(param_1 + 0x29b0) != 0) && (*(int *)(param_1 + 0x2994) != 0)) {
        memcpy(auStack_150,(void *)(param_1 + 0x29cc),0x100);
        pcStack_158 = "NextMoveOutTalk";
        local_160 = puVar3 + 0x10;
        iVar4 = FUN_02746e10(auStack_150,&local_160);
        if (iVar4 != 0) {
          pcStack_168 = "MoveCancelTalk";
          local_170 = puVar3 + 0x10;
          iVar4 = FUN_02746e10(auStack_150,&local_170);
          if (iVar4 == 0) {
            *param_2 = *param_2 & uVar2;
          }
        }
      }
    }
  }
  return;
}

