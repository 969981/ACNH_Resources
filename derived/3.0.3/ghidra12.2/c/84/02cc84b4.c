
void FUN_02cc84b4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0x3885];
  *param_1 = (long)&PTR_LAB_04ab7450;
  puVar1 = PTR_DAT_04bb2698;
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
    param_1[0x3885] = 0;
    *(undefined4 *)(param_1 + 0x3884) = 0;
  }
  if (param_1[0x3875] != 0) {
    lVar3 = *(long *)puVar1;
    pvVar4 = (void *)(param_1[0x3875] + -8);
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x3875] = 0;
    *(undefined4 *)(param_1 + 0x3874) = 0;
  }
  if (param_1[0x66] != 0) {
    lVar3 = *(long *)puVar1;
    pvVar4 = (void *)(param_1[0x66] + -8);
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x66] = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
  }
  puVar1 = PTR_DAT_04bc5c40;
  param_1[0x386e] = (long)(PTR_DAT_04bc5c38 + 0x10);
  param_1[0x3868] = (long)(puVar1 + 0x10);
  FUN_034129e0(param_1 + 0x67);
  FUN_031356e0(param_1 + 0x42);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

