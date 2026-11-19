
void FUN_038bc12c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  
  plVar1 = param_1 + 1;
  *param_1 = (long)(PTR_DAT_04bd0cd0 + 0x10);
  FUN_038e18e4(plVar1);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar3 = PTR_DAT_04bd0d40;
  puVar2 = PTR_DAT_04bb2020;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (long)&PTR_FUN_04b63b48;
  param_1[0x13] = (long)&DAT_0407ebb1;
  plVar18 = param_1 + 9;
  *plVar18 = (long)(puVar3 + 0x10);
  param_1[0x11] = (long)plVar18;
  param_1[0x12] = (long)(puVar2 + 0x10);
  param_1[10] = 0;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar18);
    param_1[10] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar9 = (long *)(lVar6 + 0x70);
      lVar8 = *plVar9;
      plVar17 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar18);
      *plVar9 = (long)plVar17;
      *plVar17 = lVar8;
      plVar17[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar17;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar16 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x20));
      }
    }
  }
  plVar17 = param_1 + 0x1c;
  *plVar17 = (long)(puVar3 + 0x10);
  param_1[0x18] = (long)plVar1;
  param_1[0x1a] = 0;
  puVar3 = PTR_DAT_04bb24a8;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar4 = PTR_DAT_04bb24b0;
  param_1[0x24] = (long)plVar17;
  param_1[0x25] = (long)(puVar2 + 0x10);
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  param_1[9] = (long)(puVar3 + 0x10);
  param_1[0x26] = (long)&DAT_0407ebb1;
  param_1[0x1d] = 0;
  param_1[0x14] = (long)(puVar4 + 0x10);
  param_1[0x15] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar17);
    param_1[0x1d] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar10 = (long *)(lVar6 + 0x70);
      lVar8 = *plVar10;
      plVar9 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar17);
      *plVar10 = (long)plVar9;
      *plVar9 = lVar8;
      plVar9[1] = (long)plVar10;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar9;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar16 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x20));
      }
    }
  }
  param_1[0x1c] = (long)(puVar3 + 0x10);
  plVar9 = param_1 + 0x2f;
  param_1[0x2a] = 0;
  param_1[0x2b] = (long)plVar1;
  param_1[0x27] = (long)(puVar4 + 0x10);
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x39] = (long)&DAT_0407ebb1;
  param_1[0x37] = (long)plVar9;
  param_1[0x38] = (long)puVar2;
  puVar3 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0x2f] = (long)puVar3;
  param_1[0x30] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar9);
    param_1[0x30] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar11 = (long *)(lVar6 + 0x70);
      lVar8 = *plVar11;
      plVar10 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar9);
      *plVar11 = (long)plVar10;
      *plVar10 = lVar8;
      plVar10[1] = (long)plVar11;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar10;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar16 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x20));
      }
    }
  }
  puVar4 = PTR_DAT_04bb24a8;
  plVar10 = param_1 + 0x42;
  param_1[0x3d] = 0;
  param_1[0x3e] = (long)plVar1;
  param_1[0x3c] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x2f] = (long)(puVar4 + 0x10);
  puVar5 = PTR_DAT_04bb24b0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = (long)plVar10;
  param_1[0x4b] = (long)puVar2;
  param_1[0x42] = (long)puVar3;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x4c] = (long)&DAT_0407ebb1;
  param_1[0x3a] = (long)(puVar5 + 0x10);
  param_1[0x3b] = 0;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0x43] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar10);
    param_1[0x43] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar12 = (long *)(lVar6 + 0x70);
      lVar8 = *plVar12;
      plVar11 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar10);
      *plVar12 = (long)plVar11;
      *plVar11 = lVar8;
      plVar11[1] = (long)plVar12;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar11;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar16 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x20));
      }
    }
  }
  plVar11 = param_1 + 0x55;
  param_1[0x42] = (long)(puVar4 + 0x10);
  param_1[0x51] = (long)plVar1;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x4d] = (long)(puVar5 + 0x10);
  *(undefined4 *)((long)param_1 + 0x294) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = (long)plVar11;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x5e] = (long)puVar2;
  param_1[0x5f] = (long)&DAT_0407ebb1;
  puVar3 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x55] = (long)puVar3;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0x56] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar11);
    param_1[0x56] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar13 = (long *)(lVar6 + 0x70);
      lVar8 = *plVar13;
      plVar12 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar11);
      *plVar13 = (long)plVar12;
      *plVar12 = lVar8;
      plVar12[1] = (long)plVar13;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar12;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar16 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x20));
      }
    }
  }
  puVar4 = PTR_DAT_04bb24a8;
  plVar12 = param_1 + 0x68;
  param_1[100] = (long)plVar1;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x55] = (long)(puVar4 + 0x10);
  puVar5 = PTR_DAT_04bb24b0;
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = (long)plVar12;
  param_1[0x71] = (long)puVar2;
  param_1[0x68] = (long)puVar3;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x60] = (long)(puVar5 + 0x10);
  param_1[0x72] = (long)&DAT_0407ebb1;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0x69] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar12);
    param_1[0x69] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar14 = (long *)(lVar6 + 0x70);
      lVar8 = *plVar14;
      plVar13 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar12);
      *plVar14 = (long)plVar13;
      *plVar13 = lVar8;
      plVar13[1] = (long)plVar14;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar13;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar16 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x20));
      }
    }
  }
  plVar13 = param_1 + 0x7b;
  param_1[0x68] = (long)(puVar4 + 0x10);
  param_1[0x77] = (long)plVar1;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x73] = (long)(puVar5 + 0x10);
  *(undefined4 *)((long)param_1 + 0x3c4) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = (long)plVar13;
  param_1[0x84] = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[0x85] = (long)&DAT_0407ebb1;
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7b] = (long)puVar2;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0x7c] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar13);
    param_1[0x7c] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar15 = (long *)(lVar6 + 0x70);
      lVar8 = *plVar15;
      plVar14 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar13);
      *plVar15 = (long)plVar14;
      *plVar14 = lVar8;
      plVar14[1] = (long)plVar15;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar14;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar16 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x20));
      }
    }
  }
  param_1[0x8a] = (long)plVar1;
  puVar2 = PTR_DAT_04bb24a8;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x7b] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bb24b0;
  *(undefined4 *)((long)param_1 + 0x45c) = 0;
  param_1[0x86] = (long)(puVar2 + 0x10);
  param_1[0x13] = (long)"sead::RootCalc";
  param_1[0x26] = (long)"sead::SysCalc";
  param_1[0x39] = (long)"sead::AppCalc";
  param_1[0x4c] = (long)"sead::RootDraw";
  param_1[0x5f] = (long)"sead::SysDraw";
  param_1[0x72] = (long)"sead::AppDraw";
  param_1[0x85] = (long)"sead::AppDrawFinal";
  FUN_038bbab4(plVar18,plVar17);
  FUN_038bbab4(plVar18,plVar9);
  FUN_038bbab4(plVar10,plVar12);
  FUN_038bbab4(plVar10,plVar13);
  FUN_038bbab4(plVar10,plVar11);
  if (param_1[0x2b] != 0) {
    nn::os::LockMutex((MutexType *)(param_1[0x2b] + 0x20));
  }
  puVar7 = (undefined8 *)param_1[0x2d];
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,plVar17,0);
  }
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  if (param_1[0x2b] != 0) {
    nn::os::UnlockMutex((MutexType *)(param_1[0x2b] + 0x20));
  }
  if (param_1[100] != 0) {
    nn::os::LockMutex((MutexType *)(param_1[100] + 0x20));
  }
  puVar7 = (undefined8 *)param_1[0x66];
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,plVar11,0);
  }
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  if (param_1[100] != 0) {
    nn::os::UnlockMutex((MutexType *)(param_1[100] + 0x20));
  }
  if (param_1[0x3e] != 0) {
    nn::os::LockMutex((MutexType *)(param_1[0x3e] + 0x20));
  }
  puVar7 = (undefined8 *)param_1[0x40];
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,plVar9,0);
  }
  *(undefined4 *)((long)param_1 + 0x1fc) = 0;
  if (param_1[0x3e] != 0) {
    nn::os::UnlockMutex((MutexType *)(param_1[0x3e] + 0x20));
  }
  if (param_1[0x77] != 0) {
    nn::os::LockMutex((MutexType *)(param_1[0x77] + 0x20));
  }
  puVar7 = (undefined8 *)param_1[0x79];
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,plVar12,0);
  }
  *(undefined4 *)((long)param_1 + 0x3c4) = 0;
  if (param_1[0x77] != 0) {
    nn::os::UnlockMutex((MutexType *)(param_1[0x77] + 0x20));
  }
  if (param_1[0x8a] != 0) {
    nn::os::LockMutex((MutexType *)(param_1[0x8a] + 0x20));
  }
  puVar7 = (undefined8 *)param_1[0x8c];
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,plVar13,0);
  }
  *(undefined4 *)((long)param_1 + 0x45c) = 0;
  if (param_1[0x8a] != 0) {
    nn::os::UnlockMutex((MutexType *)(param_1[0x8a] + 0x20));
  }
  if (param_1[0x18] != 0) {
    nn::os::LockMutex((MutexType *)(param_1[0x18] + 0x20));
  }
  puVar7 = (undefined8 *)param_1[0x1a];
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,plVar18,3);
  }
  *(undefined4 *)((long)param_1 + 0xcc) = 3;
  if (param_1[0x18] != 0) {
    nn::os::UnlockMutex((MutexType *)(param_1[0x18] + 0x20));
  }
  if (param_1[0x51] != 0) {
    nn::os::LockMutex((MutexType *)(param_1[0x51] + 0x20));
  }
  puVar7 = (undefined8 *)param_1[0x53];
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,plVar10,3);
  }
  *(undefined4 *)((long)param_1 + 0x294) = 3;
  if (param_1[0x51] == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(param_1[0x51] + 0x20));
  return;
}

