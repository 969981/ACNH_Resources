
/* WARNING: Removing unreachable block (ram,0x01f60c48) */
/* WARNING: Removing unreachable block (ram,0x01f60d50) */
/* WARNING: Removing unreachable block (ram,0x01f60e4c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffd80 : 0x01f60d58 */
/* WARNING: Removing unreachable block (ram,0x01f60f4c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01f603e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  undefined8 *puVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int local_2dc;
  uint local_2d0;
  uint uStack_2cc;
  undefined *local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined *local_278;
  undefined8 local_270;
  undefined *local_268;
  float local_260;
  int local_25c;
  undefined4 uStack_258;
  undefined4 local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined5 local_23c;
  undefined3 uStack_237;
  undefined4 uStack_234;
  undefined1 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined *local_1f8;
  undefined1 *puStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4 [31];
  undefined1 local_1c5;
  undefined *local_1c0;
  undefined1 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [31];
  undefined1 local_18d;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  uint *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined *local_168;
  undefined8 local_160;
  undefined **local_158;
  undefined **local_150;
  undefined *local_148;
  int local_140;
  int local_13c;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  byte local_128;
  undefined *local_120;
  undefined *puStack_118;
  int local_110;
  int iStack_10c;
  undefined *local_108;
  undefined4 local_100;
  int local_fc;
  undefined *local_f8;
  undefined8 local_f0;
  long local_e8;
  byte local_dc [4];
  undefined *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_290 = "FireworksSitBenchNpcIndex";
  local_298 = puVar1;
  iVar15 = FUN_02743000(&local_298);
  if (iVar15 == 0) {
    pcStack_d0 = "ArrivedInEventPlaza";
    local_d8 = puVar1;
    sVar14 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_d8);
    puVar1 = PTR_DAT_04bbc1a0;
    if (sVar14 != 0) {
      local_130 = 0;
      lVar21 = *(long *)PTR_DAT_04bb5c90;
      local_120 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      local_110 = *(int *)(lVar21 + 0x28);
      iStack_10c = *(int *)(lVar21 + 0x2c);
      local_100 = *(undefined4 *)(lVar21 + 0x38);
      local_fc = *(int *)(lVar21 + 0x3c);
      lVar21 = *(long *)PTR_DAT_04bb2720;
      puStack_118 = puVar2;
      local_108 = puVar2;
      if (lVar21 == 0) {
        puVar30 = &DAT_055c04a0;
      }
      else {
        puVar30 = &DAT_055c04a0;
        if (*(long *)(lVar21 + 0x330) != 0) {
          puVar30 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
          iVar15 = FUN_006bd550(*puVar30,0);
          puVar30 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar15 != 0x758f7eaf) {
            puVar30 = &DAT_055c04a0;
          }
        }
      }
      local_12c = *(undefined4 *)(puVar30 + 7);
      local_128 = FUN_017baf44();
      iVar9 = local_110;
      puVar8 = PTR_DAT_04bb43c0;
      local_128 = local_128 & 1;
      local_138 = PTR_DAT_04bb3140 + 0x10;
      local_140 = local_110;
      local_13c = iStack_10c;
      iVar15 = local_fc + 1;
      if (iVar15 != iStack_10c) {
        puVar3 = PTR_DAT_04bb2010 + 0x10;
        puVar4 = PTR_DAT_04bc0510 + 0x10;
        local_158 = &puStack_118;
        local_150 = &local_108;
        local_148 = puVar2;
        do {
          local_160 = 0;
          local_168 = puVar3;
          puVar17 = (undefined4 *)FUN_01a5190c(&local_138,0,&local_148,&local_168);
          local_170 = *puVar17;
          local_16c = puVar17[1];
          lVar28 = *(long *)puVar8;
          uVar16 = FUN_0277d6c4(&local_170);
          lVar21 = *(long *)puVar8;
          if (lVar21 != 0) {
            lVar28 = *(long *)(lVar28 + 0x57e58);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
              local_178 = (uint *)0x0;
              local_17c = local_16c;
              local_180 = local_170;
              local_188 = puVar4;
              uVar16 = FUN_0277d6c4(&local_180);
              if (*(long *)puVar8 == 0) {
LAB_01f607a0:
                uVar20 = 0;
              }
              else {
                lVar21 = *(long *)(lVar21 + 0x57e58);
                uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                if ((*(uint *)(lVar21 + 0x1d8) <= uVar16) ||
                   (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8) == 0))
                goto LAB_01f607a0;
                lVar21 = *(long *)PTR_DAT_04bc0428;
                uVar16 = FUN_0277d6c4(&local_170);
                uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                if ((*(uint *)(lVar21 + 0x1d8) <= uVar16) ||
                   (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8),
                   puVar22 == (uint *)0x0)) goto LAB_01f607a0;
                uVar20 = 0;
                uVar16 = *puVar22;
                local_178 = puVar22;
                if ((uVar16 != 0) && (puVar22 != (uint *)(ulong)uVar16)) {
                  puVar24 = (uint *)((long)puVar22 - (long)(ulong)uVar16);
                  uVar20 = 0;
                  if (*puVar24 != 0) {
                    uVar16 = puVar24[1];
                    if ((uVar16 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
                      lVar21 = 0xc;
                      if (*(char *)((long)puVar24 + 10) != '\0') {
                        lVar21 = 0x1c;
                      }
                      lVar21 = (long)puVar24 + lVar21 + (ulong)(ushort)puVar24[2] * 8;
                      if (lVar21 != 0) {
                        uVar20 = 0;
                        if ((ulong)uVar16 != 0) {
                          uVar20 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar16);
                        }
                        if (*puVar24 <= uVar20) {
                          uVar20 = 0xffffffff;
                        }
                        if ((uVar20 < *(uint *)PTR_DAT_04bc0048) &&
                           (uVar20 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar20 * 2
                                            ), uVar20 < 0x52)) goto LAB_01f607a4;
                      }
                    }
                    goto LAB_01f607a0;
                  }
                }
              }
LAB_01f607a4:
              local_298 = (undefined *)CONCAT44(local_298._4_4_,uVar20);
              if (uVar20 - 1 < 9) {
                lVar28 = *(long *)puVar8;
                lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x68);
                uVar16 = FUN_0277d6c4(&local_170);
                if (*(long *)puVar8 != 0) {
                  lVar28 = *(long *)(lVar28 + 0x57e58);
                  uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                  if ((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                    local_c8 = 0;
                    local_dc[0] = 0;
                    pcStack_d0 = PTR_DAT_04bb2010 + 0x10;
                    local_b8 = 0;
                    local_d8 = puVar1 + 0x10;
                    local_c0 = pcStack_d0;
                    uVar18 = FUN_01517328(&local_d8,local_dc,&local_168,&local_170);
                    if ((uVar18 & 1) != 0) {
                      fVar35 = *(float *)(lVar21 + 0x278);
                      fVar34 = *(float *)(lVar21 + 0x280);
                      iVar26 = (uint)local_c8;
                      iVar32 = local_c8._4_4_;
                      iVar33 = (int)local_b8;
                      iVar11 = local_b8._4_4_;
                      local_e8 = 0;
                      local_f8 = PTR_DAT_04bc0510 + 0x10;
                      lVar21 = *(long *)puVar8;
                      local_f0 = (char *)CONCAT44(local_16c,local_170);
                      uVar16 = FUN_0277d6c4(&local_f0);
                      if (*(long *)puVar8 != 0) {
                        lVar21 = *(long *)(lVar21 + 0x57e58);
                        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                        if ((uVar16 < *(uint *)(lVar21 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                          lVar21 = *(long *)PTR_DAT_04bc0428;
                          uVar16 = FUN_0277d6c4(&local_170);
                          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                          if ((uVar16 < *(uint *)(lVar21 + 0x1d8)) &&
                             (lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8),
                             lVar21 != 0)) {
                            local_e8 = lVar21;
                          }
                        }
                      }
                      fVar38 = ((float)iVar26 * 5.0 + (float)iVar33 * 5.0 + 5.0) * 0.5;
                      fVar39 = ((float)iVar32 * 5.0 + (float)iVar11 * 5.0 + 5.0) * 0.5;
                      uVar16 = FUN_01ae98d0(&local_f8);
                      bVar10 = local_dc[0];
                      if ((uVar16 | 2) == 2) {
                        fVar36 = 0.0;
                        fVar35 = fVar35 - fVar38;
                        fVar34 = SQRT(fVar35 * fVar35 + 0.0);
                        if (0.0 < fVar34) {
                          fVar34 = 5.0 / fVar34;
                          fVar35 = fVar35 * fVar34;
                          fVar36 = fVar34 * 0.0;
                        }
                        bVar12 = 5.0 <= SQRT(fVar36 * fVar36 + fVar35 * fVar35);
                        fVar37 = -0.0;
                        if (bVar12) {
                          fVar37 = fVar35;
                        }
                        fVar35 = -0.0;
                        if (bVar12) {
                          fVar35 = fVar36;
                        }
                        local_dc[0] = local_dc[0] & 0xfd;
                        local_ac = 3;
                        local_dc[0] = bVar10 & 0xf5;
                        iVar26 = local_c8._4_4_;
                        uVar16 = (uint)local_c8 + 1;
                      }
                      else {
                        fVar34 = fVar34 - fVar39;
                        fVar35 = 0.0;
                        fVar37 = SQRT(fVar34 * fVar34 + 0.0);
                        if (0.0 < fVar37) {
                          fVar37 = 5.0 / fVar37;
                          fVar35 = fVar37 * 0.0;
                          fVar34 = fVar34 * fVar37;
                        }
                        bVar12 = 5.0 <= SQRT(fVar34 * fVar34 + fVar35 * fVar35);
                        fVar37 = -0.0;
                        if (bVar12) {
                          fVar37 = fVar35;
                        }
                        fVar35 = -0.0;
                        if (bVar12) {
                          fVar35 = fVar34;
                        }
                        local_dc[0] = local_dc[0] & 0xfe;
                        local_ac = 2;
                        local_dc[0] = bVar10 & 0xfa;
                        iVar26 = local_c8._4_4_ + 1;
                        uVar16 = (uint)local_c8;
                      }
                      iVar32 = (uint)local_c8 + 1;
                      iVar33 = local_c8._4_4_ + 1;
                      local_2dc = 0;
                      local_2d0 = 0;
                      uStack_2cc = 0;
                      uVar29 = 0;
                      fVar34 = fVar38 + fVar37 + -2.5;
                      fVar35 = fVar39 + fVar35 + -2.5;
                      local_298 = PTR_DAT_04bb2010 + 0x10;
                      local_290 = (char *)0x300000001;
                      local_288 = local_298;
                      local_280 = &DAT_100000003;
                      local_278 = local_298;
                      local_270 = 0xffffffff00000001;
                      uVar7 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
                      uVar27 = (int)((float)(int)fVar35 / 5.0) - (uint)(fVar35 < 0.0);
                      uVar20 = uVar27 + 2;
                      local_c8 = CONCAT44(uVar27,uVar7);
                      local_b8 = CONCAT44(uVar27 + 1,uVar7 + 1);
                      local_268 = local_298;
                      local_260 = -NAN;
                      local_25c = 1;
                      uVar31 = uVar7;
                      uVar19 = uVar27 - 1;
LAB_01f60bd8:
                      do {
                        bVar13 = uVar16 != uVar31;
                        bVar12 = ((((int)uVar27 <= iVar33 && iVar26 <= (int)uVar27) &&
                                  (int)uVar31 <= iVar32) && (int)(uVar16 - uVar31) < 0) ==
                                 ((((int)uVar27 <= iVar33 && iVar26 <= (int)uVar27) &&
                                  (int)uVar31 <= iVar32) && SBORROW4(uVar16,uVar31));
                        if ((((((iVar33 < (int)uVar27 || (int)uVar27 < iVar26) ||
                               iVar32 < (int)uVar31) || bVar13) && bVar12) && uVar27 != uVar19) &&
                            (((((iVar33 < (int)uVar27 || (int)uVar27 < iVar26) ||
                               iVar32 < (int)uVar31) || bVar13) && bVar12) &&
                            (int)(uVar27 - uVar19) < 0) ==
                            (((((iVar33 < (int)uVar27 || (int)uVar27 < iVar26) ||
                               iVar32 < (int)uVar31) || bVar13) && bVar12) &&
                            SBORROW4(uVar27,uVar19))) {
                          local_b0 = 0;
                          uVar18 = 0;
                          if ((local_dc[0] & 1) != 0) {
                            local_ac = 0;
                            uVar5 = *(ushort *)(param_1 + 0x188);
                            uVar23 = (int)local_290 + uVar31;
                            if (((uint)uVar5 <= (uVar23 & 0xffff)) &&
                               ((uVar23 & 0xffff) <=
                                (((uint)uVar5 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff)))
                            {
                              uVar18 = 0;
                              uVar25 = local_290._4_4_ + uVar27;
                              uVar6 = *(ushort *)(param_1 + 0x18a);
                              if (((uint)uVar6 <= (uVar25 & 0xffff)) &&
                                 ((uVar25 & 0xffff) <=
                                  (((uint)uVar6 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff))
                                 ) {
                                uVar23 = (uVar23 - uVar5) +
                                         *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) *
                                         (uVar25 - uVar6);
                                if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) +
                                              (long)((int)uVar23 >> 5) * 4) >>
                                     (ulong)(uVar23 & 0x1f) & 1) == 0) {
                                  uVar18 = 0;
                                }
                                else {
                                  uVar18 = 1;
                                }
                              }
                            }
                          }
                          local_b0 = 1;
                          if ((local_dc[0] >> 1 & 1) != 0) {
                            local_ac = 1;
                            uVar5 = *(ushort *)(param_1 + 0x188);
                            uVar23 = (int)local_280 + uVar31;
                            if (((uint)uVar5 <= (uVar23 & 0xffff)) &&
                               ((uVar23 & 0xffff) <=
                                (((uint)uVar5 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff)))
                            {
                              uVar25 = local_280._4_4_ + uVar27;
                              uVar6 = *(ushort *)(param_1 + 0x18a);
                              if (((uint)uVar6 <= (uVar25 & 0xffff)) &&
                                 (((uVar25 & 0xffff) <=
                                   (((uint)uVar6 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff)
                                  && (uVar23 = (uVar23 - uVar5) +
                                               *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) *
                                               (uVar25 - uVar6),
                                     (*(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) +
                                               (long)((int)uVar23 >> 5) * 4) >>
                                      (ulong)(uVar23 & 0x1f) & 1) != 0)))) {
                                uVar18 = (ulong)((uint)uVar18 | 2);
                              }
                            }
                          }
                          local_b0 = 2;
                          if ((local_dc[0] >> 2 & 1) != 0) {
                            local_ac = 2;
                            uVar5 = *(ushort *)(param_1 + 0x188);
                            uVar23 = (int)local_270 + uVar31;
                            if (((uint)uVar5 <= (uVar23 & 0xffff)) &&
                               ((uVar23 & 0xffff) <=
                                (((uint)uVar5 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff)))
                            {
                              uVar25 = local_270._4_4_ + uVar27;
                              uVar6 = *(ushort *)(param_1 + 0x18a);
                              if (((uint)uVar6 <= (uVar25 & 0xffff)) &&
                                 (((uVar25 & 0xffff) <=
                                   (((uint)uVar6 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff)
                                  && (uVar23 = (uVar23 - uVar5) +
                                               *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) *
                                               (uVar25 - uVar6),
                                     (*(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) +
                                               (long)((int)uVar23 >> 5) * 4) >>
                                      (ulong)(uVar23 & 0x1f) & 1) != 0)))) {
                                uVar18 = (ulong)((uint)uVar18 | 4);
                              }
                            }
                          }
                          local_b0 = 3;
                          if ((local_dc[0] >> 3 & 1) != 0) {
                            local_ac = 3;
                            uVar5 = *(ushort *)(param_1 + 0x188);
                            uVar23 = (int)local_260 + uVar31;
                            if (((uint)uVar5 <= (uVar23 & 0xffff)) &&
                               ((uVar23 & 0xffff) <=
                                (((uint)uVar5 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff)))
                            {
                              uVar25 = local_25c + uVar27;
                              uVar6 = *(ushort *)(param_1 + 0x18a);
                              if (((uint)uVar6 <= (uVar25 & 0xffff)) &&
                                 (((uVar25 & 0xffff) <=
                                   (((uint)uVar6 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff)
                                  && (uVar23 = (uVar23 - uVar5) +
                                               *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) *
                                               (uVar25 - uVar6),
                                     (*(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) +
                                               (long)((int)uVar23 >> 5) * 4) >>
                                      (ulong)(uVar23 & 0x1f) & 1) != 0)))) {
                                uVar18 = (ulong)((uint)uVar18 | 8);
                              }
                            }
                          }
                          local_ac = 3;
                          uVar23 = (int)uVar18 - ((uint)(uVar18 >> 1) & 0x55555555);
                          uVar23 = (uVar23 >> 2 & 0x33333333) + (uVar23 & 0x33333333);
                          uVar23 = uVar23 + (uVar23 >> 4) & 0xf0f0f0f;
                          uVar23 = uVar23 + (uVar23 >> 8);
                          if ((uVar23 + (uVar23 >> 0x10) & 0x3f) != 0) {
                            uVar23 = uVar27;
                            uVar25 = uVar31;
                            do {
                              if (((uVar23 < 0x100) && (uVar25 < 0x120)) &&
                                 ((*(uint *)(PTR_DAT_04bbcc10 +
                                            (ulong)(uVar25 + uVar23 * 0x120 >> 5) * 4 + 8) >>
                                   (ulong)(uVar25 & 0x1f) & 1) != 0)) goto LAB_01f610f8;
                              if ((int)uVar25 < (int)(uVar31 + 1)) {
                                uVar25 = uVar25 + 1;
                              }
                              else {
                                uVar23 = uVar23 + 1;
                                uVar25 = uVar31;
                              }
                            } while ((uVar31 != uVar25) || (uVar27 + 2 != uVar23));
                            uVar29 = uVar29 + 1;
                            puVar22 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                            uVar23 = *puVar22 ^ *puVar22 << 0xb;
                            uVar25 = puVar22[3];
                            *puVar22 = puVar22[1];
                            puVar22[1] = puVar22[2];
                            uVar23 = uVar23 >> 8 ^ uVar25 >> 0x13 ^ uVar23 ^ uVar25;
                            puVar22[2] = uVar25;
                            puVar22[3] = uVar23;
                            if (((ulong)uVar23 * (ulong)uVar29 & 0xffffffff00000000) == 0) {
                              local_2dc = (int)uVar18;
                              local_2d0 = uVar31;
                              uStack_2cc = uVar27;
                            }
                          }
                        }
LAB_01f610f8:
                        if ((int)uVar31 < (int)local_b8) {
                          uVar23 = uVar31 + 1;
                        }
                        else {
                          uVar27 = uVar27 + 1;
                          uVar23 = (uint)local_c8;
                        }
                        if (uVar7 == uVar23 && uVar20 == uVar27) {
LAB_01f60bc0:
                          uVar27 = uVar20;
                          uVar31 = uVar7;
                        }
                        else {
                          if ((int)uVar23 < (int)local_b8) {
                            uVar31 = uVar23 + 1;
                          }
                          else {
                            uVar27 = uVar27 + 1;
                            uVar31 = (uint)local_c8;
                          }
                          if (uVar7 == uVar31 && uVar20 == uVar27) goto LAB_01f60bc0;
                          uVar25 = uVar27;
                          if (uVar27 != uVar19 + 2 || (int)uVar23 < (int)local_b8) {
                            uVar25 = uVar19;
                          }
                          uVar19 = uVar25;
                          if (uVar7 != uVar31) goto LAB_01f60bd8;
                        }
                      } while (uVar20 != uVar27);
                      if ((local_2d0 != *(uint *)(PTR_DAT_04bb5d40 + 8)) ||
                         (uStack_2cc != *(uint *)(PTR_DAT_04bb5d40 + 0xc))) {
                        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
                        local_c8 = 0;
                        puVar2 = PTR_DAT_04bb2010 + 0x10;
                        local_b8 = 0;
                        local_d8 = puVar1;
                        pcStack_d0 = puVar2;
                        local_c0 = puVar2;
                        FUN_01afb480(&local_188,&local_d8);
                        local_298 = (undefined *)((ulong)local_298 & 0xffffffff00000000);
                        local_270 = 0;
                        local_280 = (undefined1 *)0x0;
                        local_254 = 0;
                        local_c8 = CONCAT44(local_c8._4_4_ + local_160._4_4_,
                                            (uint)local_c8 + (int)local_160);
                        local_b8 = CONCAT44(local_b8._4_4_ + local_160._4_4_,
                                            (int)local_b8 + (int)local_160);
                        local_25c = 0;
                        uStack_258 = 0xfffe;
                        local_290 = puVar1;
                        local_288 = puVar2;
                        local_278 = puVar2;
                        FUN_0277d4ac(&uStack_258);
                        local_23c = 0;
                        uStack_237 = 0;
                        uStack_234 = 0;
                        local_230 = 0;
                        local_250 = 0x41c8000041800000;
                        uStack_248 = 0xbf800000bf800000;
                        local_240 = 0xbf800000;
                        local_22c = 0xfffe;
                        FUN_0277d4ac(&local_22c);
                        local_1e8 = 0x20;
                        local_1b0 = 0x20;
                        puStack_1f0 = local_1e4;
                        puStack_1b8 = local_1ac;
                        local_224 = 0;
                        local_1c5 = 0;
                        local_1f8 = PTR_DAT_04bb2028 + 0x10;
                        local_1e4[0] = 0;
                        local_18d = 0;
                        local_1ac[0] = 0;
                        local_1c0 = local_1f8;
                        FUN_01f8f1d4(&local_298);
                        FUN_01f8f1d4(&local_298);
                        local_268 = (undefined *)
                                    CONCAT44(local_268._4_4_,(float)(int)local_2d0 * 5.0 + 5.0);
                        uStack_258 = local_170;
                        local_254 = local_16c;
                        local_280 = (undefined1 *)local_c8;
                        local_270 = local_b8;
                        local_230 = (undefined1)local_2dc;
                        local_260 = (float)(int)uStack_2cc * 5.0 + 5.0;
                        FUN_01e6648c(param_1,0x68,&local_298,1);
                        if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
                          local_f8 = PTR_DAT_04bb2020 + 0x10;
                          local_f0 = "ApproachUpdateStop";
                          FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_f8,1);
                        }
                        if (*(char *)(param_1 + 0x13716) != '\0') {
                          *(undefined1 *)(param_1 + 0x13716) = 0;
                        }
                        *(undefined4 *)(param_1 + 0x1367c) = 0x68;
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
          if (local_140 < *(int *)(local_150 + 1)) {
            local_140 = local_140 + 1;
          }
          else {
            local_13c = local_13c + 1;
            local_140 = *(int *)(local_158 + 1);
          }
        } while ((iVar9 != local_140) || (iVar15 != local_13c));
      }
    }
  }
  return 0;
}

