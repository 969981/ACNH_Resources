
void FUN_032b9054(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_04b1a528;
  param_1[0xcd] = PTR_DAT_04bc8ff0 + 0x10;
  if ((long *)param_1[0xcf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xcf] + 8))();
    param_1[0xcf] = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[0xd5];
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
    param_1[0xd4] = 0;
    param_1[0xd5] = 0;
    if ((long *)param_1[0xcf] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xcf] + 8))();
    }
  }
  pvVar3 = (void *)param_1[0xca];
  *param_1 = &PTR_FUN_04b1a4d8;
  param_1[0xcb] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_032d0688(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      plVar2 = (long *)param_1[0xc5];
      goto joined_r0x032b9140;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  plVar2 = (long *)param_1[0xc5];
joined_r0x032b9140:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_032b7370(param_1 + 1);
  return;
}

