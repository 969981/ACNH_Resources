
void FUN_01d6c104(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[2];
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puVar4 = (undefined8 *)param_1[4];
  if (puVar4 != (undefined8 *)0x0) {
    pvVar3 = (void *)puVar4[1];
    if (pvVar3 == (void *)0x0) {
LAB_01d6c1ac:
      if (*(long *)puVar1 == 0) {
        free(puVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,puVar4);
        }
      }
    }
    else {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)param_1[4];
      if (puVar4 != (undefined8 *)0x0) goto LAB_01d6c1ac;
    }
    param_1[4] = 0;
  }
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    param_1[3] = &PTR_FUN_04a59f20;
    return;
  }
  if (*(long *)puVar1 == 0) {
    free(pvVar3);
  }
  else {
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  puVar4 = (undefined8 *)param_1[4];
  *param_1 = 0;
  param_1[3] = &PTR_FUN_04a59f20;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  pvVar3 = (void *)puVar4[1];
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
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)param_1[4];
    if (puVar4 == (undefined8 *)0x0) goto LAB_01d6c2b4;
  }
  if (*(long *)puVar1 == 0) {
    free(puVar4);
  }
  else {
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar4);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,puVar4);
    }
  }
LAB_01d6c2b4:
  param_1[4] = 0;
  return;
}

