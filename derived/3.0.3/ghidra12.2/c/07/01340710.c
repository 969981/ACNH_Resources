
void FUN_01340710(long *param_1,long *param_2,long *param_3,long *param_4)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  void *pvVar17;
  long lVar18;
  undefined4 uVar19;
  undefined *local_a8;
  char *local_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar2 = PTR_DAT_04bb60a0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)"WherearenPreset";
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *param_1 = (long)&PTR_FUN_049910b8;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar2 = PTR_DAT_04bb2f70;
  pvVar1 = (void *)((long)param_1 + 0x44);
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  param_1[6] = (long)(puVar2 + 0x10);
  param_1[7] = (long)pvVar1;
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar17 = (void *)param_3[1];
  if (pvVar1 != pvVar17) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar13 = 0;
    do {
      if (*(char *)(param_3[1] + lVar13) == '\0') goto LAB_01340820;
      lVar18 = param_3[1] + lVar13;
      if (*(char *)(lVar18 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_01340820;
      }
      if (*(char *)(lVar18 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_01340820;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01340820:
    iVar6 = (int)lVar13;
    if ((int)param_1[8] <= (int)lVar13) {
      iVar6 = (int)param_1[8] + -1;
    }
    memcpy(pvVar1,pvVar17,(long)iVar6);
    *(undefined1 *)((long)pvVar1 + (long)iVar6) = 0;
  }
  puVar5 = PTR_DAT_04bb2bc0;
  pvVar1 = (void *)((long)param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[0x11] = (long)(puVar2 + 0x10);
  param_1[0x12] = (long)pvVar1;
  param_1[6] = (long)(puVar5 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar17 = (void *)param_2[1];
  if (pvVar1 != pvVar17) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar13 = 0;
    do {
      if (*(char *)(param_2[1] + lVar13) == '\0') goto LAB_013408dc;
      lVar18 = param_2[1] + lVar13;
      if (*(char *)(lVar18 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_013408dc;
      }
      if (*(char *)(lVar18 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_013408dc;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_013408dc:
    iVar6 = (int)lVar13;
    if ((int)param_1[0x13] <= (int)lVar13) {
      iVar6 = (int)param_1[0x13] + -1;
    }
    memcpy(pvVar1,pvVar17,(long)iVar6);
    *(undefined1 *)((long)pvVar1 + (long)iVar6) = 0;
  }
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  plVar15 = param_1 + 0x1c;
  *plVar15 = (long)puVar2;
  puVar3 = PTR_DAT_04bb2020;
  param_1[0x11] = (long)(puVar5 + 0x10);
  local_78 = 0;
  puVar3 = puVar3 + 0x10;
  param_1[0x1d] = 0;
  puVar5 = PTR_DAT_04bb2698;
  local_a0 = "mOutsideParts";
  pcStack_90 = "OutsideParts";
  puStack_80 = &DAT_0407ebb1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_a8 = puVar3;
  local_98 = puVar3;
  local_88 = puVar3;
  if (*(long *)puVar5 != 0) {
    lVar13 = FUN_038cb610(*(long *)puVar5,plVar15);
    param_1[0x1d] = lVar13;
    if (lVar13 != 0) {
      if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar13 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
      }
      plVar16 = (long *)(lVar13 + 0x70);
      lVar14 = *plVar16;
      plVar15 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)plVar15);
      *plVar16 = (long)plVar15;
      *plVar15 = lVar14;
      plVar15[1] = (long)plVar16;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar15;
      }
      *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
      if (lVar18 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar18 + 0x20));
      }
    }
  }
  puVar8 = PTR_DAT_04bb3050;
  puVar4 = PTR_DAT_04bb3050 + 0x10;
  param_1[0x20] = (long)puVar4;
  (**(code **)(local_a8 + 0x18))(&local_a8);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = local_78;
  puVar9 = PTR_DAT_04bb60a0;
  param_1[0x25] = 0;
  param_1[0x20] = (long)(puVar9 + 0x10);
  param_1[0x21] = (long)local_a0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x20);
  lVar13 = *(long *)puVar5;
  param_1[0x1c] = (long)&PTR_LAB_04991c38;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x20] = (long)&PTR_LAB_04991cf8;
  local_a0 = "mBridgeBuffer";
  param_1[0x26] = 0;
  local_78 = 0;
  param_1[0x30] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  pcStack_90 = "Bridge";
  puStack_80 = &DAT_0407ebb1;
  param_1[0x2c] = 0;
  param_1[0x2d] = (long)puVar2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  local_a8 = puVar3;
  local_98 = puVar3;
  local_88 = puVar3;
  if (lVar13 != 0) {
    lVar13 = FUN_038cb610(lVar13,param_1 + 0x2d);
    param_1[0x2e] = lVar13;
    if (lVar13 != 0) {
      if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar13 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
      }
      plVar16 = (long *)(lVar13 + 0x70);
      lVar14 = *plVar16;
      plVar15 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)(param_1 + 0x2d));
      *plVar16 = (long)plVar15;
      *plVar15 = lVar14;
      plVar15[1] = (long)plVar16;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar15;
      }
      *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
      if (lVar18 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar18 + 0x20));
      }
    }
  }
  param_1[0x31] = (long)puVar4;
  (**(code **)(local_a8 + 0x18))(&local_a8);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x35) = local_78;
  param_1[0x31] = (long)(puVar9 + 0x10);
  param_1[0x32] = (long)local_a0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x2d] = (long)&PTR_LAB_049921b0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x37] = 0;
  param_1[0x31] = (long)&PTR_LAB_04992270;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_78 = 0;
  local_a0 = "mSlopeBuffer";
  pcStack_90 = "Slope";
  puStack_80 = &DAT_0407ebb1;
  lVar13 = *(long *)puVar5;
  puVar3 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = (long)puVar3;
  param_1[0x3e] = 0;
  local_a8 = puVar2;
  local_98 = puVar2;
  local_88 = puVar2;
  if (lVar13 != 0) {
    lVar13 = FUN_038cb610(lVar13,param_1 + 0x3d);
    param_1[0x3e] = lVar13;
    if (lVar13 != 0) {
      if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar13 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
      }
      plVar16 = (long *)(lVar13 + 0x70);
      lVar14 = *plVar16;
      plVar15 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)(param_1 + 0x3d));
      *plVar16 = (long)plVar15;
      *plVar15 = lVar14;
      plVar15[1] = (long)plVar16;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar15;
      }
      *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
      if (lVar18 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar18 + 0x20));
      }
    }
  }
  puVar4 = puVar8 + 0x10;
  param_1[0x41] = (long)puVar4;
  (**(code **)(local_a8 + 0x18))(&local_a8);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x42] = (long)local_a0;
  *(undefined4 *)(param_1 + 0x45) = local_78;
  puVar9 = PTR_DAT_04bb60a0;
  param_1[0x46] = 0;
  param_1[0x41] = (long)(puVar9 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x41);
  lVar13 = *(long *)puVar5;
  param_1[0x3d] = (long)&PTR_LAB_049923e8;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x41] = (long)&PTR_LAB_049924a8;
  local_a0 = "mItemBuffer";
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  local_78 = 0;
  param_1[0x4d] = (long)puVar3;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  pcStack_90 = "Item";
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar2;
  local_98 = puVar2;
  local_88 = puVar2;
  if (lVar13 != 0) {
    lVar13 = FUN_038cb610(lVar13,param_1 + 0x4d);
    param_1[0x4e] = lVar13;
    if (lVar13 != 0) {
      if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar13 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
      }
      plVar16 = (long *)(lVar13 + 0x70);
      lVar14 = *plVar16;
      plVar15 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)(param_1 + 0x4d));
      *plVar16 = (long)plVar15;
      *plVar15 = lVar14;
      plVar15[1] = (long)plVar16;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar15;
      }
      *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
      if (lVar18 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar18 + 0x20));
      }
    }
  }
  param_1[0x51] = (long)puVar4;
  (**(code **)(local_a8 + 0x18))(&local_a8);
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = (long)(puVar9 + 0x10);
  param_1[0x56] = 0;
  param_1[0x52] = (long)local_a0;
  *(undefined4 *)(param_1 + 0x55) = local_78;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x51);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  puVar2 = PTR_DAT_04bbc4c8 + 0xd0;
  param_1[0x4d] = (long)(PTR_DAT_04bbc4c8 + 0x10);
  param_1[0x51] = (long)puVar2;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  local_78 = 0;
  local_a0 = "mNpcHouseBuffer";
  pcStack_90 = "NpcHouse";
  puStack_80 = &DAT_0407ebb1;
  lVar13 = *(long *)puVar5;
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5d] = (long)puVar2;
  puVar2 = PTR_DAT_04bb60a0;
  local_98 = local_a8;
  local_88 = local_a8;
  if (lVar13 != 0) {
    lVar13 = FUN_038cb610(lVar13,param_1 + 0x5d);
    param_1[0x5e] = lVar13;
    if (lVar13 != 0) {
      if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar13 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
      }
      plVar16 = (long *)(lVar13 + 0x70);
      lVar14 = *plVar16;
      plVar15 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)(param_1 + 0x5d));
      *plVar16 = (long)plVar15;
      *plVar15 = lVar14;
      plVar15[1] = (long)plVar16;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar15;
      }
      *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
      if (lVar18 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar18 + 0x20));
      }
    }
  }
  param_1[0x61] = (long)(puVar8 + 0x10);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puVar5 = puVar2 + 0x10;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x61] = (long)puVar5;
  param_1[0x66] = 0;
  param_1[0x62] = (long)local_a0;
  *(undefined4 *)(param_1 + 0x65) = local_78;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x61);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x5d] = (long)&PTR_LAB_04992620;
  plVar15 = param_1 + 0x6d;
  param_1[0x61] = (long)&PTR_LAB_049926e0;
  param_1[0x6e] = (long)"mRoomFloorWall";
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x6d] = (long)puVar5;
  param_1[0x72] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar15);
  param_1[0x75] = 0;
  param_1[0x74] = (long)"mWall";
  param_1[0x6d] = (long)&PTR_LAB_04990f58;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x73] = (long)puVar5;
  param_1[0x78] = 0;
  lVar13 = param_1[0x72];
  if (param_1[0x72] == 0) {
    plVar16 = param_1 + 0x72;
  }
  else {
    do {
      lVar18 = lVar13;
      lVar13 = *(long *)(lVar18 + 0x10);
    } while (lVar13 != 0);
    plVar16 = (long *)(lVar18 + 0x10);
  }
  *plVar16 = (long)(param_1 + 0x73);
  puVar5 = PTR_DAT_04bb37e0;
  param_1[0x76] = (long)plVar15;
  puVar3 = PTR_DAT_04bb6ca0;
  param_1[0x7a] = (long)"mItemNameParam";
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  lVar18 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x73] = (long)(puVar3 + 0x10);
  puVar4 = PTR_DAT_04bb6ca8;
  param_1[0x7f] = 0;
  param_1[0x79] = (long)(puVar4 + 0x10);
  lVar13 = param_1[0x78];
  if (param_1[0x78] == 0) {
    plVar16 = param_1 + 0x78;
  }
  else {
    do {
      lVar14 = lVar13;
      lVar13 = *(long *)(lVar14 + 0x10);
    } while (lVar13 != 0);
    plVar16 = (long *)(lVar14 + 0x10);
  }
  *plVar16 = (long)(param_1 + 0x79);
  param_1[0x7c] = (long)(param_1 + 0x73);
  plVar16 = (long *)(**(code **)(param_1[0x79] + 0xf0))();
  *plVar16 = lVar18;
  if ((*(uint *)(param_1 + 0x7d) >> 7 & 1) == 0) {
    param_1[0x7f] = lVar18;
  }
  param_1[0x82] = 0;
  *(uint *)(param_1 + 0x7d) = *(uint *)(param_1 + 0x7d) & 0xfeffffff;
  param_1[0x81] = (long)"mFloor";
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x80] = (long)(puVar2 + 0x10);
  param_1[0x85] = 0;
  (**(code **)(param_1[0x6d] + 0x140))(plVar15,param_1 + 0x80);
  lVar18 = *(long *)puVar5;
  param_1[0x80] = (long)(puVar3 + 0x10);
  param_1[0x87] = (long)"mItemNameParam";
  param_1[0x86] = (long)(puVar4 + 0x10);
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x8c] = 0;
  lVar13 = param_1[0x85];
  if (param_1[0x85] == 0) {
    plVar16 = param_1 + 0x85;
  }
  else {
    do {
      lVar14 = lVar13;
      lVar13 = *(long *)(lVar14 + 0x10);
    } while (lVar13 != 0);
    plVar16 = (long *)(lVar14 + 0x10);
  }
  *plVar16 = (long)(param_1 + 0x86);
  param_1[0x89] = (long)(param_1 + 0x80);
  plVar16 = (long *)(**(code **)(param_1[0x86] + 0xf0))();
  *plVar16 = lVar18;
  if ((*(uint *)(param_1 + 0x8a) >> 7 & 1) == 0) {
    param_1[0x8c] = lVar18;
  }
  param_1[0x8f] = 0;
  *(uint *)(param_1 + 0x8a) = *(uint *)(param_1 + 0x8a) & 0xfeffffff;
  param_1[0x8e] = (long)"mAccentWall";
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x8d] = (long)(puVar2 + 0x10);
  param_1[0x92] = 0;
  (**(code **)(param_1[0x6d] + 0x140))(plVar15,param_1 + 0x8d);
  lVar18 = *(long *)puVar5;
  param_1[0x8d] = (long)(puVar3 + 0x10);
  param_1[0x94] = (long)"mItemNameParam";
  param_1[0x93] = (long)(puVar4 + 0x10);
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x99] = 0;
  lVar13 = param_1[0x92];
  if (param_1[0x92] == 0) {
    plVar16 = param_1 + 0x92;
  }
  else {
    do {
      lVar14 = lVar13;
      lVar13 = *(long *)(lVar14 + 0x10);
    } while (lVar13 != 0);
    plVar16 = (long *)(lVar14 + 0x10);
  }
  *plVar16 = (long)(param_1 + 0x93);
  param_1[0x96] = (long)(param_1 + 0x8d);
  plVar16 = (long *)(**(code **)(param_1[0x93] + 0xf0))();
  *plVar16 = lVar18;
  if ((*(uint *)(param_1 + 0x97) >> 7 & 1) == 0) {
    param_1[0x99] = lVar18;
  }
  param_1[0x9c] = 0;
  *(uint *)(param_1 + 0x97) = *(uint *)(param_1 + 0x97) & 0xfeffffff;
  param_1[0x9b] = (long)"mAccentWallDirection";
  param_1[0x9d] = 0;
  puVar5 = PTR_DAT_04bb6300;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0x9f] = 0;
  param_1[0x9a] = (long)(puVar5 + 0x10);
  (**(code **)(param_1[0x6d] + 0x140))(plVar15,param_1 + 0x9a);
  puVar10 = (undefined1 *)(**(code **)(param_1[0x9a] + 0xf0))(param_1 + 0x9a);
  *puVar10 = 0;
  if ((*(uint *)(param_1 + 0x9e) >> 7 & 1) == 0) {
    param_1[0x9f] = 0;
    *(undefined1 *)(param_1 + 0x9f) = 0;
  }
  *(uint *)(param_1 + 0x9e) = *(uint *)(param_1 + 0x9e) & 0xfeffffff;
  param_1[0xa1] = (long)"mInfoBit";
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  puVar5 = PTR_DAT_04bb5a88;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  param_1[0xa0] = (long)(puVar5 + 0x10);
  (**(code **)(param_1[0x6d] + 0x140))(plVar15,param_1 + 0xa0);
  puVar10 = (undefined1 *)(**(code **)(param_1[0xa0] + 0xf0))(param_1 + 0xa0);
  *puVar10 = 0x40;
  if ((*(uint *)(param_1 + 0xa4) >> 7 & 1) == 0) {
    param_1[0xa5] = 0;
    *(undefined1 *)(param_1 + 0xa5) = 0x40;
  }
  param_1[0xa8] = 0;
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfeffffff;
  param_1[0xa7] = (long)"mInfoBit2";
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa6] = (long)(puVar5 + 0x10);
  param_1[0xab] = 0;
  (**(code **)(param_1[0x6d] + 0x140))(plVar15,param_1 + 0xa6);
  puVar10 = (undefined1 *)(**(code **)(param_1[0xa6] + 0xf0))(param_1 + 0xa6);
  *puVar10 = 0x10;
  if ((*(uint *)(param_1 + 0xaa) >> 7 & 1) == 0) {
    param_1[0xab] = 0;
    *(undefined1 *)(param_1 + 0xab) = 0x10;
  }
  param_1[0xae] = 0;
  *(uint *)(param_1 + 0xaa) = *(uint *)(param_1 + 0xaa) & 0xfeffffff;
  param_1[0xad] = (long)"mExtra";
  plVar16 = param_1 + 0xac;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xac] = (long)(puVar2 + 0x10);
  param_1[0xb1] = 0;
  (**(code **)(param_1[0x6d] + 0x140))(plVar15,plVar16);
  param_1[0xb4] = 0;
  param_1[0xac] = (long)&PTR_LAB_04990df8;
  param_1[0xb3] = (long)"mSizeX";
  param_1[0xb2] = (long)(puVar5 + 0x10);
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb7] = 0;
  lVar13 = param_1[0xb1];
  if (param_1[0xb1] == 0) {
    plVar15 = param_1 + 0xb1;
  }
  else {
    do {
      lVar18 = lVar13;
      lVar13 = *(long *)(lVar18 + 0x10);
    } while (lVar13 != 0);
    plVar15 = (long *)(lVar18 + 0x10);
  }
  *plVar15 = (long)(param_1 + 0xb2);
  param_1[0xb5] = (long)plVar16;
  puVar10 = (undefined1 *)(**(code **)(param_1[0xb2] + 0xf0))();
  *puVar10 = 1;
  if ((*(uint *)(param_1 + 0xb6) >> 7 & 1) == 0) {
    param_1[0xb7] = 0;
    *(undefined1 *)(param_1 + 0xb7) = 1;
  }
  param_1[0xba] = 0;
  *(uint *)(param_1 + 0xb6) = *(uint *)(param_1 + 0xb6) & 0xfeffffff;
  param_1[0xb9] = (long)"mSizeZ";
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xb8] = (long)(puVar5 + 0x10);
  param_1[0xbd] = 0;
  (**(code **)(param_1[0xac] + 0x140))(plVar16,param_1 + 0xb8);
  puVar10 = (undefined1 *)(**(code **)(param_1[0xb8] + 0xf0))(param_1 + 0xb8);
  *puVar10 = 1;
  if ((*(uint *)(param_1 + 0xbc) >> 7 & 1) == 0) {
    param_1[0xbd] = 0;
    *(undefined1 *)(param_1 + 0xbd) = 1;
  }
  param_1[0xbf] = (long)"mInfoBit";
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xfeffffff;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  puVar2 = PTR_DAT_04bb6048 + 0x10;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[0xc3] = 0;
  param_1[0xbe] = (long)puVar2;
  (**(code **)(param_1[0xac] + 0x140))(plVar16,param_1 + 0xbe);
  puVar11 = (undefined2 *)(**(code **)(param_1[0xbe] + 0xf0))(param_1 + 0xbe);
  *puVar11 = 1;
  if ((*(uint *)(param_1 + 0xc2) >> 7 & 1) == 0) {
    param_1[0xc3] = 0;
    *(undefined2 *)(param_1 + 0xc3) = 1;
  }
  param_1[0xc6] = 0;
  *(uint *)(param_1 + 0xc2) = *(uint *)(param_1 + 0xc2) & 0xfeffffff;
  param_1[0xc5] = (long)"mLandingUniqueID";
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc4] = (long)puVar2;
  param_1[0xc9] = 0;
  (**(code **)(param_1[0xac] + 0x140))(plVar16,param_1 + 0xc4);
  puVar11 = (undefined2 *)(**(code **)(param_1[0xc4] + 0xf0))(param_1 + 0xc4);
  *puVar11 = 0;
  if ((*(uint *)(param_1 + 200) >> 7 & 1) == 0) {
    param_1[0xc9] = 0;
    *(undefined2 *)(param_1 + 0xc9) = 0;
  }
  param_1[0xcc] = 0;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xfeffffff;
  param_1[0xcb] = (long)"mDimmingColor";
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0;
  param_1[0xca] = (long)(puVar5 + 0x10);
  param_1[0xcf] = 0;
  (**(code **)(param_1[0xac] + 0x140))(plVar16,param_1 + 0xca);
  puVar10 = (undefined1 *)(**(code **)(param_1[0xca] + 0xf0))(param_1 + 0xca);
  *puVar10 = 0;
  if ((*(uint *)(param_1 + 0xce) >> 7 & 1) == 0) {
    param_1[0xcf] = 0;
    *(undefined1 *)(param_1 + 0xcf) = 0;
  }
  param_1[0xd2] = 0;
  *(uint *)(param_1 + 0xce) = *(uint *)(param_1 + 0xce) & 0xfeffffff;
  param_1[0xd1] = (long)"mDimmingPower";
  param_1[0xd3] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  param_1[0xd5] = 0;
  param_1[0xd0] = (long)(puVar2 + 0x10);
  (**(code **)(param_1[0xac] + 0x140))(plVar16,param_1 + 0xd0);
  uVar19 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xd4) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(param_1[0xd0] + 0xf0))(param_1 + 0xd0);
  *puVar12 = uVar19;
  uVar7 = *(uint *)(param_1 + 0xd4);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0xd5] = 0;
    uVar19 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xd5) = uVar19;
  }
  *(uint *)(param_1 + 0xd4) = uVar7 & 0xfeffffff;
  return;
}

