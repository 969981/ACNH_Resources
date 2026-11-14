
undefined8
FUN_01514490(undefined8 *param_1,float *param_2,uint *param_3,int *param_4,undefined4 *param_5,
            long param_6,uint param_7,uint param_8,byte *param_9)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_1d0;
  undefined8 local_1c8;
  byte local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined1 local_1ae;
  undefined8 local_1ac;
  uint local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined1 local_17e;
  undefined8 local_17c;
  undefined *local_170;
  undefined *puStack_168;
  int local_160;
  uint uStack_15c;
  undefined *local_158;
  int local_150;
  uint uStack_14c;
  float local_144;
  float fStack_140;
  float local_13c;
  undefined *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  byte local_110;
  undefined3 uStack_10f;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  undefined *puStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  
  local_b8 = 0;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if (lVar15 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar7 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  local_b4 = *(undefined4 *)(puVar20 + 7);
  local_b0 = FUN_017baf44();
  puVar2 = PTR_DAT_04bb43c0;
  local_b0 = local_b0 & 1;
  puStack_c0 = PTR_DAT_04bb3140 + 0x10;
  local_d8 = PTR_DAT_04bc0510 + 0x10;
  local_c8 = (uint *)0x0;
  local_d0 = *param_5;
  uStack_cc = param_5[1];
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_d0);
  if (*(long *)puVar2 == 0) {
LAB_0151461c:
    if (local_c8 != (uint *)0x0) goto LAB_01514624;
LAB_015146ac:
    uVar9 = 0;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0151461c;
    lVar15 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(param_5);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
       (puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar16 == (uint *)0x0)) goto LAB_0151461c;
    local_c8 = puVar16;
LAB_01514624:
    uVar8 = *local_c8;
    uVar9 = 0;
    if ((uVar8 != 0) && (local_c8 != (uint *)(ulong)uVar8)) {
      puVar16 = (uint *)((long)local_c8 - (long)(ulong)uVar8);
      uVar9 = 0;
      if (*puVar16 != 0) {
        uVar8 = puVar16[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar15 != 0) {
            uVar9 = 0;
            if ((ulong)uVar8 != 0) {
              uVar9 = (uint)((ulong)((long)local_c8 - lVar15) / (ulong)uVar8);
            }
            if (*puVar16 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar9 * 2),
               uVar9 < 0x52)) goto LAB_015146b0;
          }
        }
        goto LAB_015146ac;
      }
    }
  }
LAB_015146b0:
  puVar4 = PTR_DAT_04bbc1a0;
  puVar2 = PTR_DAT_04bb2010;
  if (8 < uVar9 - 1) {
    return 0;
  }
  local_f0 = DAT_0520ee18;
  uStack_ec = DAT_0520ee1c;
  local_100 = PTR_DAT_04bbc1a0 + 0x10;
  local_e0 = DAT_0520ee28;
  uStack_dc = DAT_0520ee2c;
  bVar6 = *PTR_DAT_04bb32e0;
  puStack_f8 = PTR_DAT_04bb2010 + 0x10;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  _local_110 = CONCAT31((int3)(uVar9 >> 8),bVar6);
  local_10c = *param_5;
  uStack_108 = param_5[1];
  local_e8 = puStack_f8;
  uVar10 = FUN_0151393c(&local_110);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  uVar9 = FUN_01ae98d0(&local_d8);
  uVar8 = *param_4 + 0x20000000U >> 0x1e;
  uVar10 = FUN_01ae94f0(&local_d8);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  local_138 = puVar4 + 0x10;
  puStack_130 = puVar2 + 0x10;
  local_128 = 0;
  local_118 = 0;
  local_120 = puStack_130;
  FUN_01afb480(&local_d8,&local_138);
  local_128._0_4_ = (int)local_128 + *(int *)(param_6 + 8);
  local_118._0_4_ = (int)local_118 + *(int *)(param_6 + 8);
  local_128._4_4_ = local_128._4_4_ + *(int *)(param_6 + 0xc);
  local_118._4_4_ = local_118._4_4_ + *(int *)(param_6 + 0xc);
  fVar31 = *param_2;
  fVar30 = param_2[1];
  fVar32 = param_2[2];
  fVar28 = ((float)(int)local_128 * 5.0 + (float)(int)local_118 * 5.0 + 5.0) * 0.5;
  fVar29 = ((float)local_128._4_4_ * 5.0 + (float)local_118._4_4_ * 5.0 + 5.0) * 0.5;
  if (local_c8 == (uint *)0x0) goto LAB_015149b8;
  uVar1 = *local_c8;
  uVar13 = 0;
  if ((uVar1 != 0) && (local_c8 != (uint *)(ulong)uVar1)) {
    puVar16 = (uint *)((long)local_c8 - (long)(ulong)uVar1);
    uVar13 = 0;
    if (*puVar16 != 0) {
      uVar1 = puVar16[1];
      if ((uVar1 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar15 != 0) {
          uVar13 = 0;
          if ((ulong)uVar1 != 0) {
            uVar13 = (uint)((ulong)((long)local_c8 - lVar15) / (ulong)uVar1);
          }
          if (*puVar16 <= uVar13) {
            uVar13 = 0xffffffff;
          }
          if ((uVar13 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar13 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar13 * 2),
             uVar13 < 0x52)) goto LAB_01514874;
        }
      }
      uVar13 = 0;
    }
  }
LAB_01514874:
  local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,uVar13);
  if (uVar13 == 7) {
    fVar23 = fVar28 + -2.5;
    fVar21 = fVar29 + -2.5;
    fVar24 = fVar28 + 2.5;
    fVar26 = fVar29 + 2.5;
    if ((((fVar31 < fVar23) || (fVar24 < fVar31)) ||
        (fVar27 = (fVar21 + fVar26) * 0.5, fVar27 < fVar21)) || (fVar26 < fVar27)) {
      fVar27 = (fVar23 + fVar24) * 0.5;
      if (fVar27 < fVar23) {
        return 0;
      }
      if (fVar24 < fVar27) {
        return 0;
      }
      if (fVar32 < fVar21) {
        return 0;
      }
      if (fVar26 < fVar32) {
        return 0;
      }
    }
    switch(uVar8) {
    case 0:
    case 2:
      fVar31 = fVar28;
      break;
    case 1:
    case 3:
      fVar32 = fVar29;
    }
  }
  else {
    uVar1 = *local_c8;
    uVar13 = 0;
    if ((uVar1 != 0) && (local_c8 != (uint *)(ulong)uVar1)) {
      puVar16 = (uint *)((long)local_c8 - (long)(ulong)uVar1);
      uVar13 = 0;
      if (*puVar16 != 0) {
        uVar1 = puVar16[1];
        if ((uVar1 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar15 != 0) {
            uVar13 = 0;
            if ((ulong)uVar1 != 0) {
              uVar13 = (uint)((ulong)((long)local_c8 - lVar15) / (ulong)uVar1);
            }
            if (*puVar16 <= uVar13) {
              uVar13 = 0xffffffff;
            }
            if ((uVar13 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar13 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar13 * 2),
               uVar13 < 0x52)) goto LAB_015149bc;
          }
        }
LAB_015149b8:
        uVar13 = 0;
      }
    }
LAB_015149bc:
    local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,uVar13);
    if (uVar13 == 6) {
      local_1a0 = (undefined **)(PTR_DAT_04bb2e18 + 0x10);
      local_198 = (char *)0x0;
      FUN_01afb1a0(&local_d8,&local_1a0);
      iVar7 = (int)local_198;
      if ((int)local_198 < 0) {
        iVar7 = (int)local_198 + 1;
      }
      iVar7 = iVar7 >> 1;
      if ((uVar9 | 2) == 3) {
        iVar14 = iVar7;
        iVar7 = local_198._4_4_;
      }
      else {
        iVar14 = local_198._4_4_;
      }
      iVar18 = *(int *)(param_6 + 8);
      iVar19 = *(int *)(param_6 + 0xc);
      if (uVar9 == 1) {
        iVar19 = iVar19 + iVar14;
      }
      else if (uVar9 == 2) {
        iVar18 = iVar18 + iVar7;
      }
      fVar21 = (float)iVar18 * 5.0;
      fVar23 = (float)iVar19 * 5.0;
      fVar24 = (float)(iVar7 + iVar18 + -1) * 5.0 + 5.0;
      fVar26 = (float)(iVar14 + iVar19 + -1) * 5.0 + 5.0;
      if ((((*param_2 < fVar21) || (fVar24 < *param_2)) ||
          (fVar27 = (fVar23 + fVar26) * 0.5, fVar27 < fVar23)) || (fVar26 < fVar27)) {
        fVar27 = (fVar21 + fVar24) * 0.5;
        if (fVar27 < fVar21) {
          return 0;
        }
        if (fVar24 < fVar27) {
          return 0;
        }
        if (param_2[2] < fVar23) {
          return 0;
        }
        if (fVar26 < param_2[2]) {
          return 0;
        }
      }
      if ((uVar8 | 2) == 2) {
        if (fVar31 <= fVar24 + -5.0) {
          if (fVar31 < fVar21 + 5.0) {
            fVar31 = fVar21 + 5.0;
          }
        }
        else {
          fVar31 = fVar24 + -5.0;
        }
      }
      else {
        fVar26 = fVar26 + -5.0;
        if (fVar32 <= fVar26) {
          fVar26 = fVar23 + 5.0;
          if (fVar26 <= fVar32) goto switchD_015149ac_default;
        }
        fVar32 = fVar26;
      }
    }
  }
switchD_015149ac_default:
  local_1a0 = (undefined **)((ulong)local_1a0 & 0xffffffff00000000);
  pfVar11 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x14) & 0xff0));
  fVar21 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
  fVar31 = fVar31 + (*pfVar11 + fVar21 * pfVar11[1]) * 10.0;
  fVar30 = fVar30 + 0.0;
  fVar32 = fVar32 + (pfVar11[2] + fVar21 * pfVar11[3]) * 10.0;
  local_144 = fVar31;
  fStack_140 = fVar30;
  local_13c = fVar32;
  iVar7 = FUN_01aee3b4(&local_d8);
  local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,iVar7);
  if (iVar7 == (int)local_1a0) {
    switch(uVar9) {
    case 0:
    case 2:
      fVar31 = fVar28;
      local_144 = fVar28;
      break;
    case 1:
    case 3:
      fVar32 = fVar29;
      local_13c = fVar29;
    }
  }
  if ((param_7 & 1) != 0) {
    iVar7 = FUN_01aee3b4(&local_d8);
    if (iVar7 == 1) {
      if (local_c8 == (uint *)0x0) {
LAB_01514c8c:
        uVar9 = 0;
      }
      else {
        uVar8 = *local_c8;
        uVar9 = 0;
        if ((uVar8 != 0) && (local_c8 != (uint *)(ulong)uVar8)) {
          puVar16 = (uint *)((long)local_c8 - (long)(ulong)uVar8);
          uVar9 = 0;
          if (*puVar16 != 0) {
            uVar8 = puVar16[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar15 != 0) {
                uVar9 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar9 = (uint)((ulong)((long)local_c8 - lVar15) / (ulong)uVar8);
                }
                if (*puVar16 <= uVar9) {
                  uVar9 = 0xffffffff;
                }
                if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
                   (uVar9 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar9 * 2),
                   uVar9 < 0x52)) goto LAB_01514c90;
              }
            }
            goto LAB_01514c8c;
          }
        }
      }
LAB_01514c90:
      local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,uVar9);
      if (uVar9 != 6) {
        uVar8 = FUN_01ae98d0(&local_d8);
        if ((uVar8 | 2) == 2) {
          fVar31 = fVar31 - fVar28;
          fVar21 = 0.0;
          fVar32 = SQRT(fVar31 * fVar31 + 0.0);
          if (fVar32 < 2.0) goto LAB_01514d18;
          if (0.0 < fVar32) {
            fVar31 = fVar31 * (5.0 / fVar32);
            fVar21 = (5.0 / fVar32) * 0.0;
          }
          fStack_140 = fVar21;
        }
        else {
          fVar21 = fVar32 - fVar29;
          if (SQRT(fVar21 * fVar21) < 2.0) {
LAB_01514d18:
            fVar30 = 0.0;
            fStack_140 = 0.0;
            fVar32 = fVar29;
            fVar31 = fVar28;
            local_144 = fVar28;
            local_13c = fVar29;
            goto LAB_01514d74;
          }
          fVar32 = SQRT(fVar21 * fVar21 + 0.0);
          if (fVar32 <= 0.0) {
            fVar31 = 0.0;
          }
          else {
            fVar32 = 5.0 / fVar32;
            fVar31 = fVar32 * 0.0;
            fVar21 = fVar21 * fVar32;
          }
          fStack_140 = fVar31;
        }
        fStack_140 = fStack_140 + 0.0;
        local_144 = fVar28 + fVar31;
        fVar32 = fVar29 + fVar21;
        fVar31 = local_144;
        fVar30 = fStack_140;
        local_13c = fVar29 + fVar21;
      }
    }
  }
LAB_01514d74:
  iVar7 = FUN_0277d6c4(param_5);
  puVar3 = PTR_DAT_04bb2020;
  if (iVar7 != 0x358e) goto LAB_01514f34;
  local_1a0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_198 = "ManGenerateInFieldTemp";
  iVar7 = FUN_02758850(&local_1a0);
  if (iVar7 != 1) goto LAB_01514f34;
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar17 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01514e2c;
LAB_01514e98:
    bVar6 = *pbVar17;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    local_170 = (undefined *)CONCAT71(local_170._1_7_,bVar6);
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar15 + 0x158);
    }
    if ((*pbVar17 < 8) ||
       (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar17 < 8)))) goto LAB_01514e98;
LAB_01514e2c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01514e90:
      pbVar17 = PTR_DAT_04bb5038;
      goto LAB_01514e98;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar15 + 0x473);
    pbVar17 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar16 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar16 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar16 & 8) != 0) {
        pbVar17 = (byte *)(lVar15 + 0x471);
      }
    }
    bVar6 = *pbVar17;
    bVar5 = 7 < bVar6;
    if (bVar5) {
      bVar6 = 0xff;
    }
    local_170 = (undefined *)CONCAT71(local_170._1_7_,bVar6);
    if (bVar5) goto LAB_01514e90;
  }
  local_1d0 = puVar3 + 0x10;
  local_1c8 = "WHEREAREN_Unlock_EnvSound_02";
  iVar7 = FUN_0274bce0(&local_170,&local_1d0);
  if (iVar7 == 0) {
    uVar8 = FUN_01ae98d0(&local_d8);
    fVar30 = 0.0;
    if ((uVar8 | 2) == 2) {
      fVar31 = fVar31 - fVar28;
      fVar32 = 0.0;
    }
    else {
      fVar32 = fVar32 - fVar29;
      fVar31 = 0.0;
    }
    fVar21 = SQRT(fVar31 * fVar31 + 0.0 + fVar32 * fVar32);
    if (0.0 < fVar21) {
      fVar21 = 5.0 / fVar21;
      fVar31 = fVar31 * fVar21;
      fVar32 = fVar32 * fVar21;
      fVar30 = fVar21 * 0.0 + 0.0;
    }
    fVar31 = fVar28 + fVar31;
    fVar32 = fVar29 + fVar32;
    local_144 = fVar31;
    fStack_140 = fVar30;
    local_13c = fVar32;
  }
LAB_01514f34:
  lVar15 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar15 + 0x2a0) + 0xf0))(lVar15 + 0x2a0);
  local_190 = puVar2 + 0x10;
  fVar28 = *pfVar11 * 0.98 * 0.97;
  fVar21 = fVar28 + fVar31;
  uVar25 = (ulong)(uint)fVar21;
  local_150 = (int)((float)(int)(fVar31 - fVar28) / 5.0) - (uint)(fVar31 - fVar28 < 0.0);
  uStack_14c = (int)((float)(int)(fVar32 - fVar28) / 5.0) - (uint)(fVar32 - fVar28 < 0.0);
  local_170 = puVar4 + 0x10;
  fVar29 = (float)(int)(fVar28 + fVar32) / 5.0;
  uVar10 = (ulong)(uint)fVar29;
  iVar14 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar7 = local_150;
  if (iVar14 <= local_150) {
    iVar7 = iVar14;
  }
  if (local_150 <= iVar14) {
    local_150 = iVar14;
  }
  uVar9 = (int)fVar29 - (uint)(fVar28 + fVar32 < 0.0);
  uVar8 = uStack_14c;
  if ((int)uVar9 <= (int)uStack_14c) {
    uVar8 = uVar9;
  }
  if ((int)uStack_14c <= (int)uVar9) {
    uStack_14c = uVar9;
  }
  uVar9 = uStack_14c + 1;
  local_188 = CONCAT44(uVar8,iVar7);
  local_1a0 = &puStack_168;
  local_198 = (char *)&local_158;
  puStack_168 = local_190;
  local_160 = iVar7;
  uStack_15c = uVar8;
  local_158 = local_190;
  if (uVar9 != uVar8) {
    iVar14 = iVar7;
    do {
      uVar12 = FUN_01512308(&local_190);
      fVar21 = (float)uVar25;
      fVar29 = (float)uVar10;
      if ((uVar12 & 1) != 0) {
        return 0;
      }
      if (iVar14 < local_150) {
        iVar14 = iVar14 + 1;
      }
      else {
        uVar8 = uVar8 + 1;
        local_188 = (ulong)uVar8 << 0x20;
        iVar14 = local_160;
      }
      local_188 = CONCAT44(local_188._4_4_,iVar14);
    } while ((iVar7 != iVar14) || (uVar9 != uVar8));
  }
  iVar7 = FUN_01ae7550(&local_d8);
  local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,iVar7);
  if ((5 < iVar7 - 1U) || (uVar10 = FUN_01a4ff00(&puStack_c0,1,&local_170), (uVar10 & 1) != 0)) {
    puVar2 = PTR_DAT_04bb3238;
    local_17c = 0x1000000000000;
    local_1a0 = (undefined **)CONCAT44(fVar30,fVar31);
    local_198 = (char *)CONCAT44(0x40600000,fVar32);
    local_180 = 0x101;
    bVar6 = *PTR_DAT_04bb32e0;
    local_17e = 0;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    local_190 = (undefined *)CONCAT71(local_190._1_7_,bVar6);
    local_188 = 0xbf80000000000003;
    local_190 = (undefined *)CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,(undefined4)local_190);
    if ((param_8 & 1) == 0) {
      local_17c = 0x101000000000000;
    }
    uVar10 = FUN_0251fad0(&local_1a0,0);
    if ((uVar10 & 1) == 0) {
      uVar8 = *param_3;
      uVar10 = FUN_01ae9260(&local_d8);
      if ((uVar10 & 1) == 0) {
        uVar8 = uVar8 + 0xa0000000 >> 0x1e;
      }
      else {
        uVar8 = FUN_01ae98d0(&local_d8);
      }
      local_1a4 = *param_3 ^ 0x80000000;
      iVar7 = FUN_01515300(0x41200000,&local_144,&local_1a4,0,0);
      local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,iVar7);
      if (iVar7 != 0) {
        return 0;
      }
      if (((param_8 & 1) != 0) && (*param_9 < 8)) {
        local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,0x15);
        uVar10 = FUN_0290cbcc(&local_1d0);
        if (((uVar10 & 1) != 0) ||
           (((uVar10 = FUN_016e6244(), (uVar10 & 1) != 0 ||
             (uVar10 = FUN_0180c600(), (uVar10 & 1) != 0)) ||
            (uVar10 = FUN_016cf9f0(), (uVar10 & 1) != 0)))) {
          local_1d0 = (undefined *)(CONCAT44(local_1d0._4_4_,*param_3) ^ 0x80000000);
          uVar22 = FUN_015157f4(0x41200000,&local_144,&local_1d0);
          local_1b0 = 0x101;
          local_1ac = 0x1000000000000;
          local_1bc = *(undefined4 *)puVar2;
          local_1b8 = 0xbf8000000000001f;
          local_1ae = 1;
          local_1c0 = *param_9;
          local_1d0 = (undefined *)CONCAT44(fVar29,uVar22);
          if (7 < local_1c0) {
            local_1c0 = 0xff;
          }
          local_1c8 = (char *)CONCAT44(0x40400000,fVar21);
          uVar10 = FUN_0251fad0(&local_1d0,0);
          if ((uVar10 & 1) != 0) {
            return 0;
          }
        }
      }
      fVar31 = (float)FUN_0097a900(&local_144,0);
      *param_1 = CONCAT44(fStack_140,local_144);
      *(float *)(param_1 + 1) = local_13c;
      fVar32 = (float)FUN_01ae8db0(&local_d8);
      *(float *)((long)param_1 + 0xc) = fVar31 + fVar32;
      *(int *)(param_1 + 2) = (int)(long)((float)(int)uVar8 * 90.0 * 11930465.0);
      bVar6 = FUN_01ae9310(&local_d8);
      *(byte *)((long)param_1 + 0x14) = bVar6 & 1;
      return 1;
    }
  }
  return 0;
}

