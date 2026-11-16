
void FUN_028fe780(long param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  int local_d8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  local_70 = 0;
  local_78 = PTR_DAT_04bbfe68 + 0x10;
  if (DAT_05aed670 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar11 + 7);
  local_68 = FUN_017baf44();
  puVar2 = PTR_DAT_04bb43c0;
  local_68 = local_68 & 1;
  local_80 = 0;
  local_90 = PTR_DAT_04bc0510 + 0x10;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar2 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (uVar4 < *(uint *)(lVar12 + 0x1d8)) {
        lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar12 != 0) {
          local_80 = lVar12;
        }
      }
    }
  }
  iVar3 = FUN_01aee3b4(&local_90);
  if ((((iVar3 == 1) || (iVar3 = FUN_01aee3b4(&local_90), iVar3 == 7)) ||
      (iVar3 = FUN_01aee3b4(&local_90), iVar3 == 2)) ||
     (iVar3 = FUN_01aee3b4(&local_90), iVar3 == 9)) {
LAB_028fe9bc:
    iVar3 = -2;
  }
  else {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,10);
    iVar3 = FUN_01ae7550(&local_90);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar3);
    if (iVar3 == (int)local_c8) goto LAB_028fe9bc;
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xb);
    iVar3 = FUN_01ae7550(&local_90);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar3);
    if (iVar3 == (int)local_c8) goto LAB_028fe9bc;
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xc);
    iVar3 = FUN_01ae7550(&local_90);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar3);
    if (iVar3 == (int)local_c8) goto LAB_028fe9bc;
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xe);
    iVar3 = FUN_01ae7550(&local_90);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar3);
    if (iVar3 == (int)local_c8) goto LAB_028fe9bc;
    iVar3 = FUN_01aee3b4(&local_90);
    if (((iVar3 == 3) || (iVar3 = FUN_01aee3b4(&local_90), iVar3 == 4)) ||
       (iVar3 = FUN_01aee3b4(&local_90), iVar3 == 5)) {
      iVar3 = -3;
    }
    else {
      iVar3 = -1;
    }
  }
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xe);
  iVar5 = FUN_01ae7550(&local_90);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar5);
  if (iVar5 == (int)local_c8) {
LAB_028fe9e8:
    local_d8 = -2;
  }
  else {
    iVar5 = FUN_01aee3b4(&local_90);
    if (param_5 < 3) {
      if (iVar5 == 6) {
        local_d8 = -1;
      }
      else {
        iVar5 = FUN_01aee3b4(&local_90);
        local_d8 = -2;
        if (iVar5 == 7) {
          local_d8 = -1;
        }
      }
    }
    else if ((iVar5 == 6) || (iVar5 = FUN_01aee3b4(&local_90), iVar5 == 7)) {
      local_d8 = 0;
    }
    else {
      iVar5 = FUN_01aee3b4(&local_90);
      if ((iVar5 == 2) || (iVar5 = FUN_01aee3b4(&local_90), iVar5 == 9)) goto LAB_028fe9e8;
      iVar5 = FUN_01aee3b4(&local_90);
      local_d8 = -3;
      if (iVar5 != 5) {
        local_d8 = -1;
      }
    }
  }
  local_98 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_98);
  uVar4 = 0;
  uVar14 = 0;
  piVar13 = (int *)(param_1 + 0x200);
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  local_a0 = 0;
  lVar12 = *(long *)puVar2;
  do {
    lVar1 = param_1 + ((long)((ulong)uVar14 << 0x20) >> 0x1d);
    uVar6 = FUN_0277d6c4(lVar1);
    lVar9 = *(long *)puVar2;
    if (lVar9 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        uVar7 = FUN_0277d7b4(lVar1,param_2);
        if ((uVar7 & 1) != 0) {
          if (0x3f < uVar4) {
            piVar13 = (int *)(param_1 + 0x200);
          }
          if (*piVar13 == 0) {
            local_c8 = (undefined *)0x37b4;
            FUN_0277d4ac(&local_c8);
            local_98 = local_c8;
            iVar3 = param_3 + -1;
            local_d8 = param_4 + -1;
            goto LAB_028fec34;
          }
          break;
        }
        lVar9 = *(long *)puVar2;
      }
    }
    uVar4 = uVar4 + 1;
    uVar14 = uVar14 + 1;
    piVar13 = piVar13 + 1;
    lVar12 = lVar9;
  } while (uVar4 != 0x40);
  local_c8._0_4_ = 10;
  local_b0._0_4_ = FUN_01ae7550(&local_90);
  if ((int)local_b0 == (int)local_c8) {
LAB_028feb5c:
    local_b0 = 0x3805;
    FUN_0277d4ac(&local_b0);
    lVar12 = *(long *)puVar2;
    local_b8 = 0;
    local_c0 = (int)local_b0;
    uStack_bc = local_b0._4_4_;
    local_c8 = PTR_DAT_04bc0510 + 0x10;
    uVar4 = FUN_0277d6c4(&local_c0);
    if (*(long *)puVar2 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_b0);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (uVar4 < *(uint *)(lVar12 + 0x1d8)) {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
          if (lVar12 != 0) {
            local_b8 = lVar12;
          }
        }
      }
    }
    FUN_01b01548(&local_c8,param_2);
  }
  else {
    local_c8._0_4_ = 0xb;
    local_b0._0_4_ = FUN_01ae7550(&local_90);
    if ((int)local_b0 == (int)local_c8) goto LAB_028feb5c;
    local_c8._0_4_ = 0xc;
    local_b0._0_4_ = FUN_01ae7550(&local_90);
    if ((int)local_b0 == (int)local_c8) goto LAB_028feb5c;
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xe);
    iVar5 = FUN_01ae7550(&local_90);
    local_b0 = CONCAT44(local_b0._4_4_,iVar5);
    if (iVar5 != (int)local_c8) {
      uVar8 = *param_2;
      uVar10 = param_2[1];
      goto LAB_028fec1c;
    }
    local_b0 = 0x342f;
    FUN_0277d4ac(&local_b0);
    lVar12 = *(long *)puVar2;
    local_b8 = 0;
    local_c0 = (int)local_b0;
    uStack_bc = local_b0._4_4_;
    local_c8 = PTR_DAT_04bc0510 + 0x10;
    uVar4 = FUN_0277d6c4(&local_c0);
    if (*(long *)puVar2 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_b0);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (uVar4 < *(uint *)(lVar12 + 0x1d8)) {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
          if (lVar12 != 0) {
            local_b8 = lVar12;
          }
        }
      }
    }
    FUN_01b01cc0(&local_c8,param_2);
  }
  uVar8 = local_c0;
  uVar10 = uStack_bc;
LAB_028fec1c:
  local_98 = (undefined *)CONCAT44(uVar10,uVar8);
  iVar3 = iVar3 + param_3;
  local_d8 = local_d8 + param_4;
LAB_028fec34:
  local_a0 = CONCAT44(local_d8,iVar3);
  FUN_01a50970(&local_78,0,&local_98,&local_a8);
  return;
}

