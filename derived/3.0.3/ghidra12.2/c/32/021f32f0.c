
/* WARNING: Removing unreachable block (ram,0x021f3f4c) */
/* WARNING: Removing unreachable block (ram,0x021f3354) */
/* WARNING: Removing unreachable block (ram,0x021f3364) */
/* WARNING: Removing unreachable block (ram,0x021f33dc) */

undefined8 FUN_021f32f0(float *param_1,float *param_2,uint *param_3,short *param_4,uint *param_5)

{
  float *pfVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  int *piVar19;
  char cVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  byte local_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  uint *local_b8;
  int local_b0;
  int local_ac;
  byte local_98 [4];
  uint local_94;
  
  puVar6 = PTR_DAT_04bb2010;
  local_110 = (undefined *)((ulong)local_110 & 0xffffffff00000000);
  local_e8 = PTR_DAT_04bb2010 + 0x10;
  local_e0 = 0;
  local_d0 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_cc = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar16 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0);
  puStack_d8 = local_e8;
  if (lVar16 == 0) {
    psVar11 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    lVar2 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar16 + 0x198)) {
      lVar2 = lVar16 + 0x130;
    }
    psVar11 = (short *)FUN_012eb21c(lVar2,&puStack_d8,&local_e8);
  }
  if (1 < (ushort)(*psVar11 + 3U)) {
    uVar12 = FUN_0277e158(psVar11);
    puVar7 = PTR_DAT_04bb43c0;
    if ((uVar12 & 1) == 0) {
      puStack_108 = puVar6 + 0x10;
      local_f0 = 0;
      local_100 = 0;
      local_110 = PTR_DAT_04bbc1a0 + 0x10;
      local_98[0] = 0;
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      local_f8 = puStack_108;
      uVar9 = FUN_0277d6c4(psVar11);
      if (*(long *)puVar7 == 0) {
LAB_021f3684:
        uVar12 = FUN_016d948c(psVar11);
        if ((uVar12 & 1) == 0) goto LAB_021f407c;
        local_100 = local_e0;
        local_f0 = CONCAT44(local_e0._4_4_ + 1,(int)local_e0 + 1);
        local_98[0] = 0xff;
        FUN_0124c030(&local_c8,psVar11);
        fVar24 = (float)FUN_0124e3b0(&local_c8);
        bVar8 = false;
      }
      else {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_021f3684;
        local_130 = FUN_01517328(&local_110,local_98,&local_e8,psVar11);
        iVar10 = ((int)local_f0 - (int)local_100) + 1;
        if (iVar10 + iVar10 * (local_f0._4_4_ - local_100._4_4_) == 8) {
          fVar24 = *param_1;
          fVar26 = param_1[2];
          fVar28 = (float)(int)local_f0;
          local_c8 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          fVar29 = (float)local_f0._4_4_;
          lVar16 = *(long *)puVar7;
          fVar25 = (float)(int)local_100;
          fVar27 = (float)local_100._4_4_;
          local_b8 = (uint *)0x0;
          local_c0 = (undefined **)CONCAT44(*(undefined4 *)(psVar11 + 2),*(undefined4 *)psVar11);
          uVar9 = FUN_0277d6c4(&local_c0);
          if (*(long *)puVar7 != 0) {
            lVar16 = *(long *)(lVar16 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              lVar16 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(psVar11);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if (uVar9 < *(uint *)(lVar16 + 0x1d8)) {
                puVar17 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8);
                if (puVar17 != (uint *)0x0) {
                  local_b8 = puVar17;
                }
              }
            }
          }
          fVar25 = (fVar25 * 5.0 + fVar28 * 5.0 + 5.0) * 0.5;
          fVar27 = (fVar27 * 5.0 + fVar29 * 5.0 + 5.0) * 0.5;
          uVar9 = FUN_01ae98d0(&local_c8);
          if ((uVar9 | 2) == 2) {
            iVar10 = (int)((float)(int)(fVar24 + -2.5) / 5.0) - (uint)(fVar24 + -2.5 < 0.0);
            fVar26 = 0.0;
            fVar24 = ((float)iVar10 * 5.0 + (float)(iVar10 + 1) * 5.0 + 5.0) * 0.5 - fVar25;
            fVar28 = SQRT(fVar24 * fVar24 + 0.0);
            if (5.0 <= fVar28) {
              if (0.0 < fVar28) {
                fVar24 = fVar24 * (5.0 / fVar28);
                fVar26 = (5.0 / fVar28) * 0.0;
              }
              fVar25 = fVar25 + fVar24;
              fVar27 = fVar27 + fVar26;
            }
          }
          else {
            iVar10 = (int)((float)(int)(fVar26 + -2.5) / 5.0) - (uint)(fVar26 + -2.5 < 0.0);
            fVar24 = ((float)iVar10 * 5.0 + (float)(iVar10 + 1) * 5.0 + 5.0) * 0.5 - fVar27;
            if (5.0 <= SQRT(fVar24 * fVar24)) {
              fVar26 = 0.0;
              fVar28 = SQRT(fVar24 * fVar24 + 0.0);
              if (0.0 < fVar28) {
                fVar28 = 5.0 / fVar28;
                fVar26 = fVar28 * 0.0;
                fVar24 = fVar24 * fVar28;
              }
              fVar25 = fVar25 + fVar26;
              fVar27 = fVar27 + fVar24;
            }
          }
          iVar10 = (int)((float)(int)(fVar25 + -2.5) / 5.0) - (uint)(fVar25 + -2.5 < 0.0);
          iVar5 = (int)((float)(int)(fVar27 + -2.5) / 5.0) - (uint)(fVar27 + -2.5 < 0.0);
          local_100 = CONCAT44(iVar5,iVar10);
          local_f0 = CONCAT44(iVar5 + 1,iVar10 + 1);
        }
        local_c8 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        lVar16 = *(long *)puVar7;
        local_c0 = *(undefined ***)psVar11;
        local_b8 = (uint *)0x0;
        uVar9 = FUN_0277d6c4(&local_c0);
        if (*(long *)puVar7 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(psVar11);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if (uVar9 < *(uint *)(lVar16 + 0x1d8)) {
              puVar17 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8);
              if (puVar17 != (uint *)0x0) {
                local_b8 = puVar17;
              }
            }
          }
        }
        iVar10 = FUN_01ae7550(&local_c8);
        local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar10);
        if (iVar10 - 1U < 6) {
          local_120 = 0;
          lVar16 = *(long *)PTR_DAT_04bb2720;
          if (lVar16 == 0) {
            puVar21 = &DAT_055c04a0;
          }
          else {
            puVar21 = &DAT_055c04a0;
            if (*(long *)(lVar16 + 0x330) != 0) {
              puVar21 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
              iVar10 = FUN_006bd550(*puVar21,0);
              puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar10 != 0x758f7eaf) {
                puVar21 = &DAT_055c04a0;
              }
            }
          }
          local_11c = *(undefined4 *)(puVar21 + 7);
          local_118 = FUN_017baf44();
          local_118 = local_118 & 1;
          local_128 = PTR_DAT_04bb3140 + 0x10;
          uVar12 = FUN_01a4fafc(&local_128,1,&local_110);
          if ((uVar12 & 1) == 0) {
            uVar9 = 0;
          }
          else {
            local_c8 = &puStack_108;
            local_c0 = &local_f8;
            local_b8 = (uint *)(puVar6 + 0x10);
            iVar5 = (int)local_100;
            local_b0 = (int)local_100;
            local_ac = local_100._4_4_;
            iVar10 = local_f0._4_4_ + 1;
            if (iVar10 == local_100._4_4_) {
              uVar9 = 1;
            }
            else {
              do {
                uVar9 = FUN_01a4fd6c(&local_128,1,&local_b8,1);
                if ((uVar9 & 1) == 0) break;
                if (local_b0 < *(int *)(local_c0 + 1)) {
                  local_b0 = local_b0 + 1;
                }
                else {
                  local_ac = local_ac + 1;
                  local_b0 = *(int *)(local_c8 + 1);
                }
              } while (iVar5 != local_b0 || iVar10 != local_ac);
            }
          }
          local_130 = local_130 & uVar9;
        }
        lVar16 = *(long *)puVar7;
        local_c8 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        local_c0 = *(undefined ***)psVar11;
        local_b8 = (uint *)0x0;
        uVar9 = FUN_0277d6c4(&local_c0);
        if (*(long *)puVar7 == 0) {
LAB_021f3f38:
          local_128 = (undefined *)((ulong)local_128 & 0xffffffff00000000);
LAB_021f4068:
          fVar24 = 0.0;
          bVar8 = false;
        }
        else {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_021f3f38;
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(psVar11);
          puVar7 = PTR_DAT_04bbfe90;
          puVar6 = PTR_DAT_04bbfe88;
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
             (puVar17 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar17 == (uint *)0x0)) goto LAB_021f3f38;
          uVar9 = *puVar17;
          if (uVar9 == 0 || puVar17 == (uint *)(ulong)uVar9) {
LAB_021f3e3c:
            uVar9 = 0;
          }
          else {
            puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar9);
            uVar9 = 0;
            if (*puVar18 != 0) {
              uVar9 = puVar18[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar18 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar18 + lVar16 + (ulong)(ushort)puVar18[2] * 8;
                if (lVar16 != 0) {
                  uVar15 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar15 = (uint)((ulong)((long)puVar17 - lVar16) / (ulong)uVar9);
                  }
                  if (*puVar18 <= uVar15) {
                    uVar15 = 0xffffffff;
                  }
                  if ((uVar15 < *(uint *)PTR_DAT_04bc0048) &&
                     (uVar9 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar15 * 2),
                     uVar9 < 0x52)) goto LAB_021f3e40;
                }
              }
              goto LAB_021f3e3c;
            }
          }
LAB_021f3e40:
          local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar9);
          local_b8 = puVar17;
          if (8 < uVar9 - 1) goto LAB_021f4068;
          uVar9 = *puVar17;
          if (uVar9 == 0) {
            fVar24 = 0.0;
            uVar9 = 0;
            goto LAB_021f4238;
          }
          cVar20 = *PTR_DAT_04bbfe88;
LAB_021f3e88:
          puVar18 = (uint *)(ulong)uVar9;
          if (cVar20 == '\0') {
            *puVar6 = 1;
            memset(puVar7,0xff,0x1ac);
            puVar18 = (uint *)(ulong)*puVar17;
            cVar20 = '\x01';
LAB_021f3ecc:
            if ((puVar18 == (uint *)0x0) || (puVar17 == puVar18)) goto LAB_021f41ac;
            lVar16 = 0xc;
            if (*(char *)((long)puVar17 + (10 - (long)puVar18)) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar17 + (lVar16 - (long)puVar18);
            if (lVar16 == 0) goto LAB_021f41ac;
            uVar12 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar18));
            *(undefined4 *)(puVar7 + 0xf0) = 0xfffffffe;
            if (uVar12 == 0) goto LAB_021f41ac;
            piVar19 = (int *)(lVar16 + 4);
            while (piVar19[-1] != -0x499d99d4) {
              piVar19 = piVar19 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_021f41ac;
            }
            iVar10 = 0;
            if (*piVar19 != -1) {
              iVar10 = *piVar19;
            }
            *(int *)(puVar7 + 0xf0) = iVar10;
            uVar9 = *puVar17;
            if (uVar9 == 0) goto LAB_021f41ac;
            goto LAB_021f3e88;
          }
          uVar9 = *(uint *)(puVar7 + 0xf0);
          if ((int)uVar9 < 0) {
            if (uVar9 != 0xffffffff) goto LAB_021f41ac;
            goto LAB_021f3ecc;
          }
          if ((float *)((ulong)uVar9 + (long)puVar17) != (float *)0x0) {
            fVar24 = *(float *)((ulong)uVar9 + (long)puVar17);
            goto LAB_021f41b4;
          }
LAB_021f41ac:
          puVar18 = (uint *)(ulong)*puVar17;
          fVar24 = 0.0;
LAB_021f41b4:
          uVar9 = 0;
          if ((puVar18 == (uint *)0x0) || (puVar17 == puVar18)) {
LAB_021f4238:
          }
          else {
            puVar18 = (uint *)((long)puVar17 - (long)puVar18);
            if ((*puVar18 == 0) ||
               ((uVar15 = puVar18[1], uVar15 == 0 || ((ulong)(ushort)puVar18[2] == 0)))) {
LAB_021f4240:
              uVar9 = 0;
            }
            else {
              lVar16 = 0xc;
              if (*(char *)((long)puVar18 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar18 + lVar16 + (ulong)(ushort)puVar18[2] * 8;
              uVar9 = 0;
              if (lVar16 == 0) goto LAB_021f4238;
              uVar9 = 0;
              if ((ulong)uVar15 != 0) {
                uVar9 = (uint)((ulong)((long)puVar17 - lVar16) / (ulong)uVar15);
              }
              if (*puVar18 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if (*(uint *)PTR_DAT_04bc0048 <= uVar9) goto LAB_021f4240;
              uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar9 * 2);
              uVar9 = (uint)uVar3;
              if (uVar3 < 0x52) goto LAB_021f4238;
              uVar9 = 0;
            }
          }
          if ((uVar9 == 9) || (uVar9 == 2)) {
            local_98[0] = 0;
            local_128._0_4_ = uVar9;
            local_94 = FUN_01ae98d0(&local_c8);
            if ((local_94 < 4) && (local_94 + 7 < 0xf)) {
              local_98[0] = local_98[0] | (byte)(1 << (ulong)(local_94 & 7));
            }
          }
          uVar15 = 0;
          uVar9 = *puVar17;
          if ((uVar9 != 0) && (puVar17 != (uint *)(ulong)uVar9)) {
            puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar9);
            uVar15 = 0;
            if (*puVar18 != 0) {
              uVar9 = puVar18[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar18 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar18 + lVar16 + (ulong)(ushort)puVar18[2] * 8;
                if (lVar16 != 0) {
                  uVar15 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar15 = (uint)((ulong)((long)puVar17 - lVar16) / (ulong)uVar9);
                  }
                  if (*puVar18 <= uVar15) {
                    uVar15 = 0xffffffff;
                  }
                  if ((uVar15 < *(uint *)PTR_DAT_04bc0048) &&
                     (uVar15 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar15 * 2),
                     uVar15 < 0x52)) goto LAB_021f4054;
                }
              }
              uVar15 = 0;
            }
          }
LAB_021f4054:
          local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar15);
          bVar8 = uVar15 != 3;
        }
        if ((local_130 & 1) == 0) goto LAB_021f407c;
      }
      puVar6 = PTR_DAT_04bb27c8;
      if (param_2 != (float *)0x0) {
        iVar22 = local_f0._4_4_;
        iVar5 = (int)local_100;
        iVar10 = local_f0._4_4_ + 1;
        if (1 < iVar10 - local_100._4_4_) {
          if (1 < ((int)local_f0 - (int)local_100) + 1) {
            local_f0 = CONCAT44(local_f0._4_4_ + -1,(int)local_f0 + -1);
            iVar10 = iVar22;
          }
        }
        local_c8 = *(undefined ***)param_1;
        local_c0._0_4_ = param_1[2];
        if (iVar10 != local_100._4_4_) {
          fVar25 = 3.4028235e+38;
          iVar22 = local_100._4_4_;
          iVar14 = (int)local_100;
          iVar23 = (int)local_100;
          do {
            fVar26 = (float)iVar23 * 5.0 + 5.0;
            fVar27 = (float)iVar22 * 5.0 + 5.0;
            fVar28 = *param_1 - fVar26;
            fVar29 = param_1[2] - fVar27;
            fVar28 = SQRT(fVar29 * fVar29 + fVar28 * fVar28);
            if (fVar28 < fVar25) {
              local_c8 = (undefined **)CONCAT44(local_c8._4_4_,fVar26);
              local_c0._0_4_ = fVar27;
              fVar25 = (float)FUN_0093a950(*(long *)puVar6 + 0x28,&local_c8,0);
              local_c8 = (undefined **)CONCAT44(fVar24 + fVar25,(undefined4)local_c8);
              fVar25 = fVar28;
              iVar14 = (int)local_100;
            }
            if (iVar23 < (int)local_f0) {
              iVar23 = iVar23 + 1;
            }
            else {
              iVar22 = iVar22 + 1;
              iVar23 = iVar14;
            }
          } while ((iVar5 != iVar23) || (iVar10 != iVar22));
        }
        *(undefined ***)param_2 = local_c8;
        param_2[2] = (float)local_c0;
      }
      if (param_3 != (uint *)0x0) {
        puVar17 = param_3;
        if (param_5 != (uint *)0x0) {
          puVar17 = param_5;
        }
        uVar9 = *puVar17;
        uVar15 = uVar9 + 0x20000000 >> 0x1e;
        if ((local_98[0] & 1) == 0) {
          fVar24 = -3.4028235e+38;
        }
        else {
          uVar4 = -uVar9 >> 0x18;
          fVar25 = *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar4 * 0x10 + 8) +
                   *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar4 * 0x10 + 0xc) *
                   (float)(-uVar9 & 0xffffff) * 5.9604645e-08;
          fVar24 = -3.4028235e+38;
          if (-3.4028235e+38 < fVar25) {
            uVar15 = 0;
            fVar24 = fVar25;
          }
        }
        if ((local_98[0] >> 1 & 1) != 0) {
          uVar4 = 0x40000000 - uVar9 >> 0x18;
          fVar25 = *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar4 * 0x10 + 8) +
                   *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar4 * 0x10 + 0xc) *
                   (float)(0x40000000 - uVar9 & 0xffffff) * 5.9604645e-08;
          if (fVar24 < fVar25) {
            uVar15 = 0x40000000;
            fVar24 = fVar25;
          }
        }
        if ((local_98[0] >> 2 & 1) != 0) {
          uVar4 = 0x80000000 - uVar9 >> 0x18;
          fVar25 = *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar4 * 0x10 + 8) +
                   *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar4 * 0x10 + 0xc) *
                   (float)(0x80000000 - uVar9 & 0xffffff) * 5.9604645e-08;
          if (fVar24 < fVar25) {
            uVar15 = 0x80000000;
            fVar24 = fVar25;
          }
        }
        if (((local_98[0] >> 3 & 1) != 0) &&
           (uVar4 = 0xc0000000 - uVar9 >> 0x18,
           fVar24 < *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar4 * 0x10 + 8) +
                    *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar4 * 0x10 + 0xc) *
                    (float)(0xc0000000 - uVar9 & 0xffffff) * 5.9604645e-08)) {
          uVar15 = 0xc0000000;
        }
        bVar8 = (bool)(bVar8 ^ 1);
        *param_3 = uVar15;
        if (param_2 == (float *)0x0) {
          bVar8 = true;
        }
        if (!bVar8) {
          pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar15 >> 0x18) * 0x10);
          fVar26 = *pfVar1;
          fVar27 = pfVar1[1];
          fVar24 = (float)(uVar15 & 0xffffff) * 5.9604645e-08;
          fVar25 = pfVar1[2];
          fVar28 = pfVar1[3];
          param_2[1] = param_2[1] + 0.0;
          *param_2 = (fVar26 + fVar24 * fVar27) * 1.3 + *param_2;
          param_2[2] = (fVar25 + fVar24 * fVar28) * 1.3 + param_2[2];
        }
      }
      if (param_4 != (short *)0x0) {
        *param_4 = *psVar11;
        *(char *)(param_4 + 1) = (char)psVar11[1];
        *(undefined1 *)((long)param_4 + 3) = *(undefined1 *)((long)psVar11 + 3);
        *(undefined4 *)(param_4 + 2) = *(undefined4 *)(psVar11 + 2);
      }
      uVar13 = 1;
      goto LAB_021f4080;
    }
  }
LAB_021f407c:
  uVar13 = 0;
LAB_021f4080:
  return uVar13;
}

