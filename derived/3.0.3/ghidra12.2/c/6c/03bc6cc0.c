
void FUN_03bc6cc0(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x20);
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  while (puVar3 != puVar1) {
    puVar6 = (undefined8 *)puVar3[1];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar6;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  pvVar7 = *(void **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  if (pvVar7 != (void *)0x0) {
    piVar2 = (int *)(param_1 + 0x10);
    if (0 < *piVar2) {
      uVar8 = 0;
      do {
        FUN_03bc4500(*(undefined8 *)(*(long *)(param_1 + 0x18) + uVar8 * 8));
        if (uVar8 < *(uint *)(param_1 + 0x10)) {
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar8 * 8);
        }
        else {
          uVar5 = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x40) + 0x18))(*(long **)(param_1 + 0x40),uVar5);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*piVar2);
      pvVar7 = *(void **)(param_1 + 0x18);
      if (pvVar7 == (void *)0x0) goto LAB_03bc6db8;
    }
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
    piVar2[0] = 0;
    piVar2[1] = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
LAB_03bc6db8:
  pvVar7 = *(void **)(param_1 + 0x38);
  if (pvVar7 != (void *)0x0) {
    FUN_03bc79e0(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x48);
  if (pvVar7 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
      *(undefined8 *)(param_1 + 0x48) = 0;
      plVar4 = *(long **)(param_1 + 0xc0);
      goto joined_r0x03bc6e30;
    }
    plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  plVar4 = *(long **)(param_1 + 0xc0);
joined_r0x03bc6e30:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

