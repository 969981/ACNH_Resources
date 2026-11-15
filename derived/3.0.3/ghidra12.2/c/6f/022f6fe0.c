
/* WARNING: Removing unreachable block (ram,0x022f7390) */
/* WARNING: Removing unreachable block (ram,0x022f73a0) */
/* WARNING: Removing unreachable block (ram,0x022f73ac) */

bool FUN_022f6fe0(long param_1,undefined **param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined **ppuVar4;
  short *psVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  short *psVar22;
  long lVar23;
  ulong uVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  undefined **ppuVar27;
  byte bVar28;
  uint uVar29;
  undefined8 uVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 local_2e4;
  float fStack_2e0;
  undefined4 local_2dc;
  float fStack_2d8;
  float local_2d4;
  undefined4 uStack_2d0;
  float local_2cc;
  undefined4 local_2c8;
  undefined1 local_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined2 local_298;
  undefined2 uStack_296;
  undefined4 local_294;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  byte local_258;
  undefined2 local_257;
  undefined **local_250;
  undefined8 local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined *local_230;
  int local_228;
  int local_224;
  short local_220;
  undefined1 local_21e [2];
  undefined4 local_21c [71];
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  int local_c8;
  uint uStack_c4;
  undefined *local_c0;
  int local_b8;
  uint uStack_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  byte local_8c [12];
  
  uVar8 = *(undefined8 *)(param_3 + 8);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  uVar30 = *(undefined8 *)(param_3 + 0x18);
  local_257 = *(undefined2 *)(param_3 + 0x21);
  local_278 = PTR_DAT_04bc2f58 + 0x10;
  local_2a8 = PTR_DAT_04bc2f98 + 0x10;
  local_2a0 = 0x900000000;
  local_258 = *(byte *)(param_3 + 0x20);
  if (7 < local_258) {
    local_258 = 0xff;
  }
  local_260._0_4_ = (undefined4)uVar30;
  local_260._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
  local_268._0_4_ = (float)uVar9;
  fVar33 = (float)local_268;
  local_268._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
  local_280 = 0;
  local_270._0_4_ = (float)uVar8;
  fVar32 = (float)local_270;
  local_270._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
  uVar25 = local_270._4_4_;
  local_2c4 = 0;
  local_290 = 0;
  local_288 = 0;
  local_2b0 = 0;
  local_2c0 = (undefined *)0x0;
  local_2b8 = 0;
  local_298 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_2ec = local_268._4_4_;
  uStack_2e8 = (undefined4)local_260;
  local_2e4 = local_260._4_4_;
  fStack_2e0 = (float)local_270;
  local_2dc = local_270._4_4_;
  fStack_2d8 = (float)local_268;
  local_2d4 = (float)local_270;
  uStack_2d0 = local_270._4_4_;
  local_2cc = (float)local_268;
  uStack_296 = *(undefined2 *)(PTR_DAT_04bb37e0 + 2);
  local_294 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  ppuVar27 = &local_2a8;
  if (param_2 != (undefined **)0x0) {
    ppuVar27 = param_2;
  }
  local_2c8 = 0x40000000;
  local_2ac = 1;
  local_270 = uVar8;
  local_268 = uVar9;
  local_260 = uVar30;
  uVar17 = FUN_016f36e0(&local_2ec);
  bVar14 = (int)((float)(int)fVar32 / 10.0) - (uint)(fVar32 < 0.0) ==
           (int)((float)(int)(float)local_2c0 / 10.0) - (uint)((float)local_2c0 < 0.0);
  bVar15 = (int)((float)(int)fVar33 / 10.0) - (uint)(fVar33 < 0.0) ==
           (int)((float)(int)(float)local_2b8 / 10.0) - (uint)((float)local_2b8 < 0.0);
  if ((bVar14 && bVar15) || (uVar17 != 5)) {
    if (uVar17 == 4) {
      bVar16 = FUN_022aa3a8((long)&local_268 + 4,&local_270);
      bVar16 = bVar16 ^ 1;
    }
    else {
      bVar16 = 1;
    }
    ppuVar4 = &local_2a8;
    if (param_2 != (undefined **)0x0) {
      ppuVar4 = param_2;
    }
    *(float *)((long)ppuVar4 + 0x24) = fVar32;
    *(undefined4 *)(ppuVar4 + 5) = uVar25;
    *(float *)((long)ppuVar4 + 0x2c) = fVar33;
    if (!bVar14 || !bVar15) {
      if (0xe < uVar17) goto LAB_022f7468;
      uVar17 = 1 << (ulong)(uVar17 & 0x1f) & 0x4005;
joined_r0x022f7464:
      if (uVar17 != 0) {
        ppuVar27 = &local_2a8;
        if (param_2 != (undefined **)0x0) {
          ppuVar27 = param_2;
        }
        *(undefined4 *)((long)ppuVar27 + 0xc) = 9;
        return false;
      }
LAB_022f7468:
      ppuVar27 = &local_2a8;
      if (param_2 != (undefined **)0x0) {
        ppuVar27 = param_2;
      }
      *(uint *)(ppuVar27 + 1) = *(uint *)(ppuVar27 + 1) | 2;
      *(undefined4 *)((long)ppuVar27 + 0xc) = 10;
      ppuVar27[3] = local_2c0;
      *(float *)(ppuVar27 + 4) = (float)local_2b8;
      return false;
    }
    if (((uVar17 != 0) && (uVar17 != 3)) && ((uVar17 == 4 & (bVar16 ^ 1)) == 0)) {
      if (0xe < uVar17) goto LAB_022f7468;
      uVar17 = 1 << (ulong)(uVar17 & 0x1f);
      if ((uVar17 & 0x7a0) == 0) {
        uVar17 = uVar17 & 0x4004;
        goto joined_r0x022f7464;
      }
    }
  }
  else {
    ppuVar4 = &local_2a8;
    if (param_2 != (undefined **)0x0) {
      ppuVar4 = param_2;
    }
    local_270._0_4_ = (float)local_2c0;
    *(float *)((long)ppuVar4 + 0x2c) = (float)local_2b8;
    local_270 = CONCAT44(local_2c0._4_4_,(float)local_270);
    local_268 = CONCAT44(local_268._4_4_,(float)local_2b8);
    *(float *)((long)ppuVar4 + 0x24) = (float)local_2c0;
    *(undefined4 *)(ppuVar4 + 5) = local_2c0._4_4_;
    fVar32 = (float)local_2c0;
    fVar33 = (float)local_2b8;
  }
  iVar19 = (int)((float)(int)fVar32 / 10.0) - (uint)(fVar32 < 0.0);
  iVar20 = (int)((float)(int)fVar33 / 10.0) - (uint)(fVar33 < 0.0);
  local_b0 = PTR_DAT_04bb2018 + 0x10;
  local_a8 = iVar19;
  iStack_a4 = iVar20;
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_d0 = PTR_DAT_04bb2010 + 0x10;
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  fVar32 = (float)iVar19 * 10.0;
  fVar34 = (float)iVar20 * 10.0;
  fVar33 = fVar32 + 2.5;
  fVar35 = fVar34 + 2.5;
  fVar32 = fVar32 + 10.0 + -2.5;
  fVar34 = fVar34 + 10.0 + -2.5;
  iVar11 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0);
  uVar17 = (int)((float)(int)fVar35 / 5.0) - (uint)(fVar35 < 0.0);
  sVar10 = *(short *)PTR_DAT_04bb6298;
  iVar12 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
  iVar18 = iVar11;
  if (iVar12 <= iVar11) {
    iVar18 = iVar12;
  }
  uVar29 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
  local_b8 = iVar11;
  if (iVar11 <= iVar12) {
    local_b8 = iVar12;
  }
  uStack_c4 = uVar17;
  if ((int)uVar29 <= (int)uVar17) {
    uStack_c4 = uVar29;
  }
  uVar2 = uVar17;
  if ((int)uVar17 <= (int)uVar29) {
    uVar2 = uVar29;
  }
  local_c8 = iVar18;
  uStack_b4 = uVar2;
  if (sVar10 == -1) {
LAB_022f7378:
    if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
       (lVar31 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0), lVar31 != 0)) {
      local_250 = &puStack_d0;
      local_248 = &local_c0;
      local_238 = CONCAT44(uStack_c4,iVar18);
      local_240 = PTR_DAT_04bb2010 + 0x10;
      if (uVar2 + 1 != uStack_c4) {
        do {
          lVar23 = FUN_01381c54(lVar31,&local_240);
          if ((lVar23 != 0) && ((*(byte *)(lVar23 + 8) & 1) != 0)) {
            uVar21 = FUN_009773f0(&local_b0);
            uVar25 = 9;
            if ((uVar21 & 1) != 0) {
              uVar25 = 10;
            }
            ppuVar27 = &local_2a8;
            if (param_2 != (undefined **)0x0) {
              ppuVar27 = param_2;
            }
            *(undefined4 *)((long)ppuVar27 + 0xc) = uVar25;
            goto LAB_022f77f8;
          }
          if ((int)(uint)local_238 < *(int *)(local_248 + 1)) {
            iVar12 = (uint)local_238 + 1;
            uVar29 = local_238._4_4_;
          }
          else {
            uVar29 = local_238._4_4_ + 1;
            iVar12 = *(int *)(local_250 + 1);
            local_238 = (ulong)uVar29 << 0x20;
          }
          local_238 = CONCAT44(local_238._4_4_,iVar12);
        } while (iVar18 != iVar12 || uVar2 + 1 != uVar29);
      }
    }
    local_250 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
    local_248 = (undefined **)CONCAT44(uVar17,iVar11);
    uVar21 = FUN_0097b460(&local_250);
    if ((uVar21 & 1) != 0) goto LAB_022f7504;
    local_250 = (undefined **)(PTR_DAT_04bbc5b0 + 0x10);
    local_248 = (undefined **)(PTR_DAT_04bbc5b8 + 0x10);
    local_240 = PTR_DAT_04bbc240 + 0x10;
    local_230 = PTR_DAT_04bb2e18 + 0x10;
    local_238 = 0;
    memset(&local_228,0,0x128);
    FUN_0137c524(&local_220);
    puVar1 = PTR_DAT_04bb2018;
    local_f0 = 0;
    puStack_f8 = PTR_DAT_04bb2018 + 0x10;
    local_100 = PTR_DAT_04bbc5d8 + 0x10;
    local_e0 = 0;
    local_e8 = puStack_f8;
    FUN_0137c6ec(&local_250);
    FUN_0137c6ec(&local_250);
    fVar32 = (float)iVar19 * 10.0 + 5.0 + -10.0;
    fVar33 = (float)iVar20 * 10.0 + 5.0 + -10.0;
    local_228 = (int)((float)(int)fVar32 / 10.0) - (uint)(fVar32 < 0.0);
    local_224 = (int)((float)(int)fVar33 / 10.0) - (uint)(fVar33 < 0.0);
    local_e0 = CONCAT44(local_224 + 2,local_228 + 2);
    local_f0._0_4_ = local_228;
    local_f0._4_4_ = local_224;
    FUN_0137cab0(&local_250);
    uVar21 = (ulong)local_a0._4_4_;
    local_a0 = (undefined *)(uVar21 << 0x20);
    if (((((local_228 <= iVar19) && (iVar19 <= local_228 + 3)) && (local_224 <= iVar20)) &&
        ((iVar20 <= local_224 + 3 && ((uint)(iVar19 - local_228) < 3)))) &&
       (((uint)(iVar20 - local_224) < 3 &&
        (((uint)local_238 >> (ulong)((iVar20 - local_224) * 3 + (iVar19 - local_228) & 0x1f) & 1) !=
         0)))) {
      local_a0 = (undefined *)(uVar21 << 0x20);
      bVar14 = (uint)(iVar19 - (int)local_f0) < 3;
      bVar15 = (uint)(iVar20 - local_f0._4_4_) < 3;
      uVar21 = (ulong)(uint)((iVar20 - local_f0._4_4_) * 3 + (iVar19 - (int)local_f0));
      psVar22 = &local_220;
      if (bVar14 && bVar15) {
        psVar22 = &local_220 + uVar21 * 0x10;
      }
      iVar18 = FUN_0277d6c4(psVar22);
      if (iVar18 != 0xea79) {
        uVar24 = FUN_0277e024(psVar22);
        lVar31 = (long)local_a0;
        if ((uVar24 & 1) != 0) {
          local_a0 = (undefined *)CONCAT62(local_a0._2_6_,*psVar22);
          puVar6 = local_21e + 1;
          puVar13 = local_21e;
          if (bVar14 && bVar15) {
            puVar6 = local_21e + uVar21 * 0x20 + 1;
            puVar13 = local_21e + uVar21 * 0x20;
          }
          local_a0._3_5_ = SUB85(lVar31,3);
          local_a0._0_3_ = CONCAT12(*puVar13,*psVar22);
          puVar26 = local_21c;
          if (bVar14 && bVar15) {
            puVar26 = local_21c + uVar21 * 8;
          }
          local_a0._4_4_ = *puVar26;
          local_a0._0_4_ = CONCAT13(*puVar6,(undefined3)local_a0);
          FUN_01afb044(&local_a0);
          ppuVar27 = &local_2a8;
          if (param_2 != (undefined **)0x0) {
            ppuVar27 = param_2;
          }
          *(undefined4 *)((long)ppuVar27 + 0xc) = 1;
          *(undefined4 *)(ppuVar27 + 2) = (undefined4)local_a0;
          *(uint *)((long)ppuVar27 + 0x14) = local_a0._4_4_;
          goto LAB_022f77f8;
        }
        uVar21 = FUN_0277e158(psVar22);
        if ((uVar21 & 1) == 0) {
          uVar21 = FUN_0277db54(psVar22);
          if ((uVar21 & 1) == 0) {
            uVar21 = FUN_0277e294(psVar22);
            ppuVar27 = &local_2a8;
            if (param_2 != (undefined **)0x0) {
              ppuVar27 = param_2;
            }
            if ((uVar21 & 1) == 0) {
              uVar21 = FUN_0277dbe0(psVar22);
            }
            else {
              uVar21 = FUN_0137d05c(psVar22);
            }
            if ((uVar21 & 1) == 0) {
              *(undefined4 *)((long)ppuVar27 + 0xc) = 9;
            }
            else {
              *(undefined4 *)((long)ppuVar27 + 0xc) = 10;
            }
          }
          else {
            FUN_022f7c24(ppuVar27,&local_278,psVar22);
          }
          goto LAB_022f77f8;
        }
        goto LAB_022f7504;
      }
      uVar25 = 8;
      goto LAB_022f7510;
    }
    bVar14 = (uint)(iVar19 - (int)local_f0) < 3;
    bVar15 = (uint)(iVar20 - local_f0._4_4_) < 3;
    psVar22 = &local_220 +
              (ulong)(uint)((iVar20 - local_f0._4_4_) * 3 + (iVar19 - (int)local_f0)) * 0x10;
    psVar5 = &local_220;
    if (bVar14 && bVar15) {
      psVar5 = psVar22;
    }
    if (*psVar5 != -2) {
LAB_022f77a4:
      uVar21 = FUN_0137d05c();
      puVar26 = (undefined4 *)((long)&local_2a0 + 4);
      if ((uVar21 & 1) == 0) {
        psVar5 = &local_220;
        if (bVar14 && bVar15) {
          psVar5 = psVar22;
        }
        uVar21 = FUN_0137d05c(psVar5 + 4);
        if ((uVar21 & 1) != 0) goto LAB_022f77e4;
        psVar5 = &local_220;
        if (bVar14 && bVar15) {
          psVar5 = psVar22;
        }
        uVar21 = FUN_0137d05c(psVar5 + 8);
        if ((uVar21 & 1) != 0) goto LAB_022f77e4;
        psVar5 = &local_220;
        if (bVar14 && bVar15) {
          psVar5 = psVar22;
        }
        uVar21 = FUN_0137d05c(psVar5 + 0xc);
        ppuVar27 = &local_2a8;
        if (param_2 != (undefined **)0x0) {
          puVar26 = (undefined4 *)((long)param_2 + 0xc);
          ppuVar27 = param_2;
        }
        if ((uVar21 & 1) == 0) {
          *(undefined4 *)((long)ppuVar27 + 0xc) = 9;
          goto LAB_022f77f8;
        }
      }
      else {
LAB_022f77e4:
        if (param_2 != (undefined **)0x0) {
          puVar26 = (undefined4 *)((long)param_2 + 0xc);
        }
      }
      *puVar26 = 10;
      goto LAB_022f77f8;
    }
    psVar5 = &local_220;
    if (bVar14 && bVar15) {
      psVar5 = psVar22;
    }
    if (psVar5[4] != -2) goto LAB_022f77a4;
    psVar5 = &local_220;
    if (bVar14 && bVar15) {
      psVar5 = psVar22;
    }
    if (psVar5[8] != -2) goto LAB_022f77a4;
    psVar5 = &local_220;
    if (bVar14 && bVar15) {
      psVar5 = psVar22;
    }
    if (psVar5[0xc] != -2) goto LAB_022f77a4;
    psVar22 = (short *)FUN_02978a24(*(undefined8 *)PTR_DAT_04bb4818,&local_b0);
    if (*psVar22 != -2) {
      bVar16 = local_258;
      if (7 < local_258) {
        bVar16 = 0xff;
      }
      local_8c[0] = bVar16;
      uVar21 = FUN_02669430(local_8c);
      if ((uVar21 & 1) == 0) {
LAB_022f7b3c:
        ppuVar27 = &local_2a8;
        if (param_2 != (undefined **)0x0) {
          ppuVar27 = param_2;
        }
        *(short *)(ppuVar27 + 2) = *psVar22;
        *(char *)((long)ppuVar27 + 0x12) = (char)psVar22[1];
        *(undefined1 *)((long)ppuVar27 + 0x13) = *(undefined1 *)((long)psVar22 + 3);
        local_a0._4_4_ = *(uint *)(psVar22 + 2);
      }
      else {
        lVar31 = *(long *)PTR_DAT_04bb39b0;
        if ((lVar31 != 0) && (*(int *)(lVar31 + 0x15c) != 0)) {
          pbVar7 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar31 + 0x15c) != 0) {
            pbVar7 = (byte *)(lVar31 + 0x158);
          }
          bVar28 = *pbVar7;
          if (7 < bVar28) {
            bVar28 = 0xff;
          }
          if (bVar28 != bVar16) goto LAB_022f7b3c;
        }
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        local_98 = "JohnnyQuestStartFlag";
        local_a0 = puVar1;
        iVar18 = FUN_0274bce0(&local_258,&local_a0);
        if (iVar18 == 0) goto LAB_022f7b3c;
        iVar18 = FUN_02673710(&local_258,0x8a);
        local_98 = "JohnnyPartsCount";
        local_a0 = puVar1;
        iVar19 = FUN_0274bce0(&local_258,&local_a0);
        local_98 = "JohnnyRequirePartsNum";
        local_a0 = puVar1;
        iVar20 = FUN_0273ea30(&local_a0);
        if (iVar20 <= iVar19 + iVar18) goto LAB_022f7b3c;
        uVar17 = *(uint *)(param_1 + 8) ^ *(uint *)(param_1 + 8) << 0xb;
        uVar29 = *(uint *)(param_1 + 0x14);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
        uVar17 = uVar17 >> 8 ^ uVar29 >> 0x13 ^ uVar17 ^ uVar29;
        *(uint *)(param_1 + 0x10) = uVar29;
        *(uint *)(param_1 + 0x14) = uVar17;
        if (0x4f < (uint)((ulong)uVar17 * 100 >> 0x20)) goto LAB_022f7b3c;
        local_a0 = (undefined *)0x94d;
        FUN_0277d4ac(&local_a0);
        ppuVar27 = &local_2a8;
        if (param_2 != (undefined **)0x0) {
          ppuVar27 = param_2;
        }
        *(undefined4 *)(ppuVar27 + 2) = (undefined4)local_a0;
      }
      *(uint *)((long)ppuVar27 + 0x14) = local_a0._4_4_;
      ppuVar27 = &local_2a8;
      if (param_2 != (undefined **)0x0) {
        ppuVar27 = param_2;
      }
      *(uint *)(ppuVar27 + 1) = *(uint *)(ppuVar27 + 1) | 0x20;
      *(undefined4 *)((long)ppuVar27 + 0xc) = 1;
      goto LAB_022f77f8;
    }
    local_a0 = puVar1 + 0x10;
    local_98 = (char *)CONCAT44(iVar20,iVar19);
    uVar21 = FUN_00977130(&local_a0);
    if ((uVar21 & 1) != 0) {
      ppuVar27 = &local_2a8;
      if (param_2 != (undefined **)0x0) {
        ppuVar27 = param_2;
      }
      *(undefined4 *)((long)ppuVar27 + 0xc) = 0;
      goto LAB_022f77f8;
    }
    uVar21 = FUN_009773f0(&local_a0);
    ppuVar27 = &local_2a8;
    if (param_2 != (undefined **)0x0) {
      ppuVar27 = param_2;
    }
    if ((uVar21 & 1) == 0) {
      uVar25 = 9;
    }
    else {
      uVar25 = 10;
    }
  }
  else {
    local_250 = (undefined **)CONCAT44(local_250._4_4_,3);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
    if (0xff < (uint)(int)sVar10) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 3 & 1) == 0) goto LAB_022f7378;
    lVar31 = *(long *)PTR_DAT_04bb5c90;
    if ((((iVar18 < *(int *)(lVar31 + 0x28)) || (*(int *)(lVar31 + 0x38) < local_b8)) ||
        (((int)uStack_c4 < *(int *)(lVar31 + 0x2c) || (*(int *)(lVar31 + 0x3c) < (int)uVar2)))) &&
       (((*(int *)(lVar31 + 0x38) < iVar18 || (local_b8 < *(int *)(lVar31 + 0x28))) ||
        ((*(int *)(lVar31 + 0x3c) < (int)uStack_c4 || ((int)uVar2 < *(int *)(lVar31 + 0x2c)))))))
    goto LAB_022f7378;
LAB_022f7504:
    uVar25 = 10;
LAB_022f7510:
    ppuVar27 = &local_2a8;
    if (param_2 != (undefined **)0x0) {
      ppuVar27 = param_2;
    }
  }
  *(undefined4 *)((long)ppuVar27 + 0xc) = uVar25;
LAB_022f77f8:
  if (local_257._1_1_ != '\0') {
    ppuVar27 = &local_2a8;
    if (param_2 != (undefined **)0x0) {
      ppuVar27 = param_2;
    }
    if (((*(uint *)(ppuVar27 + 1) >> 4 & 1) == 0) &&
       (iVar18 = *(int *)((long)ppuVar27 + 0xc), iVar18 - 0xbU < 0xfffffffe)) {
      if (iVar18 != 0xb) {
        if (iVar18 == 0xd) {
          uVar25 = 0xb;
        }
        else {
          uVar25 = 10;
        }
        *(undefined4 *)((long)ppuVar27 + 0xc) = uVar25;
      }
      *(uint *)(ppuVar27 + 1) = *(uint *)(ppuVar27 + 1) | 4;
    }
  }
  ppuVar27 = &local_2a8;
  if (param_2 != (undefined **)0x0) {
    ppuVar27 = param_2;
  }
  return ((ulong)ppuVar27[1] & 0x10) == 0 && *(int *)((long)ppuVar27 + 0xc) - 0xbU < 0xfffffffe;
}

