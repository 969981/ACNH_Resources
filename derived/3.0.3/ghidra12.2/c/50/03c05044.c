
void FUN_03c05044(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined *local_70;
  char *pcStack_68;
  
  puVar5 = PTR_DAT_04bd0d40;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar12 = param_1 + 1;
  *plVar12 = (long)(puVar5 + 0x10);
  puVar4 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar7 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar12);
    param_1[2] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar10 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)plVar12);
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  plVar11 = param_1 + 0xd;
  *plVar11 = (long)(puVar5 + 0x10);
  puVar2 = PTR_DAT_04bcbba0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar3 = PTR_DAT_04bcbba8;
  lVar7 = *(long *)puVar4;
  param_1[0xe] = 0;
  param_1[7] = plVar12;
  param_1[8] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[1] = puVar2 + 0x10;
  param_1[9] = puVar3 + 0x10;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,plVar11);
    param_1[0xe] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar10 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar10;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)plVar11);
      *plVar10 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  plVar12 = param_1 + 0x19;
  *plVar12 = (long)(puVar5 + 0x10);
  param_1[0xd] = &PTR_LAB_04b7c708;
  param_1[0x1a] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = &PTR_LAB_04b7c728;
  param_1[0x13] = plVar11;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,plVar12);
    param_1[0x1a] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar10 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)plVar12);
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x19] = &PTR_LAB_04b7c6e8;
  puVar1 = param_1 + 0x25;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = plVar12;
  param_1[0x20] = 0;
  param_1[0x21] = &PTR_LAB_04b7c750;
  param_1[0x25] = puVar5 + 0x10;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x26] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x2b] = puVar1;
  param_1[0x2c] = 0;
  puVar1 = param_1 + 0x31;
  param_1[0x25] = &PTR_LAB_04b7c6e8;
  param_1[0x2d] = &PTR_LAB_04b7c750;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x31] = puVar5 + 0x10;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x32] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x37] = puVar1;
  param_1[0x38] = 0;
  puVar1 = param_1 + 0x3d;
  param_1[0x31] = &PTR_LAB_04b7c6e8;
  param_1[0x39] = &PTR_LAB_04b7c750;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3d] = puVar5 + 0x10;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x3e] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x43] = puVar1;
  puVar1 = param_1 + 0x49;
  param_1[0x3d] = &PTR_LAB_04b7c6e8;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = &PTR_LAB_04b7c750;
  param_1[0x49] = puVar5 + 0x10;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x4a] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x4f] = puVar1;
  puVar1 = param_1 + 0x55;
  param_1[0x49] = &PTR_LAB_04b7c6e8;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = &PTR_LAB_04b7c750;
  param_1[0x55] = puVar5 + 0x10;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x56] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x55] = &PTR_FUN_04b7c6c8;
  param_1[0x5b] = puVar1;
  puVar1 = param_1 + 0x62;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = &PTR_LAB_04b7c778;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x62] = puVar5 + 0x10;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[99] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  puVar2 = puVar2 + 0x10;
  param_1[0x66] = 0;
  param_1[0x62] = puVar2;
  param_1[0x67] = 0;
  param_1[0x68] = puVar1;
  puVar1 = param_1 + 0x6e;
  param_1[0x69] = 0;
  lVar7 = *(long *)puVar4;
  puVar3 = PTR_DAT_04bcbba8 + 0x10;
  param_1[0x6e] = puVar5 + 0x10;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6a] = puVar3;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x6f] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x74] = puVar1;
  param_1[0x76] = puVar3;
  puVar1 = param_1 + 0x7a;
  param_1[0x6e] = puVar2;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x75] = 0;
  param_1[0x7a] = puVar5 + 0x10;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x7b] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  param_1[0x7e] = 0;
  puVar2 = PTR_DAT_04bc1068;
  param_1[0x7f] = 0;
  puVar3 = PTR_DAT_04bcbb98;
  lVar7 = *(long *)puVar4;
  param_1[0x80] = puVar1;
  puVar1 = param_1 + 0x86;
  param_1[0x86] = puVar5 + 0x10;
  param_1[0x81] = 0;
  param_1[0x87] = 0;
  param_1[0x7a] = puVar2 + 0x10;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x82] = puVar3 + 0x10;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x87] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x8c] = puVar1;
  puVar1 = param_1 + 0x92;
  param_1[0x86] = puVar2 + 0x10;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = puVar3 + 0x10;
  param_1[0x92] = puVar5 + 0x10;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x93] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x92] = &PTR_FUN_04b7c6a8;
  param_1[0x98] = puVar1;
  puVar1 = param_1 + 0x9e;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = &PTR_LAB_04b7c7a0;
  param_1[0x9e] = puVar5 + 0x10;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x9f] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar9 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  param_1[0xa2] = 0;
  param_1[0x9e] = &PTR_FUN_04b7c688;
  param_1[0x6a] = &PTR_LAB_04b7c7c8;
  param_1[0xb] = &LAB_03c05b60;
  param_1[0xc] = 0;
  param_1[9] = &PTR_LAB_04b7c7c8;
  param_1[10] = param_1;
  param_1[0x76] = &PTR_LAB_04b7c7c8;
  param_1[0x78] = &LAB_03c05f10;
  param_1[0x82] = &DAT_04b7c868;
  param_1[0x8e] = &DAT_04b7c868;
  param_1[0x90] = &LAB_03c05f2c;
  param_1[0x9a] = &PTR_LAB_04b7c890;
  param_1[0x9c] = &LAB_03c05f44;
  param_1[0xa3] = 0;
  param_1[0xa4] = puVar1;
  param_1[0xa5] = 0;
  param_1[0x46] = param_1;
  param_1[0x48] = 0;
  param_1[0x52] = param_1;
  param_1[0x54] = 0;
  param_1[0x5e] = param_1;
  param_1[0x60] = 0;
  param_1[0x6b] = param_1;
  param_1[0x6d] = 0;
  param_1[0x77] = param_1;
  param_1[0x79] = 0;
  param_1[0x83] = param_1;
  param_1[0x85] = 0;
  param_1[0x8f] = param_1;
  param_1[0x91] = 0;
  param_1[0x9b] = param_1;
  param_1[0x9d] = 0;
  param_1[0xa6] = &PTR_LAB_04b7c8b8;
  param_1[0xa7] = param_1;
  param_1[0x17] = &LAB_03c05bec;
  param_1[0x18] = 0;
  param_1[0x45] = &PTR_LAB_04b7c818;
  param_1[0x51] = &PTR_LAB_04b7c818;
  param_1[0x21] = &PTR_LAB_04b7c818;
  param_1[0x22] = param_1;
  param_1[0x2d] = &PTR_LAB_04b7c818;
  param_1[0x2e] = param_1;
  param_1[0x39] = &PTR_LAB_04b7c818;
  param_1[0x3a] = param_1;
  param_1[0x53] = &LAB_03c05dc0;
  param_1[0x5d] = &PTR_LAB_04b7c840;
  param_1[0x5f] = &LAB_03c05e00;
  param_1[0x6c] = &LAB_03c05ea4;
  param_1[0x84] = &LAB_03c05f14;
  param_1[0x15] = &PTR_LAB_04b7c7f0;
  param_1[0x16] = param_1;
  param_1[0x23] = &LAB_03c05c78;
  param_1[0x24] = 0;
  param_1[0x2f] = &LAB_03c05c90;
  param_1[0x30] = 0;
  param_1[0x3b] = &LAB_03c05ca8;
  param_1[0x3c] = 0;
  param_1[0x47] = &LAB_03c05d40;
  puVar4 = PTR_DAT_04bb2668;
  param_1[0xa8] = &LAB_03c06064;
  param_1[0xa9] = 0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "IsFieldTest";
  pcVar8 = (char *)FUN_038b0130(*(undefined8 *)puVar4,&local_70,1);
  if (pcVar8 == (char *)0x0) {
    bVar6 = false;
  }
  else {
    bVar6 = *pcVar8 != '\0';
  }
  *(bool *)(param_1 + 0x61) = bVar6;
  return;
}

