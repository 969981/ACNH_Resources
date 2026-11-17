
void FUN_02d59670(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x218) != 0) {
    pvVar8 = (void *)(*(long *)(param_1 + 0x218) + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  puVar1 = PTR_DAT_04bc61b8 + 0x10;
  *(undefined **)(param_1 + 0x2698) = PTR_DAT_04bc5c40 + 0x10;
  puVar3 = PTR_DAT_04bc5c38;
  *(undefined **)(param_1 + 0x2668) = puVar1;
  *(undefined **)(param_1 + 0x2638) = puVar3 + 0x10;
  *(undefined **)(param_1 + 0x2600) = PTR_DAT_04bc61c0 + 0x10;
  *(undefined **)(param_1 + 0x2518) = PTR_DAT_04bcb4d0 + 0x10;
  if (*(long *)(param_1 + 0x2528) != 0) {
    if (0 < *(int *)(param_1 + 0x2520)) {
      lVar5 = 0;
      puVar6 = *(undefined8 **)(param_1 + 0x2530);
      do {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x2528) + lVar5 * 8);
        lVar5 = lVar5 + 1;
        *puVar7 = puVar6;
        *(undefined8 **)(param_1 + 0x2530) = puVar7;
        puVar6 = puVar7;
      } while (lVar5 < *(int *)(param_1 + 0x2520));
    }
    pvVar8 = *(void **)(param_1 + 0x2538);
    *(undefined4 *)(param_1 + 0x2520) = 0;
    if (pvVar8 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar8);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar8);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x253c) = 0;
    *(undefined8 *)(param_1 + 0x2534) = 0;
    *(undefined8 *)(param_1 + 0x252c) = 0;
    *(undefined8 *)(param_1 + 0x2524) = 0;
  }
  if (0 < *(int *)(param_1 + 0x1750)) {
    lVar5 = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x1760);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x1758) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar7 = puVar6;
      *(undefined8 **)(param_1 + 0x1760) = puVar7;
      puVar6 = puVar7;
    } while (lVar5 < *(int *)(param_1 + 0x1750));
  }
  *(undefined4 *)(param_1 + 0x1750) = 0;
  if (0 < *(int *)(param_1 + 0x1db0)) {
    lVar5 = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x1dc0);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x1db8) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar7 = puVar6;
      *(undefined8 **)(param_1 + 0x1dc0) = puVar7;
      puVar6 = puVar7;
    } while (lVar5 < *(int *)(param_1 + 0x1db0));
  }
  *(undefined4 *)(param_1 + 0x1db0) = 0;
  FUN_03ebae78(param_1 + 0x16c8);
  FUN_0306c890(param_1);
  return;
}

