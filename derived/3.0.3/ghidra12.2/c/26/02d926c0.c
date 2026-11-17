
void FUN_02d926c0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  if (param_1[0x54] != 0) {
    pvVar6 = (void *)(param_1[0x54] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x54] = 0;
    *(undefined4 *)(param_1 + 0x53) = 0;
  }
  if (param_1[0x21175] != 0) {
    lVar4 = *(long *)puVar2;
    pvVar6 = (void *)(param_1[0x21175] + -8);
    if (lVar4 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x21175] = 0;
    *(undefined4 *)(param_1 + 0x21174) = 0;
  }
  FUN_03f45838(param_1 + 0x2117e);
  FUN_03f45838(param_1 + 0x2117e);
  plVar3 = (long *)param_1[0x21181];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    iVar1 = *(int *)((long)param_1 + 0x108bfc) + -1;
    if (((*(int *)((long)param_1 + 0x108bfc) < 1) ||
        (*(int *)((long)param_1 + 0x108bfc) = iVar1, iVar1 == 0)) && (param_1[0x21180] != 0)) {
      FUN_03f44508();
      param_1[0x21180] = 0;
    }
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  FUN_03ebae78(param_1 + 0x21163);
  param_1[0x3c9a] = (long)&PTR_LAB_04ac37a0;
  FUN_031356e0(param_1 + 0x3846);
  FUN_034129e0(param_1 + 0x5a);
  param_1[0x47] = (long)&PTR_LAB_04b5eb40;
  if (param_1[0x49] != 0) {
    if (0 < (int)param_1[0x48]) {
      lVar4 = 0;
      plVar3 = (long *)param_1[0x4a];
      do {
        plVar5 = *(long **)(param_1[0x49] + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *plVar5 = (long)plVar3;
        param_1[0x4a] = (long)plVar5;
        plVar3 = plVar5;
      } while (lVar4 < (int)param_1[0x48]);
    }
    pvVar6 = (void *)param_1[0x4b];
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (pvVar6 != (void *)0x0) {
      lVar4 = *(long *)puVar2;
      if (lVar4 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(lVar4,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x25c) = 0;
    *(undefined8 *)((long)param_1 + 0x254) = 0;
    *(undefined8 *)((long)param_1 + 0x24c) = 0;
    *(undefined8 *)((long)param_1 + 0x244) = 0;
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

