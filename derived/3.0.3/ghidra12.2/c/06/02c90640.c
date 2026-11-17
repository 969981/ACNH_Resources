
void FUN_02c90640(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  byte local_6a;
  undefined4 local_68;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar10 = *(long *)(param_1 + 0x98);
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_6c = 1;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_68 = 0xffffffff;
  lVar8 = *(long *)(lVar10 + 0xb8);
  pcStack_80 = "CharaMakeMWSelWinSeq";
  if (lVar8 == 0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    lVar11 = 1;
    if (lVar8 == 0) goto LAB_02c9075c;
LAB_02c90720:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar6 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_02c90744;
    plVar6 = (long *)0x0;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_02c9075c:
      plVar6 = malloc(0x220);
    }
    else {
      plVar6 = *(long **)(lVar10 + 0xb8);
      if (plVar6 == (long *)0x0) goto LAB_02c90720;
LAB_02c90744:
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x220,8);
    }
  }
  FUN_03868244(plVar6,&local_88,&local_78);
  puVar9 = PTR_DAT_04bd4738;
  plVar6[0x37] = 0xffffffff;
  plVar6[0x38] = 0xffffffff;
  pMVar1 = (MutexType *)(param_1 + 0x188);
  *(undefined2 *)(plVar6 + 0x39) = 0;
  *(undefined4 *)(plVar6 + 0x3a) = 0;
  plVar6[0x3b] = 0;
  *(undefined4 *)(plVar6 + 0x3c) = 0;
  *(undefined2 *)(plVar6 + 0x40) = 0;
  *(undefined1 *)((long)plVar6 + 0x202) = 0;
  plVar6[0x41] = 0;
  plVar6[0x35] = (long)(puVar9 + 0x10);
  plVar6[0x36] = 0xffffffff;
  bVar7 = local_6a;
  if (7 < local_6a) {
    bVar7 = 0xff;
  }
  *(byte *)(plVar6 + 0x3f) = bVar7;
  *(undefined4 *)((long)plVar6 + 0x1fc) = local_68;
  puVar9 = PTR_DAT_04bc5bc0;
  plVar6[0x42] = 0;
  plVar6[0x3d] = 0;
  plVar6[0x3e] = -1;
  *(undefined4 *)((long)plVar6 + 0x21c) = 0xffffffff;
  *plVar6 = (long)(puVar9 + 0x10);
  *(undefined4 *)(plVar6 + 0x43) = DAT_056638a8;
  nn::os::LockMutex(pMVar1);
  plVar12 = (long *)(param_1 + 0x50);
  lVar8 = *plVar12;
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar6);
  *plVar12 = (long)plVar2;
  *plVar2 = lVar8;
  plVar2[1] = (long)plVar12;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar6[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar6[0x13] = lVar10;
  *(undefined4 *)(plVar6 + 0x15) = 1;
  FUN_0386890c(plVar6,&local_78);
  *(undefined4 *)(plVar6 + 0x15) = 2;
  (**(code **)(*plVar6 + 0x48))(plVar6);
  if (lVar11 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar11;
  }
  puVar9 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x210) = plVar6;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar9 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = 0xffffffff;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar8 = *(long *)(lVar10 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "CharaMakeBgSeq";
  if (lVar8 == 0) {
    lVar8 = *(long *)puVar3;
    lVar11 = 1;
    if (lVar8 == 0) goto LAB_02c9093c;
LAB_02c9095c:
    puVar9 = PTR_DAT_04bd4738;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar6 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_02c90980;
    plVar6 = (long *)0x0;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar11 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_02c9093c:
      puVar9 = PTR_DAT_04bd4738;
      plVar6 = malloc(0x220);
    }
    else {
      plVar6 = *(long **)(lVar10 + 0xb8);
      if (plVar6 == (long *)0x0) goto LAB_02c9095c;
      puVar9 = PTR_DAT_04bd4738;
LAB_02c90980:
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x220,8);
    }
  }
  FUN_03868244(plVar6,&local_88,&local_78);
  *(undefined2 *)(plVar6 + 0x39) = 0;
  plVar6[0x35] = (long)(puVar9 + 0x10);
  plVar6[0x36] = 0xffffffff;
  plVar6[0x37] = 0xffffffff;
  plVar6[0x38] = 0xffffffff;
  *(undefined4 *)(plVar6 + 0x3a) = 0;
  bVar7 = local_6a;
  if (7 < local_6a) {
    bVar7 = 0xff;
  }
  plVar6[0x3b] = 0;
  *(undefined4 *)(plVar6 + 0x3c) = 0;
  *(undefined2 *)(plVar6 + 0x40) = 0;
  *(undefined1 *)((long)plVar6 + 0x202) = 0;
  plVar6[0x41] = 0;
  *(byte *)(plVar6 + 0x3f) = bVar7;
  *(undefined4 *)((long)plVar6 + 0x1fc) = local_68;
  plVar6[0x3d] = 0;
  plVar6[0x3e] = -1;
  puVar9 = PTR_DAT_04bc5b90 + 0x10;
  plVar6[0x42] = 0;
  *(undefined2 *)(plVar6 + 0x43) = 0;
  *plVar6 = (long)puVar9;
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar6);
  lVar8 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar8;
  plVar2[1] = (long)plVar12;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar6[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar6[0x13] = lVar10;
  *(undefined4 *)(plVar6 + 0x15) = 1;
  FUN_0386890c(plVar6,&local_78);
  *(undefined4 *)(plVar6 + 0x15) = 2;
  (**(code **)(*plVar6 + 0x48))(plVar6);
  if (lVar11 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar11;
  }
  puVar9 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x218) = plVar6;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar9 + 0x418) + 0xc);
  local_6c = 1;
  local_6a = *(byte *)(param_1 + 0x1f8);
  lVar8 = *(long *)(lVar10 + 0xb8);
  local_68 = 0xffffffff;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  pcStack_80 = "CharaMakeSeq";
  if (lVar8 == 0) {
    lVar8 = *(long *)puVar3;
    lVar11 = 1;
    if (lVar8 == 0) goto LAB_02c90b78;
LAB_02c90b38:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar6 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      goto LAB_02c90b88;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar11 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_02c90b78:
      plVar6 = malloc(0x1d0c8);
      goto LAB_02c90b88;
    }
    plVar6 = *(long **)(lVar10 + 0xb8);
    if (plVar6 == (long *)0x0) goto LAB_02c90b38;
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1d0c8,8);
LAB_02c90b88:
  FUN_02c98a60(plVar6,&local_88,&local_78);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar6);
  lVar8 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar8;
  plVar2[1] = (long)plVar12;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar6[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar6[0x13] = lVar10;
  *(undefined4 *)(plVar6 + 0x15) = 1;
  FUN_0386890c(plVar6,&local_78);
  *(undefined4 *)(plVar6 + 0x15) = 2;
  (**(code **)(*plVar6 + 0x48))(plVar6);
  if (lVar11 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar11;
  }
  *(long **)(param_1 + 0x220) = plVar6;
  return;
}

