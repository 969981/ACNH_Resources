
void FUN_0399c9b8(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_04b69a30;
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[2] != 0) {
    pvVar4 = (void *)(param_1[2] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (param_1[5] != 0) {
    lVar3 = *(long *)puVar1;
    pvVar4 = (void *)(param_1[5] + -8);
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_1[8] != 0) {
    lVar3 = *(long *)puVar1;
    pvVar4 = (void *)(param_1[8] + -8);
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  (**(code **)PTR_DAT_04bc8e38)(param_1 + 0x11);
  param_1[10] = &PTR_LAB_04b65b88;
  FUN_038f4940(param_1 + 10);
  return;
}

