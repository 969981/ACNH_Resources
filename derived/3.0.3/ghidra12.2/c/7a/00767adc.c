
undefined8 FUN_00767adc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  
  iVar1 = *(int *)(param_1 + 0x2e8);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      puVar2 = *(undefined8 **)(param_1 + 0x2f0);
      pvVar4 = (void *)*puVar2;
      memmove(puVar2,puVar2 + 1,(long)(iVar1 * 8 + -8));
      iVar1 = *(int *)(param_1 + 0x2e8) + -1;
      *(int *)(param_1 + 0x2e8) = iVar1;
      if (pvVar4 != (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
        iVar1 = *(int *)(param_1 + 0x2e8);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x298);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      puVar2 = *(undefined8 **)(param_1 + 0x2a0);
      pvVar4 = (void *)*puVar2;
      memmove(puVar2,puVar2 + 1,(long)(iVar1 * 8 + -8));
      iVar1 = *(int *)(param_1 + 0x298) + -1;
      *(int *)(param_1 + 0x298) = iVar1;
      if (pvVar4 != (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
        iVar1 = *(int *)(param_1 + 0x298);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x388);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      puVar2 = *(undefined8 **)(param_1 + 0x390);
      pvVar4 = (void *)*puVar2;
      memmove(puVar2,puVar2 + 1,(long)(iVar1 * 8 + -8));
      iVar1 = *(int *)(param_1 + 0x388) + -1;
      *(int *)(param_1 + 0x388) = iVar1;
      if (pvVar4 != (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
        iVar1 = *(int *)(param_1 + 0x388);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x338);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      puVar2 = *(undefined8 **)(param_1 + 0x340);
      pvVar4 = (void *)*puVar2;
      memmove(puVar2,puVar2 + 1,(long)(iVar1 * 8 + -8));
      iVar1 = *(int *)(param_1 + 0x338) + -1;
      *(int *)(param_1 + 0x338) = iVar1;
      if (pvVar4 != (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
        iVar1 = *(int *)(param_1 + 0x338);
      }
    }
  }
  return 0;
}

