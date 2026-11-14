
void FUN_01908790(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bbf180;
  *param_1 = &PTR_FUN_049d7590;
  param_1[0x8b] = puVar2 + 0x10;
  param_1[0x8f] = puVar2 + 0x98;
  plVar4 = (long *)param_1[0x94];
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x94];
  }
  *(undefined4 *)(param_1 + 0x9a) = 0;
  if (param_1[0x97] != 0) {
    if (0 < *(int *)(param_1 + 0x96)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x97] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x98];
        param_1[0x98] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x96));
    }
    pvVar6 = (void *)param_1[0x99];
    *(undefined4 *)(param_1 + 0x96) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x4cc) = 0;
    *(undefined8 *)((long)param_1 + 0x4c4) = 0;
    *(undefined8 *)((long)param_1 + 0x4bc) = 0;
    *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  }
  puVar3 = PTR_DAT_04bd0d40;
  lVar7 = param_1[0x8c];
  param_1[0x8b] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar7 == 0) {
LAB_01908914:
    param_1[0x8c] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x458);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_01908914;
  }
  puVar1 = PTR_DAT_04bb33a8;
  param_1[0x8a] = 0;
  param_1[0x74] = &PTR_LAB_049d8230;
  param_1[0x85] = puVar1 + 0x10;
  param_1[0x78] = &PTR_LAB_049d82b8;
  plVar4 = (long *)param_1[0x7d];
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x7d];
  }
  *(undefined4 *)(param_1 + 0x83) = 0;
  if (param_1[0x80] != 0) {
    if (0 < *(int *)(param_1 + 0x7f)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x80] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x81];
        param_1[0x81] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x7f));
    }
    pvVar6 = (void *)param_1[0x82];
    *(undefined4 *)(param_1 + 0x7f) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x414) = 0;
    *(undefined8 *)((long)param_1 + 0x40c) = 0;
    *(undefined8 *)((long)param_1 + 0x404) = 0;
    *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  }
  lVar7 = param_1[0x75];
  param_1[0x74] = puVar3 + 0x10;
  if (lVar7 == 0) {
LAB_01908a88:
    param_1[0x75] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x3a0);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_01908a88;
  }
  puVar1 = PTR_DAT_04bbf1f8 + 0x98;
  param_1[99] = PTR_DAT_04bbf1f8 + 0x10;
  param_1[0x67] = puVar1;
  plVar4 = (long *)param_1[0x6c];
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x6c];
  }
  *(undefined4 *)(param_1 + 0x72) = 0;
  if (param_1[0x6f] != 0) {
    if (0 < *(int *)(param_1 + 0x6e)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x6f] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x70];
        param_1[0x70] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x6e));
    }
    pvVar6 = (void *)param_1[0x71];
    *(undefined4 *)(param_1 + 0x6e) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x38c) = 0;
    *(undefined8 *)((long)param_1 + 900) = 0;
    *(undefined8 *)((long)param_1 + 0x37c) = 0;
    *(undefined8 *)((long)param_1 + 0x374) = 0;
  }
  lVar7 = param_1[100];
  param_1[99] = puVar3 + 0x10;
  if (lVar7 == 0) {
LAB_01908be8:
    param_1[100] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x318);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_01908be8;
  }
  puVar1 = PTR_DAT_04bbf0d0 + 0x98;
  param_1[0x52] = PTR_DAT_04bbf0d0 + 0x10;
  param_1[0x56] = puVar1;
  plVar4 = (long *)param_1[0x5b];
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x5b];
  }
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (param_1[0x5e] != 0) {
    if (0 < *(int *)(param_1 + 0x5d)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x5e] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x5f];
        param_1[0x5f] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x5d));
    }
    pvVar6 = (void *)param_1[0x60];
    *(undefined4 *)(param_1 + 0x5d) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x304) = 0;
    *(undefined8 *)((long)param_1 + 0x2fc) = 0;
    *(undefined8 *)((long)param_1 + 0x2f4) = 0;
    *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  }
  lVar7 = param_1[0x53];
  param_1[0x52] = puVar3 + 0x10;
  if (lVar7 == 0) {
LAB_01908d48:
    param_1[0x53] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x290);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_01908d48;
  }
  puVar1 = PTR_DAT_04bbf1c0 + 0x98;
  param_1[0x41] = PTR_DAT_04bbf1c0 + 0x10;
  param_1[0x45] = puVar1;
  plVar4 = (long *)param_1[0x4a];
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x4a];
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_1[0x4d] != 0) {
    if (0 < *(int *)(param_1 + 0x4c)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x4d] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x4e];
        param_1[0x4e] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x4c));
    }
    pvVar6 = (void *)param_1[0x4f];
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x27c) = 0;
    *(undefined8 *)((long)param_1 + 0x274) = 0;
    *(undefined8 *)((long)param_1 + 0x26c) = 0;
    *(undefined8 *)((long)param_1 + 0x264) = 0;
  }
  lVar7 = param_1[0x42];
  param_1[0x41] = puVar3 + 0x10;
  if (lVar7 == 0) {
LAB_01908ea8:
    param_1[0x42] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x208);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_01908ea8;
  }
  puVar1 = PTR_DAT_04bbf148 + 0x98;
  param_1[0x30] = PTR_DAT_04bbf148 + 0x10;
  param_1[0x34] = puVar1;
  plVar4 = (long *)param_1[0x39];
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x39];
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3c] != 0) {
    if (0 < *(int *)(param_1 + 0x3b)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x3c] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x3d];
        param_1[0x3d] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x3b));
    }
    pvVar6 = (void *)param_1[0x3e];
    *(undefined4 *)(param_1 + 0x3b) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 500) = 0;
    *(undefined8 *)((long)param_1 + 0x1ec) = 0;
    *(undefined8 *)((long)param_1 + 0x1e4) = 0;
    *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  }
  lVar7 = param_1[0x31];
  param_1[0x30] = puVar3 + 0x10;
  if (lVar7 == 0) {
LAB_01909008:
    param_1[0x31] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x180);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_01909008;
  }
  puVar1 = PTR_DAT_04bbf110 + 0x98;
  param_1[0x1f] = PTR_DAT_04bbf110 + 0x10;
  plVar4 = (long *)param_1[0x28];
  param_1[0x23] = puVar1;
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x28];
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2b] != 0) {
    if (0 < *(int *)(param_1 + 0x2a)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x2b] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x2c];
        param_1[0x2c] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x2a));
    }
    pvVar6 = (void *)param_1[0x2d];
    *(undefined4 *)(param_1 + 0x2a) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
    *(undefined8 *)((long)param_1 + 0x164) = 0;
    *(undefined8 *)((long)param_1 + 0x15c) = 0;
    *(undefined8 *)((long)param_1 + 0x154) = 0;
  }
  lVar7 = param_1[0x20];
  param_1[0x1f] = puVar3 + 0x10;
  if (lVar7 == 0) {
LAB_01909168:
    param_1[0x20] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(param_1 + 0x1f));
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_01909168;
  }
  param_1[0xe] = puVar2 + 0x10;
  plVar4 = (long *)param_1[0x17];
  param_1[0x12] = puVar2 + 0x98;
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x17];
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1a] != 0) {
    if (0 < *(int *)(param_1 + 0x19)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x1a] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x1b];
        param_1[0x1b] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x19));
    }
    pvVar6 = (void *)param_1[0x1c];
    *(undefined4 *)(param_1 + 0x19) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0xe4) = 0;
    *(undefined8 *)((long)param_1 + 0xdc) = 0;
    *(undefined8 *)((long)param_1 + 0xd4) = 0;
    *(undefined8 *)((long)param_1 + 0xcc) = 0;
  }
  lVar7 = param_1[0xf];
  param_1[0xe] = puVar3 + 0x10;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_019092c8;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(param_1 + 0xe));
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[0xf] = 1;
LAB_019092c8:
  param_1[0xd] = 0;
  param_1[8] = &PTR_LAB_049d78a0;
  return;
}

