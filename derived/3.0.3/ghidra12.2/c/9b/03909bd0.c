
void FUN_03909bd0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + -8);
      if (*plVar4 != 0) {
        lVar6 = *plVar4 * 0x1f0;
        do {
          FUN_0390a4ac(lVar3 + -0x1f0 + lVar6);
          lVar6 = lVar6 + -0x1f0;
        } while (lVar6 != 0);
      }
      if (*(long *)puVar1 == 0) {
        free(plVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,plVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
        }
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    pvVar5 = *(void **)(param_1 + 0x70);
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    pvVar5 = *(void **)(param_1 + 0x80);
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    lVar3 = *(long *)(param_1 + 0x60);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + -8);
      if (*plVar4 != 0) {
        lVar6 = *plVar4 * 0x58;
        do {
          FUN_0390a5a0(lVar3 + -0x58 + lVar6);
          lVar6 = lVar6 + -0x58;
        } while (lVar6 != 0);
      }
      if (*(long *)puVar1 == 0) {
        free(plVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,plVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
        }
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

