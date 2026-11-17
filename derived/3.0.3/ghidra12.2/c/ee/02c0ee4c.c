
void FUN_02c0ee4c(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  byte local_6a;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_70 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_6c = 1;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  lVar11 = *(long *)(param_1 + 0x98);
  local_68 = 0xffffffff;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  pcStack_80 = "Bell";
  lVar10 = *(long *)(lVar11 + 0xb8);
  if (lVar10 == 0) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    lVar12 = 1;
    if (lVar10 == 0) goto LAB_02c0ef60;
LAB_02c0ef24:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_02c0ef48;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
LAB_02c0ef60:
      plVar8 = malloc(0x228);
    }
    else {
      plVar8 = *(long **)(lVar11 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_02c0ef24;
LAB_02c0ef48:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x228,8);
    }
  }
  FUN_03868244(plVar8,&local_88,&local_78);
  puVar4 = PTR_DAT_04bc5668;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  puVar6 = PTR_DAT_04bd4738;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  pMVar1 = (MutexType *)(param_1 + 0x188);
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  *plVar8 = (long)(puVar4 + 0x10);
  plVar8[0x41] = 0;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  plVar8[0x35] = (long)(puVar6 + 0x10);
  plVar8[0x36] = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  bVar9 = local_6a;
  if (7 < local_6a) {
    bVar9 = 0xff;
  }
  *(byte *)(plVar8 + 0x3f) = bVar9;
  puVar4 = PTR_DAT_04bc5708;
  *(undefined4 *)(plVar8 + 0x44) = 0;
  plVar8[0x43] = 0;
  plVar8[0x42] = 0;
  *(undefined2 *)((long)plVar8 + 0x224) = 0xff;
  *plVar8 = (long)(puVar4 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar13 = (long *)(param_1 + 0x50);
  lVar10 = *plVar13;
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  *plVar13 = (long)plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)plVar13;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar8[0x13] = lVar11;
  *(undefined4 *)(plVar8 + 0x15) = 1;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar12 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar12;
  }
  puVar4 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x210) = plVar8;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = 0xffffffff;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar10 = *(long *)(lVar11 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "Sonkatsu";
  if (lVar10 == 0) {
    lVar10 = *(long *)puVar3;
    lVar12 = 1;
    if (lVar10 == 0) goto LAB_02c0f168;
LAB_02c0f12c:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_02c0f150;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar12 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
LAB_02c0f168:
      plVar8 = malloc(0x228);
    }
    else {
      plVar8 = *(long **)(lVar11 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_02c0f12c;
LAB_02c0f150:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x228,8);
    }
  }
  FUN_03868244(plVar8,&local_88,&local_78);
  puVar4 = PTR_DAT_04bd4738;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  plVar8[0x35] = (long)(puVar4 + 0x10);
  plVar8[0x36] = 0xffffffff;
  bVar9 = local_6a;
  if (7 < local_6a) {
    bVar9 = 0xff;
  }
  *(byte *)(plVar8 + 0x3f) = bVar9;
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  puVar4 = PTR_DAT_04bc8b58;
  plVar8[0x43] = 0;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  plVar8[0x42] = 0;
  *(undefined1 *)(plVar8 + 0x44) = 0xff;
  *plVar8 = (long)(puVar4 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)plVar13;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar8 + 0x15) = 1;
  plVar8[0x13] = lVar11;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar12 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar12;
  }
  puVar4 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x218) = plVar8;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = 0xffffffff;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar10 = *(long *)(lVar11 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "PokiSeq";
  if (lVar10 == 0) {
    lVar10 = *(long *)puVar3;
    lVar12 = 1;
    if (lVar10 == 0) goto LAB_02c0f350;
LAB_02c0f314:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_02c0f338;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar12 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
LAB_02c0f350:
      plVar8 = malloc(0x240);
    }
    else {
      plVar8 = *(long **)(lVar11 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_02c0f314;
LAB_02c0f338:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x240,8);
    }
  }
  FUN_03868244(plVar8,&local_88,&local_78);
  puVar4 = PTR_DAT_04bd4738;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  plVar8[0x35] = (long)(puVar4 + 0x10);
  plVar8[0x36] = 0xffffffff;
  bVar9 = local_6a;
  if (7 < local_6a) {
    bVar9 = 0xff;
  }
  *(byte *)(plVar8 + 0x3f) = bVar9;
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  puVar4 = PTR_DAT_04bc8658;
  plVar8[0x46] = 0;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  plVar8[0x45] = 0;
  plVar8[0x44] = 0;
  plVar8[0x43] = 0;
  plVar8[0x42] = 0;
  *(undefined2 *)(plVar8 + 0x47) = 0xff;
  *plVar8 = (long)(puVar4 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)plVar13;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar8 + 0x15) = 1;
  plVar8[0x13] = lVar11;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar12 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar12;
  }
  puVar4 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x220) = plVar8;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0x418) + 0xc);
  local_6c = 1;
  local_6a = *(byte *)(param_1 + 0x1f8);
  lVar10 = *(long *)(lVar11 + 0xb8);
  local_68 = 0xffffffff;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  pcStack_80 = "HotelTicketSeq";
  if (lVar10 == 0) {
    lVar10 = *(long *)puVar3;
    lVar12 = 1;
    if (lVar10 == 0) goto LAB_02c0f544;
LAB_02c0f508:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto LAB_02c0f550;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar12 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
LAB_02c0f544:
      plVar8 = malloc(0x240);
      goto LAB_02c0f550;
    }
    plVar8 = *(long **)(lVar11 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_02c0f508;
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x240,8);
LAB_02c0f550:
  FUN_03868244(plVar8,&local_88,&local_78);
  puVar3 = PTR_DAT_04bd4738;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  plVar8[0x35] = (long)(puVar3 + 0x10);
  plVar8[0x36] = 0xffffffff;
  bVar9 = local_6a;
  if (7 < local_6a) {
    bVar9 = 0xff;
  }
  *(byte *)(plVar8 + 0x3f) = bVar9;
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  puVar3 = PTR_DAT_04bc6fd8;
  plVar8[0x46] = 0;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  plVar8[0x45] = 0;
  plVar8[0x44] = 0;
  plVar8[0x43] = 0;
  plVar8[0x42] = 0;
  *(undefined2 *)(plVar8 + 0x47) = 0xff;
  *plVar8 = (long)(puVar3 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)plVar13;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar8[0x13] = lVar11;
  *(undefined4 *)(plVar8 + 0x15) = 1;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar12 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar12;
  }
  *(long **)(param_1 + 0x230) = plVar8;
  return;
}

