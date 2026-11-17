
void FUN_0315cd00(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  if (param_1[0x45] != 0) {
    pvVar6 = (void *)(param_1[0x45] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  pvVar6 = (void *)param_1[0x47];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  if (param_1[0x3863] != 0) {
    pvVar6 = (void *)(param_1[0x3863] + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x3863] = 0;
    *(undefined4 *)(param_1 + 0x3862) = 0;
  }
  pvVar6 = (void *)param_1[0x3861];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  FUN_03f45838(param_1 + 0x387b);
  FUN_03f45838(param_1 + 0x387b);
  plVar3 = (long *)param_1[0x387e];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    iVar1 = *(int *)((long)param_1 + 0x1c3e4) + -1;
    if (((*(int *)((long)param_1 + 0x1c3e4) < 1) ||
        (*(int *)((long)param_1 + 0x1c3e4) = iVar1, iVar1 == 0)) && (param_1[0x387d] != 0)) {
      FUN_03f44508();
      param_1[0x387d] = 0;
    }
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  param_1[0x3864] = (long)&PTR_LAB_04b5eb40;
  if (param_1[0x3866] != 0) {
    if (0 < (int)param_1[0x3865]) {
      lVar4 = 0;
      plVar3 = (long *)param_1[0x3867];
      do {
        plVar5 = *(long **)(param_1[0x3866] + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *plVar5 = (long)plVar3;
        param_1[0x3867] = (long)plVar5;
        plVar3 = plVar5;
      } while (lVar4 < (int)param_1[0x3865]);
    }
    pvVar6 = (void *)param_1[0x3868];
    *(undefined4 *)(param_1 + 0x3865) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x1c344) = 0;
    *(undefined8 *)((long)param_1 + 0x1c33c) = 0;
    *(undefined8 *)((long)param_1 + 0x1c334) = 0;
    *(undefined8 *)((long)param_1 + 0x1c32c) = 0;
  }
  FUN_031356e0(param_1 + 0x3838);
  FUN_034129e0(param_1 + 0x4d);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

