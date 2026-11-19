
void FUN_03baa770(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  
  puVar4 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  pvVar9 = *(void **)(param_1 + 0x40);
  if (pvVar9 == (void *)0x0) goto LAB_03baa860;
  plVar6 = *(long **)(param_1 + 0x28);
  if (*(long **)(param_1 + 0x28) == (long *)(param_1 + 0x20)) {
LAB_03baa828:
    lVar5 = *(long *)puVar4;
    if (lVar5 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(lVar5,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
  }
  else {
    do {
      plVar2 = (long *)plVar6[1];
      plVar7 = plVar2;
      if (*plVar6 != 0) {
        *(long **)(*plVar6 + 8) = plVar2;
        plVar7 = (long *)plVar6[1];
      }
      if (plVar7 != (long *)0x0) {
        *plVar7 = *plVar6;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6 = plVar6 + -0x37;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      (**(code **)*plVar6)(plVar6);
      *plVar6 = *(long *)(param_1 + 0x38);
      *(long **)(param_1 + 0x38) = plVar6;
      plVar6 = plVar2;
    } while (plVar2 != (long *)(param_1 + 0x20));
    pvVar9 = *(void **)(param_1 + 0x40);
    if (pvVar9 != (void *)0x0) goto LAB_03baa828;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
LAB_03baa860:
  pvVar9 = *(void **)(param_1 + 0x18);
  if (pvVar9 != (void *)0x0) {
    lVar5 = *(long *)puVar4;
    if (lVar5 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(lVar5,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x50);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  while (puVar3 != puVar1) {
    puVar8 = (undefined8 *)puVar3[1];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar8;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 **)(param_1 + 0x50) = puVar1;
  *(undefined8 **)(param_1 + 0x58) = puVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

