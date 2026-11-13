
void FUN_01341630(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  param_1[0xd5] = 0;
  param_1[0xcf] = 0;
  *param_1 = &PTR_FUN_049910b8;
  param_1[0x6d] = &PTR_LAB_04990f58;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0xac] = &PTR_LAB_04990df8;
  param_1[0xd0] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb5a88 + 0x10;
  param_1[0xca] = puVar1;
  puVar2 = PTR_DAT_04bb6048;
  param_1[0xc9] = 0;
  param_1[0xc3] = 0;
  param_1[0xb8] = puVar1;
  param_1[0xbd] = 0;
  param_1[0xb2] = puVar1;
  param_1[0xb7] = 0;
  param_1[0xa6] = puVar1;
  param_1[0xab] = 0;
  param_1[0xa0] = puVar1;
  param_1[0xa5] = 0;
  param_1[0xc4] = puVar2 + 0x10;
  param_1[0xbe] = puVar2 + 0x10;
  puVar1 = PTR_DAT_04bb6300;
  param_1[0x9f] = 0;
  param_1[0x9a] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb6ca0 + 0x10;
  param_1[0x8d] = puVar1;
  puVar2 = PTR_DAT_04bb6ca8;
  param_1[0x80] = puVar1;
  param_1[0x73] = puVar1;
  param_1[0x99] = 0;
  param_1[0x8c] = 0;
  param_1[0x7f] = 0;
  param_1[0x5d] = &PTR_LAB_04991218;
  param_1[0x61] = &PTR_LAB_049912a0;
  puVar2 = puVar2 + 0x10;
  param_1[0x93] = puVar2;
  param_1[0x86] = puVar2;
  param_1[0x79] = puVar2;
  plVar3 = (long *)param_1[0x66];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x66];
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (param_1[0x69] != 0) {
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x69] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x6a];
        param_1[0x6a] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x68));
    }
    pvVar5 = (void *)param_1[0x6b];
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x35c) = 0;
    *(undefined8 *)((long)param_1 + 0x354) = 0;
    *(undefined8 *)((long)param_1 + 0x34c) = 0;
    *(undefined8 *)((long)param_1 + 0x344) = 0;
  }
  puVar1 = PTR_DAT_04bd0d40;
  lVar6 = param_1[0x5e];
  param_1[0x5d] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 == 0) {
LAB_01341880:
    param_1[0x5e] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x2e8);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
    goto LAB_01341880;
  }
  puVar2 = PTR_DAT_04bbc4a0 + 0x98;
  param_1[0x4d] = PTR_DAT_04bbc4a0 + 0x10;
  param_1[0x51] = puVar2;
  plVar3 = (long *)param_1[0x56];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x56];
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_1[0x59] != 0) {
    if (0 < *(int *)(param_1 + 0x58)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x59] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x5a];
        param_1[0x5a] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x58));
    }
    pvVar5 = (void *)param_1[0x5b];
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x2dc) = 0;
    *(undefined8 *)((long)param_1 + 0x2d4) = 0;
    *(undefined8 *)((long)param_1 + 0x2cc) = 0;
    *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  }
  lVar6 = param_1[0x4e];
  param_1[0x4d] = puVar1 + 0x10;
  if (lVar6 == 0) {
LAB_013419e8:
    param_1[0x4e] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x268);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
    goto LAB_013419e8;
  }
  param_1[0x3d] = &PTR_LAB_04991578;
  param_1[0x41] = &PTR_LAB_04991600;
  plVar3 = (long *)param_1[0x46];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x46];
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x49] != 0) {
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x49] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x4a];
        param_1[0x4a] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x48));
    }
    pvVar5 = (void *)param_1[0x4b];
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x25c) = 0;
    *(undefined8 *)((long)param_1 + 0x254) = 0;
    *(undefined8 *)((long)param_1 + 0x24c) = 0;
    *(undefined8 *)((long)param_1 + 0x244) = 0;
  }
  lVar6 = param_1[0x3e];
  param_1[0x3d] = puVar1 + 0x10;
  if (lVar6 == 0) {
LAB_01341b48:
    param_1[0x3e] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x1e8);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
    goto LAB_01341b48;
  }
  param_1[0x2d] = &PTR_LAB_049918d8;
  param_1[0x31] = &PTR_LAB_04991960;
  plVar3 = (long *)param_1[0x36];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x36];
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x39] != 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x39] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x3a];
        param_1[0x3a] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x38));
    }
    pvVar5 = (void *)param_1[0x3b];
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x1dc) = 0;
    *(undefined8 *)((long)param_1 + 0x1d4) = 0;
    *(undefined8 *)((long)param_1 + 0x1cc) = 0;
    *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  }
  lVar6 = param_1[0x2e];
  param_1[0x2d] = puVar1 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_01341cb0;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x168);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x2e] = 1;
LAB_01341cb0:
  param_1[0x1c] = &PTR_LAB_04991e58;
  plVar3 = (long *)param_1[0x25];
  param_1[0x2c] = 0;
  param_1[0x20] = &PTR_LAB_04991ee0;
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x25];
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x28] != 0) {
    if (0 < *(int *)(param_1 + 0x27)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x28] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x29];
        param_1[0x29] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x27));
    }
    pvVar5 = (void *)param_1[0x2a];
    *(undefined4 *)(param_1 + 0x27) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x154) = 0;
    *(undefined8 *)((long)param_1 + 0x14c) = 0;
    *(undefined8 *)((long)param_1 + 0x144) = 0;
    *(undefined8 *)((long)param_1 + 0x13c) = 0;
  }
  lVar6 = param_1[0x1d];
  param_1[0x1c] = puVar1 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x1c));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x1d] = 1;
  return;
}

