
void FUN_038bfb38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  FUN_038bd40c();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 5;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  puVar1 = param_1 + 0x34;
  *(undefined8 *)((long)param_1 + 0x117) = 0;
  *param_1 = &PTR_LAB_04b63e18;
  param_1[0x1f] = 0;
  *(undefined8 *)((long)param_1 + 0xff) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((long)param_1 + 0x12f) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((long)param_1 + 0x147) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0x1ffffffff;
  param_1[0x32] = 0;
  puVar7 = PTR_DAT_04bd0d40;
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x37] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = puVar2;
  puVar6 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,puVar1);
    param_1[0x35] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar11 = (long *)(lVar8 + 0x70);
      lVar10 = *plVar11;
      plVar4 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar4;
      *plVar4 = lVar10;
      plVar4[1] = (long)plVar11;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar4;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  param_1[0x44] = 0;
  param_1[0x34] = &PTR_LAB_04b63ef0;
  param_1[0x3a] = puVar1;
  param_1[0x3b] = 0;
  puVar1 = param_1 + 0x40;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = puVar1;
  param_1[0x3c] = &PTR_LAB_04b63f10;
  param_1[0x3d] = param_1;
  param_1[0x3e] = &LAB_038bff8c;
  param_1[0x3f] = 0;
  lVar8 = *(long *)puVar6;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x49] = puVar3;
  param_1[0x4a] = &DAT_0407ebb1;
  param_1[0x40] = puVar2;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,puVar1);
    param_1[0x41] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar11 = (long *)(lVar8 + 0x70);
      lVar10 = *plVar11;
      plVar4 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar4;
      *plVar4 = lVar10;
      plVar4[1] = (long)plVar11;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar4;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  puVar5 = PTR_DAT_04bb24a8;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  puVar9 = param_1 + 0x53;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  lVar8 = *(long *)puVar6;
  puVar2 = PTR_DAT_04bb24b0 + 0x10;
  param_1[0x40] = puVar5 + 0x10;
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x4b] = puVar2;
  param_1[0x5b] = puVar9;
  param_1[0x5c] = puVar3;
  param_1[0x5d] = &DAT_0407ebb1;
  param_1[0x53] = puVar7 + 0x10;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,puVar9);
    param_1[0x54] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar11 = (long *)(lVar8 + 0x70);
      lVar10 = *plVar11;
      plVar4 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)puVar9);
      *plVar11 = (long)plVar4;
      *plVar4 = lVar10;
      plVar4[1] = (long)plVar11;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar4;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  param_1[0x53] = puVar5 + 0x10;
  param_1[0x66] = 0x1e00000000;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x5f] = 0;
  param_1[0x67] = 0x3d0000001f;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x5e] = puVar2;
  *(undefined4 *)((long)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)((long)param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x4a] = param_3;
  if (param_1[0x4f] != 0) {
    nn::os::LockMutex((MutexType *)(param_1[0x4f] + 0x20));
  }
  puVar9 = (undefined8 *)param_1[0x51];
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,puVar1,3);
  }
  *(undefined4 *)((long)param_1 + 0x284) = 3;
  if (param_1[0x4f] != 0) {
    nn::os::UnlockMutex((MutexType *)(param_1[0x4f] + 0x20));
    if (param_1[0x4f] != 0) {
      nn::os::LockMutex((MutexType *)(param_1[0x4f] + 0x20));
      param_1[0x4c] = param_1;
      param_1[0x4d] = 0xc0;
      param_1[0x4b] = &PTR_LAB_04b63f38;
      param_1[0x4e] = 1;
      if (param_1[0x4f] != 0) {
        nn::os::UnlockMutex((MutexType *)(param_1[0x4f] + 0x20));
      }
      goto LAB_038bff08;
    }
  }
  param_1[0x4c] = param_1;
  param_1[0x4b] = &PTR_LAB_04b63f38;
  param_1[0x4d] = 0xc0;
  param_1[0x4e] = 1;
LAB_038bff08:
  if (param_3 != 0) {
    param_1[0x4a] = param_3;
  }
  if (param_1[0x62] == 0) {
    param_1[0x5f] = param_1;
    param_1[0x60] = &LAB_038bffb8;
    param_1[0x61] = 0;
    param_1[0x5e] = &PTR_LAB_04b63f38;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x62] + 0x20));
    param_1[0x5f] = param_1;
    param_1[0x60] = &LAB_038bffb8;
    param_1[0x61] = 0;
    param_1[0x5e] = &PTR_LAB_04b63f38;
    if (param_1[0x62] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x62] + 0x20));
    }
  }
  param_1[0x5d] = "calcCore_";
  return;
}

