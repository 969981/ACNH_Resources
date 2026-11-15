
void FUN_01e39394(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[0x79];
  *param_1 = &PTR_FUN_04a5d200;
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
    param_1[0x79] = 0;
  }
  pvVar3 = (void *)param_1[0x7a];
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
    param_1[0x7a] = 0;
  }
  if ((long *)param_1[0x78] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x78] + 8))();
    param_1[0x78] = 0;
  }
  if ((long *)param_1[0x77] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x77] + 0x18))();
    param_1[0x77] = 0;
  }
  param_1[0xcc] = &PTR_FUN_04a397c8;
  if (*(char *)((long)param_1 + 0x67c) != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 0xcf);
  }
  param_1[0xce] = PTR_DAT_04bc0a68 + 0x10;
  FUN_016de610(param_1);
  return;
}

