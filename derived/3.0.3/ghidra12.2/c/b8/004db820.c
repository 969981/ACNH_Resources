
void FUN_004db820(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  undefined8 local_f8;
  long local_f0;
  ulong local_e8;
  undefined8 local_e0;
  long local_d8;
  ulong uStack_d0;
  int local_c8;
  undefined8 local_c0;
  long local_b8;
  ulong local_b0;
  int local_a8;
  undefined8 *local_a0;
  long lStack_98;
  ulong local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  ulong local_78;
  int local_70;
  long local_68;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 4) == param_2) {
    return;
  }
  uVar13 = param_1[1];
  uVar6 = FUN_00428440(uVar13);
  if ((uVar6 & 0x1f) != 8) {
    uVar13 = 0;
  }
  puVar7 = (undefined8 *)FUN_00426e90(uVar13,1);
  if ((puVar7 != (undefined8 *)0x0) && ((int)((ulong)*puVar7 >> 8) != 0)) {
    return;
  }
  if (*(int *)*param_1 < 0) {
    return;
  }
  uVar13 = param_1[1];
  uVar6 = FUN_00428440(uVar13);
  if ((uVar6 & 0x1f) != 8) {
    uVar13 = 0;
  }
  uVar14 = param_1[1];
  uVar6 = FUN_00428440(uVar14);
  if ((uVar6 & 0x1f) != 8) {
    uVar14 = 0;
  }
  puVar7 = (undefined8 *)FUN_00426e90(uVar14,1);
  if ((puVar7 == (undefined8 *)0x0) || ((int)((ulong)*puVar7 >> 8) == 0)) {
    iVar12 = *(int *)*param_1;
    if (iVar12 != 0) goto LAB_004db8ec;
    lVar15 = param_1[5];
    uVar6 = FUN_00428440(lVar15);
    if ((lVar15 == 0) || ((uVar6 & 0x1f) != 7)) {
      local_80 = (undefined8 *)param_1[5];
    }
    else {
      local_88 = &DAT_0407ebb1;
      local_80 = &DAT_0407ebb1;
      plVar9 = (long *)FUN_004c51d0(param_1[2] + 0x68,&local_88,0,param_1[5]);
      if (plVar9 == (long *)0x0) {
        param_1[5] = 0;
        return;
      }
      local_80 = (undefined8 *)*plVar9;
      param_1[5] = local_80;
    }
    uVar5 = *(undefined4 *)(param_1[2] + 0x240);
    lVar15 = param_1[2] + 0x210;
    local_88 = (undefined8 *)0x0;
    local_78 = 0;
    if (local_80 != (undefined8 *)0x0) {
      local_78 = FUN_00428370();
    }
    if ((local_78 & 1) == 0) {
      local_70 = 0;
      FUN_004dae00(lVar15,uVar5,&local_88);
    }
    else {
      uVar6 = local_78 & 0xfffffffffffffffe;
      FUN_0043dd30(uVar6);
      local_70 = 0;
      FUN_004dae00(lVar15,uVar5,&local_88);
      FUN_0043dd50(uVar6);
    }
    lVar15 = param_1[2];
    uVar11 = *(uint *)(lVar15 + 0x2b8);
    if (uVar11 == (*(uint *)(lVar15 + 700) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,lVar15 + 0x2b0,4);
      uVar11 = *(uint *)(lVar15 + 0x2b8);
    }
    *(undefined4 *)(*(long *)(lVar15 + 0x2b0) + (long)(int)uVar11 * 4) = 1;
    *(uint *)(lVar15 + 0x2b8) = uVar11 + 1;
    iVar12 = 0;
    *(undefined4 *)*param_1 = uVar5;
  }
  else {
    iVar12 = -1;
LAB_004db8ec:
    FUN_004db210(param_1[2],iVar12);
  }
  FUN_004dad30(&local_88,param_1);
  if (*(int *)(param_1 + 4) == 0) {
    if (param_1[5] != 0) goto LAB_004db984;
    lVar15 = FUN_00426d90(uVar13);
    uVar6 = local_78;
    puVar7 = local_88;
    param_1[5] = lVar15;
    if ((local_78 & 1) == 0) {
      iVar16 = -local_70;
      if (-1 < local_70) {
        iVar16 = local_70;
      }
      if (lVar15 == 0) goto LAB_004dbd38;
LAB_004dbd24:
      uVar8 = FUN_00428370(lVar15);
      if ((uVar8 & 1) != 0) {
        FUN_0043dd30(uVar8 & 0xfffffffffffffffe);
      }
    }
    else {
      FUN_0043dd30(local_78 & 0xfffffffffffffffe);
      lVar15 = param_1[5];
      iVar16 = -local_70;
      if (-1 < local_70) {
        iVar16 = local_70;
      }
      if (lVar15 != 0) goto LAB_004dbd24;
LAB_004dbd38:
      uVar8 = 0;
    }
    local_88 = puVar7;
    local_80 = (undefined8 *)lVar15;
    if ((local_78 & 1) == 0) {
      local_78 = uVar8;
      if ((uVar6 & 1) == 0) goto LAB_004dbd60;
LAB_004dbd8c:
      local_70 = iVar16;
      FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
      if (param_1[5] != 0) goto LAB_004dbd68;
      uVar5 = 0;
    }
    else {
      uVar10 = local_78 & 0xfffffffffffffffe;
      local_78 = uVar8;
      FUN_0043dd50(uVar10);
      if ((uVar6 & 1) != 0) goto LAB_004dbd8c;
LAB_004dbd60:
      uVar5 = 0;
      local_70 = iVar16;
      if (param_1[5] != 0) {
LAB_004dbd68:
        uVar5 = FUN_00426fc0();
      }
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar5;
    if (*(int *)(param_1 + 4) == 0) goto LAB_004db984;
  }
  puVar7 = (undefined8 *)FUN_00426e90(uVar13,1);
  if ((((puVar7 == (undefined8 *)0x0) || ((int)((ulong)*puVar7 >> 8) == 0)) &&
      (local_88 != (undefined8 *)0x0)) &&
     (lVar15 = param_1[2], *(int *)(*(long *)(lVar15 + 0x2b0) + (long)iVar12 * 4) != 0)) {
    local_a0 = local_88;
    lStack_98 = (long)local_80;
    local_90 = local_78;
    if ((local_78 & 1) != 0) {
      FUN_0043dd30(local_78 & 0xfffffffffffffffe);
    }
    FUN_004d7d70(lVar15,&local_a0);
    if ((local_90 & 1) != 0) {
      FUN_0043dd50(local_90 & 0xfffffffffffffffe);
    }
  }
LAB_004db984:
  puVar7 = local_80;
  iVar4 = FUN_00426fc0(local_80);
  lVar15 = (**(code **)(*(long *)(param_1[2] + 0x248) + 0x10))
                     (param_1[2] + 0x248,(long)(iVar4 * param_2),0);
  param_1[3] = lVar15;
  iVar16 = -local_70;
  if (-1 < local_70) {
    iVar16 = local_70;
  }
  iVar2 = (param_2 - iVar16) * iVar4;
  iVar1 = iVar16;
  if (param_2 <= iVar16) {
    iVar2 = 0;
    iVar1 = param_2;
  }
  FUN_0043a4d0(lVar15 + iVar16 * iVar4,0,iVar2);
  FUN_0043a3b0(param_1[3],local_88,iVar1 * iVar4);
  local_c0 = param_1[3];
  local_b8 = (long)puVar7;
  local_b0 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    local_b0 = FUN_00428370(puVar7);
  }
  if ((local_b0 & 1) == 0) {
    bVar3 = true;
  }
  else {
    FUN_0043dd30(local_b0 & 0xfffffffffffffffe);
    bVar3 = (local_b0 & 1) == 0;
  }
  uVar6 = local_b0;
  *(int *)(param_1 + 4) = param_2;
  *(int *)((long)param_1 + 0x24) = iVar4;
  param_1[5] = local_b8;
  local_d8 = local_b8;
  local_e0 = local_c0;
  uStack_d0 = local_b0;
  local_a8 = param_2;
  if (!bVar3) {
    FUN_0043dd30(local_b0 & 0xfffffffffffffffe);
  }
  uVar13 = param_1[1];
  local_c8 = local_a8;
  uVar8 = FUN_00428440(uVar13);
  if ((uVar8 & 0x1f) != 8) {
    uVar13 = 0;
  }
  puVar7 = (undefined8 *)FUN_00426e90(uVar13,1);
  if (((puVar7 == (undefined8 *)0x0) || ((int)((ulong)*puVar7 >> 8) == 0)) &&
     (-1 < *(int *)*param_1)) {
    FUN_004dae00(param_1[2] + 0x210,*(int *)*param_1,&local_e0);
  }
  if (!bVar3) {
    FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
  }
  if (local_88 != (undefined8 *)0x0) {
    FUN_004dbdb0(param_1[2],&local_88,&local_c0);
  }
  uVar13 = param_1[2];
  local_f0 = local_b8;
  local_e8 = local_b0;
  local_f8 = local_c0;
  if ((local_b0 & 1) != 0) {
    FUN_0043dd30(local_b0 & 0xfffffffffffffffe);
  }
  FUN_004d9dc0(uVar13,&local_f8,param_2,iVar4,0xffffffff,iVar12);
  if ((local_e8 & 1) != 0) {
    FUN_0043dd50(local_e8 & 0xfffffffffffffffe);
  }
  uVar13 = param_1[1];
  uVar6 = FUN_00428440(uVar13);
  if ((uVar6 & 0x1f) != 8) {
    uVar13 = 0;
  }
  puVar7 = (undefined8 *)FUN_00426e90(uVar13,1);
  if ((puVar7 == (undefined8 *)0x0) || ((int)((ulong)*puVar7 >> 8) == 0)) {
    local_68 = (long)*(int *)*param_1;
  }
  else {
    local_68 = -1;
  }
  local_58 = param_1[3];
  FUN_00470440(param_1[2] + 0x2c8,PTR_DAT_048607b8,&local_58,&local_68);
  if ((local_b0 & 1) != 0) {
    FUN_0043dd50(local_b0 & 0xfffffffffffffffe);
  }
  if ((local_78 & 1) != 0) {
    FUN_0043dd50(local_78 & 0xfffffffffffffffe);
  }
  return;
}

