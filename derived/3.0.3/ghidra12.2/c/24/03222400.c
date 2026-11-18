
void FUN_03222400(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x3862] != 0) {
    pvVar3 = (void *)(param_1[0x3862] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x3862] = 0;
    *(undefined4 *)(param_1 + 0x3861) = 0;
  }
  if (param_1[0x44] != 0) {
    pvVar3 = (void *)(param_1[0x44] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x44] = 0;
    *(undefined4 *)(param_1 + 0x43) = 0;
  }
  param_1[0x38e6] = (long)&PTR_LAB_04ab3940;
  FUN_031356e0(param_1 + 0x383e);
  FUN_034129e0(param_1 + 0x4a);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

