
void FUN_03b4d660(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_04b76538;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  while (0 < *(int *)(param_1 + 9)) {
    plVar1 = (long *)param_1[8];
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
    if ((plVar1 == (long *)0x0) ||
       (plVar1 = (long *)((long)plVar1 - (long)*(int *)((long)param_1 + 0x4c)),
       plVar1 == (long *)0x0)) break;
    (**(code **)(*plVar1 + 8))();
  }
  do {
    if (*(int *)(param_1 + 6) < 1) break;
    plVar1 = (long *)param_1[5];
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + -1;
    if ((plVar1 == (long *)0x0) ||
       (plVar1 = (long *)((long)plVar1 - (long)*(int *)((long)param_1 + 0x34)),
       plVar1 == (long *)0x0)) break;
    (**(code **)(*plVar1 + 8))();
  } while( true );
  while( true ) {
    if (*(int *)(param_1 + 0xc) < 1) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = (long *)param_1[0xb];
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
    if ((plVar1 == (long *)0x0) ||
       (pvVar2 = (void *)((long)plVar1 - (long)*(int *)((long)param_1 + 100)), pvVar2 == (void *)0x0
       )) break;
    FUN_03b4c804(pvVar2);
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
  while (0 < *(int *)(param_1 + 0xf)) {
    plVar1 = (long *)param_1[0xe];
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0xf) = *(int *)(param_1 + 0xf) + -1;
    if ((plVar1 == (long *)0x0) ||
       (pvVar2 = (void *)((long)plVar1 - (long)*(int *)((long)param_1 + 0x7c)),
       pvVar2 == (void *)0x0)) break;
    FUN_03b4c804(pvVar2);
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
  pvVar2 = (void *)param_1[2];
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
    param_1[2] = 0;
    param_1[3] = 0xffffffff;
  }
  FUN_038e1a84(param_1 + 0x10);
  return;
}

