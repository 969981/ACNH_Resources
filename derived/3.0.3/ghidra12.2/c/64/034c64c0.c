
void FUN_034c64c0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = (void *)param_1[0x54];
  if (pvVar4 == (void *)0x0) {
LAB_034c6508:
    pvVar4 = (void *)param_1[0x55];
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
      goto LAB_034c6508;
    }
    free(pvVar4);
    pvVar4 = (void *)param_1[0x55];
  }
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  FUN_034c353c(param_1[0x53]);
  pvVar4 = (void *)param_1[0x53];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
      plVar2 = (long *)param_1[0x4d];
      goto joined_r0x034c658c;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
    }
  }
  plVar2 = (long *)param_1[0x4d];
joined_r0x034c658c:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x4d] = 0;
  if ((long *)param_1[0x4e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4e] + 0x18))();
  }
  param_1[0x4e] = 0;
  if ((long *)param_1[0x4f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4f] + 0x18))();
  }
  pvVar4 = (void *)param_1[0x52];
  param_1[0x4f] = 0;
  if (pvVar4 != (void *)0x0) {
    pvVar3 = pvVar4;
    do {
      pvVar3 = *(void **)((long)pvVar3 + 8);
    } while (pvVar3 != pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

