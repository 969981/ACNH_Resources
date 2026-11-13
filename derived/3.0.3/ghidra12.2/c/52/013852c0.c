
/* WARNING: Removing unreachable block (ram,0x01385720) */
/* WARNING: Removing unreachable block (ram,0x01385530) */
/* WARNING: Removing unreachable block (ram,0x01385520) */
/* WARNING: Removing unreachable block (ram,0x01385cc0) */
/* WARNING: Removing unreachable block (ram,0x01385cd0) */
/* WARNING: Removing unreachable block (ram,0x01385cdc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_013852c0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  long *plVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined *local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined **local_b0;
  undefined **ppuStack_a8;
  undefined ***local_a0;
  undefined8 local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar10 = PTR_DAT_04bbc1a0;
  puVar9 = PTR_DAT_04bb27c8;
  puVar8 = PTR_DAT_04bb2010;
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_d0 = PTR_DAT_04bb2010 + 0x10;
  fVar26 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar24 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar25 = fVar24 + 2.5;
  fVar27 = fVar26 + 2.5;
  fVar28 = fVar24 + 10.0 + -2.5;
  fVar24 = fVar26 + 10.0 + -2.5;
  local_b8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  local_b4 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  iVar14 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
  iVar23 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  local_c8 = local_b8;
  if (iVar14 <= local_b8) {
    local_c8 = iVar14;
  }
  if (local_b8 <= iVar14) {
    local_b8 = iVar14;
  }
  iStack_c4 = local_b4;
  if (iVar23 <= local_b4) {
    iStack_c4 = iVar23;
  }
  if (local_b4 <= iVar23) {
    local_b4 = iVar23;
  }
  if (*(long *)PTR_DAT_04bb27c8 == 0) {
    return 0;
  }
  lVar16 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
  if (lVar16 == 0) {
    return 0;
  }
  local_c0 = puStack_d0;
  uVar17 = FUN_00971f80(lVar16,&local_d8,1);
  if ((uVar17 & 1) == 0) {
    return 0;
  }
  local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
  local_90 = (undefined **)0x0;
  local_118 = (undefined **)CONCAT44(local_118._4_4_,0x1d);
  local_118 = (undefined **)CONCAT44(local_118._4_4_,0x2e);
  local_90 = (undefined **)0x4000;
  uVar17 = FUN_00977f70(param_1,&local_90);
  if ((uVar17 & 1) != 0) {
    return 0;
  }
  uVar17 = FUN_00977640(param_1);
  iVar14 = local_c8;
  puVar1 = PTR_DAT_04bb46c8;
  if ((uVar17 & 1) != 0) {
    return 0;
  }
  if ((param_2 & 1) == 0) {
    local_90 = (undefined **)CONCAT44((int)((ulong)local_90 >> 0x20),6);
    local_f0 = PTR_DAT_04bc43f8 + 0x10;
    local_118 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
    local_e8 = DAT_05636e70;
    local_108 = puVar8 + 0x10;
    local_110 = (undefined **)CONCAT71(local_110._1_7_,PTR_DAT_04bbc570[8]);
    local_110 = (undefined **)
                CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_110);
    local_100 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x18);
    local_fc = *(undefined4 *)(PTR_DAT_04bbc570 + 0x1c);
    local_f8 = *(int *)(PTR_DAT_04bbc570 + 0x20);
    local_f4 = CONCAT22(local_f4._2_2_,*(undefined2 *)(PTR_DAT_04bbc570 + 0x24));
    if (DAT_05636e70 != 0) {
      local_b0 = &PTR_FUN_04a9b150;
      ppuStack_a8 = &local_f0;
      local_a0 = &local_118;
      puVar20 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        puVar20 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
      }
      if (puVar20[1] != 0) {
        plVar19 = (long *)(*(code *)**(undefined8 **)(puVar20[1] + 0x10))();
        iVar14 = (**(code **)(*plVar19 + 0x18))();
        if (0 < iVar14) {
          iVar23 = 0;
          do {
            FUN_01360490(&local_90,puVar20[1],iVar23);
            uVar17 = (*(code *)*local_b0)(&local_b0,&local_90);
            if ((uVar17 & 1) != 0) break;
            bVar12 = iVar14 + -1 != iVar23;
            iVar23 = iVar23 + 1;
          } while (bVar12);
        }
      }
    }
    if (local_110._4_4_ != 0) {
      local_90 = (undefined **)(puVar10 + 0x10);
      local_88 = (undefined **)(puVar8 + 0x10);
      local_80 = (undefined *)0x0;
      local_70 = 0;
      local_78 = local_88;
      FUN_02a8f7b0(&local_118,&local_90);
      fVar24 = (float)(int)local_80 * 0.5;
      uVar22 = 0;
      if (fVar24 != (float)(int)fVar24) {
        uVar22 = (uint)(fVar24 < 0.0);
      }
      iVar14 = (int)fVar24 - uVar22;
      fVar24 = (float)local_80._4_4_ * 0.5;
      uVar22 = 0;
      if (fVar24 != (float)(int)fVar24) {
        uVar22 = (uint)(fVar24 < 0.0);
      }
      iVar23 = (int)fVar24 - uVar22;
      fVar24 = (float)(int)local_70 * 0.5;
      uVar22 = 0;
      if (fVar24 != (float)(int)fVar24) {
        uVar22 = (uint)(fVar24 < 0.0);
      }
      iVar15 = (int)fVar24 - uVar22;
      fVar24 = (float)local_70._4_4_ * 0.5;
      uVar22 = 0;
      if (fVar24 != (float)(int)fVar24) {
        uVar22 = (uint)(fVar24 < 0.0);
      }
      iVar6 = (int)fVar24 - uVar22;
      iVar21 = iVar14;
      if (iVar15 <= iVar14) {
        iVar21 = iVar15;
      }
      if (iVar14 <= iVar15) {
        iVar14 = iVar15;
      }
      iVar15 = iVar23;
      if (iVar23 <= iVar6) {
        iVar15 = iVar6;
      }
      if (iVar21 <= *(int *)(param_1 + 8) && *(int *)(param_1 + 8) <= iVar14) {
        if (iVar6 <= iVar23) {
          iVar23 = iVar6;
        }
        if ((iVar23 <= *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0xc) <= iVar15))
        goto LAB_01385994;
      }
    }
    local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
    local_90 = (undefined **)0x0;
    local_118 = (undefined **)CONCAT44(local_118._4_4_,8);
    local_90 = (undefined **)0x100;
    uVar17 = FUN_0097a720(param_1,&local_90);
    iVar14 = local_c8;
    if ((uVar17 & 1) != 0) {
      return 0;
    }
    local_80 = puVar8 + 0x10;
    iVar23 = local_b4 + 1;
    local_78 = (undefined **)CONCAT44(iStack_c4,local_c8);
    local_90 = &puStack_d0;
    local_88 = &local_c0;
    if (iVar23 != iStack_c4) {
      do {
        uVar17 = FUN_009765e0(&local_80);
        if ((uVar17 & 1) != 0) {
          local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
          local_118 = (undefined **)0x0;
          local_b0 = (undefined **)CONCAT44(local_b0._4_4_,0x1c);
          local_118 = (undefined **)0x10000000;
          lVar16 = *(long *)puVar9;
          if (lVar16 == 0) {
            return 0;
          }
          if (*(long *)(lVar16 + 0xa8) == 0) {
            return 0;
          }
          uVar17 = FUN_00949798(lVar16 + 0x28,&local_80,&local_118);
          if ((uVar17 & 1) == 0) {
            return 0;
          }
        }
        if ((int)local_78 < *(int *)(local_88 + 1)) {
          iVar21 = (int)local_78 + 1;
          iVar15 = local_78._4_4_;
        }
        else {
          iVar15 = local_78._4_4_ + 1;
          iVar21 = *(int *)(local_90 + 1);
          local_78 = (undefined **)CONCAT44(iVar15,(int)local_78);
        }
        local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar21);
      } while (iVar14 != iVar21 || iVar23 != iVar15);
    }
  }
  else {
    local_80 = puVar8 + 0x10;
    iVar23 = local_b4 + 1;
    local_78 = (undefined **)CONCAT44(iStack_c4,local_c8);
    local_90 = &puStack_d0;
    local_88 = &local_c0;
    if (iVar23 != iStack_c4) {
      do {
        lVar16 = *(long *)puVar9;
        local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
        local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
        local_e0 = 0;
        if (((lVar16 != 0) && (*(long *)(lVar16 + 0xa8) != 0)) &&
           (uVar17 = FUN_0094924c(lVar16 + 0x28,&local_80,&local_b0,&local_f0,(long)&local_e0 + 4,
                                  &local_e0), (uVar17 & 1) != 0)) {
          local_118 = (undefined **)CONCAT44(local_118._4_4_,local_b0._0_4_);
          lVar16 = FUN_009807cc(*(long *)puVar1 + 8,(ulong)local_b0 & 0xffffffff);
          if (((lVar16 != 0) &&
              (pcVar18 = (char *)FUN_009823a0(lVar16,0xb,0xe7e965db,*(undefined8 *)PTR_DAT_04bb5d28)
              , pcVar18 != (char *)0x0)) && (*pcVar18 != '\0')) {
            return 0;
          }
          local_118 = (undefined **)CONCAT44(local_118._4_4_,local_f0._0_4_);
          lVar16 = FUN_009807cc(*(long *)puVar1 + 8,(ulong)local_f0 & 0xffffffff);
          if (((lVar16 != 0) &&
              (pcVar18 = (char *)FUN_009823a0(lVar16,0xb,0xe7e965db,*(undefined8 *)PTR_DAT_04bb5d28)
              , pcVar18 != (char *)0x0)) && (*pcVar18 != '\0')) {
            return 0;
          }
          local_118 = (undefined **)CONCAT44(local_118._4_4_,local_e0._4_4_);
          lVar16 = FUN_009807cc(*(long *)puVar1 + 8,local_e0._4_4_);
          if (((lVar16 != 0) &&
              (pcVar18 = (char *)FUN_009823a0(lVar16,0xb,0xe7e965db,*(undefined8 *)PTR_DAT_04bb5d28)
              , pcVar18 != (char *)0x0)) && (*pcVar18 != '\0')) {
            return 0;
          }
          local_118 = (undefined **)CONCAT44(local_118._4_4_,(undefined4)local_e0);
          lVar16 = FUN_009807cc(*(long *)puVar1 + 8,local_e0 & 0xffffffff);
          if (((lVar16 != 0) &&
              (pcVar18 = (char *)FUN_009823a0(lVar16,0xb,0xe7e965db,*(undefined8 *)PTR_DAT_04bb5d28)
              , pcVar18 != (char *)0x0)) && (*pcVar18 != '\0')) {
            return 0;
          }
        }
        if ((int)local_78 < *(int *)(local_88 + 1)) {
          iVar21 = (int)local_78 + 1;
          iVar15 = local_78._4_4_;
        }
        else {
          iVar15 = local_78._4_4_ + 1;
          iVar21 = *(int *)(local_90 + 1);
          local_78 = (undefined **)CONCAT44(iVar15,(int)local_78);
        }
        local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar21);
      } while (iVar14 != iVar21 || iVar23 != iVar15);
    }
  }
LAB_01385994:
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_90 = (undefined **)CONCAT44(local_90._4_4_,3);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 3 & 1) != 0) {
      lVar16 = *(long *)PTR_DAT_04bb5c90;
      if (((local_c8 <= *(int *)(lVar16 + 0x38)) && (*(int *)(lVar16 + 0x28) <= local_b8)) &&
         ((iStack_c4 <= *(int *)(lVar16 + 0x3c) && (*(int *)(lVar16 + 0x2c) <= local_b4)))) {
        return 0;
      }
      if ((((*(int *)(lVar16 + 0x28) <= local_c8) && (local_b8 <= *(int *)(lVar16 + 0x38))) &&
          (*(int *)(lVar16 + 0x2c) <= iStack_c4)) && (local_b4 <= *(int *)(lVar16 + 0x3c))) {
        return 0;
      }
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
    lVar16 = *(long *)PTR_DAT_04bb59d8;
    FUN_01383220(&local_90,lVar16 + 0x18);
    FUN_01383220(&local_118,lVar16 + 0x40);
    iVar14 = *(int *)(param_1 + 8);
    if (((int)local_80 <= iVar14) && (iVar14 <= (int)local_70)) {
      if ((local_80._4_4_ <= *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0xc) <= local_70._4_4_)
         ) goto LAB_01385af0;
    }
    if (((int)local_108 <= iVar14) && (iVar14 <= local_f8)) {
      if ((local_108._4_4_ <= *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0xc) <= local_f4))
      goto LAB_01385af0;
    }
    return 0;
  }
LAB_01385af0:
  iVar23 = local_c8;
  puVar11 = PTR_DAT_04bb27a8;
  puVar1 = puVar8 + 0x10;
  iVar14 = local_b4 + 1;
  local_100 = local_c8;
  local_fc = iStack_c4;
  local_110 = &local_c0;
  local_108 = puVar1;
  if (iVar14 != iStack_c4) {
    local_118 = &puStack_d0;
    do {
      local_80 = (undefined *)CONCAT44(local_fc,local_100);
      local_70 = CONCAT44(local_fc,local_100);
      if ((((*(long *)puVar9 == 0) || (lVar16 = *(long *)(*(long *)puVar9 + 0xa8), lVar16 == 0)) ||
          (local_90 = (undefined **)(puVar10 + 0x10), local_88 = (undefined **)puVar1,
          local_78 = (undefined **)puVar1, uVar17 = FUN_00971f80(lVar16,&local_90,0),
          (uVar17 & 1) == 0)) || (uVar17 = FUN_00975dc0(&local_108), (uVar17 & 1) == 0)) {
        if (*(long *)(*(long *)puVar11 + 0x1f8) == 0) {
          return 0;
        }
        lVar16 = *(long *)(*(long *)(*(long *)puVar11 + 0x1f8) + 0xb0);
        if (lVar16 == 0) {
          return 0;
        }
        uVar22 = *(int *)(param_1 + 8) - *(int *)(lVar16 + 0x28);
        uVar4 = *(uint *)(lVar16 + 0x18);
        uVar7 = *(int *)(param_1 + 0xc) - *(int *)(lVar16 + 0x2c);
        if ((uVar22 < uVar4 && uVar7 <= *(uint *)(lVar16 + 0x1c)) &&
            (uVar4 <= uVar22 || *(uint *)(lVar16 + 0x1c) != uVar7)) {
          uVar22 = uVar22 + uVar4 * uVar7;
LAB_01385d54:
          if (*(uint *)(lVar16 + 0x30) <= uVar22) {
            uVar22 = 0;
          }
          puVar20 = (undefined8 *)(*(long *)(lVar16 + 0x38) + (long)(int)uVar22 * 0x68);
        }
        else if (*(char *)(lVar16 + 0x88) == '\0') {
          puVar20 = &DAT_051a50f0;
        }
        else {
          uVar22 = *(int *)(param_1 + 8) - *(int *)(lVar16 + 0x98);
          uVar4 = *(int *)(param_1 + 0xc) - *(int *)(lVar16 + 0x9c);
          puVar20 = &DAT_051a50f0;
          if (uVar22 < *(uint *)(lVar16 + 0xa0) && uVar4 < *(uint *)(lVar16 + 0xa4)) {
            uVar22 = uVar22 + *(uint *)(lVar16 + 0xa0) * uVar4 + *(int *)(lVar16 + 0x8c);
            goto LAB_01385d54;
          }
        }
        if (((*(uint *)((long)puVar20 + 0xc) & 0x2100) != 0x100) &&
           ((*(uint *)((long)puVar20 + 0xc) & 0xc0100) != 0x40000)) {
          return 0;
        }
      }
      if (local_100 < *(int *)(local_110 + 1)) {
        local_100 = local_100 + 1;
      }
      else {
        local_100 = *(int *)(local_118 + 1);
        local_fc = local_fc + 1;
      }
    } while ((iVar23 != local_100) || (iVar14 != local_fc));
  }
  iVar14 = local_c8;
  puVar1 = PTR_DAT_04bc3a80;
  puVar10 = PTR_DAT_04bb2720;
  puVar9 = PTR_DAT_04bb2640;
  if ((param_2 & 1) == 0) {
    local_80 = puVar8 + 0x10;
    local_78._0_4_ = local_c8;
    local_78._4_4_ = iStack_c4;
    iVar23 = local_b4 + 1;
    if (iVar23 != iStack_c4) {
      ppuVar2 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
      local_90 = &puStack_d0;
      local_88 = &local_c0;
      do {
        lVar16 = *(long *)puVar10;
        local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
        local_118 = ppuVar2;
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x330) == 0)) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)puVar9 + 0x18))
                              (*(long **)puVar9,*(undefined4 *)(lVar16 + 0x338));
          iVar15 = FUN_006bd550(*puVar20,0);
          puVar20 = (undefined8 *)puVar1;
          if (iVar15 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
        local_110 = (undefined **)CONCAT44(*(undefined4 *)(puVar20 + 7),(undefined4)local_110);
        uVar13 = FUN_017baf44();
        local_108 = (undefined *)(CONCAT71(local_108._1_7_,uVar13) & 0xffffffffffffff01);
        FUN_01a5033c(&local_b0,&local_118,0,&local_80,0);
        if ((short)local_b0 != -2) {
          return 0;
        }
        if ((int)local_78 < *(int *)(local_88 + 1)) {
          local_78._0_4_ = (int)local_78 + 1;
        }
        else {
          local_78._4_4_ = local_78._4_4_ + 1;
          local_78._0_4_ = *(int *)(local_90 + 1);
        }
      } while ((iVar14 != (int)local_78) || (iVar23 != local_78._4_4_));
    }
  }
  return 1;
}

