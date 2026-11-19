
void FUN_03bc0270(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x48);
  plVar2 = (long *)(param_1 + 0x40);
  if (plVar4 != plVar2) {
    plVar1 = plVar4 + -0x13;
    do {
      plVar4 = (long *)plVar4[1];
      FUN_03bc12b0(plVar1);
      plVar1 = plVar4 + -0x13;
    } while (plVar1 != (long *)(param_1 + -0x58));
  }
  pvVar5 = *(void **)(param_1 + 0x30);
  if (pvVar5 != (void *)0x0) {
    plVar4 = *(long **)(param_1 + 0x18);
    if (plVar4 == (long *)(param_1 + 0x10)) {
LAB_03bc0350:
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
    }
    else {
      do {
        plVar1 = (long *)plVar4[1];
        plVar3 = plVar1;
        if (*plVar4 != 0) {
          *(long **)(*plVar4 + 8) = plVar1;
          plVar3 = (long *)plVar4[1];
        }
        if (plVar3 != (long *)0x0) {
          *plVar3 = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        plVar3 = plVar4 + -0xc;
        *plVar3 = 0;
        plVar4[-3] = 0;
        plVar4[-0xb] = 0;
        plVar4[-10] = (long)&PTR_LAB_04b7aaf8;
        *plVar3 = *(long *)(param_1 + 0x28);
        *(long **)(param_1 + 0x28) = plVar3;
        plVar4 = plVar1;
      } while (plVar1 != (long *)(param_1 + 0x10));
      pvVar5 = *(void **)(param_1 + 0x30);
      if (pvVar5 != (void *)0x0) goto LAB_03bc0350;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x60);
  if (pvVar5 == (void *)0x0) goto LAB_03bc0450;
  plVar4 = *(long **)(param_1 + 0x48);
  if (*(long **)(param_1 + 0x48) == plVar2) {
LAB_03bc0410:
    if (DAT_05ae7600 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  else {
    do {
      plVar1 = (long *)plVar4[1];
      plVar3 = plVar1;
      if (*plVar4 != 0) {
        *(long **)(*plVar4 + 8) = plVar1;
        plVar3 = (long *)plVar4[1];
      }
      if (plVar3 != (long *)0x0) {
        *plVar3 = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      FUN_03bc11c0(plVar4 + -0x13);
      plVar4[-0x13] = *(long *)(param_1 + 0x58);
      *(long **)(param_1 + 0x58) = plVar4 + -0x13;
      plVar4 = plVar1;
    } while (plVar1 != plVar2);
    pvVar5 = *(void **)(param_1 + 0x60);
    if (pvVar5 != (void *)0x0) goto LAB_03bc0410;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
LAB_03bc0450:
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

