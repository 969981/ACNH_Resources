
void FUN_014ff470(long param_1,undefined8 param_2,uint param_3,ushort param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  ushort local_4c [2];
  uint local_48;
  uint local_44;
  
  puVar4 = PTR_DAT_04bb27a8;
  uVar9 = *(uint *)(param_1 + 8);
  if (uVar9 == 0) {
LAB_014ff4e8:
    plVar8 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    local_48 = uVar9;
    if (uVar9 == 0) goto LAB_014ff4e8;
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar8 = plVar1 + uVar9;
    if (0x38 < uVar9) {
      plVar8 = plVar1;
    }
  }
  lVar7 = *plVar8;
  if (lVar7 == 0) {
    return;
  }
  plVar8 = (long *)(lVar7 + 0x60) + param_3;
  if (7 < param_3) {
    plVar8 = (long *)(lVar7 + 0x60);
  }
  if (*plVar8 == 0) {
    return;
  }
  lVar10 = lVar7 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar10 = lVar7 + 200;
  }
  lVar7 = *(long *)(lVar10 + 8);
  if (lVar7 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar7 + 0x1d8);
  local_44 = param_3;
  uVar6 = (**(code **)(*(long *)(lVar7 + 0x1d8) + 0x10))(puVar2);
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar7 = (**(code **)*puVar2)(puVar2);
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *(uint *)(param_1 + 8);
  lVar7 = *(long *)puVar4;
  if (uVar9 == 0) {
LAB_014ff5b4:
    plVar8 = (long *)(lVar7 + 0x1f8);
LAB_014ff5b8:
    lVar10 = *plVar8;
  }
  else {
    local_48 = uVar9;
    if (uVar9 != 0) {
      if (uVar9 == 0) goto LAB_014ff5b4;
      plVar8 = (long *)(lVar7 + 0x30) + uVar9;
      if (0x38 < uVar9) {
        plVar8 = (long *)(lVar7 + 0x30);
      }
      goto LAB_014ff5b8;
    }
    lVar10 = 0;
  }
  lVar3 = lVar10 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar3 = lVar10 + 200;
  }
  if (*(long *)(lVar3 + 8) == 0) {
    uVar5 = DAT_05585410;
  }
  else {
    local_44 = param_3;
    uVar5 = FUN_012e63a8(*(long *)(lVar3 + 8),param_2);
    uVar9 = *(uint *)(param_1 + 8);
    lVar7 = *(long *)puVar4;
  }
  local_4c[0] = uVar5 & 0xff3f | (param_4 & 0xff) << 6;
  if (uVar9 == 0) {
LAB_014ff654:
    plVar8 = (long *)(lVar7 + 0x1f8);
  }
  else {
    local_48 = uVar9;
    if (uVar9 == 0) {
      lVar7 = 0;
      goto LAB_014ff664;
    }
    if (uVar9 == 0) goto LAB_014ff654;
    plVar8 = (long *)(lVar7 + 0x30) + uVar9;
    if (0x38 < uVar9) {
      plVar8 = (long *)(lVar7 + 0x30);
    }
  }
  lVar7 = *plVar8;
LAB_014ff664:
  lVar10 = lVar7 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar10 = lVar7 + 200;
  }
  if (*(long *)(lVar10 + 8) != 0) {
    local_44 = param_3;
    FUN_012e6578(*(long *)(lVar10 + 8),local_4c,param_2);
  }
  return;
}

