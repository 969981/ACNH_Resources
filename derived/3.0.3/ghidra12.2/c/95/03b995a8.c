
void FUN_03b995a8(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x45];
  *param_1 = &PTR_FUN_04b793e8;
  param_1[0x13] = &PTR_LAB_04b794b8;
  param_1[0x36] = &PTR_LAB_04b79508;
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x18);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x45] = 0;
  }
  pvVar2 = (void *)param_1[0x46];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x18);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x46] = 0;
  }
  pvVar2 = (void *)param_1[0x47];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x18);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x47] = 0;
  }
  pvVar2 = (void *)param_1[0x48];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x18);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x48] = 0;
  }
  pvVar2 = (void *)param_1[0x49];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x18);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x49] = 0;
  }
  pvVar2 = (void *)param_1[0x4a];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x18);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x4a] = 0;
  }
  FUN_03ba0d98(param_1);
  return;
}

