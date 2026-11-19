
void FUN_03966bc4(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_04b68318;
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[7] != 0) {
    pvVar3 = (void *)(param_1[7] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  pvVar3 = (void *)param_1[0x15];
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0x15] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

