
void FUN_03010974(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  byte local_6a;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar9 = *(long *)(param_1 + 0x98);
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_6c = 1;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  lVar10 = *(long *)(lVar9 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "MyDesignSetSeq";
  if (lVar10 == 0) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    lVar11 = 1;
    if (lVar10 == 0) goto LAB_03010a88;
LAB_03010a4c:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03010a70;
    plVar7 = (long *)0x0;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
LAB_03010a88:
      plVar7 = malloc(0x380);
    }
    else {
      plVar7 = *(long **)(lVar9 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_03010a4c;
LAB_03010a70:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x380,8);
    }
  }
  FUN_03090180(plVar7,&local_88,&local_78);
  pMVar1 = (MutexType *)(param_1 + 0x188);
  nn::os::LockMutex(pMVar1);
  plVar12 = (long *)(param_1 + 0x50);
  lVar10 = *plVar12;
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
  *plVar12 = (long)plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar7[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar7[0x13] = lVar9;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar11 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar11;
  }
  puVar4 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x210) = plVar7;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0x418) + 0xc);
  local_6c = 1;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar10 = *(long *)(lVar9 + 0xb8);
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "MyDesignEditSeq";
  if (lVar10 == 0) {
    lVar10 = *(long *)puVar3;
    lVar11 = 1;
    if (lVar10 == 0) goto LAB_03010c08;
LAB_03010bcc:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03010bf0;
    plVar7 = (long *)0x0;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar11 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
LAB_03010c08:
      plVar7 = malloc(0x8c0);
    }
    else {
      plVar7 = *(long **)(lVar9 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_03010bcc;
LAB_03010bf0:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x8c0,8);
    }
  }
  FUN_0301d070(plVar7,&local_88,&local_78);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar7[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar7 + 0x15) = 1;
  plVar7[0x13] = lVar9;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar11 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar11;
  }
  puVar4 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x218) = plVar7;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar10 = *(long *)(lVar9 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "MyDesignEditBGSeq";
  if (lVar10 == 0) {
    lVar10 = *(long *)puVar3;
    lVar11 = 1;
    if (lVar10 == 0) goto LAB_03010d7c;
LAB_03010d40:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03010d64;
    plVar7 = (long *)0x0;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar11 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
LAB_03010d7c:
      plVar7 = malloc(0x218);
    }
    else {
      plVar7 = *(long **)(lVar9 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_03010d40;
LAB_03010d64:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x218,8);
    }
  }
  FUN_03868244(plVar7,&local_88,&local_78);
  *(undefined2 *)(plVar7 + 0x39) = 0;
  puVar4 = PTR_DAT_04bd4738;
  *(undefined4 *)(plVar7 + 0x3a) = 0;
  plVar7[0x3b] = 0;
  plVar7[0x37] = 0xffffffff;
  plVar7[0x38] = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x3c) = 0;
  *(undefined2 *)(plVar7 + 0x40) = 0;
  *(undefined1 *)((long)plVar7 + 0x202) = 0;
  plVar7[0x41] = 0;
  plVar7[0x35] = (long)(puVar4 + 0x10);
  plVar7[0x36] = 0xffffffff;
  bVar8 = local_6a;
  if (7 < local_6a) {
    bVar8 = 0xff;
  }
  *(byte *)(plVar7 + 0x3f) = bVar8;
  *(undefined4 *)((long)plVar7 + 0x1fc) = (undefined4)local_68;
  plVar7[0x3d] = 0;
  plVar7[0x3e] = -1;
  puVar4 = PTR_DAT_04bc7c78;
  plVar7[0x42] = 0;
  *plVar7 = (long)(puVar4 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar7[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar7 + 0x15) = 1;
  plVar7[0x13] = lVar9;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar11 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar11;
  }
  *(long **)(param_1 + 0x220) = plVar7;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  local_6a = *(byte *)(param_1 + 0x1f8);
  lVar10 = *(long *)(lVar9 + 0xb8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "MyDesignFinishSeq";
  if (lVar10 == 0) {
    lVar10 = *(long *)puVar3;
    lVar11 = 1;
    if (lVar10 == 0) goto LAB_03010f60;
LAB_03010f20:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto LAB_03010f70;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar11 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
LAB_03010f60:
      plVar7 = malloc(0x1c1c8);
      goto LAB_03010f70;
    }
    plVar7 = *(long **)(lVar9 + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_03010f20;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1c1c8,8);
LAB_03010f70:
  FUN_03026730(plVar7,&local_88,&local_78);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar7[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar7[0x13] = lVar9;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar11 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar11;
  }
  puVar3 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x228) = plVar7;
  local_78 = PTR_DAT_04bc5780 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0x418) + 0xc);
  local_68 = 0xfffffffff;
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_6c = 1;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "SwkbdInputSeq";
  lVar9 = FUN_02c1b3d0(lVar9,&local_88,param_1,&local_78);
  *(long *)(param_1 + 0x230) = lVar9;
  *(undefined2 *)(lVar9 + 0xa20) = 0;
  return;
}

