
void FUN_03b96434(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0x4d];
  *param_1 = &PTR_FUN_04b79280;
  param_1[0x13] = &PTR_LAB_04b79350;
  param_1[0x36] = &PTR_LAB_04b793a0;
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x58);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x4d] = 0;
  }
  pvVar2 = (void *)param_1[0x4e];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x58);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x4e] = 0;
  }
  pvVar2 = (void *)param_1[0x4f];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x58);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x4f] = 0;
  }
  pvVar2 = (void *)param_1[0x50];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x58);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x50] = 0;
  }
  pvVar2 = (void *)param_1[0x51];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x58);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x51] = 0;
  }
  pvVar2 = (void *)param_1[0x52];
  if (pvVar2 != (void *)0x0) {
    FUN_03b980cc((long)pvVar2 + 0x58);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x52] = 0;
  }
  FUN_03ba0d98(param_1);
  return;
}

