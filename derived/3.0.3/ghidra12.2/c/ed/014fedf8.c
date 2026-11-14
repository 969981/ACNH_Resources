
void FUN_014fedf8(long param_1,undefined8 param_2,uint param_3,int param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ushort local_58 [2];
  ushort local_54 [2];
  
  puVar5 = PTR_DAT_04bb27a8;
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 == 0) {
LAB_014fee78:
    plVar8 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    if (uVar4 == 0) {
      return;
    }
    if (uVar4 == 0) goto LAB_014fee78;
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar8 = plVar1 + uVar4;
    if (0x38 < uVar4) {
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
  lVar3 = lVar7 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar3 = lVar7 + 200;
  }
  lVar7 = *(long *)(lVar3 + 8);
  if (lVar7 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar7 + 0x1d8);
  uVar6 = (**(code **)(*(long *)(lVar7 + 0x1d8) + 0x10))(puVar2);
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar7 = (**(code **)*puVar2)(puVar2);
  if (lVar7 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 8);
  lVar7 = *(long *)puVar5;
  if (uVar4 == 0) {
LAB_014fef20:
    plVar8 = (long *)(lVar7 + 0x1f8);
LAB_014fef48:
    lVar7 = *plVar8;
  }
  else {
    if (uVar4 != 0) {
      if (uVar4 == 0) goto LAB_014fef20;
      plVar1 = (long *)(lVar7 + 0x30);
      plVar8 = plVar1 + uVar4;
      if (0x38 < uVar4) {
        plVar8 = plVar1;
      }
      goto LAB_014fef48;
    }
    lVar7 = 0;
  }
  lVar3 = lVar7 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar3 = lVar7 + 200;
  }
  if (*(long *)(lVar3 + 8) == 0) {
    local_54[0] = DAT_05585410;
  }
  else {
    local_54[0] = FUN_012e63a8(*(long *)(lVar3 + 8),param_2);
  }
  FUN_007ef010(local_58,param_5);
  local_54[0] = local_54[0] & 0x80c0;
  if (((param_4 != 0) && (local_54[0] = local_54[0] | (ushort)param_4 & 0xff, param_4 - 0xfU < 0xe))
     && (local_58[0] != DAT_04cb6038)) {
    local_54[0] = (local_58[0] & 0x7f) << 8 | local_54[0];
  }
  uVar4 = *(uint *)(param_1 + 8);
  lVar7 = *(long *)puVar5;
  if (uVar4 == 0) {
LAB_014ff008:
    plVar8 = (long *)(lVar7 + 0x1f8);
  }
  else {
    if (uVar4 == 0) {
      lVar7 = 0;
      goto LAB_014ff03c;
    }
    if (uVar4 == 0) goto LAB_014ff008;
    plVar1 = (long *)(lVar7 + 0x30);
    plVar8 = plVar1 + uVar4;
    if (0x38 < uVar4) {
      plVar8 = plVar1;
    }
  }
  lVar7 = *plVar8;
LAB_014ff03c:
  lVar3 = lVar7 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar3 = lVar7 + 200;
  }
  if (*(long *)(lVar3 + 8) != 0) {
    FUN_012e6578(*(long *)(lVar3 + 8),local_54,param_2);
  }
  return;
}

