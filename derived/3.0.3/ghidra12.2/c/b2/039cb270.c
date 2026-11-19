
void FUN_039cb270(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *__ptr;
  void *pvVar2;
  long lVar3;
  
  __ptr = (undefined8 *)param_1[0x37];
  *param_1 = &PTR_FUN_04b6ae28;
  if (*(int *)(param_1 + 0x36) != 0) {
    lVar3 = (long)*(int *)(param_1 + 0x36) << 3;
    do {
      (**(code **)(*(long *)*__ptr + 8))();
      lVar3 = lVar3 + -8;
      __ptr = __ptr + 1;
    } while (lVar3 != 0);
    __ptr = (undefined8 *)param_1[0x37];
  }
  if (__ptr != (undefined8 *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x36] = 0;
    param_1[0x37] = 0;
  }
  pvVar2 = (void *)param_1[0x41];
  if (pvVar2 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  pvVar2 = (void *)param_1[0x43];
  if (pvVar2 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  }
  pvVar2 = (void *)param_1[0x45];
  if (pvVar2 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[0x44] = 0;
    param_1[0x45] = 0;
  }
  FUN_038e1a84(param_1 + 0x38);
  param_1[0x35] = &PTR_LAB_04b6ae68;
  FUN_038e1a84(param_1 + 0x23);
  FUN_038e1a84(param_1 + 0x1b);
  FUN_038e1a84(param_1 + 0x13);
  return;
}

