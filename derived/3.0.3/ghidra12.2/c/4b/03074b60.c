
void FUN_03074b60(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x218) != 0) {
    pvVar6 = (void *)(*(long *)(param_1 + 0x218) + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  if (0 < *(int *)(param_1 + 0x1738)) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x1748);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x1740) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar5 = puVar4;
      *(undefined8 **)(param_1 + 0x1748) = puVar5;
      puVar4 = puVar5;
    } while (lVar3 < *(int *)(param_1 + 0x1738));
  }
  *(undefined4 *)(param_1 + 0x1738) = 0;
  if (0 < *(int *)(param_1 + 0x1d98)) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x1da8);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x1da0) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar5 = puVar4;
      *(undefined8 **)(param_1 + 0x1da8) = puVar5;
      puVar4 = puVar5;
    } while (lVar3 < *(int *)(param_1 + 0x1d98));
  }
  *(undefined4 *)(param_1 + 0x1d98) = 0;
  *(undefined ***)(param_1 + 0x39a8) = &PTR_LAB_04b5eb40;
  if (*(long *)(param_1 + 0x39b8) != 0) {
    if (0 < *(int *)(param_1 + 0x39b0)) {
      lVar3 = 0;
      puVar4 = *(undefined8 **)(param_1 + 0x39c0);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x39b8) + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *puVar5 = puVar4;
        *(undefined8 **)(param_1 + 0x39c0) = puVar5;
        puVar4 = puVar5;
      } while (lVar3 < *(int *)(param_1 + 0x39b0));
    }
    pvVar6 = *(void **)(param_1 + 0x39c8);
    *(undefined4 *)(param_1 + 0x39b0) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x39cc) = 0;
    *(undefined8 *)(param_1 + 0x39c4) = 0;
    *(undefined8 *)(param_1 + 0x39bc) = 0;
    *(undefined8 *)(param_1 + 0x39b4) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3978);
  if (((puVar4 != (undefined8 *)0x0) && ((undefined8 *)*puVar4 != (undefined8 *)0x0)) &&
     ((undefined8 *)*puVar4 == (undefined8 *)(param_1 + 0x3978))) {
    *(undefined8 *)(param_1 + 0x3978) = 0;
    *puVar4 = 0;
  }
  *(undefined ***)(param_1 + 0x2500) = &PTR_LAB_04af87e0;
  *(uint *)(DAT_0537bd88 + 0xc0) = *(uint *)(DAT_0537bd88 + 0xc0) | 4;
  FUN_03ebae78(param_1 + 0x16b0);
  FUN_0306c890(param_1);
  return;
}

