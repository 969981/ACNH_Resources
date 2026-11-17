
void FUN_02d1fb74(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x3872] != 0) {
    pvVar3 = (void *)(param_1[0x3872] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x3872] = 0;
    *(undefined4 *)(param_1 + 0x3871) = 0;
  }
  pvVar3 = (void *)param_1[0x38a0];
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
    param_1[0x38a0] = 0;
    *(undefined4 *)(param_1 + 0x389f) = 0;
  }
  pvVar3 = (void *)param_1[0x38a2];
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
    param_1[0x38a2] = 0;
    *(undefined4 *)(param_1 + 0x38a1) = 0;
  }
  pvVar3 = (void *)param_1[0x38a4];
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
    param_1[0x38a4] = 0;
    *(undefined4 *)(param_1 + 0x38a3) = 0;
  }
  pvVar3 = (void *)param_1[0x38a6];
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
    param_1[0x38a6] = 0;
    *(undefined4 *)(param_1 + 0x38a5) = 0;
  }
  pvVar3 = (void *)param_1[0x38a8];
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
    param_1[0x38a8] = 0;
    *(undefined4 *)(param_1 + 0x38a7) = 0;
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
  puVar1 = PTR_DAT_04bc4830 + 0x10;
  param_1[0x38ab] = (long)(PTR_DAT_04bc5db8 + 0x10);
  param_1[0x387a] = (long)puVar1;
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

