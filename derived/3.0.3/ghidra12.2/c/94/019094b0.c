
void FUN_019094b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bbf180;
  *param_1 = &PTR_FUN_049d7718;
  param_1[0x47] = puVar3 + 0x10;
  param_1[0x4b] = puVar3 + 0x98;
  plVar5 = (long *)param_1[0x50];
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x50];
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x53] != 0) {
    if (0 < *(int *)(param_1 + 0x52)) {
      lVar8 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x53] + lVar8 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar8 = lVar8 + 1;
        *puVar6 = param_1[0x54];
        param_1[0x54] = puVar6;
      } while (lVar8 < *(int *)(param_1 + 0x52));
    }
    pvVar7 = (void *)param_1[0x55];
    *(undefined4 *)(param_1 + 0x52) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x2ac) = 0;
    *(undefined8 *)((long)param_1 + 0x2a4) = 0;
    *(undefined8 *)((long)param_1 + 0x29c) = 0;
    *(undefined8 *)((long)param_1 + 0x294) = 0;
  }
  puVar4 = PTR_DAT_04bd0d40;
  lVar8 = param_1[0x48];
  param_1[0x47] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar8 == 0) {
LAB_01909634:
    param_1[0x48] = 1;
  }
  else if (lVar8 != 1) {
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x238);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
    goto LAB_01909634;
  }
  puVar2 = PTR_DAT_04bbf148;
  puVar1 = PTR_DAT_04bb33a8;
  param_1[0x46] = 0;
  param_1[0x41] = puVar1 + 0x10;
  param_1[0x30] = puVar2 + 0x10;
  param_1[0x34] = puVar2 + 0x98;
  plVar5 = (long *)param_1[0x39];
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x39];
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3c] != 0) {
    if (0 < *(int *)(param_1 + 0x3b)) {
      lVar8 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x3c] + lVar8 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar8 = lVar8 + 1;
        *puVar6 = param_1[0x3d];
        param_1[0x3d] = puVar6;
      } while (lVar8 < *(int *)(param_1 + 0x3b));
    }
    pvVar7 = (void *)param_1[0x3e];
    *(undefined4 *)(param_1 + 0x3b) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 500) = 0;
    *(undefined8 *)((long)param_1 + 0x1ec) = 0;
    *(undefined8 *)((long)param_1 + 0x1e4) = 0;
    *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  }
  lVar8 = param_1[0x31];
  param_1[0x30] = puVar4 + 0x10;
  if (lVar8 == 0) {
LAB_019097a8:
    param_1[0x31] = 1;
  }
  else if (lVar8 != 1) {
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x180);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
    goto LAB_019097a8;
  }
  puVar1 = PTR_DAT_04bbf110 + 0x98;
  param_1[0x1f] = PTR_DAT_04bbf110 + 0x10;
  plVar5 = (long *)param_1[0x28];
  param_1[0x23] = puVar1;
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x28];
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2b] != 0) {
    if (0 < *(int *)(param_1 + 0x2a)) {
      lVar8 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x2b] + lVar8 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar8 = lVar8 + 1;
        *puVar6 = param_1[0x2c];
        param_1[0x2c] = puVar6;
      } while (lVar8 < *(int *)(param_1 + 0x2a));
    }
    pvVar7 = (void *)param_1[0x2d];
    *(undefined4 *)(param_1 + 0x2a) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
    *(undefined8 *)((long)param_1 + 0x164) = 0;
    *(undefined8 *)((long)param_1 + 0x15c) = 0;
    *(undefined8 *)((long)param_1 + 0x154) = 0;
  }
  lVar8 = param_1[0x20];
  param_1[0x1f] = puVar4 + 0x10;
  if (lVar8 == 0) {
LAB_01909908:
    param_1[0x20] = 1;
  }
  else if (lVar8 != 1) {
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar5 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x1f));
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
    goto LAB_01909908;
  }
  param_1[0xe] = puVar3 + 0x10;
  plVar5 = (long *)param_1[0x17];
  param_1[0x12] = puVar3 + 0x98;
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x17];
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1a] != 0) {
    if (0 < *(int *)(param_1 + 0x19)) {
      lVar8 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x1a] + lVar8 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar8 = lVar8 + 1;
        *puVar6 = param_1[0x1b];
        param_1[0x1b] = puVar6;
      } while (lVar8 < *(int *)(param_1 + 0x19));
    }
    pvVar7 = (void *)param_1[0x1c];
    *(undefined4 *)(param_1 + 0x19) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0xe4) = 0;
    *(undefined8 *)((long)param_1 + 0xdc) = 0;
    *(undefined8 *)((long)param_1 + 0xd4) = 0;
    *(undefined8 *)((long)param_1 + 0xcc) = 0;
  }
  lVar8 = param_1[0xf];
  param_1[0xe] = puVar4 + 0x10;
  if (lVar8 != 0) {
    if (lVar8 == 1) goto LAB_01909a68;
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar5 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0xe));
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[0xf] = 1;
LAB_01909a68:
  param_1[0xd] = 0;
  param_1[8] = &PTR_LAB_049d7a78;
  return;
}

