
ushort FUN_014fe934(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  puVar5 = PTR_DAT_04bb27a8;
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 == 0) {
LAB_014fe9ac:
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    if (uVar4 == 0) {
      return 0;
    }
    if (uVar4 == 0) goto LAB_014fe9ac;
    plVar9 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar2 = plVar9 + uVar4;
    if (0x38 < uVar4) {
      plVar2 = plVar9;
    }
    lVar8 = *plVar2;
  }
  if (lVar8 == 0) {
    return 0;
  }
  plVar9 = (long *)(lVar8 + 0x60) + param_3;
  if (7 < param_3) {
    plVar9 = (long *)(lVar8 + 0x60);
  }
  if (*plVar9 == 0) {
    return 0;
  }
  lVar3 = lVar8 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar3 = lVar8 + 200;
  }
  lVar8 = *(long *)(lVar3 + 8);
  if (lVar8 == 0) {
    return 0;
  }
  puVar1 = (undefined8 *)(lVar8 + 0x1d8);
  uVar7 = (**(code **)(*(long *)(lVar8 + 0x1d8) + 0x10))(puVar1);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  lVar8 = (**(code **)*puVar1)(puVar1);
  if (lVar8 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 == 0) {
LAB_014fea90:
    plVar9 = (long *)(*(long *)puVar5 + 0x1f8);
  }
  else {
    if (uVar4 == 0) {
      lVar8 = 0;
      goto LAB_014feaa0;
    }
    if (uVar4 == 0) goto LAB_014fea90;
    plVar2 = (long *)(*(long *)puVar5 + 0x30);
    plVar9 = plVar2 + uVar4;
    if (0x38 < uVar4) {
      plVar9 = plVar2;
    }
  }
  lVar8 = *plVar9;
LAB_014feaa0:
  lVar3 = lVar8 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar3 = lVar8 + 200;
  }
  if (*(long *)(lVar3 + 8) == 0) {
    uVar6 = DAT_05585410;
  }
  else {
    uVar6 = FUN_012e63a8(*(long *)(lVar3 + 8),param_2);
  }
  if ((uVar6 & 0x3f) < 0x1d) {
    return uVar6 & 0x3f;
  }
  return 0;
}

