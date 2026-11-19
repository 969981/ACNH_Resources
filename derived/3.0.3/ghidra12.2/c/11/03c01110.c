
void FUN_03c01110(long *param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_6b0 [16];
  undefined **local_6a0;
  undefined2 local_698;
  undefined1 local_696;
  undefined1 local_695;
  undefined1 local_694;
  undefined1 local_693;
  undefined1 local_692;
  undefined1 uStack_691;
  undefined1 auStack_690 [1584];
  undefined *local_60;
  long local_58;
  undefined *local_50;
  ulong local_48;
  
  uVar11 = (**(code **)(*param_1 + 0x98))();
  if ((uVar11 & 1) == 0) {
    return;
  }
  iVar6 = (int)param_1[2];
  if ((iVar6 == 0) && (*(char *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x38) + 0x2ac) != '\0')) {
    return;
  }
  iVar3 = *(int *)((long)param_1 + 0x3fc);
  if (iVar3 != 0) {
    lVar15 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x88);
    pMVar1 = (MutexType *)(lVar15 + 0x330);
    nn::os::LockMutex(pMVar1);
    iVar6 = *(int *)(lVar15 + 0x128);
    puVar12 = *(uint **)(*(long *)(lVar15 + 0x110) + (long)iVar6 * 8);
    uVar4 = *puVar12;
    if (0 < (int)uVar4) {
      puVar13 = *(undefined8 **)(puVar12 + 2);
      lVar14 = (ulong)uVar4 << 3;
      do {
        if (*(int *)*puVar13 == iVar3) goto LAB_03c013d0;
        puVar13 = puVar13 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    uVar4 = iVar6 + 1U & 1;
    uVar2 = -uVar4;
    if (-2 < iVar6) {
      uVar2 = uVar4;
    }
    puVar12 = *(uint **)(*(long *)(lVar15 + 0x110) + (ulong)uVar2 * 8);
    uVar4 = *puVar12;
    if (0 < (int)uVar4) {
      puVar13 = *(undefined8 **)(puVar12 + 2);
      lVar14 = (ulong)uVar4 << 3;
      do {
        if (*(int *)*puVar13 == iVar3) goto LAB_03c013d0;
        puVar13 = puVar13 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    if ((0 < *(int *)(lVar15 + 0x140)) &&
       (lVar14 = *(long *)(lVar15 + 0x138), lVar14 != lVar15 + 0x130)) {
      do {
        if (*(int *)(lVar14 + -8) == iVar3) {
LAB_03c013d0:
          nn::os::UnlockMutex(pMVar1);
          return;
        }
        lVar14 = *(long *)(lVar14 + 8);
      } while (lVar14 + -8 != lVar15 + 0x128);
    }
    nn::os::UnlockMutex(pMVar1);
    iVar6 = (int)param_1[2];
  }
  if (iVar6 == 2) {
    FUN_00243e14(auStack_690);
    if (*(char *)((long)param_1 + 0x411) != '\0') {
      FUN_00243ef0(&local_60,auStack_690,(long)param_1 + 0x1f1,
                   *(undefined4 *)((long)param_1 + 0x3f4));
      *(undefined1 *)((long)param_1 + 0x411) = 0;
      puVar9 = PTR_DAT_04bcb7d8;
      lVar15 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x40);
      if (*(char *)(lVar15 + 0x260) == '\0') {
        uVar10 = 0;
      }
      else {
        FUN_0024403c(lVar15 + 0x278,auStack_690);
        local_50 = PTR_LAB_04bcb7f8;
        local_48 = 0;
        local_60 = PTR_DAT_04bcb820 + 0x10;
        local_58 = lVar15;
        uVar10 = FUN_03879ce4(*(undefined8 *)(*(long *)puVar9 + 0x88),&local_60,lVar15 + 9,0,0,0);
      }
      *(undefined4 *)((long)param_1 + 0x3fc) = uVar10;
    }
    FUN_00243e60(auStack_690);
    return;
  }
  if (iVar6 == 1) {
    FUN_0024ded0(auStack_690);
    if (*(char *)((long)param_1 + 0x411) != '\0') {
      FUN_0024df70(&local_60,auStack_690,(long)param_1 + 0x1f1,
                   *(undefined4 *)((long)param_1 + 0x3f4));
      *(undefined1 *)((long)param_1 + 0x411) = 0;
      puVar9 = PTR_DAT_04bcb7d8;
      lVar15 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x48);
      if (*(char *)(lVar15 + 0x278) == '\0') {
        uVar10 = 0;
      }
      else {
        FUN_0024df1c(lVar15 + 0x290,auStack_690);
        local_50 = PTR_LAB_04bcb828;
        local_48 = 0;
        local_60 = PTR_DAT_04bcb838 + 0x10;
        local_58 = lVar15;
        uVar10 = FUN_03882304(*(undefined8 *)(*(long *)puVar9 + 0x88),&local_60,lVar15 + 9,0,0,0);
      }
      *(undefined4 *)((long)param_1 + 0x3fc) = uVar10;
    }
    thunk_FUN_0025fb80(auStack_690);
    return;
  }
  if (iVar6 != 0) {
    return;
  }
  FUN_0030c500(auStack_690);
  if (*(char *)((long)param_1 + 0x40a) == '\0') {
    bVar7 = false;
    if (*(char *)((long)param_1 + 0x409) == '\0') goto LAB_03c0127c;
    if ((int)param_1[0x22] == 0) {
      if (*(int *)((long)param_1 + 0x114) == 0) {
        if ((int)param_1[0x23] != 0) {
          FUN_0030caac(&local_60,auStack_690,2,(int)param_1[0x1f]);
          *(undefined4 *)(param_1 + 0x23) = 0;
          goto LAB_03c0152c;
        }
        bVar8 = false;
      }
      else {
        bVar8 = true;
        FUN_0030caac(&local_60,auStack_690,1,*(undefined4 *)((long)param_1 + 0xf4));
        *(undefined4 *)((long)param_1 + 0x114) = 0;
      }
    }
    else {
      FUN_0030caac(&local_60,auStack_690,0,(int)param_1[0x1e]);
      *(undefined4 *)(param_1 + 0x22) = 0;
LAB_03c0152c:
      bVar8 = true;
    }
    bVar7 = bVar8;
    if ((*(int *)((long)param_1 + 0x11c) != 0) && (bVar7 = true, !bVar8)) {
      FUN_0030caac(&local_60,auStack_690,3,*(undefined4 *)((long)param_1 + 0xfc));
      bVar7 = true;
      *(undefined4 *)((long)param_1 + 0x11c) = 0;
    }
    if ((int)param_1[0x24] != 0) {
      if (!bVar7) {
        FUN_0030caac(&local_60,auStack_690,4,(int)param_1[0x20]);
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      bVar7 = true;
    }
    if (*(int *)((long)param_1 + 0x124) == 0) {
      if (!bVar7) {
        *(undefined1 *)((long)param_1 + 0x409) = 0;
        goto LAB_03c0127c;
      }
      goto LAB_03c01620;
    }
    if (!bVar7) {
      FUN_0030caac(&local_60,auStack_690,5,*(undefined4 *)((long)param_1 + 0x104));
      *(undefined4 *)((long)param_1 + 0x124) = 0;
    }
  }
  else {
    FUN_0030ca24(&local_60,auStack_690,param_1 + 0x1e);
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    bVar7 = true;
    param_1[0x22] = 0;
    *(undefined1 *)((long)param_1 + 0x40a) = 0;
LAB_03c0127c:
    if (*(char *)((long)param_1 + 0x40c) != '\0') {
      FUN_0030cd00(auStack_690,(int)param_1[0x2e]);
      bVar7 = true;
      *(undefined1 *)((long)param_1 + 0x40c) = 0;
    }
    if (*(char *)((long)param_1 + 0x40d) != '\0') {
      local_50 = (undefined *)0x0;
      local_48 = local_48 & 0xffffffff00000000;
      local_60 = (undefined *)0x1000007b2;
      local_58 = 0x400000001;
      FUN_038e96b0(param_1 + 0x2f,&local_60);
      local_6a0 = &PTR_LAB_048497a0;
      _local_698 = CONCAT17(1,CONCAT16((char)local_48,
                                       CONCAT15((char)((ulong)local_50 >> 0x20),
                                                CONCAT14((char)local_50,
                                                         CONCAT13((char)local_58,
                                                                  CONCAT12((char)((ulong)local_60 >>
                                                                                 0x20),
                                                                           (short)local_60))))));
      FUN_0030d390(auStack_6b0,auStack_690,&local_6a0);
      bVar7 = true;
      *(undefined1 *)((long)param_1 + 0x40d) = 0;
    }
    if (*(char *)((long)param_1 + 0x40e) != '\0') {
      (**(code **)(param_1[0x30] + 0x18))(param_1 + 0x30);
      FUN_00227930(&local_60,param_1[0x31]);
      FUN_0030cba0(&local_6a0,auStack_690,&local_60);
      bVar7 = true;
      *(undefined1 *)((long)param_1 + 0x40e) = 0;
    }
    if (*(char *)((long)param_1 + 0x40f) != '\0') {
      (**(code **)(param_1[0x37] + 0x18))(param_1 + 0x37);
      FUN_00227930(&local_60,param_1[0x38]);
      FUN_0030cc4c(&local_6a0,auStack_690,&local_60);
      bVar7 = true;
      *(undefined1 *)((long)param_1 + 0x40f) = 0;
    }
    if (*(char *)((long)param_1 + 0x411) == '\0') {
LAB_03c01620:
      if (!bVar7) goto LAB_03c016a0;
    }
    else {
      FUN_0030d244(&local_60,auStack_690,(long)param_1 + 0x1f1,
                   *(undefined4 *)((long)param_1 + 0x3f4));
      *(undefined1 *)((long)param_1 + 0x411) = 0;
    }
  }
  puVar9 = PTR_DAT_04bcb7d8;
  lVar15 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x38);
  if (*(char *)(lVar15 + 0x2ad) == '\0') {
    uVar10 = 0;
  }
  else {
    uVar5 = *(undefined1 *)((long)param_1 + 0x414);
    FUN_0030d4f0(lVar15 + 0x408,auStack_690);
    *(undefined1 *)(lVar15 + 0x1068) = uVar5;
    local_50 = PTR_LAB_04bcb870;
    local_48 = 0;
    local_60 = PTR_DAT_04bcb8a8 + 0x10;
    local_58 = lVar15;
    uVar10 = FUN_038755f4(*(undefined8 *)(*(long *)puVar9 + 0x88),&local_60,lVar15 + 9,0,0,0);
  }
  *(undefined4 *)((long)param_1 + 0x3fc) = uVar10;
  *(undefined1 *)((long)param_1 + 0x414) = 0;
LAB_03c016a0:
  FUN_0030c880(auStack_690);
  return;
}

