
void FUN_0386b604(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  FUN_03c11314(param_1,param_2,"UISysSequeceMgr");
  *param_1 = &PTR_FUN_04b5fdd0;
  FUN_038e18e4(param_1 + 0x45);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((long)param_1 + 0x26c) = 0;
  FUN_038e3114(param_1 + 0x4e,0,0x7fff);
  *(undefined4 *)(param_1 + 0x57) = 0;
  FUN_038e3114(param_1 + 0x58,0,0x7fff);
  puVar1 = param_1 + 0x65;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = puVar1;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x6e] = puVar2;
  puVar3 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x6f] = &DAT_0407ebb1;
  param_1[0x66] = 0;
  param_1[0x65] = puVar3;
  puVar8 = PTR_DAT_04bb2698;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  if (*(long *)puVar8 != 0) {
    lVar9 = FUN_038cb610(*(long *)puVar8,puVar1);
    param_1[0x66] = lVar9;
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
      plVar10 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar1);
      *plVar12 = (long)plVar10;
      *plVar10 = lVar11;
      plVar10[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar10;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  param_1[0x76] = 0;
  puVar7 = PTR_DAT_04bb24a8;
  param_1[0x77] = 0;
  puVar1 = param_1 + 0x78;
  param_1[0x71] = 0;
  puVar4 = puVar7 + 0x10;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  lVar9 = *(long *)puVar8;
  puVar5 = PTR_DAT_04bb24b0 + 0x10;
  param_1[0x65] = puVar4;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = puVar1;
  param_1[0x70] = puVar5;
  param_1[0x81] = puVar2;
  param_1[0x82] = &DAT_0407ebb1;
  param_1[0x78] = puVar3;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  if (lVar9 != 0) {
    lVar9 = FUN_038cb610(lVar9,puVar1);
    param_1[0x79] = lVar9;
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
      plVar10 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar1);
      *plVar12 = (long)plVar10;
      *plVar10 = lVar11;
      plVar10[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar10;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  puVar1 = param_1 + 0x8b;
  param_1[0x78] = puVar4;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x83] = puVar5;
  *(undefined4 *)((long)param_1 + 0x444) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = puVar1;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x95] = &DAT_0407ebb1;
  param_1[0x94] = puVar2;
  puVar3 = PTR_DAT_04bd0d40;
  lVar9 = *(long *)puVar8;
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = puVar2;
  if (lVar9 != 0) {
    lVar9 = FUN_038cb610(lVar9,puVar1);
    param_1[0x8c] = lVar9;
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
      plVar10 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar1);
      *plVar12 = (long)plVar10;
      *plVar10 = lVar11;
      plVar10[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar10;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  param_1[0x9c] = 0;
  param_1[0x8b] = puVar7 + 0x10;
  param_1[0x9d] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  puVar2 = PTR_DAT_04bb24b0 + 0x10;
  param_1[0xa0] = 0x2000000000;
  *(undefined4 *)((long)param_1 + 0x4dc) = 0;
  param_1[0xa3] = 0x3000000000;
  param_1[0x96] = puVar2;
  param_1[0x9f] = param_1 + 0x9e;
  param_1[0x9e] = param_1 + 0x9e;
  param_1[0xa2] = param_1 + 0xa1;
  param_1[0xa1] = param_1 + 0xa1;
  FUN_038e18e4(param_1 + 0xa4);
  param_1[0xac] = 0;
  if (param_1[0x74] == 0) {
    param_1[0x71] = param_1;
    param_1[0x72] = &LAB_0386bc30;
    param_1[0x73] = 0;
    param_1[0x70] = &PTR_LAB_04b5fea8;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x74] + 0x20));
    param_1[0x71] = param_1;
    param_1[0x72] = &LAB_0386bc30;
    param_1[0x73] = 0;
    param_1[0x70] = &PTR_LAB_04b5fea8;
    if (param_1[0x74] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x74] + 0x20));
    }
  }
  param_1[0x6f] = "UISys::SequenceMgr::preCalc_";
  if (param_1[0x87] == 0) {
    param_1[0x84] = param_1;
    param_1[0x85] = &LAB_0386be70;
    param_1[0x86] = 0;
    param_1[0x83] = &PTR_LAB_04b5fea8;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x87] + 0x20));
    param_1[0x84] = param_1;
    param_1[0x85] = &LAB_0386be70;
    param_1[0x86] = 0;
    param_1[0x83] = &PTR_LAB_04b5fea8;
    if (param_1[0x87] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x87] + 0x20));
    }
  }
  param_1[0x82] = "UISys::SequenceMgr::referScene_";
  if (param_1[0x9a] == 0) {
    param_1[0x97] = param_1;
    param_1[0x98] = &LAB_0386bff0;
    param_1[0x99] = 0;
    param_1[0x96] = &PTR_LAB_04b5fea8;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x9a] + 0x20));
    param_1[0x97] = param_1;
    param_1[0x98] = &LAB_0386bff0;
    param_1[0x99] = 0;
    param_1[0x96] = &PTR_LAB_04b5fea8;
    if (param_1[0x9a] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x9a] + 0x20));
    }
  }
  param_1[0x95] = "UISys::SequenceMgr::referLayout_";
  puVar4 = PTR_DAT_04bc4eb8;
  puVar2 = PTR_DAT_04bb3350;
  if (*(long *)PTR_DAT_04bc4eb8 == 0) {
    lVar9 = *(long *)puVar8;
    if (lVar9 == 0) {
      plVar10 = malloc(0x30);
    }
    else {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar9 + 8);
      if (lVar14 != 0) {
        plVar10 = (long *)(lVar14 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x30,8);
      }
    }
    lVar9 = *(long *)puVar8;
    plVar12 = plVar10 + 2;
    *plVar12 = (long)(puVar3 + 0x10);
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[3] = 0;
    if (lVar9 != 0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar14 != 0) {
        plVar6 = (long *)(lVar14 + 0xa8);
      }
      lVar9 = *plVar6;
      plVar10[3] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar13 = (long *)(lVar9 + 0x70);
        lVar11 = *plVar13;
        plVar6 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar12);
        *plVar13 = (long)plVar6;
        *plVar6 = lVar11;
        plVar6[1] = (long)plVar13;
        if (lVar11 != 0) {
          *(long **)(lVar11 + 8) = plVar6;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar14 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
        }
      }
    }
    puVar2 = PTR_DAT_04bcb530 + 0x10;
    *(long **)PTR_DAT_04bcb538 = plVar12;
    plVar10[2] = (long)puVar2;
    puVar2 = PTR_DAT_04bcb540;
    *(undefined4 *)(plVar10 + 1) = 0;
    *plVar10 = (long)(puVar2 + 0x10);
    *(long **)puVar4 = plVar10;
  }
  if (*(long *)PTR_DAT_04bb2908 == 0) {
    FUN_0386d0bc(0);
    return;
  }
  return;
}

