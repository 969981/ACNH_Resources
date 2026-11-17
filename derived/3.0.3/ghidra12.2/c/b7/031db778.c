
void FUN_031db778(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  byte local_6a;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar10 = *(long *)(param_1 + 0x98);
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_6c = 1;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  local_68 = 0xffffffff;
  lVar8 = *(long *)(lVar10 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "RingMenuEmoticonSeq";
  if (lVar8 == 0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    lVar11 = 1;
    if (lVar8 == 0) goto LAB_031db894;
LAB_031db858:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_031db87c;
    plVar7 = (long *)0x0;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_031db894:
      plVar7 = malloc(0x1c278);
    }
    else {
      plVar7 = *(long **)(lVar10 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_031db858;
LAB_031db87c:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1c278,8);
    }
  }
  FUN_031d6fa0(plVar7,&local_88,&local_78);
  pMVar1 = (MutexType *)(param_1 + 0x188);
  nn::os::LockMutex(pMVar1);
  plVar9 = (long *)(param_1 + 0x50);
  lVar8 = *plVar9;
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
  *plVar9 = (long)plVar2;
  *plVar2 = lVar8;
  plVar2[1] = (long)plVar9;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar7[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar7[0x13] = lVar10;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar11 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar11;
  }
  puVar4 = PTR_DAT_04bb2718;
  *(long **)(param_1 + 0x210) = plVar7;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0x418) + 0xc);
  local_6c = 1;
  local_6a = *(byte *)(param_1 + 0x1f8);
  local_68 = 0xffffffff;
  lVar8 = *(long *)(lVar10 + 0xb8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  if (7 < local_6a) {
    local_6a = 0xff;
  }
  pcStack_80 = "RingMenuEmoticonListSeq";
  if (lVar8 == 0) {
    lVar8 = *(long *)puVar3;
    lVar11 = 1;
    if (lVar8 == 0) goto LAB_031dba18;
LAB_031db9d8:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto LAB_031dba28;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar11 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_031dba18:
      plVar7 = malloc(0x1c1e0);
      goto LAB_031dba28;
    }
    plVar7 = *(long **)(lVar10 + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_031db9d8;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1c1e0,8);
LAB_031dba28:
  FUN_031d0a30(plVar7,&local_88,&local_78);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
  lVar8 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  *plVar2 = lVar8;
  plVar2[1] = (long)plVar9;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar7[9] = param_1;
  nn::os::UnlockMutex(pMVar1);
  plVar7[0x13] = lVar10;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar11 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar11;
  }
  *(long **)(param_1 + 0x218) = plVar7;
  return;
}

