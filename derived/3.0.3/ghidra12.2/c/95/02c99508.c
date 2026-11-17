
void FUN_02c99508(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  
  puVar2 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[0x39f4];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x39f4] = 0;
    *(undefined4 *)(param_1 + 0x39f3) = 0;
  }
  pvVar5 = (void *)param_1[0x39f6];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x39f6] = 0;
    *(undefined4 *)(param_1 + 0x39f5) = 0;
  }
  pvVar5 = (void *)param_1[0x39f8];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x39f8] = 0;
    *(undefined4 *)(param_1 + 0x39f7) = 0;
  }
  pvVar5 = (void *)param_1[0x3a0e];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x3a0e] = 0;
  }
  if ((long *)param_1[0x3a0f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3a0f] + 0x20))();
  }
  pvVar5 = (void *)param_1[0x3a17];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x3a17] = 0;
  }
  if (param_1[0x1d4] != 0) {
    pvVar5 = (void *)(param_1[0x1d4] + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x1d4] = 0;
    *(undefined4 *)(param_1 + 0x1d3) = 0;
  }
  FUN_03f45838(param_1 + 0x3a0a);
  plVar4 = (long *)param_1[0x3a0d];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar1 = *(int *)((long)param_1 + 0x1d05c) + -1;
    if (((*(int *)((long)param_1 + 0x1d05c) < 1) ||
        (*(int *)((long)param_1 + 0x1d05c) = iVar1, iVar1 == 0)) && (param_1[0x3a0c] != 0)) {
      FUN_03f44508();
      param_1[0x3a0c] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  FUN_034129e0(param_1 + 0x1fe);
  FUN_031356e0(param_1 + 0x1b0);
  puVar3 = PTR_DAT_04bc5c40;
  puVar2 = PTR_DAT_04bc5668;
  param_1[0x5c] = (long)(PTR_DAT_04bc5c38 + 0x10);
  param_1[0x56] = (long)(puVar3 + 0x10);
  *param_1 = (long)(puVar2 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

