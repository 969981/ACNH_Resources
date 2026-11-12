
void FUN_0097f414(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[0xc2];
  *param_1 = &PTR_FUN_0492a9b8;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar3 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    param_1[0xc2] = 0;
    *(undefined4 *)(param_1 + 0xc1) = 0;
  }
  pvVar3 = (void *)param_1[0xc4];
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
    param_1[0xc4] = 0;
    *(undefined4 *)(param_1 + 0xc3) = 0;
  }
  if ((long *)param_1[0xc5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc5] + 0x20))();
  }
  FUN_0097f4f4(param_1 + 0x81);
  FUN_0097f7c0(param_1 + 0x41);
  FUN_0097fa8c(param_1 + 1);
  return;
}

