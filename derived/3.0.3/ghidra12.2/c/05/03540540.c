
void FUN_03540540(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  *param_1 = (long)&PTR_FUN_04b37ce8;
  puVar2 = PTR_DAT_04bb2698;
  if (param_1[0x21342] != 0) {
    pvVar6 = (void *)(param_1[0x21342] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x21342] = 0;
    *(undefined4 *)(param_1 + 0x21341) = 0;
  }
  if (param_1[0x5a] != 0) {
    lVar4 = *(long *)puVar2;
    pvVar6 = (void *)(param_1[0x5a] + -8);
    if (lVar4 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x5a] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
  }
  param_1[0x2134f] = (long)(PTR_DAT_04bcb4d0 + 0x10);
  if (param_1[0x21351] != 0) {
    if (0 < (int)param_1[0x21350]) {
      lVar4 = 0;
      plVar3 = (long *)param_1[0x21352];
      do {
        plVar5 = *(long **)(param_1[0x21351] + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *plVar5 = (long)plVar3;
        param_1[0x21352] = (long)plVar5;
        plVar3 = plVar5;
      } while (lVar4 < (int)param_1[0x21350]);
    }
    pvVar6 = (void *)param_1[0x21353];
    *(undefined4 *)(param_1 + 0x21350) = 0;
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
    *(undefined4 *)((long)param_1 + 0x109a9c) = 0;
    *(undefined8 *)((long)param_1 + 0x109a94) = 0;
    *(undefined8 *)((long)param_1 + 0x109a8c) = 0;
    *(undefined8 *)((long)param_1 + 0x109a84) = 0;
  }
  FUN_03f45838(param_1 + 0x2134b);
  FUN_03f45838(param_1 + 0x2134b);
  plVar3 = (long *)param_1[0x2134e];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    iVar1 = *(int *)((long)param_1 + 0x109a64) + -1;
    if (((*(int *)((long)param_1 + 0x109a64) < 1) ||
        (*(int *)((long)param_1 + 0x109a64) = iVar1, iVar1 == 0)) && (param_1[0x2134d] != 0)) {
      FUN_03f44508();
      param_1[0x2134d] = 0;
    }
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  param_1[0x386e] = (long)(PTR_DAT_04bc6308 + 0x10);
  FUN_031356e0(param_1 + 0x384b);
  FUN_034129e0(param_1 + 0x60);
  FUN_03ebae78(param_1 + 0x48);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

