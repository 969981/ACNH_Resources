
void FUN_030e5b90(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar6 = (void *)param_1[0xa5];
  if (pvVar6 != (void *)0x0) {
    FUN_03d4af00(pvVar6);
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  param_1[0x72] = &PTR_LAB_04ab2ee8;
  if (0 < *(int *)(param_1 + 0x74)) {
    lVar2 = 0;
    puVar4 = (undefined8 *)param_1[0x76];
    do {
      puVar5 = *(undefined8 **)(param_1[0x75] + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *puVar5 = puVar4;
      param_1[0x76] = puVar5;
      puVar4 = puVar5;
    } while (lVar2 < *(int *)(param_1 + 0x74));
  }
  param_1[0x5c] = &PTR_LAB_04ab2ee8;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (0 < *(int *)(param_1 + 0x5e)) {
    lVar2 = 0;
    puVar4 = (undefined8 *)param_1[0x60];
    do {
      puVar5 = *(undefined8 **)(param_1[0x5f] + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *puVar5 = puVar4;
      param_1[0x60] = puVar5;
      puVar4 = puVar5;
    } while (lVar2 < *(int *)(param_1 + 0x5e));
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x45] = &PTR_LAB_04ab2ee8;
  if (0 < *(int *)(param_1 + 0x47)) {
    lVar2 = 0;
    puVar4 = (undefined8 *)param_1[0x49];
    do {
      puVar5 = *(undefined8 **)(param_1[0x48] + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *puVar5 = puVar4;
      param_1[0x49] = puVar5;
      puVar4 = puVar5;
    } while (lVar2 < *(int *)(param_1 + 0x47));
  }
  *(undefined4 *)(param_1 + 0x47) = 0;
  *param_1 = &PTR_FUN_04b90648;
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x18))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x18))();
  }
  pvVar6 = (void *)param_1[0x3b];
  if (pvVar6 != (void *)0x0) {
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  FUN_03c5ce30(param_1);
  return;
}

