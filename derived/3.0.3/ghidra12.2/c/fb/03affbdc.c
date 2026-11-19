
void FUN_03affbdc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  FUN_038bd40c(param_1,param_3,"gsys::SystemTask");
  *(undefined1 *)(param_1 + 0x1a) = 0;
  puVar4 = PTR_DAT_04bd0d40;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar3 = PTR_DAT_04bb2020;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_04b72bd0;
  plVar11 = param_1 + 0x1b;
  *plVar11 = (long)(puVar4 + 0x10);
  param_1[0x23] = plVar11;
  param_1[0x24] = puVar3 + 0x10;
  param_1[0x1c] = 0;
  param_1[0x25] = &DAT_0407ebb1;
  puVar6 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,plVar11);
    param_1[0x1c] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)plVar11);
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  puVar7 = PTR_DAT_04bb24a8;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar1 = param_1 + 0x2e;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  puVar5 = PTR_DAT_04bb24b0;
  lVar8 = *(long *)puVar6;
  *(undefined4 *)((long)param_1 + 0x15c) = 0;
  puVar2 = puVar5 + 0x10;
  param_1[0x1b] = puVar7 + 0x10;
  param_1[0x38] = &DAT_0407ebb1;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x26] = puVar2;
  param_1[0x27] = 0;
  param_1[0x36] = puVar1;
  param_1[0x37] = puVar3 + 0x10;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = puVar4 + 0x10;
  param_1[0x2f] = 0;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,puVar1);
    param_1[0x2f] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)puVar1);
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  puVar1 = param_1 + 0x41;
  param_1[0x2e] = puVar7 + 0x10;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)((long)param_1 + 500) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = puVar1;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = puVar2;
  param_1[0x3a] = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x4b] = &DAT_0407ebb1;
  param_1[0x4a] = puVar3;
  lVar8 = *(long *)puVar6;
  puVar4 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = puVar4;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,puVar1);
    param_1[0x42] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)puVar1);
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  puVar2 = PTR_DAT_04bb24a8;
  puVar5 = puVar5 + 0x10;
  lVar8 = *(long *)puVar6;
  puVar1 = param_1 + 0x54;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4c] = puVar5;
  *(undefined4 *)((long)param_1 + 0x28c) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x41] = puVar2 + 0x10;
  param_1[0x5c] = puVar1;
  param_1[0x5d] = puVar3;
  param_1[0x5e] = &DAT_0407ebb1;
  param_1[0x54] = puVar4;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,puVar1);
    param_1[0x55] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)puVar1);
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  param_1[0x54] = puVar2 + 0x10;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x5f] = puVar5;
  *(undefined4 *)((long)param_1 + 0x324) = 0;
  param_1[0x69] = &PTR_LAB_04b72bb0;
  memcpy(param_1 + 0x6a,(void *)(param_2 + 8),0x116);
  param_1[0x8e] = 0;
  param_1[0x8d] = 0x49fff6;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((long)param_1 + 0x485) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = &PTR_LAB_04b72cb8;
  param_1[0x99] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x9a) = 0x3f800000;
  param_1[0x9b] = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x9d] = puVar3;
  param_1[0x9e] = &DAT_0407ebb1;
  puVar6 = PTR_DAT_04bb34f8 + 0x10;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0x9c] = puVar6;
  *(undefined4 *)((long)param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_038e1bac(param_1 + 0xa1,1);
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xab] = "NoName";
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = puVar3;
  param_1[0xb1] = &DAT_0407ebb1;
  *(undefined4 *)((long)param_1 + 0x544) = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)((long)param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa7] = 0x800000008;
  *(undefined4 *)(param_1 + 0xa8) = 8;
  puVar3 = PTR_DAT_04bd0f38 + 0x10;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  param_1[0x9c] = puVar3;
  *(undefined4 *)((long)param_1 + 0x554) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0x404;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  puVar3 = PTR_DAT_04bc95a8 + 0x10;
  param_1[0xbc] = &DAT_3f8000003f800000;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x5f4) = 0x3f800000;
  param_1[0xbb] = puVar3;
  if (param_1[0x2a] == 0) {
    param_1[0x28] = FUN_03b00260;
    param_1[0x29] = 0;
    param_1[0x26] = &PTR_LAB_04b72cd8;
    param_1[0x27] = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x2a] + 0x20));
    param_1[0x28] = FUN_03b00260;
    param_1[0x29] = 0;
    param_1[0x26] = &PTR_LAB_04b72cd8;
    param_1[0x27] = param_1;
    if (param_1[0x2a] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x2a] + 0x20));
    }
  }
  param_1[0x25] = "gsys::SystemTask::PreCalc";
  if (param_1[0x3d] == 0) {
    param_1[0x3b] = &LAB_03b00b10;
    param_1[0x3c] = 0;
    param_1[0x39] = &PTR_LAB_04b72cd8;
    param_1[0x3a] = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x3d] + 0x20));
    param_1[0x3b] = &LAB_03b00b10;
    param_1[0x3c] = 0;
    param_1[0x39] = &PTR_LAB_04b72cd8;
    param_1[0x3a] = param_1;
    if (param_1[0x3d] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x3d] + 0x20));
    }
  }
  param_1[0x38] = "gsys::SystemTask::PostCalc";
  if (param_1[0x50] == 0) {
    param_1[0x4d] = param_1;
    param_1[0x4e] = &LAB_03b01904;
    param_1[0x4f] = 0;
    param_1[0x4c] = &PTR_LAB_04b72cd8;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x50] + 0x20));
    param_1[0x4d] = param_1;
    param_1[0x4e] = &LAB_03b01904;
    param_1[0x4f] = 0;
    param_1[0x4c] = &PTR_LAB_04b72cd8;
    if (param_1[0x50] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x50] + 0x20));
    }
  }
  param_1[0x4b] = "gsys::SystemTask::DrawTV";
  if (param_1[99] == 0) {
    param_1[0x60] = param_1;
    param_1[0x61] = &LAB_03b01fb4;
    param_1[0x62] = 0;
    param_1[0x5f] = &PTR_LAB_04b72cd8;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[99] + 0x20));
    param_1[0x60] = param_1;
    param_1[0x61] = &LAB_03b01fb4;
    param_1[0x62] = 0;
    param_1[0x5f] = &PTR_LAB_04b72cd8;
    if (param_1[99] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[99] + 0x20));
    }
  }
  param_1[0x96] = 0;
  param_1[0x5e] = "gsys::SystemTask::PostDrawTV";
  *(undefined1 *)(param_1 + 0x97) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  return;
}

