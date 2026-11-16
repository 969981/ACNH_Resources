
void FUN_02874f20(int *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  long local_98;
  undefined *local_90;
  int local_88;
  int iStack_84;
  long local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined8 local_48;
  
  ppuVar7 = &local_c0;
  local_70 = 0;
  local_78 = PTR_DAT_04bbfe68 + 0x10;
  if (DAT_05aed670 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar8 + 7);
  local_68 = FUN_017baf44();
  puVar2 = PTR_DAT_04bc0510;
  puVar1 = PTR_DAT_04bb43c0;
  local_68 = local_68 & 1;
  local_80 = 0;
  local_90 = PTR_DAT_04bc0510 + 0x10;
  local_88 = *param_1;
  iStack_84 = param_1[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar1 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar9 != 0) {
          local_80 = lVar9;
        }
      }
    }
  }
  iVar5 = FUN_01aee3b4(&local_90);
  iVar3 = 0;
  iVar10 = -2;
  iVar6 = -2;
  switch(iVar5) {
  case 1:
switchD_028750c0_caseD_1:
    iVar10 = iVar6;
    iVar3 = -3;
    if (iVar5 != 5) {
      iVar3 = -1;
    }
    break;
  case 2:
  case 9:
switchD_028750c0_caseD_2:
    iVar10 = iVar6;
    iVar3 = -2;
    break;
  default:
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,10);
    iVar3 = FUN_01ae7550(&local_90);
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar3);
    if (iVar3 == (int)local_a8) {
LAB_02875134:
      iVar10 = -2;
    }
    else {
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0xb);
      iVar3 = FUN_01ae7550(&local_90);
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar3);
      if (iVar3 == (int)local_a8) goto LAB_02875134;
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0xc);
      iVar3 = FUN_01ae7550(&local_90);
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar3);
      if (iVar3 == (int)local_a8) goto LAB_02875134;
      if (iVar5 - 3U < 3) {
        iVar6 = -3;
        goto switchD_028750c0_caseD_1;
      }
      iVar10 = -1;
    }
    if (1 < iVar5 - 6U) {
      iVar6 = iVar10;
      if (iVar5 == 9) goto switchD_028750c0_caseD_2;
      goto switchD_028750c0_caseD_1;
    }
    iVar3 = 0;
    break;
  case 7:
    break;
  }
  local_a8._0_4_ = 10;
  iVar6 = FUN_01ae7550(&local_90);
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar6);
  if (iVar6 != (int)local_a8) {
    local_a8._0_4_ = 0xb;
    iVar6 = FUN_01ae7550(&local_90);
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar6);
    if (iVar6 != (int)local_a8) {
      local_a8._0_4_ = 0xc;
      iVar6 = FUN_01ae7550(&local_90);
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar6);
      if (iVar6 != (int)local_a8) {
        local_a0 = iVar10 + param_2;
        iStack_9c = iVar3 + param_3;
        ppuVar7 = &local_a8;
        local_a8 = PTR_DAT_04bb2010 + 0x10;
        goto LAB_028752c4;
      }
    }
  }
  local_48 = 0x315a;
  FUN_0277d4ac(&local_48);
  lVar9 = *(long *)puVar1;
  local_a8 = puVar2 + 0x10;
  local_98 = 0;
  local_a0 = (int)local_48;
  iStack_9c = local_48._4_4_;
  uVar4 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar1 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_48);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar9 != 0) {
          local_98 = lVar9;
        }
      }
    }
  }
  FUN_01b01548(&local_a8,param_1);
  param_1 = &local_b0;
  local_b0 = local_a0;
  iStack_ac = iStack_9c;
  local_b8 = iVar10 + param_2;
  iStack_b4 = iVar3 + param_3;
  local_c0 = PTR_DAT_04bb2010 + 0x10;
LAB_028752c4:
  FUN_01a50970(&local_78,0,param_1,ppuVar7);
  return;
}

