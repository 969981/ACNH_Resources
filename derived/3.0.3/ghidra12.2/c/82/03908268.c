
void FUN_03908268(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[6];
  *param_1 = &PTR_FUN_04b65e60;
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
    pvVar3 = (void *)param_1[8];
    param_1[5] = 0;
    param_1[6] = 0;
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
      param_1[7] = 0;
      param_1[8] = 0;
    }
  }
  pvVar3 = (void *)param_1[10];
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
    pvVar3 = (void *)param_1[0xc];
    param_1[9] = 0;
    param_1[10] = 0;
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
      param_1[0xb] = 0;
      param_1[0xc] = 0;
    }
  }
  return;
}

