
void FUN_02bb37c8(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = (void *)param_1[0x383a];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x383a] = 0;
    *(undefined4 *)(param_1 + 0x3839) = 0;
  }
  if (param_1[0x46] != 0) {
    lVar3 = *(long *)puVar1;
    pvVar4 = (void *)(param_1[0x46] + -8);
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x46] = 0;
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  pvVar4 = (void *)param_1[0x3841];
  if (pvVar4 != (void *)0x0) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x3841] = 0;
    *(undefined4 *)(param_1 + 0x3840) = 0;
  }
  FUN_034129e0(param_1 + 0x4c);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

