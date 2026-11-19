
void FUN_03b2dc28(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[0x1b];
  *param_1 = &PTR_FUN_04b75228;
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
    param_1[0x1b] = 0;
  }
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 8))();
    param_1[0x1c] = 0;
  }
  if (param_1[0x4b] != 0) {
    if ((long *)param_1[0x4c] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x4c] + 8))();
    }
    *(undefined4 *)(param_1 + 0x4a) = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
  }
  pvVar3 = (void *)param_1[0x20];
  if (pvVar3 != (void *)0x0) {
    FUN_038fd0e0((long)pvVar3 + 0x50);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
  }
  param_1[0x2e] = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 0x39);
  FUN_0037bb6c(param_1);
  return;
}

