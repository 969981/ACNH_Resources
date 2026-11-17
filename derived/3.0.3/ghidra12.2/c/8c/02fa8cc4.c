
void FUN_02fa8cc4(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined *local_70;
  char *pcStack_68;
  
  puVar6 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar11 = *(long *)(param_1 + 0x98);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "TalkMessageWindowSeq";
  lVar10 = *(long *)(lVar11 + 0xb8);
  if (lVar10 == 0) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    lVar13 = 1;
    if (lVar10 == 0) goto LAB_02fa8d8c;
LAB_02fa8d50:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_02fa8d74;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
LAB_02fa8d8c:
      plVar8 = malloc(800);
    }
    else {
      plVar8 = *(long **)(lVar11 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_02fa8d50;
LAB_02fa8d74:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,800,8);
    }
  }
  FUN_03868244(plVar8,&local_70,0);
  puVar2 = PTR_DAT_04bd4738;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  pMVar1 = (MutexType *)(param_1 + 0x188);
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined4 *)((long)plVar8 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  *(undefined4 *)(plVar8 + 0x44) = 0;
  plVar8[0x43] = 0;
  plVar8[0x42] = 0;
  *(undefined4 *)((long)plVar8 + 0x224) = 0xffffffff;
  plVar8[0x46] = 0;
  plVar8[0x47] = 0;
  plVar8[0x48] = 0;
  plVar8[0x49] = 0;
  plVar8[0x4a] = 0;
  plVar8[0x4b] = 0;
  plVar8[0x4c] = 0;
  plVar8[0x4d] = 0;
  plVar8[0x4e] = 0;
  plVar8[0x4f] = 0;
  plVar8[0x50] = 0;
  plVar8[0x51] = 0;
  plVar8[0x52] = 0;
  plVar8[0x53] = 0;
  plVar8[0x54] = 0;
  plVar8[0x55] = 0;
  plVar8[0x56] = 0;
  plVar8[0x57] = 0;
  plVar8[0x58] = 0;
  plVar8[0x35] = (long)(puVar2 + 0x10);
  plVar8[0x36] = 0xffffffff;
  *(undefined1 *)(plVar8 + 0x3f) = 0xff;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  puVar2 = PTR_DAT_04bc77b8 + 0x10;
  plVar8[0x45] = (long)puVar2;
  plVar8[0x49] = (long)puVar2;
  plVar8[0x4d] = (long)puVar2;
  plVar8[0x51] = (long)puVar2;
  plVar8[0x55] = (long)puVar2;
  *(undefined4 *)(plVar8 + 0x59) = 0xfffffffe;
  *(undefined2 *)((long)plVar8 + 0x2cc) = 0x101;
  *(undefined1 *)((long)plVar8 + 0x2ce) = 0;
  plVar8[0x60] = 0;
  plVar8[0x5a] = 0;
  plVar8[0x5b] = 0;
  plVar8[0x5c] = 0;
  plVar8[0x5d] = 0;
  plVar8[0x5e] = 0;
  puVar2 = PTR_DAT_04bc78b8 + 0x10;
  *(undefined4 *)(plVar8 + 0x5f) = 0;
  *plVar8 = (long)puVar2;
  plVar8[0x61] = 0;
  plVar8[0x62] = 0;
  *(undefined4 *)(plVar8 + 99) = 0;
  *(undefined1 *)((long)plVar8 + 0x31c) = 1;
  nn::os::LockMutex(pMVar1);
  plVar12 = (long *)(param_1 + 0x50);
  lVar10 = *plVar12;
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  *plVar12 = (long)plVar4;
  *plVar4 = lVar10;
  plVar4[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(plVar8 + 0x15) = 1;
  plVar8[0x13] = lVar11;
  FUN_0386890c(plVar8,0);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar13 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar13;
  }
  *(long **)(param_1 + 0x218) = plVar8;
  puVar2 = PTR_DAT_04bb2698;
  lVar10 = *(long *)(lVar11 + 0xb8);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "NoticeMessageWindowSeq";
  if (lVar10 == 0) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    lVar13 = 1;
    if (lVar10 == 0) goto LAB_02fa8fe4;
LAB_02fa8fa8:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_02fa8fcc;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    lVar13 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
LAB_02fa8fe4:
      plVar8 = malloc(0x318);
    }
    else {
      plVar8 = *(long **)(lVar11 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_02fa8fa8;
LAB_02fa8fcc:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x318,8);
    }
  }
  FUN_03868244(plVar8,&local_70,0);
  puVar3 = PTR_DAT_04bd4738;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined4 *)((long)plVar8 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  *(undefined4 *)(plVar8 + 0x44) = 0;
  plVar8[0x43] = 0;
  plVar8[0x42] = 0;
  *(undefined4 *)((long)plVar8 + 0x224) = 0xffffffff;
  plVar8[0x46] = 0;
  plVar8[0x47] = 0;
  plVar8[0x48] = 0;
  plVar8[0x49] = 0;
  plVar8[0x4a] = 0;
  plVar8[0x4b] = 0;
  plVar8[0x4c] = 0;
  plVar8[0x4d] = 0;
  plVar8[0x4e] = 0;
  plVar8[0x4f] = 0;
  plVar8[0x50] = 0;
  plVar8[0x51] = 0;
  plVar8[0x52] = 0;
  plVar8[0x53] = 0;
  plVar8[0x54] = 0;
  plVar8[0x55] = 0;
  plVar8[0x56] = 0;
  plVar8[0x57] = 0;
  plVar8[0x58] = 0;
  plVar8[0x35] = (long)(puVar3 + 0x10);
  plVar8[0x36] = 0xffffffff;
  *(undefined1 *)(plVar8 + 0x3f) = 0xff;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  puVar3 = PTR_DAT_04bc77b8 + 0x10;
  plVar8[0x45] = (long)puVar3;
  plVar8[0x49] = (long)puVar3;
  plVar8[0x4d] = (long)puVar3;
  plVar8[0x51] = (long)puVar3;
  plVar8[0x55] = (long)puVar3;
  *(undefined4 *)(plVar8 + 0x59) = 0xfffffffe;
  *(undefined2 *)((long)plVar8 + 0x2cc) = 0x101;
  *(undefined1 *)((long)plVar8 + 0x2ce) = 0;
  plVar8[0x60] = 0;
  plVar8[0x5a] = 0;
  plVar8[0x5b] = 0;
  plVar8[0x5c] = 0;
  plVar8[0x5d] = 0;
  plVar8[0x5e] = 0;
  *(undefined4 *)(plVar8 + 0x5f) = 0;
  *plVar8 = (long)(PTR_DAT_04bc7878 + 0x10);
  plVar8[0x61] = 0;
  *(undefined4 *)(plVar8 + 0x62) = 0;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar10;
  plVar4[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar8[0x13] = lVar11;
  *(undefined4 *)(plVar8 + 0x15) = 1;
  FUN_0386890c(plVar8,0);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar13 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar13;
  }
  *(long **)(param_1 + 0x220) = plVar8;
  lVar10 = *(long *)(lVar11 + 0xb8);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "MonologueMessageWindowSeq";
  if (lVar10 == 0) {
    lVar10 = *(long *)puVar2;
    lVar13 = 1;
    if (lVar10 == 0) goto LAB_02fa921c;
LAB_02fa91e0:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_02fa9204;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    lVar13 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
LAB_02fa921c:
      plVar8 = malloc(0x310);
    }
    else {
      plVar8 = *(long **)(lVar11 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_02fa91e0;
LAB_02fa9204:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x310,8);
    }
  }
  FUN_03868244(plVar8,&local_70,0);
  puVar3 = PTR_DAT_04bd4738;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined4 *)((long)plVar8 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  *(undefined4 *)(plVar8 + 0x44) = 0;
  plVar8[0x43] = 0;
  plVar8[0x42] = 0;
  *(undefined4 *)((long)plVar8 + 0x224) = 0xffffffff;
  plVar8[0x46] = 0;
  plVar8[0x47] = 0;
  plVar8[0x48] = 0;
  plVar8[0x49] = 0;
  plVar8[0x4a] = 0;
  plVar8[0x4b] = 0;
  plVar8[0x4c] = 0;
  plVar8[0x4d] = 0;
  plVar8[0x4e] = 0;
  plVar8[0x4f] = 0;
  plVar8[0x50] = 0;
  plVar8[0x51] = 0;
  plVar8[0x52] = 0;
  plVar8[0x53] = 0;
  plVar8[0x54] = 0;
  plVar8[0x55] = 0;
  plVar8[0x56] = 0;
  plVar8[0x57] = 0;
  plVar8[0x58] = 0;
  plVar8[0x35] = (long)(puVar3 + 0x10);
  plVar8[0x36] = 0xffffffff;
  *(undefined1 *)(plVar8 + 0x3f) = 0xff;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  puVar3 = PTR_DAT_04bc77b8 + 0x10;
  plVar8[0x45] = (long)puVar3;
  plVar8[0x49] = (long)puVar3;
  plVar8[0x4d] = (long)puVar3;
  plVar8[0x51] = (long)puVar3;
  plVar8[0x55] = (long)puVar3;
  *(undefined4 *)(plVar8 + 0x59) = 0xfffffffe;
  *(undefined2 *)((long)plVar8 + 0x2cc) = 0x101;
  *(undefined1 *)((long)plVar8 + 0x2ce) = 0;
  plVar8[0x60] = 0;
  plVar8[0x5a] = 0;
  plVar8[0x5b] = 0;
  plVar8[0x5c] = 0;
  plVar8[0x5d] = 0;
  plVar8[0x5e] = 0;
  *(undefined4 *)(plVar8 + 0x5f) = 0;
  *plVar8 = (long)(PTR_DAT_04bc7850 + 0x10);
  plVar8[0x61] = 0;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar10;
  plVar4[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar8[0x13] = lVar11;
  *(undefined4 *)(plVar8 + 0x15) = 1;
  FUN_0386890c(plVar8,0);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar13 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar13;
  }
  *(long **)(param_1 + 0x228) = plVar8;
  lVar10 = *(long *)(lVar11 + 0xb8);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "SelectMessageWindowTalkSeq";
  if (lVar10 == 0) {
    lVar10 = *(long *)puVar2;
    lVar13 = 1;
    if (lVar10 == 0) goto LAB_02fa9454;
LAB_02fa9418:
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_02fa943c;
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    lVar13 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
LAB_02fa9454:
      plVar8 = malloc(0x228);
    }
    else {
      plVar8 = *(long **)(lVar11 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_02fa9418;
LAB_02fa943c:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x228,8);
    }
  }
  FUN_03868244(plVar8,&local_70,0);
  puVar2 = PTR_DAT_04bd4738;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined4 *)((long)plVar8 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  plVar8[0x35] = (long)(puVar2 + 0x10);
  plVar8[0x36] = 0xffffffff;
  *(undefined1 *)(plVar8 + 0x3f) = 0xff;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  puVar2 = PTR_DAT_04bc7898 + 0x10;
  plVar8[0x42] = 0;
  *(undefined1 *)(plVar8 + 0x44) = 0;
  *plVar8 = (long)puVar2;
  plVar8[0x43] = -0x100000000;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar10;
  plVar4[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar8[0x13] = lVar11;
  *(undefined4 *)(plVar8 + 0x15) = 1;
  FUN_0386890c(plVar8,0);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar13 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar13;
  }
  *(long **)(param_1 + 0x230) = plVar8;
  lVar10 = *(long *)(lVar11 + 0xb8);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "HighAndLowWindowSeq";
  if (lVar10 == 0) {
    lVar13 = 1;
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 != 0) {
LAB_02fa95c0:
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
      plVar8 = (long *)(lVar10 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_02fa9608;
      }
      goto LAB_02fa95e4;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    lVar13 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 != 0) {
      plVar8 = *(long **)(lVar11 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_02fa95c0;
LAB_02fa95e4:
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x220,8);
      goto LAB_02fa9608;
    }
  }
  plVar8 = malloc(0x220);
LAB_02fa9608:
  FUN_03868244(plVar8,&local_70,0);
  puVar2 = PTR_DAT_04bd4738;
  plVar8[0x37] = 0xffffffff;
  plVar8[0x38] = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x39) = 0;
  *(undefined4 *)(plVar8 + 0x3a) = 0;
  plVar8[0x3b] = 0;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  *(undefined4 *)((long)plVar8 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar8 + 0x40) = 0;
  *(undefined1 *)((long)plVar8 + 0x202) = 0;
  plVar8[0x41] = 0;
  plVar8[0x35] = (long)(puVar2 + 0x10);
  plVar8[0x36] = 0xffffffff;
  *(undefined1 *)(plVar8 + 0x3f) = 0xff;
  plVar8[0x3d] = 0;
  plVar8[0x3e] = -1;
  puVar2 = PTR_DAT_04bc77e8 + 0x10;
  plVar8[0x43] = 0;
  plVar8[0x42] = 0;
  *plVar8 = (long)puVar2;
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar8);
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar4;
  *plVar4 = lVar10;
  plVar4[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar8[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar8[0x13] = lVar11;
  *(undefined4 *)(plVar8 + 0x15) = 1;
  FUN_0386890c(plVar8,0);
  *(undefined4 *)(plVar8 + 0x15) = 2;
  (**(code **)(*plVar8 + 0x48))(plVar8);
  if (lVar13 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar13;
  }
  *(long **)(param_1 + 0x238) = plVar8;
  *(undefined4 *)(param_1 + 0x244) = 0;
  iVar5 = *(int *)(param_1 + 0x244);
  if (iVar5 == 0) {
    puVar9 = (undefined8 *)(param_1 + 0x218);
  }
  else if (iVar5 == 2) {
    puVar9 = (undefined8 *)(param_1 + 0x228);
  }
  else {
    if (iVar5 != 1) {
      return;
    }
    puVar9 = (undefined8 *)(param_1 + 0x220);
  }
  *(undefined8 *)(param_1 + 0x210) = *puVar9;
  return;
}

