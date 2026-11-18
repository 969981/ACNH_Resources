
void FUN_0357ea84(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = (long)&PTR_LAB_04b3cab0;
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x385e] != 0) {
    pvVar3 = (void *)(param_1[0x385e] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x385e] = 0;
    *(undefined4 *)(param_1 + 0x385d) = 0;
  }
  if (param_1[0x67] != 0) {
    pvVar3 = (void *)(param_1[0x67] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x67] = 0;
    *(undefined4 *)(param_1 + 0x66) = 0;
  }
  FUN_034129e0(param_1 + 0x72);
  FUN_035838f0(param_1 + 0x68);
  FUN_031356e0(param_1 + 0x43);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

