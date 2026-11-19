
void FUN_03a8e4ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  *param_1 = &PTR_FUN_04b70ac8;
  FUN_03916c10(param_1 + 0x92);
  FUN_039eb890(param_1 + 0x19);
  pvVar5 = (void *)param_1[0x16];
  puVar1 = PTR_DAT_04bd1840 + 0x10;
  param_1[0x11] = puVar1;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  pvVar5 = (void *)param_1[0xe];
  param_1[9] = puVar1;
  if (pvVar5 != (void *)0x0) {
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  pvVar5 = (void *)param_1[8];
  param_1[6] = PTR_DAT_04bd1850 + 0x10;
  if (pvVar5 != (void *)0x0) {
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  return;
}

