
void FUN_02de4fb0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[0x38dc];
  if (pvVar3 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x38dc] = 0;
    *(undefined4 *)(param_1 + 0x38db) = 0;
  }
  pvVar3 = (void *)param_1[0x38de];
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x38de] = 0;
    *(undefined4 *)(param_1 + 0x38dd) = 0;
  }
  pvVar3 = (void *)param_1[0x38e0];
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x38e0] = 0;
    *(undefined4 *)(param_1 + 0x38df) = 0;
  }
  pvVar3 = (void *)param_1[0x38e2];
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x38e2] = 0;
    *(undefined4 *)(param_1 + 0x38e1) = 0;
  }
  pvVar3 = (void *)param_1[0x38e4];
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x38e4] = 0;
    *(undefined4 *)(param_1 + 0x38e3) = 0;
  }
  if (param_1[0x47] != 0) {
    pvVar3 = (void *)(param_1[0x47] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  if (param_1[0x49] != 0) {
    pvVar3 = (void *)(param_1[0x49] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x49] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  puVar1 = PTR_DAT_04bc4830;
  param_1[0x38e7] = (long)(PTR_DAT_04bc5db8 + 0x10);
  param_1[0x38b6] = (long)(puVar1 + 0x10);
  if (((*(byte *)(param_1 + 0x387b) >> 1 & 1) != 0) && (*(long *)PTR_DAT_04bb2110 != 0)) {
    plVar2 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb2110 + 0x10) + (long)(int)param_1[0x3882] * 8
                       );
    nn::os::LockMutex((MutexType *)(plVar2 + 0x4d));
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x3878);
    nn::os::UnlockMutex((MutexType *)(plVar2 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x3897);
  FUN_03f2d448(param_1 + 0x387a);
  FUN_031356e0(param_1 + 0x384c);
  FUN_034129e0(param_1 + 0x54);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

