
void FUN_007b80e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  puVar5 = PTR_DAT_04bd0d40;
  puVar1 = PTR_DAT_04bb2020;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_04912710;
  puVar1 = puVar1 + 0x10;
  param_1[0xb] = &DAT_0407ebb1;
  plVar13 = param_1 + 1;
  *plVar13 = (long)(puVar5 + 0x10);
  param_1[9] = plVar13;
  param_1[10] = puVar1;
  param_1[2] = 0;
  puVar2 = PTR_DAT_04bb2698;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*(long *)puVar2 != 0) {
    lVar9 = FUN_038cb610(*(long *)puVar2,plVar13);
    param_1[2] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar12 = (long *)(lVar9 + 0x70);
      lVar11 = *plVar12;
      plVar13 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar13);
      *plVar12 = (long)plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar13;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  puVar7 = PTR_DAT_04bb24a8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar2 = PTR_DAT_04bb24b0 + 0x10;
  param_1[1] = puVar7 + 0x10;
  param_1[0xc] = puVar2;
  param_1[0xd] = 0;
  puVar8 = PTR_DAT_04bdf1b8;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x14] = puVar8 + 0x10;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  puVar3 = PTR_DAT_04bd0e58 + 0x10;
  param_1[0x1f] = puVar3;
  param_1[0x20] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x23),0,0);
  puVar6 = PTR_DAT_04bb2120;
  param_1[0x25] = puVar1;
  param_1[0x26] = puVar6;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x23));
  puVar4 = param_1 + 0x2b;
  param_1[0x35] = &DAT_0407ebb1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = &PTR_LAB_04912828;
  param_1[0x28] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = puVar4;
  param_1[0x34] = puVar1;
  param_1[0x2b] = puVar5 + 0x10;
  param_1[0x2c] = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (lVar9 != 0) {
    lVar9 = FUN_038cb610(lVar9,puVar4);
    param_1[0x2c] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar12 = (long *)(lVar9 + 0x70);
      lVar11 = *plVar12;
      plVar13 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar4);
      *plVar12 = (long)plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar13;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  param_1[0x2b] = puVar7 + 0x10;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)((long)param_1 + 0x1dc) = 0;
  param_1[0x3e] = puVar8 + 0x10;
  *(undefined2 *)(param_1 + 0x3f) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = puVar3;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = puVar2;
  param_1[0x37] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x4d),0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x4f] = puVar2;
  param_1[0x50] = PTR_DAT_04bb2120;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4d));
  puVar4 = param_1 + 0x55;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = &PTR_LAB_04912828;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = puVar4;
  param_1[0x5e] = puVar2;
  param_1[0x5f] = &DAT_0407ebb1;
  puVar3 = PTR_DAT_04bd0d40;
  lVar9 = *(long *)puVar1;
  puVar5 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = puVar5;
  if (lVar9 != 0) {
    lVar9 = FUN_038cb610(lVar9,puVar4);
    param_1[0x56] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar12 = (long *)(lVar9 + 0x70);
      lVar11 = *plVar12;
      plVar13 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar4);
      *plVar12 = (long)plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar13;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  puVar6 = PTR_DAT_04bb24a8;
  puVar4 = param_1 + 0x68;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x55] = puVar6 + 0x10;
  puVar7 = PTR_DAT_04bb24b0;
  lVar9 = *(long *)puVar1;
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = puVar4;
  param_1[0x71] = puVar2;
  param_1[0x72] = &DAT_0407ebb1;
  param_1[0x68] = puVar5;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x60] = puVar7 + 0x10;
  if (lVar9 != 0) {
    lVar9 = FUN_038cb610(lVar9,puVar4);
    param_1[0x69] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar12 = (long *)(lVar9 + 0x70);
      lVar11 = *plVar12;
      plVar13 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar4);
      *plVar12 = (long)plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar13;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  puVar4 = param_1 + 0x7b;
  param_1[0x68] = puVar6 + 0x10;
  param_1[0x79] = 0;
  puVar2 = puVar3 + 0x10;
  param_1[0x7a] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x73] = puVar7 + 0x10;
  *(undefined4 *)((long)param_1 + 0x3c4) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = puVar4;
  lVar9 = *(long *)puVar1;
  puVar5 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x85] = &DAT_0407ebb1;
  param_1[0x84] = puVar5;
  param_1[0x7b] = puVar2;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  if (lVar9 != 0) {
    lVar9 = FUN_038cb610(lVar9,puVar4);
    param_1[0x7c] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar12 = (long *)(lVar9 + 0x70);
      lVar11 = *plVar12;
      plVar13 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar4);
      *plVar12 = (long)plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar13;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  puVar6 = PTR_DAT_04bb24a8;
  puVar4 = param_1 + 0x8e;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x7b] = puVar6 + 0x10;
  puVar7 = PTR_DAT_04bb24b0;
  lVar9 = *(long *)puVar1;
  *(undefined4 *)((long)param_1 + 0x45c) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = puVar4;
  param_1[0x97] = puVar5;
  param_1[0x98] = &DAT_0407ebb1;
  param_1[0x8e] = puVar2;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x86] = puVar7 + 0x10;
  if (lVar9 != 0) {
    lVar9 = FUN_038cb610(lVar9,puVar4);
    param_1[0x8f] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar12 = (long *)(lVar9 + 0x70);
      lVar11 = *plVar12;
      plVar13 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar4);
      *plVar12 = (long)plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar13;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  param_1[0x8e] = puVar6 + 0x10;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x99] = puVar7 + 0x10;
  *(undefined4 *)((long)param_1 + 0x4f4) = 0;
  param_1[0xa1] = 0;
  uVar10 = nn::os::GetSystemTick();
  param_1[0xa2] = uVar10;
  param_1[0xa3] = 0;
  uVar10 = nn::os::GetSystemTick();
  param_1[0xa4] = uVar10;
  lVar9 = *(long *)puVar1;
  puVar4 = param_1 + 0xaa;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xaa] = puVar3 + 0x10;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  if (lVar9 != 0) {
    lVar9 = FUN_038cb610(lVar9,puVar4);
    param_1[0xab] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar12 = (long *)(lVar9 + 0x70);
      lVar11 = *plVar12;
      plVar13 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar4);
      *plVar12 = (long)plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar13;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  puVar1 = PTR_DAT_04bb2418;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  puVar2 = PTR_DAT_04bb2420;
  param_1[0xb0] = puVar4;
  param_1[0xb1] = 0;
  *(undefined2 *)(param_1 + 0xb6) = 0;
  param_1[0xaa] = puVar1 + 0x10;
  param_1[0xb2] = puVar2 + 0x10;
  if (param_1[0x10] == 0) {
    param_1[0xe] = FUN_007b8a74;
    param_1[0xf] = 0;
    param_1[0xc] = &PTR_LAB_04912878;
    param_1[0xd] = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x10] + 0x20));
    param_1[0xe] = FUN_007b8a74;
    param_1[0xf] = 0;
    param_1[0xc] = &PTR_LAB_04912878;
    param_1[0xd] = param_1;
    if (param_1[0x10] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x10] + 0x20));
    }
  }
  param_1[0xb] = "AppSys::FrontFrameCalc";
  if (param_1[0x3a] == 0) {
    param_1[0x38] = &LAB_007b8b00;
    param_1[0x39] = 0;
    param_1[0x36] = &PTR_LAB_04912878;
    param_1[0x37] = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x3a] + 0x20));
    param_1[0x38] = &LAB_007b8b00;
    param_1[0x39] = 0;
    param_1[0x36] = &PTR_LAB_04912878;
    param_1[0x37] = param_1;
    if (param_1[0x3a] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x3a] + 0x20));
    }
  }
  param_1[0x35] = "AppSys::PostCtrlMgrCalc";
  if (param_1[100] == 0) {
    param_1[0x61] = param_1;
    param_1[0x62] = &LAB_007b8cb0;
    param_1[99] = 0;
    param_1[0x60] = &PTR_LAB_04912878;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[100] + 0x20));
    param_1[0x61] = param_1;
    param_1[0x62] = &LAB_007b8cb0;
    param_1[99] = 0;
    param_1[0x60] = &PTR_LAB_04912878;
    if (param_1[100] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[100] + 0x20));
    }
  }
  param_1[0x5f] = "AppSys::PreCalc";
  if (param_1[0x77] == 0) {
    param_1[0x74] = param_1;
    param_1[0x75] = &LAB_007b9ce0;
    param_1[0x76] = 0;
    param_1[0x73] = &PTR_LAB_04912878;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x77] + 0x20));
    param_1[0x74] = param_1;
    param_1[0x75] = &LAB_007b9ce0;
    param_1[0x76] = 0;
    param_1[0x73] = &PTR_LAB_04912878;
    if (param_1[0x77] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x77] + 0x20));
    }
  }
  param_1[0x72] = "AppSys::PostCalc";
  if (param_1[0x8a] == 0) {
    param_1[0x87] = param_1;
    param_1[0x88] = &LAB_007ba270;
    param_1[0x89] = 0;
    param_1[0x86] = &PTR_LAB_04912878;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x8a] + 0x20));
    param_1[0x87] = param_1;
    param_1[0x88] = &LAB_007ba270;
    param_1[0x89] = 0;
    param_1[0x86] = &PTR_LAB_04912878;
    if (param_1[0x8a] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x8a] + 0x20));
    }
  }
  param_1[0x85] = "AppSys::PostUICalc";
  if (param_1[0x9d] == 0) {
    param_1[0x9a] = param_1;
    param_1[0x9b] = &LAB_007ba430;
    param_1[0x9c] = 0;
    param_1[0x99] = &PTR_LAB_04912878;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x9d] + 0x20));
    param_1[0x9a] = param_1;
    param_1[0x9b] = &LAB_007ba430;
    param_1[0x9c] = 0;
    param_1[0x99] = &PTR_LAB_04912878;
    if (param_1[0x9d] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x9d] + 0x20));
    }
  }
  param_1[0x2a] = 0;
  param_1[0x98] = "AppSys::PostGSys";
  param_1[0x52] = param_1;
  param_1[0x28] = param_1;
  param_1[0x29] = &LAB_007ba568;
  param_1[0x53] = &LAB_007ba5b8;
  param_1[0x54] = 0;
  return;
}

