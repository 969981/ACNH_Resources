
void FUN_03268e20(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  *param_1 = (long)&PTR_LAB_04b16028;
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x11d26] != 0) {
    pvVar6 = (void *)(param_1[0x11d26] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x11d26] = 0;
    *(undefined4 *)(param_1 + 0x11d25) = 0;
  }
  param_1[0x15543] = (long)(PTR_DAT_04bcb4d0 + 0x10);
  if (param_1[0x15545] != 0) {
    if (0 < (int)param_1[0x15544]) {
      lVar4 = 0;
      plVar3 = (long *)param_1[0x15546];
      do {
        plVar5 = *(long **)(param_1[0x15545] + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *plVar5 = (long)plVar3;
        param_1[0x15546] = (long)plVar5;
        plVar3 = plVar5;
      } while (lVar4 < (int)param_1[0x15544]);
    }
    pvVar6 = (void *)param_1[0x15547];
    *(undefined4 *)(param_1 + 0x15544) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0xaaa3c) = 0;
    *(undefined8 *)((long)param_1 + 0xaaa34) = 0;
    *(undefined8 *)((long)param_1 + 0xaaa2c) = 0;
    *(undefined8 *)((long)param_1 + 0xaaa24) = 0;
  }
  FUN_031356e0(param_1 + 0x15517);
  FUN_034129e0(param_1 + 0x11d2c);
  FUN_03ebae78(param_1 + 0x11d14);
  puVar2 = PTR_DAT_04bc5668;
  puVar1 = PTR_DAT_04bc0010 + 0x68;
  param_1[0x69ca] = (long)(PTR_DAT_04bc0010 + 0x10);
  param_1[0x69cb] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

