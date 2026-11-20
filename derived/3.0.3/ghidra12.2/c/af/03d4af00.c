
void FUN_03d4af00(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar2 = PTR_DAT_04bb2698;
  iVar1 = *(int *)(param_1 + 0xe);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar3 = (long *)param_1[0xc];
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + -1;
      if ((plVar3 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x74)),
         pvVar4 != (void *)0x0)) {
        if (*(long *)puVar2 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0xe);
  }
  while (*(int *)(param_1 + 0xb) != 0) {
    if (0 < *(int *)(param_1 + 0xb)) {
      plVar3 = (long *)param_1[9];
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + -1;
      if ((plVar3 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x5c)),
         pvVar4 != (void *)0x0)) {
        if (*(long *)puVar2 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
      }
    }
  }
  while (*(int *)(param_1 + 8) != 0) {
    if (0 < *(int *)(param_1 + 8)) {
      plVar3 = (long *)param_1[6];
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      if ((plVar3 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x44)),
         pvVar4 != (void *)0x0)) {
        if (*(long *)puVar2 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
      }
    }
  }
  while (*(int *)(param_1 + 5) != 0) {
    if (0 < *(int *)(param_1 + 5)) {
      plVar3 = (long *)param_1[3];
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + -1;
      if ((plVar3 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x2c)),
         pvVar4 != (void *)0x0)) {
        if (*(long *)puVar2 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
      }
    }
  }
  while (*(int *)(param_1 + 2) != 0) {
    if (0 < *(int *)(param_1 + 2)) {
      plVar3 = (long *)*param_1;
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
      if ((plVar3 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x14)),
         pvVar4 != (void *)0x0)) {
        if (*(long *)puVar2 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
      }
    }
  }
  return;
}

