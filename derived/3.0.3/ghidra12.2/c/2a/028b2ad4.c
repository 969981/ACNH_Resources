
void FUN_028b2ad4(undefined8 param_1,undefined8 **param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *local_c8;
  int local_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  int iStack_a4;
  long local_a0;
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
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar12 + 7);
  local_68 = FUN_017baf44();
  puVar3 = PTR_DAT_04bc0510;
  puVar2 = PTR_DAT_04bb43c0;
  local_68 = local_68 & 1;
  local_80 = 0;
  local_90 = PTR_DAT_04bc0510 + 0x10;
  local_88 = *(undefined4 *)param_2;
  uStack_84 = *(undefined4 *)((long)param_2 + 4);
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar2 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (uVar5 < *(uint *)(lVar13 + 0x1d8)) {
        lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar13 != 0) {
          local_80 = lVar13;
        }
      }
    }
  }
  iVar4 = FUN_01aee3b4(&local_90);
  if ((((iVar4 == 1) || (iVar4 = FUN_01aee3b4(&local_90), iVar4 == 7)) ||
      (iVar4 = FUN_01aee3b4(&local_90), iVar4 == 2)) ||
     (iVar4 = FUN_01aee3b4(&local_90), iVar4 == 9)) {
LAB_028b2d14:
    iVar4 = -2;
  }
  else {
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,10);
    iVar4 = FUN_01ae7550(&local_90);
    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar4);
    if (iVar4 == (int)local_b0) goto LAB_028b2d14;
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,0xb);
    iVar4 = FUN_01ae7550(&local_90);
    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar4);
    if (iVar4 == (int)local_b0) goto LAB_028b2d14;
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,0xc);
    iVar4 = FUN_01ae7550(&local_90);
    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar4);
    if (iVar4 == (int)local_b0) goto LAB_028b2d14;
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,0xe);
    iVar4 = FUN_01ae7550(&local_90);
    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar4);
    if (iVar4 == (int)local_b0) goto LAB_028b2d14;
    iVar4 = FUN_01aee3b4(&local_90);
    if (((iVar4 == 3) || (iVar4 = FUN_01aee3b4(&local_90), iVar4 == 4)) ||
       (iVar4 = FUN_01aee3b4(&local_90), iVar4 == 5)) {
      iVar4 = -3;
    }
    else {
      iVar4 = -1;
    }
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,0xe);
  iVar6 = FUN_01ae7550(&local_90);
  local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar6);
  if (iVar6 == (int)local_b0) {
LAB_028b2d3c:
    iVar6 = -2;
    if ((param_5 & 1) != 0) goto LAB_028b2d70;
  }
  else {
    iVar6 = FUN_01aee3b4(&local_90);
    if ((iVar6 == 6) || (iVar6 = FUN_01aee3b4(&local_90), iVar6 == 7)) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_01aee3b4(&local_90);
      if ((iVar6 == 2) || (iVar6 = FUN_01aee3b4(&local_90), iVar6 == 9)) goto LAB_028b2d3c;
      iVar7 = FUN_01aee3b4(&local_90);
      iVar6 = -3;
      if (iVar7 != 5) {
        iVar6 = -1;
      }
    }
    if ((param_5 & 1) != 0) {
LAB_028b2d70:
      iVar7 = FUN_01ae7550(&local_90);
      if ((iVar7 == 7) || (iVar7 = FUN_01ae7550(&local_90), iVar7 == 5)) {
        local_98 = (undefined8 *)0xa3e;
        FUN_0277d4ac(&local_98);
        if (DAT_05574040 == 0) {
LAB_028b2fd8:
          lVar13 = 0;
        }
        else {
          puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
          if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
            lVar9 = (**(code **)(*(long *)*puVar12 + 0x38))();
            lVar13 = 0;
            if (lVar9 != 0) {
              lVar13 = lVar9 + 0x70;
            }
          }
          else {
            if (puVar12 == (undefined8 *)0x0) goto LAB_028b2fd8;
            lVar13 = 0;
            if ((long *)puVar12[0x26] != (long *)0x0) {
              lVar13 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
            }
          }
        }
        if ((*(long **)(lVar13 + 0x1a0b70) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar13 + 0x1a0b70), puVar12 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar12)();
          uVar5 = uVar5 ^ 1;
        }
        uVar1 = *(uint *)(*(long *)(lVar13 + 0x1a0b58) + *(long *)(lVar13 + 0x1a0b50));
        if (3 < uVar1) {
          uVar1 = 0;
        }
        local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,uVar1);
        if ((((uVar5 & 1) == 0) && (*(long *)(lVar13 + 0x1a0b70) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x1a0b70) + 8),
           puVar12 != (undefined8 *)0x0)) {
          (**(code **)*puVar12)();
        }
        if ((int)uVar1 < 3) {
          iVar7 = FUN_01aee3b4(&local_90);
          if ((iVar7 == 1) || (iVar7 = FUN_01aee3b4(&local_90), iVar7 == 7)) {
            local_b0 = (undefined8 *)0xa3f;
            goto LAB_028b30b0;
          }
        }
        else {
          local_b0 = (undefined8 *)0x219d;
          FUN_0277d4ac(&local_b0);
          local_98 = local_b0;
          iVar7 = FUN_01aee3b4(&local_90);
          if ((iVar7 == 1) || (iVar7 = FUN_01aee3b4(&local_90), iVar7 == 7)) {
            local_b0 = (undefined8 *)0x219e;
LAB_028b30b0:
            FUN_0277d4ac(&local_b0);
            local_98 = local_b0;
          }
        }
        lVar13 = *(long *)puVar2;
        local_b0 = (undefined8 *)(puVar3 + 0x10);
        local_a0 = 0;
        local_a8 = (int)local_98;
        iStack_a4 = local_98._4_4_;
        uVar5 = FUN_0277d6c4(&local_a8);
        if (*(long *)puVar2 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar13 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_98);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if (uVar5 < *(uint *)(lVar13 + 0x1d8)) {
              lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar13 != 0) {
                local_a0 = lVar13;
              }
            }
          }
        }
        uVar8 = FUN_01ae98d0(&local_90);
        FUN_01afade0(&local_b0,uVar8);
        local_b8 = (undefined8 *)CONCAT44(iStack_a4,local_a8);
        local_c8 = &DAT_048f9750;
        local_c0 = iVar4 + param_3;
        iStack_bc = iVar6 + param_4;
        FUN_01a50970(&local_78,0,&local_b8,&local_c8);
        iVar7 = FUN_028b39d0(param_1,param_2);
        if (iVar7 == 0) {
          local_b8 = (undefined8 *)0x1cf2;
          FUN_0277d4ac(&local_b8);
          local_c0 = param_3 + -1;
          iStack_bc = param_4 + -1;
          local_c8 = &DAT_048f9750;
          param_2 = (undefined8 **)&local_b8;
          ppuVar11 = &local_c8;
          uVar10 = 1;
        }
        else {
          ppuVar11 = &local_c8;
          local_c8 = &DAT_048f9750;
          uVar10 = 1;
          local_c0 = iVar4 + param_3;
          iStack_bc = iVar6 + param_4;
        }
        goto LAB_028b3204;
      }
    }
  }
  iVar7 = FUN_028b39d0(param_1,param_2);
  if (iVar7 == 0) {
    local_c8 = (undefined8 *)0x1cf2;
    FUN_0277d4ac(&local_c8);
    local_a8 = param_3 + -1;
    iStack_a4 = param_4 + -1;
    param_2 = &local_c8;
    ppuVar11 = &local_b0;
    uVar10 = 0;
    local_b0 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    goto LAB_028b3204;
  }
  local_b0._0_4_ = 10;
  iVar7 = FUN_01ae7550(&local_90);
  local_c8._0_4_ = iVar7;
  if (iVar7 == (int)local_b0) {
LAB_028b2e90:
    local_98 = (undefined8 *)0x1618;
    FUN_0277d4ac(&local_98);
    lVar13 = *(long *)puVar2;
    local_b0 = (undefined8 *)(puVar3 + 0x10);
    local_a0 = 0;
    local_a8 = (int)local_98;
    iStack_a4 = local_98._4_4_;
    uVar5 = FUN_0277d6c4(&local_a8);
    if (*(long *)puVar2 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_98);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (uVar5 < *(uint *)(lVar13 + 0x1d8)) {
          lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar13 != 0) {
            local_a0 = lVar13;
          }
        }
      }
    }
    FUN_01b01548(&local_b0,param_2);
  }
  else {
    local_b0._0_4_ = 0xb;
    local_c8._0_4_ = FUN_01ae7550(&local_90);
    if ((int)local_c8 == (int)local_b0) goto LAB_028b2e90;
    local_b0._0_4_ = 0xc;
    local_c8._0_4_ = FUN_01ae7550(&local_90);
    if ((int)local_c8 == (int)local_b0) goto LAB_028b2e90;
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,0xe);
    iVar7 = FUN_01ae7550(&local_90);
    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar7);
    if (iVar7 != (int)local_b0) {
      local_a8 = iVar4 + param_3;
      iStack_a4 = iVar6 + param_4;
      ppuVar11 = &local_b0;
      uVar10 = 0;
      local_b0 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
      goto LAB_028b3204;
    }
    local_98 = (undefined8 *)0x342f;
    FUN_0277d4ac(&local_98);
    lVar13 = *(long *)puVar2;
    local_b0 = (undefined8 *)(puVar3 + 0x10);
    local_a0 = 0;
    local_a8 = (int)local_98;
    iStack_a4 = local_98._4_4_;
    uVar5 = FUN_0277d6c4(&local_a8);
    if (*(long *)puVar2 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_98);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (uVar5 < *(uint *)(lVar13 + 0x1d8)) {
          lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar13 != 0) {
            local_a0 = lVar13;
          }
        }
      }
    }
    FUN_01b01cc0(&local_b0,param_2);
  }
  param_2 = (undefined8 **)&local_b8;
  ppuVar11 = &local_c8;
  uVar10 = 0;
  local_b8 = (undefined8 *)CONCAT44(iStack_a4,local_a8);
  local_c0 = iVar4 + param_3;
  iStack_bc = iVar6 + param_4;
  local_c8 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
LAB_028b3204:
  FUN_01a50970(&local_78,uVar10,param_2,ppuVar11);
  return;
}

