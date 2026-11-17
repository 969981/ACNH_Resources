
void FUN_02e5ee00(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  
  plVar2 = param_1 + 0x3861;
  if (0 < (int)*plVar2) {
    lVar3 = 0;
    plVar4 = (long *)param_1[0x3863];
    do {
      plVar5 = *(long **)(param_1[0x3862] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *plVar5 = (long)plVar4;
      param_1[0x3863] = (long)plVar5;
      plVar4 = plVar5;
    } while (lVar3 < (int)*plVar2);
  }
  *(undefined4 *)plVar2 = 0;
  puVar1 = PTR_DAT_04bb2698;
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
  if (param_1[0xaf7a] != 0) {
    pvVar6 = (void *)(param_1[0xaf7a] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    param_1[0xaf7a] = 0;
    *(undefined4 *)(param_1 + 0xaf79) = 0;
  }
  FUN_031356e0(param_1 + 0x383b);
  FUN_034129e0(param_1 + 0x4b);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

