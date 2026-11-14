
void FUN_01bc1450(long param_1)

{
  long *plVar1;
  void *pvVar2;
  
  FUN_01badc50(param_1 + 0x60);
  while (0 < *(int *)(param_1 + 0x58)) {
    plVar1 = *(long **)(param_1 + 0x50);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    if ((plVar1 == (long *)0x0) ||
       (pvVar2 = (void *)((long)plVar1 - (long)*(int *)(param_1 + 0x5c)), pvVar2 == (void *)0x0))
    break;
    while (0 < *(int *)((long)pvVar2 + 0x28)) {
      plVar1 = *(long **)((long)pvVar2 + 0x20);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)((long)pvVar2 + 0x28) = *(int *)((long)pvVar2 + 0x28) + -1;
      if ((plVar1 == (long *)0x0) ||
         (plVar1 = (long *)((long)plVar1 - (long)*(int *)((long)pvVar2 + 0x2c)),
         plVar1 == (long *)0x0)) break;
      (**(code **)(*plVar1 + 0x18))();
    }
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
  }
  pvVar2 = *(void **)(param_1 + 0x40);
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
  }
  FUN_01bad390(param_1 + 0x68);
  FUN_038e1a84(param_1);
  return;
}

