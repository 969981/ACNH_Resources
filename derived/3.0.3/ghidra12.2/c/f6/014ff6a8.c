
void FUN_014ff6a8(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ushort local_44 [2];
  
  puVar4 = PTR_DAT_04bb27a8;
  uVar8 = *(uint *)(param_1 + 8);
  if (uVar8 == 0) {
LAB_014ff71c:
    plVar7 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 == 0) goto LAB_014ff71c;
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar7 = plVar1 + uVar8;
    if (0x38 < uVar8) {
      plVar7 = plVar1;
    }
  }
  lVar6 = *plVar7;
  if (lVar6 == 0) {
    return;
  }
  plVar7 = (long *)(lVar6 + 0x60) + param_3;
  if (7 < param_3) {
    plVar7 = (long *)(lVar6 + 0x60);
  }
  if (*plVar7 == 0) {
    return;
  }
  lVar9 = lVar6 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar9 = lVar6 + 200;
  }
  lVar6 = *(long *)(lVar9 + 8);
  if (lVar6 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar6 + 0x1d8);
  uVar5 = (**(code **)(*(long *)(lVar6 + 0x1d8) + 0x10))(puVar2);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = (**(code **)*puVar2)(puVar2);
  if (lVar6 == 0) {
    return;
  }
  uVar8 = *(uint *)(param_1 + 8);
  lVar6 = *(long *)puVar4;
  if (uVar8 == 0) {
LAB_014ff7e8:
    plVar7 = (long *)(lVar6 + 0x1f8);
LAB_014ff7ec:
    lVar9 = *plVar7;
  }
  else {
    if (uVar8 != 0) {
      if (uVar8 == 0) goto LAB_014ff7e8;
      plVar7 = (long *)(lVar6 + 0x30) + uVar8;
      if (0x38 < uVar8) {
        plVar7 = (long *)(lVar6 + 0x30);
      }
      goto LAB_014ff7ec;
    }
    lVar9 = 0;
  }
  lVar3 = lVar9 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar3 = lVar9 + 200;
  }
  if (*(long *)(lVar3 + 8) == 0) {
    local_44[0] = DAT_05585410;
  }
  else {
    local_44[0] = FUN_012e63a8(*(long *)(lVar3 + 8),param_2);
    uVar8 = *(uint *)(param_1 + 8);
    lVar6 = *(long *)puVar4;
  }
  local_44[0] = local_44[0] & 0xff3f;
  if (uVar8 == 0) {
LAB_014ff880:
    plVar7 = (long *)(lVar6 + 0x1f8);
  }
  else {
    if (uVar8 == 0) {
      lVar6 = 0;
      goto LAB_014ff890;
    }
    if (uVar8 == 0) goto LAB_014ff880;
    plVar7 = (long *)(lVar6 + 0x30) + uVar8;
    if (0x38 < uVar8) {
      plVar7 = (long *)(lVar6 + 0x30);
    }
  }
  lVar6 = *plVar7;
LAB_014ff890:
  lVar9 = lVar6 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar9 = lVar6 + 200;
  }
  if (*(long *)(lVar9 + 8) != 0) {
    FUN_012e6578(*(long *)(lVar9 + 8),local_44,param_2);
  }
  return;
}

