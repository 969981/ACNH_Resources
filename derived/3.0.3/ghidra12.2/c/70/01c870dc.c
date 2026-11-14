
void FUN_01c870dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04bd0d40;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_04bb2020;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = &DAT_0407ebb1;
  *param_1 = &PTR_FUN_04a442e0;
  param_1[1] = 0;
  plVar8 = param_1 + 2;
  *plVar8 = (long)(puVar2 + 0x10);
  param_1[10] = plVar8;
  param_1[0xb] = puVar1 + 0x10;
  param_1[3] = 0;
  puVar4 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  param_1[4] = 0;
  param_1[5] = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_038cb610(lVar5,plVar8);
    param_1[3] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar7 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar7;
      plVar8 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar8);
      *plVar7 = (long)plVar8;
      *plVar8 = lVar6;
      plVar8[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar8;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar9 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
      }
    }
  }
  plVar8 = param_1 + 0x15;
  *plVar8 = (long)(puVar2 + 0x10);
  puVar3 = PTR_DAT_04bb24b0;
  puVar2 = PTR_DAT_04bb24a8;
  lVar5 = *(long *)puVar4;
  param_1[0x1d] = plVar8;
  param_1[0x1e] = puVar1 + 0x10;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[2] = puVar2 + 0x10;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  param_1[0x1f] = &DAT_0407ebb1;
  param_1[0xd] = puVar3 + 0x10;
  param_1[0xe] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_038cb610(lVar5,plVar8);
    param_1[0x16] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar7 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar7;
      plVar8 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar8);
      *plVar7 = (long)plVar8;
      *plVar8 = lVar6;
      plVar8[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar8;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar9 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
      }
    }
  }
  param_1[0x15] = puVar2 + 0x10;
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = puVar3 + 0x10;
  param_1[0x21] = 0;
  FUN_038e18e4(param_1 + 0x28);
  param_1[0x30] = 0;
  param_1[0x31] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x34) = 0;
  param_1[0x32] = 0xffffffffffffffff;
  param_1[0x33] = 0xffffffffffffffff;
  if (param_1[0x11] == 0) {
    param_1[0xf] = FUN_01c87374;
    param_1[0x10] = 0;
    param_1[0xd] = &PTR_LAB_04a44300;
    param_1[0xe] = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x11] + 0x20));
    param_1[0xf] = FUN_01c87374;
    param_1[0x10] = 0;
    param_1[0xd] = &PTR_LAB_04a44300;
    param_1[0xe] = param_1;
    if (param_1[0x11] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x11] + 0x20));
    }
  }
  param_1[0xc] = "NetFramework::preSceneCalc";
  if (param_1[0x24] == 0) {
    param_1[0x22] = &LAB_01c87a90;
    param_1[0x23] = 0;
    param_1[0x20] = &PTR_LAB_04a44300;
    param_1[0x21] = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x24] + 0x20));
    param_1[0x22] = &LAB_01c87a90;
    param_1[0x23] = 0;
    param_1[0x20] = &PTR_LAB_04a44300;
    param_1[0x21] = param_1;
    if (param_1[0x24] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x24] + 0x20));
    }
  }
  param_1[0x1f] = "NetFramework::postSceneCalc";
  return;
}

