
void FUN_02f0a23c(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  uint *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte bVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  byte bVar18;
  long *plVar19;
  undefined **local_a0;
  undefined4 local_98;
  undefined1 local_94 [4];
  undefined4 local_90;
  long local_88;
  ulong local_80;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_64;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb2698;
  lVar15 = *(long *)(param_1 + 0x98);
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_02f0a2b8:
    if (*pbVar13 < 8) goto LAB_02f0a324;
LAB_02f0a2c4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02f0a31c:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_02f0a324;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar18 = *(byte *)(lVar14 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar18 != 0xffffffffffffffff) {
      puVar5 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
      if (7 < bVar18) {
        puVar5 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar5 & 8) != 0) {
        pbVar13 = (byte *)(lVar14 + 0x471);
      }
    }
    bVar18 = *pbVar13;
    if (7 < bVar18) goto LAB_02f0a31c;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02f0a2b8;
      }
      goto LAB_02f0a2c4;
    }
LAB_02f0a324:
    bVar18 = *pbVar13;
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
  }
  local_a0 = &PTR_LAB_04ae0698;
  local_88 = *(undefined8 *)(param_1 + 0x210);
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_94._0_3_ = 0xff0001;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_90 = 0xffffffff;
  lVar14 = *(long *)(lVar15 + 0xb8);
  pcStack_70 = "ItemBalloon";
  if (lVar14 == 0) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0a418;
LAB_02f0a3dc:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0a400;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0a418:
      plVar9 = malloc(0x358);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0a3dc;
LAB_02f0a400:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x358,8);
    }
  }
  FUN_02edb744(plVar9,&local_78,&local_a0);
  pMVar1 = (MutexType *)(param_1 + 0x188);
  nn::os::LockMutex(pMVar1);
  plVar19 = (long *)(param_1 + 0x50);
  lVar14 = *plVar19;
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  *plVar19 = (long)plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar9[0x13] = lVar15;
  *(undefined4 *)(plVar9 + 0x15) = 1;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 0x218) = plVar9;
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_94._0_3_ = 0xff0001;
  local_a0 = &PTR_LAB_04ae06b8;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "/L_Bell_00";
  local_78 = puVar2;
  local_88 = FUN_02c12c24(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_78);
  pcStack_70 = "/L_Bell_00";
  local_78 = puVar2;
  lVar14 = FUN_02c12c24(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_78);
  puVar3 = PTR_DAT_04bb3350;
  local_80 = **(long **)(lVar14 + 0x220);
  pcStack_70 = "PickUpBell";
  lVar14 = *(long *)(lVar15 + 0xb8);
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    local_78 = puVar2;
    if (lVar14 == 0) goto LAB_02f0a5f4;
LAB_02f0a5b8:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0a5dc;
    plVar9 = (long *)0x0;
  }
  else {
    local_78 = puVar2;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0a5f4:
      plVar9 = malloc(0x238);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0a5b8;
LAB_02f0a5dc:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x238,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  *(undefined2 *)(plVar9 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  plVar9[0x41] = 0;
  plVar9[0x35] = (long)(puVar3 + 0x10);
  plVar9[0x36] = 0xffffffff;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  *(byte *)(plVar9 + 0x3f) = bVar12;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  puVar2 = PTR_DAT_04bc8378 + 0x10;
  *(undefined1 *)(plVar9 + 0x46) = 0xff;
  *(undefined4 *)(plVar9 + 0x45) = 0;
  plVar9[0x44] = 0;
  local_64 = 0;
  *plVar9 = (long)puVar2;
  *(undefined4 *)((long)plVar9 + 0x22c) = 10;
  plVar9[0x42] = local_88;
  plVar9[0x43] = local_80;
  *(uint *)(plVar9 + 0x24) = *(uint *)(plVar9 + 0x24) | 1;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  puVar2 = PTR_DAT_04bb3350;
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 0x228) = plVar9;
  local_a0 = &PTR_LAB_04ae06d8;
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_94._0_3_ = 0xff0001;
  local_88 = *(undefined8 *)(param_1 + 0x210);
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_90 = 0xffffffff;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "MsgBalloon";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0a81c;
LAB_02f0a7e0:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0a804;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0a81c:
      plVar9 = malloc(0x3a0);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0a7e0;
LAB_02f0a804:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x3a0,8);
    }
  }
  FUN_02fbafe8(plVar9,&local_78,&local_a0);
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar9[0x13] = lVar15;
  *(undefined4 *)(plVar9 + 0x15) = 1;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 0x220) = plVar9;
  puVar2 = PTR_DAT_04bb3350;
  local_a0 = &PTR_LAB_04ae06f8;
  local_88 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_90 = 0xffffffff;
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "RoomGuide";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0a9b0;
LAB_02f0a974:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0a998;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0a9b0:
      plVar9 = malloc(0x220);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0a974;
LAB_02f0a998:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x220,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  *plVar9 = (long)(PTR_DAT_04bc5668 + 0x10);
  puVar2 = PTR_DAT_04bd4738;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  plVar9[0x35] = (long)(puVar2 + 0x10);
  plVar9[0x36] = 0xffffffff;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  puVar2 = PTR_DAT_04bc8390;
  *(undefined4 *)(plVar9 + 0x43) = 0xffffffff;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  *plVar9 = (long)(puVar2 + 0x10);
  plVar9[0x42] = local_88;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar9[0x13] = lVar15;
  *(undefined4 *)(plVar9 + 0x15) = 1;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  puVar3 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x230) = plVar9;
  local_a0 = &PTR_LAB_04ae0718;
  local_88 = *(undefined8 *)(*(long *)(param_1 + 0x210) + 0x590);
  local_98 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "Clock";
  local_78 = puVar2;
  uVar10 = FUN_02f0c868(lVar15,&local_78,param_1,&local_a0);
  lVar14 = *(long *)puVar3;
  local_a0 = &PTR_LAB_04ae0738;
  local_80 = *(ulong *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x238) = uVar10;
  puVar3 = PTR_DAT_04bb3350;
  local_88 = *(long *)(local_80 + 0x598);
  local_98 = *(undefined4 *)(*(long *)(lVar14 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  local_94._0_2_ = 1;
  pcStack_70 = "MiniGameTimer";
  lVar14 = *(long *)(lVar15 + 0xb8);
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    local_78 = puVar2;
    if (lVar14 == 0) goto LAB_02f0ac10;
LAB_02f0abd4:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0abf8;
    plVar9 = (long *)0x0;
  }
  else {
    local_78 = puVar2;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0ac10:
      plVar9 = malloc(0x240);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0abd4;
LAB_02f0abf8:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x240,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  puVar3 = PTR_DAT_04bd4738;
  puVar2 = PTR_DAT_04bc5668;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  plVar9[0x35] = (long)(puVar3 + 0x10);
  plVar9[0x36] = 0xffffffff;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  puVar2 = PTR_DAT_04bc82f0;
  plVar9[0x45] = 0;
  plVar9[0x44] = 0;
  *(undefined2 *)(plVar9 + 0x46) = 1;
  *(undefined1 *)((long)plVar9 + 0x232) = 0;
  *(undefined4 *)((long)plVar9 + 0x23c) = 0xffffffff;
  *plVar9 = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)plVar9 + 0x237) = 0;
  *(undefined4 *)((long)plVar9 + 0x234) = 0;
  plVar9[0x42] = local_88;
  plVar9[0x43] = local_80;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  puVar2 = PTR_DAT_04bb3350;
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 0x240) = plVar9;
  local_a0 = &PTR_LAB_04ae0758;
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_88 = *(undefined8 *)(*(long *)(param_1 + 0x210) + 0x5a0);
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_90 = 0xffffffff;
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "MiniGameCounter";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0ae2c;
LAB_02f0adf0:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0ae14;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0ae2c:
      plVar9 = malloc(0x388);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0adf0;
LAB_02f0ae14:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x388,8);
    }
  }
  FUN_030e92e4(plVar9,&local_78,&local_a0);
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar9[0x13] = lVar15;
  *(undefined4 *)(plVar9 + 0x15) = 1;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 0x248) = plVar9;
  puVar2 = PTR_DAT_04bb3350;
  local_a0 = &PTR_LAB_04ae0778;
  local_88 = *(long *)(*(long *)(param_1 + 0x210) + 0x5a8);
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_80 = local_80 & 0xffffffff00000000;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "StickBalloon";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0afb8;
LAB_02f0af7c:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0afa0;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0afb8:
      plVar9 = malloc(0x230);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0af7c;
LAB_02f0afa0:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x230,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  *plVar9 = (long)(PTR_DAT_04bc5668 + 0x10);
  puVar2 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  plVar9[0x35] = (long)(puVar2 + 0x10);
  plVar9[0x36] = 0xffffffff;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  puVar2 = PTR_DAT_04bc8430;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  plVar9[0x43] = 0;
  *(undefined1 *)(plVar9 + 0x44) = 0xff;
  local_64 = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)plVar9 + 0x224) = 0xffffffff;
  plVar9[0x42] = local_88;
  *(undefined4 *)(plVar9 + 0x43) = (undefined4)local_80;
  *(uint *)(plVar9 + 0x24) = *(uint *)(plVar9 + 0x24) | 1;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  puVar2 = PTR_DAT_04bb3350;
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  puVar3 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x250) = plVar9;
  local_a0 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
  local_98 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "SmartPhoneIcon";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0b1d8;
LAB_02f0b19c:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0b1c0;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0b1d8:
      plVar9 = malloc(0x330);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0b19c;
LAB_02f0b1c0:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x330,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  puVar2 = PTR_DAT_04bc5668;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  puVar3 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  *(undefined2 *)(plVar9 + 0x40) = 0;
  plVar9[0x35] = (long)(puVar3 + 0x10);
  plVar9[0x36] = 0xffffffff;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  puVar2 = PTR_DAT_04bc8b18;
  plVar9[0x42] = 0;
  *(undefined1 *)(plVar9 + 0x43) = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bdf1d8;
  plVar9[0x44] = 0;
  plVar9[0x4a] = 0;
  plVar9[0x46] = 0;
  plVar9[0x47] = 0;
  plVar9[0x48] = 0;
  *(undefined1 *)(plVar9 + 0x49) = 0;
  puVar2 = puVar2 + 0x10;
  plVar9[0x50] = 0;
  plVar9[0x4c] = 0;
  plVar9[0x4d] = 0;
  plVar9[0x4e] = 0;
  *(undefined1 *)(plVar9 + 0x4f) = 0;
  plVar9[0x56] = 0;
  *(undefined1 *)(plVar9 + 0x55) = 0;
  plVar9[0x54] = 0;
  plVar9[0x53] = 0;
  plVar9[0x52] = 0;
  plVar9[0x5b] = 0;
  plVar9[0x5a] = 0;
  plVar9[0x59] = 0;
  plVar9[0x58] = 0;
  plVar9[0x5c] = -1;
  plVar9[0x5d] = 0xffffffff;
  plVar9[0x5e] = 0xffffffff;
  plVar9[0x5f] = 0xffffffff;
  plVar9[0x60] = 0xffffffff;
  *(undefined1 *)((long)plVar9 + 0x324) = 0;
  *(undefined4 *)(plVar9 + 0x65) = 0;
  *(undefined4 *)(plVar9 + 0x62) = 0;
  local_64 = 1;
  plVar9[0x45] = (long)puVar2;
  plVar9[0x4b] = (long)puVar2;
  plVar9[0x51] = (long)puVar2;
  plVar9[0x57] = (long)puVar2;
  plVar9[0x61] = 0x1e;
  *(undefined8 *)((long)plVar9 + 0x314) = 0xffffffffffffffff;
  *(undefined8 *)((long)plVar9 + 0x31c) = 0xffffffffffffffff;
  *(uint *)(plVar9 + 0x24) = *(uint *)(plVar9 + 0x24) | 2;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  puVar2 = PTR_DAT_04bb3350;
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 0x280) = plVar9;
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  local_88 = 0;
  local_94._0_3_ = 0xff0001;
  local_a0 = &PTR_LAB_04ae0798;
  puVar16 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    uVar11 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bc4e58);
    if ((uVar11 & 1) == 0) {
      puVar16 = (undefined8 *)0x0;
    }
  }
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "/L_MealEf_00";
  local_78 = puVar3;
  local_88 = FUN_02c12c24(puVar16 + 7,&local_78);
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_94[2] = bVar18;
  pcStack_70 = "MealCountGuide";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    local_78 = puVar3;
    if (lVar14 == 0) goto LAB_02f0b4ec;
LAB_02f0b4b0:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0b4d4;
    plVar9 = (long *)0x0;
  }
  else {
    local_78 = puVar3;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0b4ec:
      plVar9 = malloc(0x228);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0b4b0;
LAB_02f0b4d4:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x228,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  *plVar9 = (long)(PTR_DAT_04bc5668 + 0x10);
  puVar2 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  plVar9[0x35] = (long)(puVar2 + 0x10);
  plVar9[0x36] = 0xffffffff;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  puVar2 = PTR_DAT_04bc74f8;
  *(undefined4 *)((long)plVar9 + 0x224) = 0;
  *(undefined1 *)(plVar9 + 0x44) = 0;
  plVar9[0x43] = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  plVar9[0x42] = local_88;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar9[0x13] = lVar15;
  *(undefined4 *)(plVar9 + 0x15) = 1;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 600) = plVar9;
  puVar2 = PTR_DAT_04bb3350;
  local_a0 = &PTR_LAB_04ae07b8;
  local_88 = *(long *)(*(long *)(param_1 + 0x210) + 0x640);
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "SubActionGuideSeq";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0b700;
LAB_02f0b6c4:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0b6e8;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0b700:
      plVar9 = malloc(0x228);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0b6c4;
LAB_02f0b6e8:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x228,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  *plVar9 = (long)(PTR_DAT_04bc5668 + 0x10);
  puVar2 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  plVar9[0x35] = (long)(puVar2 + 0x10);
  plVar9[0x36] = 0xffffffff;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  puVar2 = PTR_DAT_04bc8d88;
  plVar9[0x43] = 1;
  *(undefined4 *)(plVar9 + 0x44) = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  plVar9[0x42] = local_88;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  puVar2 = PTR_DAT_04bb3350;
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  puVar3 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x260) = plVar9;
  local_a0 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
  local_98 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "BellAndMile";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0b8fc;
LAB_02f0b8c0:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0b8e4;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0b8fc:
      plVar9 = malloc(0x250);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0b8c0;
LAB_02f0b8e4:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x250,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  puVar2 = PTR_DAT_04bc5668;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  puVar3 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  plVar9[0x35] = (long)(puVar3 + 0x10);
  plVar9[0x36] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  puVar2 = PTR_DAT_04bc56d8;
  plVar9[0x46] = 0;
  *(undefined1 *)(plVar9 + 0x45) = 0;
  plVar9[0x44] = 0;
  plVar9[0x43] = 0;
  plVar9[0x42] = 0;
  *(undefined1 *)(plVar9 + 0x47) = 0xff;
  *(undefined4 *)((long)plVar9 + 0x24c) = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)plVar9 + 0x23c) = 0;
  *(undefined8 *)((long)plVar9 + 0x244) = 0;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar9[0x13] = lVar15;
  *(undefined4 *)(plVar9 + 0x15) = 1;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  puVar2 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x288) = plVar9;
  puVar3 = PTR_DAT_04bb3350;
  local_a0 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
  local_98 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_90 = 0xffffffff;
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "SaveIcon";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0bb18;
LAB_02f0badc:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0bb00;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0bb18:
      plVar9 = malloc(600);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0badc;
LAB_02f0bb00:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,600,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  puVar2 = PTR_DAT_04bc5668;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  puVar3 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  *(undefined2 *)(plVar9 + 0x40) = 0;
  plVar9[0x35] = (long)(puVar3 + 0x10);
  plVar9[0x36] = 0xffffffff;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  puVar2 = PTR_DAT_04bc8930;
  plVar9[0x43] = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar9 + 0x42) = 0x3c;
  FUN_038e1bac(plVar9 + 0x44,1);
  *(undefined4 *)(plVar9 + 0x4a) = 0;
  *(undefined2 *)((long)plVar9 + 0x254) = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar9 + 0x48));
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  puVar2 = PTR_DAT_04bb3350;
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  puVar3 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x290) = plVar9;
  local_a0 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
  local_98 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "ThemeBalloon";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0bd28;
LAB_02f0bcec:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0bd10;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0bd28:
      plVar9 = malloc(0x248);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0bcec;
LAB_02f0bd10:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x248,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  *plVar9 = (long)(PTR_DAT_04bc5668 + 0x10);
  puVar2 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  plVar9[0x35] = (long)(puVar2 + 0x10);
  plVar9[0x36] = 0xffffffff;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  puVar2 = PTR_DAT_04bc9b00;
  *(undefined4 *)((long)plVar9 + 0x23c) = 0;
  *(undefined1 *)(plVar9 + 0x48) = 0;
  *(undefined4 *)((long)plVar9 + 0x244) = 0;
  plVar9[0x42] = 0;
  plVar9[0x43] = 0;
  plVar9[0x45] = 0;
  plVar9[0x46] = 0;
  *(undefined1 *)(plVar9 + 0x47) = 0;
  local_64 = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)plVar9 + 0x21f) = 0;
  *(uint *)(plVar9 + 0x24) = *(uint *)(plVar9 + 0x24) | 1;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  puVar2 = PTR_DAT_04bb3350;
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  puVar3 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x298) = plVar9;
  local_a0 = &PTR_LAB_04ae07d8;
  local_88 = *(undefined8 *)(*(long *)(param_1 + 0x210) + 0x658);
  local_98 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0x418) + 0xc);
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_90 = 0xffffffff;
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "AlbumGuideCtrl";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0bf64;
LAB_02f0bf20:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0bf44;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0bf64:
      plVar9 = malloc(0x1cf38);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0bf20;
LAB_02f0bf44:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1cf38,8);
    }
  }
  FUN_030b5620(plVar9,&local_78,&local_a0);
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar9[0x13] = lVar15;
  *(undefined4 *)(plVar9 + 0x15) = 1;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  puVar2 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x268) = plVar9;
  puVar3 = PTR_DAT_04bb3350;
  local_a0 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
  local_98 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_90 = 0xffffffff;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "MainScreenCameraGuideSeq";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0c0ec;
LAB_02f0c0b0:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0c0d4;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0c0ec:
      plVar9 = malloc(0x218);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0c0b0;
LAB_02f0c0d4:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x218,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  puVar2 = PTR_DAT_04bc5668;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  puVar3 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  plVar9[0x35] = (long)(puVar3 + 0x10);
  plVar9[0x36] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  puVar2 = PTR_DAT_04bc73f8;
  plVar9[0x42] = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 0x2a0) = plVar9;
  puVar2 = PTR_DAT_04bb3350;
  local_a0 = &PTR_LAB_04ae07f8;
  local_88 = *(long *)(*(long *)(param_1 + 0x210) + 0x660);
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "NpcOnOffGuideCtrl";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0c2ec;
LAB_02f0c2b0:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0c2d4;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0c2ec:
      plVar9 = malloc(0x218);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0c2b0;
LAB_02f0c2d4:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x218,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  puVar2 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  plVar9[0x35] = (long)(puVar2 + 0x10);
  plVar9[0x36] = 0xffffffff;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  *plVar9 = (long)(PTR_DAT_04bc8368 + 0x10);
  plVar9[0x42] = local_88;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 0x270) = plVar9;
  puVar2 = PTR_DAT_04bb3350;
  local_a0 = &PTR_LAB_04ae0818;
  local_88 = *(long *)(*(long *)(param_1 + 0x210) + 0x650);
  local_98 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "EffectClothGuideCtrl";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0c4e0;
LAB_02f0c4a4:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_02f0c4c8;
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0c4e0:
      plVar9 = malloc(0x218);
    }
    else {
      plVar9 = *(long **)(lVar15 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_02f0c4a4;
LAB_02f0c4c8:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x218,8);
    }
  }
  FUN_03868244(plVar9,&local_78,&local_a0);
  puVar2 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  plVar9[0x35] = (long)(puVar2 + 0x10);
  plVar9[0x36] = 0xffffffff;
  bVar12 = local_94[2];
  if (7 < local_94[2]) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_90;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  *plVar9 = (long)(PTR_DAT_04bc82a8 + 0x10);
  plVar9[0x42] = local_88;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar15;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  puVar2 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x278) = plVar9;
  puVar3 = PTR_DAT_04bb3350;
  local_a0 = &PTR_LAB_04ae0838;
  local_98 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_90 = 0xffffffff;
  local_88 = *(undefined8 *)(*(long *)(param_1 + 0x210) + 0x668);
  lVar14 = *(long *)(lVar15 + 0xb8);
  local_94[2] = bVar18;
  local_94._0_2_ = 1;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "HotelRoomAlbumGuideCtrl";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar6;
    lVar17 = 1;
    if (lVar14 == 0) goto LAB_02f0c6d8;
LAB_02f0c698:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto LAB_02f0c6e8;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
LAB_02f0c6d8:
      plVar9 = malloc(0x1c5d8);
      goto LAB_02f0c6e8;
    }
    plVar9 = *(long **)(lVar15 + 0xb8);
    if (plVar9 == (long *)0x0) goto LAB_02f0c698;
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1c5d8,8);
LAB_02f0c6e8:
  FUN_030df940(plVar9,&local_78,&local_a0);
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar14 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar14;
  plVar4[1] = (long)plVar19;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar9[0x13] = lVar15;
  *(undefined4 *)(plVar9 + 0x15) = 1;
  FUN_0386890c(plVar9,&local_a0);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar17 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar17;
  }
  *(long **)(param_1 + 0x2a8) = plVar9;
  return;
}

