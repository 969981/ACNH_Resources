
void FUN_02cf0650(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  MutexType *pMVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  byte local_6a;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_04bb2718;
  puVar4 = PTR_DAT_04bb2020;
  lVar12 = *(long *)(param_1 + 0x98);
  puVar1 = PTR_DAT_04bc39b0 + 0x10;
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_70 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_6c = 1;
  local_68._0_4_ = 0xffffffff;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  local_80 = "ClosetBGSeq";
  local_88 = puVar2;
  local_78 = puVar1;
  uVar8 = FUN_02cf0c8c(lVar12,&local_88,param_1,&local_78);
  lVar11 = *(long *)puVar6;
  *(undefined8 *)(param_1 + 0x210) = uVar8;
  puVar7 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb2698;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  local_70 = *(undefined4 *)(*(long *)(lVar11 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  local_80 = "ClosetCoordinateSeq";
  lVar11 = *(long *)(lVar12 + 0xb8);
  if (lVar11 == 0) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    lVar13 = 1;
    local_88 = puVar2;
    local_78 = puVar1;
    if (lVar11 == 0) goto LAB_02cf07b8;
LAB_02cf0778:
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    plVar10 = (long *)(lVar11 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) goto LAB_02cf079c;
    plVar10 = (long *)0x0;
  }
  else {
    local_88 = puVar2;
    local_78 = puVar1;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = lVar11;
    lVar11 = *(long *)puVar6;
    if (lVar11 == 0) {
LAB_02cf07b8:
      plVar10 = malloc(0x84fb0);
    }
    else {
      plVar10 = *(long **)(lVar12 + 0xb8);
      if (plVar10 == (long *)0x0) goto LAB_02cf0778;
LAB_02cf079c:
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x84fb0,8);
    }
  }
  FUN_02cc7fc0(plVar10,&local_88,&local_78);
  puVar1 = PTR_DAT_04bc5e08;
  plVar10[0x3892] = 0;
  *(undefined4 *)(plVar10 + 0x3893) = 0xffffffff;
  *plVar10 = (long)(puVar1 + 0x10);
  FUN_02ce17a0(plVar10 + 0x3894);
  pMVar3 = (MutexType *)(param_1 + 0x188);
  *(undefined1 *)(plVar10 + 0x109f5) = 0;
  nn::os::LockMutex(pMVar3);
  plVar14 = (long *)(param_1 + 0x50);
  lVar11 = *plVar14;
  plVar5 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar10);
  *plVar14 = (long)plVar5;
  *plVar5 = lVar11;
  plVar5[1] = (long)plVar14;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar5;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar10[9] = param_1;
  nn::os::UnlockMutex(pMVar3);
  plVar10[0x13] = lVar12;
  *(undefined4 *)(plVar10 + 0x15) = 1;
  FUN_0386890c(plVar10,&local_78);
  *(undefined4 *)(plVar10 + 0x15) = 2;
  (**(code **)(*plVar10 + 0x48))(plVar10);
  if (lVar13 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar13;
  }
  puVar1 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x218) = plVar10;
  lVar11 = *(long *)(lVar12 + 0xb8);
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  local_80 = "RingMenuCordeSeq";
  local_88 = puVar4 + 0x10;
  if (lVar11 == 0) {
    lVar13 = 1;
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) goto LAB_02cf099c;
LAB_02cf0958:
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar11 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) goto LAB_02cf0984;
    plVar10 = (long *)0x0;
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = lVar11;
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
LAB_02cf099c:
      plVar10 = malloc(0x1c278);
    }
    else {
      plVar10 = *(long **)(lVar12 + 0xb8);
      if (plVar10 == (long *)0x0) goto LAB_02cf0958;
LAB_02cf0984:
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1c278,8);
    }
  }
  FUN_031cb208(plVar10,&local_88,&local_78);
  nn::os::LockMutex(pMVar3);
  plVar5 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar10);
  lVar11 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar5;
  *plVar5 = lVar11;
  plVar5[1] = (long)plVar14;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar5;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar10[9] = param_1;
  nn::os::UnlockMutex(pMVar3);
  *(undefined4 *)(plVar10 + 0x15) = 1;
  plVar10[0x13] = lVar12;
  FUN_0386890c(plVar10,&local_78);
  *(undefined4 *)(plVar10 + 0x15) = 2;
  (**(code **)(*plVar10 + 0x48))(plVar10);
  if (lVar13 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar13;
  }
  puVar1 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x220) = plVar10;
  puVar4 = puVar4 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0x418) + 0xc);
  local_68 = 0xbffffffff;
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_78 = PTR_DAT_04bc5780 + 0x10;
  local_6c = 1;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  local_80 = "SwkbdInputSeq";
  local_88 = puVar4;
  uVar8 = FUN_02c1b3d0(lVar12,&local_88,param_1,&local_78);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(param_1 + 0x228) = uVar8;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_70 = *(undefined4 *)(*(long *)(lVar11 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  local_80 = "CordeIconSelecterSeq";
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar11 = *(long *)(lVar12 + 0xb8);
  if (lVar11 == 0) {
    lVar13 = 1;
    lVar11 = *(long *)PTR_DAT_04bb2698;
    local_88 = puVar4;
    if (lVar11 == 0) goto LAB_02cf0ba8;
LAB_02cf0b64:
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar11 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
      goto LAB_02cf0bb4;
    }
  }
  else {
    local_88 = puVar4;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = lVar11;
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
LAB_02cf0ba8:
      plVar10 = malloc(0x1c268);
      goto LAB_02cf0bb4;
    }
    plVar10 = *(long **)(lVar12 + 0xb8);
    if (plVar10 == (long *)0x0) goto LAB_02cf0b64;
  }
  plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1c268,8);
LAB_02cf0bb4:
  FUN_02d12f60(plVar10,&local_88,&local_78);
  nn::os::LockMutex(pMVar3);
  plVar5 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar10);
  lVar11 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar5;
  *plVar5 = lVar11;
  plVar5[1] = (long)plVar14;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar5;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar10[9] = param_1;
  nn::os::UnlockMutex(pMVar3);
  plVar10[0x13] = lVar12;
  *(undefined4 *)(plVar10 + 0x15) = 1;
  FUN_0386890c(plVar10,&local_78);
  *(undefined4 *)(plVar10 + 0x15) = 2;
  (**(code **)(*plVar10 + 0x48))(plVar10);
  if (lVar13 != 1) {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar12 + 0xa8) = lVar13;
  }
  *(long **)(param_1 + 0x230) = plVar10;
  return;
}

