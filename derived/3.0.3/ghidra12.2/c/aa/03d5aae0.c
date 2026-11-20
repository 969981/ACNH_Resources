
void FUN_03d5aae0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_04b8f930;
  iVar1 = *(int *)(param_1 + 0xe);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[0xc];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + -1;
      if ((plVar2 != (long *)0x0) &&
         (pvVar3 = (void *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x74)),
         pvVar3 != (void *)0x0)) {
        if (DAT_05ae7600 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0xe);
  }
  iVar1 = *(int *)(param_1 + 0xb);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[9];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + -1;
      if ((plVar2 != (long *)0x0) &&
         (pvVar3 = (void *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x5c)),
         pvVar3 != (void *)0x0)) {
        if (DAT_05ae7600 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0xb);
  }
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[6];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      if ((plVar2 != (long *)0x0) &&
         (pvVar3 = (void *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x44)),
         pvVar3 != (void *)0x0)) {
        if (DAT_05ae7600 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
      }
    }
    iVar1 = *(int *)(param_1 + 8);
  }
  return;
}

