
void FUN_014fec20(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint local_44;
  
  puVar5 = PTR_DAT_04bb27a8;
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 == 0) {
    local_44 = 0;
LAB_014fec98:
    plVar9 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    if (uVar4 == 0) goto LAB_014fed58;
    local_44 = uVar4;
    if (uVar4 == 0) goto LAB_014fec98;
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar9 = plVar1 + uVar4;
    if (0x38 < uVar4) {
      plVar9 = plVar1;
    }
  }
  lVar8 = *plVar9;
  if (lVar8 == 0) {
LAB_014fed58:
    FUN_007ef010(param_1,PTR_DAT_04bb3170);
    return;
  }
  plVar9 = (long *)(lVar8 + 0x60) + param_4;
  if (7 < param_4) {
    plVar9 = (long *)(lVar8 + 0x60);
  }
  local_44 = param_4;
  if (*plVar9 == 0) goto LAB_014fed58;
  lVar3 = lVar8 + 200 + (ulong)param_4 * 0x10;
  if (7 < param_4) {
    lVar3 = lVar8 + 200;
  }
  lVar8 = *(long *)(lVar3 + 8);
  if (lVar8 == 0) goto LAB_014fed58;
  puVar2 = (undefined8 *)(lVar8 + 0x1d8);
  uVar7 = (**(code **)(*(long *)(lVar8 + 0x1d8) + 0x10))(puVar2);
  if (((uVar7 & 1) == 0) || (lVar8 = (**(code **)*puVar2)(puVar2), lVar8 == 0)) goto LAB_014fed58;
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 == 0) {
LAB_014fed88:
    plVar9 = (long *)(*(long *)puVar5 + 0x1f8);
  }
  else {
    if (uVar4 == 0) {
      lVar8 = 0;
      goto LAB_014fed98;
    }
    if (uVar4 == 0) goto LAB_014fed88;
    plVar1 = (long *)(*(long *)puVar5 + 0x30);
    plVar9 = plVar1 + uVar4;
    if (0x38 < uVar4) {
      plVar9 = plVar1;
    }
  }
  lVar8 = *plVar9;
LAB_014fed98:
  lVar3 = lVar8 + 200 + (ulong)param_4 * 0x10;
  if (7 < param_4) {
    lVar3 = lVar8 + 200;
  }
  if (*(long *)(lVar3 + 8) == 0) {
    local_44 = param_4;
    uVar6 = DAT_05585410;
  }
  else {
    local_44 = param_4;
    uVar6 = FUN_012e63a8(*(long *)(lVar3 + 8),param_3);
  }
  local_44 = CONCAT22(local_44._2_2_,uVar6);
  FUN_0277b150(param_1,&local_44);
  return;
}

