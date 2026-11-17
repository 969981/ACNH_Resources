
void FUN_02d0d80c(long param_1)

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
  pcStack_80 = "ClosetBGSeq";
  lVar9 = *(long *)(lVar11 + 0xb8);
  if (lVar9 == 0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    lVar10 = 1;
    if (lVar9 == 0) goto LAB_02d0d920;
LAB_02d0d8e4:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar7 = (long *)(lVar9 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_02d0d908;
    plVar7 = (long *)0x0;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar9;
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
LAB_02d0d920:
      plVar7 = malloc(0x220);
    }
    else {
      plVar7 = *(long **)(lVar11 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_02d0d8e4;
LAB_02d0d908:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x220,8);
    }
  }
  FUN_03868244(plVar7,&local_88,&local_78);
  puVar4 = PTR_DAT_04bd4738;
  *(undefined2 *)(plVar7 + 0x39) = 0;
  *(undefined4 *)(plVar7 + 0x3a) = 0;
  plVar7[0x3b] = 0;
  pMVar1 = (MutexType *)(param_1 + 0x188);
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
  *(undefined4 *)((long)plVar7 + 0x1fc) = local_68;
  puVar4 = PTR_DAT_04bc5eb8;
  plVar7[0x3d] = 0;
  plVar7[0x3e] = -1;
  plVar7[0x42] = 0;
  *(undefined1 *)(plVar7 + 0x43) = 0;
  *plVar7 = (long)(puVar4 + 0x10);
  nn::os::LockMutex(pMVar1);
  plVar12 = (long *)(param_1 + 0x50);
  lVar9 = *plVar12;
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
  *plVar12 = (long)plVar2;
  *plVar2 = lVar9;
  plVar2[1] = (long)plVar12;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar7[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar7[0x13] = lVar11;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar10 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar10;
  }
  puVar4 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x218) = plVar7;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0x418) + 0xc);
  local_6c = 1;
  local_6a = *(byte *)(param_1 + 0x1f8);
  lVar9 = *(long *)(lVar11 + 0xb8);
  local_68 = 0xffffffff;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  pcStack_80 = "ClosetWherearenWorkSeq";
  if (lVar9 == 0) {
    lVar9 = *(long *)puVar3;
    lVar10 = 1;
    if (lVar9 == 0) goto LAB_02d0db14;
LAB_02d0dad4:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar7 = (long *)(lVar9 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto LAB_02d0db24;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar10 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar9;
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
LAB_02d0db14:
      plVar7 = malloc(0x92800);
      goto LAB_02d0db24;
    }
    plVar7 = *(long **)(lVar11 + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_02d0dad4;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x92800,8);
LAB_02d0db24:
  FUN_02cc7fc0(plVar7,&local_88,&local_78);
  plVar7[0x3892] = 0;
  plVar7[0x3893] = 0;
  puVar3 = PTR_DAT_04bc5f00;
  plVar7[0x3894] = 0;
  plVar7[0x3895] = 0;
  *plVar7 = (long)(puVar3 + 0x10);
  FUN_02ce68e0(plVar7 + 0x3896);
  plVar7[0x3894] = 0;
  *(undefined1 *)(plVar7 + 0x124ff) = 0;
  plVar7[0x3892] = 0;
  plVar7[0x3893] = 0;
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
  lVar9 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar9;
  plVar2[1] = (long)plVar12;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar7[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar7[0x13] = lVar11;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar10 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar10;
  }
  *(long **)(param_1 + 0x210) = plVar7;
  return;
}

