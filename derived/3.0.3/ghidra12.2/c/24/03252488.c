
void FUN_03252488(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  int *piVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
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
  lVar14 = *(long *)(param_1 + 0x98);
  local_68 = 0xffffffff;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  pcStack_80 = "SonkatsuResultBgSeq";
  lVar13 = *(long *)(lVar14 + 0xb8);
  if (lVar13 == 0) {
    lVar13 = *(long *)PTR_DAT_04bb2698;
    lVar15 = 1;
    if (lVar13 == 0) goto LAB_0325259c;
LAB_03252560:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_03252584;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar13;
    lVar13 = *(long *)puVar3;
    if (lVar13 == 0) {
LAB_0325259c:
      plVar8 = malloc(0x220);
    }
    else {
      plVar8 = *(long **)(lVar14 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_03252560;
LAB_03252584:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x220,8);
    }
  }
  FUN_03868244(plVar8,&local_88,&local_78);
  *(undefined2 *)(plVar8 + 0x39) = 0;
  puVar3 = PTR_DAT_04bc5668;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  puVar6 = PTR_DAT_04bd4738;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  pMVar1 = (MutexType *)(param_1 + 0x188);
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  puVar2 = PTR_DAT_04bc8c40;
  plVar8[0x41] = 0;
  plVar8[0x42] = 0;
  *plVar8 = (long)(puVar3 + 0x10);
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  bVar12 = local_6a;
  if (7 < local_6a) {
    bVar12 = 0xff;
  }
  *(undefined1 *)(plVar8 + 0x43) = 0;
  *(byte *)(plVar8 + 0x3f) = bVar12;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  plVar8[0x35] = (long)(puVar6 + 0x10);
  plVar8[0x36] = 0xffffffff;
  *plVar8 = (long)(puVar2 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar16 = (long *)(param_1 + 0x50);
  lVar13 = *plVar16;
  plVar9 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  *plVar16 = (long)plVar9;
  *plVar9 = lVar13;
  plVar9[1] = (long)plVar16;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar9;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar8[0x13] = lVar14;
  *(undefined4 *)(plVar8 + 0x15) = 1;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar15 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar15;
  }
  puVar2 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x210) = plVar8;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_6c = 1;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar13 = *(long *)(lVar14 + 0xb8);
  local_68 = 0xffffffff;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "SonkatsuResultListSeq";
  if (lVar13 == 0) {
    lVar15 = 1;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) goto LAB_032527ac;
LAB_03252770:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_03252794;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar15 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar13;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
LAB_032527ac:
      plVar8 = malloc(0x250);
    }
    else {
      plVar8 = *(long **)(lVar14 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_03252770;
LAB_03252794:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x250,8);
    }
  }
  FUN_03868244(plVar8,&local_88,&local_78);
  puVar2 = PTR_DAT_04bd4738;
  *plVar8 = (long)(puVar3 + 0x10);
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  plVar8[0x35] = (long)(puVar2 + 0x10);
  plVar8[0x36] = 0xffffffff;
  bVar12 = local_6a;
  if (7 < local_6a) {
    bVar12 = 0xff;
  }
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  *(byte *)(plVar8 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  puVar2 = PTR_DAT_04bc8cd0 + 0x10;
  plVar8[0x47] = 0;
  *(undefined4 *)(plVar8 + 0x46) = 0;
  plVar8[0x45] = 0;
  plVar8[0x44] = 0;
  plVar8[0x43] = 0;
  plVar8[0x42] = 0;
  *(undefined4 *)(plVar8 + 0x48) = 0xffffffff;
  *plVar8 = (long)puVar2;
  *(undefined8 *)((long)plVar8 + 0x244) = 0;
  *(undefined4 *)((long)plVar8 + 0x24b) = 0;
  nn::os::LockMutex(pMVar1);
  plVar9 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar13 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar9;
  *plVar9 = lVar13;
  plVar9[1] = (long)plVar16;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar9;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar8 + 0x15) = 1;
  plVar8[0x13] = lVar14;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar15 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar15;
  }
  puVar2 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x218) = plVar8;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = 0xffffffff;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar13 = *(long *)(lVar14 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "SonkatsuResultInfoSeq";
  if (lVar13 == 0) {
    lVar15 = 1;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) goto LAB_032529c4;
LAB_03252988:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_032529ac;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar15 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar13;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
LAB_032529c4:
      plVar8 = malloc(0x238);
    }
    else {
      plVar8 = *(long **)(lVar14 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_03252988;
LAB_032529ac:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x238,8);
    }
  }
  FUN_03868244(plVar8,&local_88,&local_78);
  *plVar8 = (long)(puVar3 + 0x10);
  puVar2 = PTR_DAT_04bd4738;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  plVar8[0x35] = (long)(puVar2 + 0x10);
  plVar8[0x36] = 0xffffffff;
  bVar12 = local_6a;
  if (7 < local_6a) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar8 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  puVar2 = PTR_DAT_04bc8ca0;
  plVar8[0x42] = 0;
  *(undefined4 *)(plVar8 + 0x43) = 0;
  plVar8[0x44] = 0;
  plVar8[0x45] = -1;
  *(undefined2 *)(plVar8 + 0x46) = 0;
  *plVar8 = (long)(puVar2 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar9 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar13 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar9;
  *plVar9 = lVar13;
  plVar9[1] = (long)plVar16;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar9;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar8 + 0x15) = 1;
  plVar8[0x13] = lVar14;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar15 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar15;
  }
  puVar2 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x220) = plVar8;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = 0xffffffff;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar13 = *(long *)(lVar14 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "SonkatsuResultDialogSeq";
  if (lVar13 == 0) {
    lVar15 = 1;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) goto LAB_03252bcc;
LAB_03252b90:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_03252bb4;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar15 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar13;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
LAB_03252bcc:
      plVar8 = malloc(0x240);
    }
    else {
      plVar8 = *(long **)(lVar14 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_03252b90;
LAB_03252bb4:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x240,8);
    }
  }
  FUN_03868244(plVar8,&local_88,&local_78);
  *(undefined2 *)(plVar8 + 0x39) = 0;
  puVar2 = PTR_DAT_04bd4738;
  *plVar8 = (long)(puVar3 + 0x10);
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  plVar8[0x35] = (long)(puVar2 + 0x10);
  plVar8[0x36] = 0xffffffff;
  bVar12 = local_6a;
  if (7 < local_6a) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar8 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  puVar2 = PTR_DAT_04bc8c70 + 0x10;
  plVar8[0x43] = 0;
  plVar8[0x42] = 0;
  plVar8[0x46] = -1;
  *(undefined4 *)(plVar8 + 0x47) = 0;
  *plVar8 = (long)puVar2;
  *(undefined8 *)((long)plVar8 + 0x226) = 0;
  plVar8[0x44] = 0;
  nn::os::LockMutex(pMVar1);
  plVar9 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar13 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar9;
  *plVar9 = lVar13;
  plVar9[1] = (long)plVar16;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar9;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar8 + 0x15) = 1;
  plVar8[0x13] = lVar14;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar15 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar15;
  }
  puVar2 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x228) = plVar8;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_6c = 1;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar13 = *(long *)(lVar14 + 0xb8);
  local_68 = 0xffffffff;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "SonkatsuCategorySeq";
  if (lVar13 == 0) {
    lVar15 = 1;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) goto LAB_03252ddc;
LAB_03252da0:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_03252dc4;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar15 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar13;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
LAB_03252ddc:
      plVar8 = malloc(0x220);
    }
    else {
      plVar8 = *(long **)(lVar14 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_03252da0;
LAB_03252dc4:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x220,8);
    }
  }
  FUN_03868244(plVar8,&local_88,&local_78);
  puVar2 = PTR_DAT_04bd4738;
  *plVar8 = (long)(puVar3 + 0x10);
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  plVar8[0x35] = (long)(puVar2 + 0x10);
  plVar8[0x36] = 0xffffffff;
  bVar12 = local_6a;
  if (7 < local_6a) {
    bVar12 = 0xff;
  }
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  *(byte *)(plVar8 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  puVar3 = PTR_DAT_04bc8b88 + 0x10;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  plVar8[0x42] = 0;
  *(undefined4 *)(plVar8 + 0x43) = 0xffffffff;
  *(undefined1 *)((long)plVar8 + 0x21c) = 0;
  *plVar8 = (long)puVar3;
  nn::os::LockMutex(pMVar1);
  plVar9 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar13 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar9;
  *plVar9 = lVar13;
  plVar9[1] = (long)plVar16;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar9;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar8 + 0x15) = 1;
  plVar8[0x13] = lVar14;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar15 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar15;
  }
  puVar3 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x230) = plVar8;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0x418) + 0xc);
  local_6c = 1;
  local_68 = 0xffffffff;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar13 = *(long *)(lVar14 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "SonkatsuQuestSeq";
  if (lVar13 == 0) {
    lVar15 = 1;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) goto LAB_03252fd8;
LAB_03252f9c:
    plVar8 = (long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar9 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar9 = (long *)(lVar7 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_03252fc0;
    plVar9 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar15 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar13;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
LAB_03252fd8:
      plVar8 = (long *)PTR_DAT_04bb2698;
      plVar9 = malloc(0x218);
    }
    else {
      plVar9 = *(long **)(lVar14 + 0xb8);
      plVar8 = (long *)PTR_DAT_04bb2698;
      if (plVar9 == (long *)0x0) goto LAB_03252f9c;
LAB_03252fc0:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x218,8);
    }
  }
  FUN_03868244(plVar9,&local_88,&local_78);
  puVar3 = PTR_DAT_04bd4738;
  plVar9[0x37] = 0xffffffff;
  plVar9[0x38] = 0xffffffff;
  *(undefined2 *)(plVar9 + 0x39) = 0;
  *(undefined4 *)(plVar9 + 0x3a) = 0;
  plVar9[0x3b] = 0;
  *(undefined4 *)(plVar9 + 0x3c) = 0;
  *(undefined2 *)(plVar9 + 0x40) = 0;
  *(undefined1 *)((long)plVar9 + 0x202) = 0;
  plVar9[0x41] = 0;
  plVar9[0x35] = (long)(puVar3 + 0x10);
  plVar9[0x36] = 0xffffffff;
  bVar12 = local_6a;
  if (7 < local_6a) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar9 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar9 + 0x1fc) = local_68;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = -1;
  puVar3 = PTR_DAT_04bc8bb8;
  plVar9[0x42] = 0;
  *plVar9 = (long)(puVar3 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar13 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar13;
  plVar4[1] = (long)plVar16;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar14;
  FUN_0386890c(plVar9,&local_78);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar15 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar15;
  }
  puVar3 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x238) = plVar9;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0x418) + 0xc);
  local_6c = 1;
  local_6a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  lVar13 = *(long *)(lVar14 + 0xb8);
  local_68 = 0xffffffff;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "SonkatsuQuestTopSeq";
  if (lVar13 == 0) {
    lVar13 = *plVar8;
    lVar15 = 1;
    if (lVar13 == 0) goto LAB_032531bc;
LAB_0325317c:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar9 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar9 = (long *)(lVar7 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_032531a0;
    plVar9 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar15 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar13;
    lVar13 = *plVar8;
    if (lVar13 == 0) {
LAB_032531bc:
      plVar9 = malloc(0x1c1c0);
    }
    else {
      plVar9 = *(long **)(lVar14 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_0325317c;
LAB_032531a0:
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1c1c0,8);
    }
  }
  FUN_0323e0e0(plVar9,&local_88,&local_78);
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar9);
  lVar13 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar13;
  plVar4[1] = (long)plVar16;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar9[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar9 + 0x15) = 1;
  plVar9[0x13] = lVar14;
  FUN_0386890c(plVar9,&local_78);
  *(undefined4 *)(plVar9 + 0x15) = 2;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar15 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar15;
  }
  puVar3 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x240) = plVar9;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0x418) + 0xc);
  local_6c = 1;
  local_6a = *(byte *)(param_1 + 0x1f8);
  lVar13 = *(long *)(lVar14 + 0xb8);
  local_68 = 0xffffffff;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  pcStack_80 = "SonkatsuQuestTopEventSeq";
  if (lVar13 == 0) {
    lVar13 = *plVar8;
    lVar15 = 1;
    if (lVar13 == 0) goto LAB_03253334;
LAB_032532f8:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto LAB_03253340;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar15 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar13;
    lVar13 = *plVar8;
    if (lVar13 == 0) {
LAB_03253334:
      plVar8 = malloc(0x218);
      goto LAB_03253340;
    }
    plVar8 = *(long **)(lVar14 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_032532f8;
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x218,8);
LAB_03253340:
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
  bVar12 = local_6a;
  if (7 < local_6a) {
    bVar12 = 0xff;
  }
  *(byte *)(plVar8 + 0x3f) = bVar12;
  *(undefined4 *)((long)plVar8 + 0x1fc) = local_68;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  puVar3 = PTR_DAT_04bc8be8;
  plVar8[0x42] = 0;
  *plVar8 = (long)(puVar3 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar9 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar13 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar9;
  *plVar9 = lVar13;
  plVar9[1] = (long)plVar16;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar9;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar8[0x13] = lVar14;
  *(undefined4 *)(plVar8 + 0x15) = 1;
  FUN_0386890c(plVar8,&local_78);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar15 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar15;
  }
  *(long **)(param_1 + 0x248) = plVar8;
  iVar10 = *(int *)(*(long *)PTR_DAT_04bb2208 + 0x1d40);
  if (iVar10 < 1) {
    lVar14 = *(long *)(*(long *)PTR_DAT_04bb2208 + 0x1c30);
    iVar10 = 0;
    if (lVar14 != 0) {
      piVar11 = *(int **)(lVar14 + 8);
      iVar10 = 0;
      if (piVar11 != (int *)0x0) {
        iVar10 = *piVar11;
      }
    }
  }
  *(int *)(*(long *)(param_1 + 0x218) + 0x228) = iVar10;
  return;
}

