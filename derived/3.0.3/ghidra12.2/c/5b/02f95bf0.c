
void FUN_02f95bf0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  plVar3 = param_1 + 0x1146a;
  if (0 < (int)*plVar3) {
    lVar4 = 0;
    plVar2 = (long *)param_1[0x1146c];
    do {
      plVar5 = *(long **)(param_1[0x1146b] + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *plVar5 = (long)plVar2;
      param_1[0x1146c] = (long)plVar5;
      plVar2 = plVar5;
    } while (lVar4 < (int)*plVar3);
  }
  *(undefined4 *)plVar3 = 0;
  puVar1 = PTR_DAT_04bb2698;
  plVar3 = param_1 + 0x385f;
  if (param_1[0x45] != 0) {
    pvVar6 = (void *)(param_1[0x45] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (param_1[0x71] != 0) {
    pvVar6 = (void *)(param_1[0x71] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    param_1[0x71] = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if ((int)param_1[0x3861] != 0) {
    plVar2 = (long *)param_1[0x3860];
    while (plVar2 != plVar3) {
      plVar5 = (long *)plVar2[1];
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2 = plVar5;
    }
    *(undefined4 *)(param_1 + 0x3861) = 0;
    *plVar3 = (long)plVar3;
    param_1[0x3860] = (long)plVar3;
  }
  if (param_1[0x3863] != 0) {
    pvVar6 = (void *)(param_1[0x3863] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x3863] = 0;
    *(undefined4 *)(param_1 + 0x3862) = 0;
  }
  FUN_034129e0(param_1 + 0x73);
  FUN_031356e0(param_1 + 0x4d);
  pvVar6 = (void *)param_1[0x4c];
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
    param_1[0x4c] = 0;
    *(undefined4 *)(param_1 + 0x4b) = 0;
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

