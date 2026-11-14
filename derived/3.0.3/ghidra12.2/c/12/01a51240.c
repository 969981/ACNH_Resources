
int FUN_01a51240(long param_1,uint param_2,long param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  short sVar9;
  bool bVar10;
  ulong uVar11;
  short *psVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_d0;
  uint local_cc;
  undefined *local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  int local_a0;
  uint local_9c;
  undefined *local_98;
  undefined *puStack_90;
  int local_88;
  uint uStack_84;
  undefined *local_80;
  int local_78;
  uint local_74;
  uint local_6c;
  
  puVar4 = PTR_DAT_04bb37e0;
  iVar7 = *(int *)(param_3 + 0x10);
  uStack_84 = *(uint *)(param_3 + 0x14);
  local_e0 = *(undefined **)(param_3 + 0x10);
  local_78 = *(int *)(param_3 + 0x20);
  local_74 = *(uint *)(param_3 + 0x24);
  local_f8 = (undefined *)(param_3 + 8);
  local_f0 = (undefined *)(param_3 + 0x18);
  uVar1 = local_74 + 1;
  bVar10 = uVar1 != uStack_84;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  local_e8 = PTR_DAT_04bb2010 + 0x10;
  local_88 = iVar7;
  puStack_90 = local_e8;
  local_80 = local_e8;
  if ((param_5 & 1) == 0) {
    if (param_4 == (undefined8 *)0x0) {
      if (bVar10) {
        ppuVar2 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
        do {
          local_b0 = (undefined **)0x0;
          local_b8 = ppuVar2;
          FUN_01a5033c(&local_c8,param_1,param_2,&local_e8,&local_b8);
          if ((short)local_c8 != -2) {
            if ((int)local_b0 <= local_88) {
              local_88 = (int)local_b0;
            }
            if ((int)local_b0._4_4_ <= (int)uStack_84) {
              uStack_84 = local_b0._4_4_;
            }
            if (local_78 <= (int)local_b0) {
              local_78 = (int)local_b0;
            }
            if ((int)local_74 <= (int)local_b0._4_4_) {
              local_74 = local_b0._4_4_;
            }
          }
          if ((int)local_e0 < *(int *)(local_f0 + 8)) {
            iVar14 = (int)local_e0 + 1;
            uVar18 = local_e0._4_4_;
          }
          else {
            uVar18 = local_e0._4_4_ + 1;
            iVar14 = *(int *)(local_f8 + 8);
            local_e0 = (undefined *)((ulong)uVar18 << 0x20);
          }
          local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar14);
        } while ((iVar7 != iVar14) || (uVar1 != uVar18));
      }
    }
    else if (bVar10) {
      ppuVar2 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      do {
        local_b0 = (undefined **)0x0;
        local_b8 = ppuVar2;
        FUN_01a5033c(&local_c8,param_1,param_2,&local_e8,&local_b8);
        if (((short)local_c8 != -2) &&
           (uVar11 = (**(code **)*param_4)(param_4,&local_c8), (uVar11 & 1) != 0)) {
          if ((int)local_b0 <= local_88) {
            local_88 = (int)local_b0;
          }
          if ((int)local_b0._4_4_ <= (int)uStack_84) {
            uStack_84 = local_b0._4_4_;
          }
          if (local_78 <= (int)local_b0) {
            local_78 = (int)local_b0;
          }
          if ((int)local_74 <= (int)local_b0._4_4_) {
            local_74 = local_b0._4_4_;
          }
        }
        if ((int)local_e0 < *(int *)(local_f0 + 8)) {
          iVar14 = (int)local_e0 + 1;
          uVar18 = local_e0._4_4_;
        }
        else {
          uVar18 = local_e0._4_4_ + 1;
          iVar14 = *(int *)(local_f8 + 8);
          local_e0 = (undefined *)((ulong)uVar18 << 0x20);
        }
        local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar14);
      } while ((iVar7 != iVar14) || (uVar1 != uVar18));
    }
  }
  else if (bVar10) {
    ppuVar2 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
    do {
      local_b0 = (undefined **)0x0;
      local_b8 = ppuVar2;
      uVar11 = FUN_01a4f798(param_1,param_2,&local_e8);
      psVar12 = (short *)puVar4;
      if ((uVar11 & 1) != 0) {
        uVar18 = *(uint *)(param_1 + 8);
        if (uVar18 == 0) {
LAB_01a51370:
          plVar17 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_01a51374:
          lVar16 = *plVar17;
        }
        else {
          local_6c = uVar18;
          if (uVar18 != 0) {
            if (uVar18 == 0) goto LAB_01a51370;
            plVar3 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
            plVar17 = plVar3 + uVar18;
            if (0x38 < uVar18) {
              plVar17 = plVar3;
            }
            goto LAB_01a51374;
          }
          lVar16 = 0;
        }
        lVar6 = lVar16 + 200 + (ulong)param_2 * 0x10;
        if (7 < param_2) {
          lVar6 = lVar16 + 200;
        }
        lVar16 = *(long *)(lVar6 + 8);
        local_d0 = param_2;
        if (lVar16 != 0) {
          lVar6 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
          if (1 < *(uint *)(lVar16 + 0x198)) {
            lVar6 = lVar16 + 0x130;
          }
          psVar12 = (short *)FUN_012eb21c(lVar6,&local_e8,&local_b8);
        }
      }
      local_c8 = *(undefined **)psVar12;
      if ((*psVar12 != -2) &&
         ((param_4 == (undefined8 *)0x0 ||
          (uVar11 = (**(code **)*param_4)(param_4,&local_c8), (uVar11 & 1) != 0)))) {
        if ((int)local_b0 <= local_88) {
          local_88 = (int)local_b0;
        }
        if ((int)local_b0._4_4_ <= (int)uStack_84) {
          uStack_84 = local_b0._4_4_;
        }
        if (local_78 <= (int)local_b0) {
          local_78 = (int)local_b0;
        }
        if ((int)local_74 <= (int)local_b0._4_4_) {
          local_74 = local_b0._4_4_;
        }
      }
      if ((int)local_e0 < *(int *)(local_f0 + 8)) {
        iVar14 = (int)local_e0 + 1;
        uVar18 = local_e0._4_4_;
      }
      else {
        uVar18 = local_e0._4_4_ + 1;
        iVar14 = *(int *)(local_f8 + 8);
        local_e0 = (undefined *)((ulong)uVar18 << 0x20);
      }
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar14);
    } while ((iVar7 != iVar14) || (uVar1 != uVar18));
  }
  iVar7 = local_88;
  local_a0 = local_88;
  local_9c = uStack_84;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  uVar1 = local_74 + 1;
  if (uVar1 == uStack_84) {
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    puVar5 = PTR_DAT_04bbc1a0 + 0x10;
    local_b8 = &puStack_90;
    local_b0 = &local_80;
    local_a8 = puVar4;
    do {
      local_c0 = 0;
      local_c8 = puVar4;
      if ((param_5 & 1) == 0) {
        FUN_01a5033c(&local_d0,param_1,param_2,&local_a8,&local_c8);
        uVar8 = local_c0;
        sVar9 = (short)local_d0;
      }
      else {
        uVar11 = FUN_01a4f798(param_1,param_2,&local_a8);
        puVar13 = (uint *)PTR_DAT_04bb37e0;
        if ((uVar11 & 1) != 0) {
          uVar18 = *(uint *)(param_1 + 8);
          if (uVar18 == 0) {
            local_f8 = (undefined *)((ulong)local_f8._4_4_ << 0x20);
LAB_01a51724:
            plVar17 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_01a51728:
            lVar16 = *plVar17;
          }
          else {
            local_d0 = uVar18;
            if (uVar18 != 0) {
              local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar18);
              if (uVar18 == 0) goto LAB_01a51724;
              plVar3 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
              plVar17 = plVar3 + uVar18;
              if (0x38 < uVar18) {
                plVar17 = plVar3;
              }
              goto LAB_01a51728;
            }
            lVar16 = 0;
          }
          local_f8 = (undefined *)CONCAT44(local_f8._4_4_,param_2);
          lVar6 = lVar16 + 200 + (ulong)param_2 * 0x10;
          if (7 < param_2) {
            lVar6 = lVar16 + 200;
          }
          lVar16 = *(long *)(lVar6 + 8);
          if (lVar16 != 0) {
            lVar6 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar16 + 0x198)) {
              lVar6 = lVar16 + 0x130;
            }
            puVar13 = (uint *)FUN_012eb21c(lVar6,&local_a8,&local_c8);
          }
        }
        sVar9 = (short)*puVar13;
        local_d0 = *puVar13;
        local_cc = puVar13[1];
        uVar8 = local_c0;
      }
      if (((sVar9 != -2) && (local_c0._0_4_ = (int)uVar8, local_a0 == (int)local_c0)) &&
         (local_c0._4_4_ = (uint)((ulong)uVar8 >> 0x20), local_9c == local_c0._4_4_)) {
        iVar15 = local_a0;
        local_c0 = uVar8;
        if (param_4 != (undefined8 *)0x0) {
          uVar11 = (**(code **)*param_4)(param_4,&local_d0);
          if ((uVar11 & 1) == 0) goto LAB_01a518a0;
          iVar15 = (int)local_c0;
        }
        if (((iVar15 < *(int *)(param_3 + 0x10)) || (*(int *)(param_3 + 0x20) < iVar15)) ||
           (((int)local_c0._4_4_ < *(int *)(param_3 + 0x14) ||
            (*(int *)(param_3 + 0x24) < (int)local_c0._4_4_)))) {
          local_e8 = (undefined *)0x0;
          local_f0 = PTR_DAT_04bb2010 + 0x10;
          local_d8 = 0;
          local_f8 = puVar5;
          local_e0 = local_f0;
          FUN_0277f02c(&local_d0,&local_f8);
          uVar18 = (uint)(*(int *)(param_3 + 0x20) < (int)local_e8 + (int)local_c0 ||
                         (int)local_d8 + (int)local_c0 < *(int *)(param_3 + 0x10));
          if (*(int *)(param_3 + 0x24) < (int)(local_e8._4_4_ + local_c0._4_4_) ||
              (int)(local_d8._4_4_ + local_c0._4_4_) < *(int *)(param_3 + 0x14)) {
            uVar18 = 1;
          }
          iVar14 = iVar14 + (uVar18 ^ 1);
        }
        else {
          iVar14 = iVar14 + 1;
        }
      }
LAB_01a518a0:
      if (local_a0 < *(int *)(local_b0 + 1)) {
        local_a0 = local_a0 + 1;
      }
      else {
        local_a0 = *(int *)(local_b8 + 1);
        local_9c = local_9c + 1;
      }
    } while ((iVar7 != local_a0) || (uVar1 != local_9c));
  }
  return iVar14;
}

