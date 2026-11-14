
uint FUN_014ff2b4(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  puVar5 = PTR_DAT_04bb27a8;
  uVar6 = *(uint *)(param_1 + 8);
  if (uVar6 == 0) {
LAB_014ff32c:
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    if (uVar6 == 0) goto LAB_014ff32c;
    plVar9 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar2 = plVar9 + uVar6;
    if (0x38 < uVar6) {
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
  lVar4 = lVar8 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar4 = lVar8 + 200;
  }
  lVar8 = *(long *)(lVar4 + 8);
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
  uVar6 = *(uint *)(param_1 + 8);
  if (uVar6 == 0) {
LAB_014ff410:
    plVar9 = (long *)(*(long *)puVar5 + 0x1f8);
  }
  else {
    if (uVar6 == 0) {
      lVar8 = 0;
      goto LAB_014ff420;
    }
    if (uVar6 == 0) goto LAB_014ff410;
    plVar2 = (long *)(*(long *)puVar5 + 0x30);
    plVar9 = plVar2 + uVar6;
    if (0x38 < uVar6) {
      plVar9 = plVar2;
    }
  }
  lVar8 = *plVar9;
LAB_014ff420:
  lVar4 = lVar8 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar4 = lVar8 + 200;
  }
  if (*(long *)(lVar4 + 8) == 0) {
    uVar6 = (uint)DAT_05585410;
  }
  else {
    uVar6 = FUN_012e63a8(*(long *)(lVar4 + 8),param_2);
  }
  uVar3 = 0;
  if (0xffffffe3 < (uVar6 & 0x3f) - 0x1d) {
    uVar3 = uVar6 >> 6 & 3;
  }
  return uVar3;
}

