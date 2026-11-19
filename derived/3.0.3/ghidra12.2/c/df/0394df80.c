
void FUN_0394df80(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  
  pvVar10 = (void *)param_1[2];
  *param_1 = &PTR_FUN_04b67a48;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar10 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar10);
      }
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puVar5 = (undefined8 *)param_1[4];
  if (puVar5 != (undefined8 *)0x0) {
    plVar3 = puVar5 + -1;
    lVar6 = *plVar3;
    if (lVar6 != 0) {
      puVar7 = puVar5 + lVar6 * 0x2d;
      uVar9 = lVar6 * 0x168 - 0x168;
      uVar1 = ((uint)(uVar9 / 0x168) & 0x3ffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar6 = ((ulong)uVar1 & 3) * 0x168;
        do {
          puVar7 = puVar7 + -0x2d;
          lVar6 = lVar6 + -0x168;
          *puVar7 = &PTR_LAB_04b67a90;
        } while (lVar6 != 0);
      }
      if (0x437 < uVar9) {
        do {
          puVar8 = puVar7 + -0xb4;
          puVar7[-0x2d] = &PTR_LAB_04b67a90;
          puVar7[-0x5a] = &PTR_LAB_04b67a90;
          puVar7[-0x87] = &PTR_LAB_04b67a90;
          *puVar8 = &PTR_LAB_04b67a90;
          puVar7 = puVar8;
        } while (puVar8 != puVar5);
      }
    }
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
      free(plVar3);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar6,plVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar3);
      }
    }
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  pvVar10 = (void *)param_1[6];
  if (pvVar10 != (void *)0x0) {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
      free(pvVar10);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar6,pvVar10);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar10);
      }
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  puVar5 = param_1 + 7;
  puVar7 = (undefined8 *)param_1[8];
  while (puVar7 != puVar5) {
    puVar8 = (undefined8 *)puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7 = puVar8;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = puVar5;
  param_1[8] = puVar5;
  return;
}

