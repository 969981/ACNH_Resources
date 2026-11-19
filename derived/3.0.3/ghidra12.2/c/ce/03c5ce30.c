
void FUN_03c5ce30(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_04b81ba0;
  iVar1 = *(int *)(param_1 + 0x34);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[0x32];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      if ((plVar2 != (long *)0x0) &&
         (pvVar3 = (void *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x1a4)),
         pvVar3 != (void *)0x0)) {
        FUN_03ea7860(pvVar3);
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
    iVar1 = *(int *)(param_1 + 0x34);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[0x2a];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x2c) + -1;
      *(int *)(param_1 + 0x2c) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x164)),
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 8))();
        iVar1 = *(int *)(param_1 + 0x2c);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[0x1e];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x20) + -1;
      *(int *)(param_1 + 0x20) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x104)),
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 8))();
        iVar1 = *(int *)(param_1 + 0x20);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x23);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[0x21];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x23) + -1;
      *(int *)(param_1 + 0x23) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x11c)),
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 8))();
        iVar1 = *(int *)(param_1 + 0x23);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x26);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[0x24];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x26) + -1;
      *(int *)(param_1 + 0x26) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x134)),
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 8))();
        iVar1 = *(int *)(param_1 + 0x26);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x29);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[0x27];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x29) + -1;
      *(int *)(param_1 + 0x29) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x14c)),
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 8))();
        iVar1 = *(int *)(param_1 + 0x29);
      }
    }
  }
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
      iVar1 = *(int *)(param_1 + 0xe) + -1;
      *(int *)(param_1 + 0xe) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x74)),
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 8))();
        iVar1 = *(int *)(param_1 + 0xe);
      }
    }
  }
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 8))();
  }
  iVar1 = *(int *)(param_1 + 9);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[7];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 9) + -1;
      *(int *)(param_1 + 9) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x4c)),
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x18))();
        iVar1 = *(int *)(param_1 + 9);
      }
    }
  }
  FUN_03c5e480(param_1 + 0x12);
  if (*(char *)((long)param_1 + 0x2e) != '\0') {
    (**(code **)(param_1[3] + 0x18))(param_1 + 3);
    pvVar3 = (void *)param_1[4];
    if (pvVar3 != (void *)0x0) {
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
    *(undefined1 *)((long)param_1 + 0x2e) = 0;
  }
  return;
}

