
void FUN_032ce554(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  *param_1 = 0;
  param_1[1] = 0;
  plVar9 = param_1 + 0x14;
  *plVar9 = (long)puVar1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar3 = PTR_DAT_04bb2020;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x1e] = &DAT_0407ebb1;
  param_1[0x15] = 0;
  param_1[0x1c] = plVar9;
  param_1[0x1d] = puVar2;
  puVar2 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar9);
    param_1[0x15] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar9 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar9);
      *plVar8 = (long)plVar9;
      *plVar9 = lVar7;
      plVar9[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar9;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  param_1[0x14] = PTR_DAT_04bb24a8 + 0x10;
  puVar4 = PTR_DAT_04bb24b0;
  lVar6 = *(long *)puVar2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x124) = 0;
  param_1[0x27] = puVar1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x1f] = puVar4 + 0x10;
  param_1[0x20] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,param_1 + 0x27);
    param_1[0x28] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar9 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x27));
      *plVar8 = (long)plVar9;
      *plVar9 = lVar7;
      plVar9[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar9;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  param_1[0x2b] = puVar3 + 0x10;
  param_1[0x2c] = &DAT_0407ebb1;
  puVar4 = PTR_DAT_04bbd830;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 1;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  param_1[0x27] = puVar4 + 0x10;
  puVar1 = PTR_DAT_04bbd828 + 0x10;
  *(undefined **)((long)param_1 + 0x174) = puVar1;
  puVar5 = PTR_DAT_04bd0d40;
  lVar6 = *(long *)puVar2;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = puVar5 + 0x10;
  param_1[0x34] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,param_1 + 0x33);
    param_1[0x34] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar9 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x33));
      *plVar8 = (long)plVar9;
      *plVar9 = lVar7;
      plVar9[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar9;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  param_1[0x33] = puVar4 + 0x10;
  param_1[0x37] = puVar3 + 0x10;
  param_1[0x38] = &DAT_0407ebb1;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 1;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined **)((long)param_1 + 0x1d4) = puVar1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x47] = 1;
  param_1[0x48] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 1;
  param_1[0x52] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FUN_003490b4(param_1 + 0x57);
  param_1[0x7b] = 0;
  FUN_0034f694(param_1 + 0x7c);
  *(undefined1 *)(param_1 + 0x97) = 0;
  FUN_0034f974(param_1 + 0x98);
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  FUN_038e18e4(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined8 *)((long)param_1 + 0x585) = 0;
  FUN_038e18e4(param_1 + 0xb3);
  param_1[0xbb] = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0x5e4) = 0;
  *(undefined8 *)((long)param_1 + 0x5ec) = 0;
  return;
}

