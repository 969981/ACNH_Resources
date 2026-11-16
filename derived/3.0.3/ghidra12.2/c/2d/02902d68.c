
void FUN_02902d68(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined8 **ppuVar20;
  uint *puVar21;
  undefined8 ****ppppuVar22;
  uint *puVar23;
  undefined2 *puVar24;
  undefined8 ***pppuVar25;
  undefined8 *puVar26;
  undefined1 uVar27;
  undefined8 uVar28;
  long lVar29;
  int iVar30;
  undefined2 uVar31;
  int *piVar32;
  undefined2 *puVar33;
  long *plVar34;
  int iVar35;
  long lVar36;
  undefined4 *puVar37;
  undefined *local_288;
  int local_280;
  int iStack_27c;
  undefined *local_278;
  int local_270;
  int iStack_26c;
  undefined2 local_268;
  undefined1 local_266;
  undefined1 local_265;
  undefined4 local_264;
  undefined2 local_260;
  undefined1 local_25e;
  undefined1 local_25d;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined *local_250;
  int local_248;
  int iStack_244;
  undefined *local_240;
  undefined4 local_238;
  undefined4 local_234;
  byte local_230;
  int local_228 [2];
  undefined8 *local_220;
  undefined8 ****local_218;
  undefined8 ****ppppuStack_210;
  undefined8 ****local_208;
  undefined8 ****local_200;
  undefined8 ***local_1f8;
  undefined8 **local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [6];
  int local_1a8 [2];
  undefined8 ****local_1a0;
  undefined8 ****local_198;
  undefined8 ****ppppuStack_190;
  undefined8 ****local_188;
  undefined8 ****local_180;
  undefined ****local_178;
  undefined8 ***local_170;
  undefined8 **local_168;
  undefined8 *local_160;
  undefined8 ****local_158;
  undefined4 *local_150;
  undefined8 *local_148;
  undefined *local_140;
  undefined *local_138;
  int local_130;
  int iStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 ****local_118;
  undefined8 ****local_110;
  undefined8 ***local_108;
  undefined8 **local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint *local_78;
  uint local_6c;
  CalendarTime aCStack_68 [24];
  
  if ((param_2 & 1) != 0) {
    puVar26 = &DAT_055c04a0;
    local_b8 = 0;
    local_140 = PTR_DAT_04bbfe68 + 0x10;
    lVar17 = *(long *)PTR_DAT_04bb2720;
    local_c0 = local_140;
    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x330) != 0)) {
      puVar26 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar9 = FUN_006bd550(*puVar26,0);
      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar26 = &DAT_055c04a0;
      }
    }
    local_b4 = *(undefined4 *)(puVar26 + 7);
    local_b0 = FUN_017baf44();
    local_b0 = local_b0 & 1;
    lVar17 = FUN_01a4fa00(&local_c0);
    local_148 = &local_f0;
    local_150 = &local_98;
    local_158 = &local_108;
    iVar9 = *(int *)(lVar17 + 0x10);
    puVar18 = PTR_DAT_04bb2010 + 0x10;
    local_160 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
    plVar34 = (long *)PTR_DAT_04bb43c0;
    iVar16 = 0;
    local_138 = puVar18;
    do {
      iVar30 = *(int *)(lVar17 + 0x14);
      iVar15 = *(int *)(lVar17 + 0x24) + 1;
      iVar35 = iVar9;
      local_130 = iVar15;
      iStack_12c = iVar9;
      if (iVar15 != iVar30) {
        do {
          local_d0 = puVar18;
          local_c8 = iVar35;
          iStack_c4 = iVar30;
          FUN_01a50240(&local_d8,&local_c0,iVar16,&local_d0);
          lVar29 = *plVar34;
          uVar10 = FUN_0277d6c4(&local_d8);
          if (*plVar34 != 0) {
            lVar29 = *(long *)(lVar29 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
            if (uVar10 < *(uint *)(lVar29 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
                uVar31 = *(undefined2 *)PTR_DAT_04bb37e0;
                uVar7 = PTR_DAT_04bb37e0[2];
                uVar27 = PTR_DAT_04bb37e0[3];
                uVar11 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                local_e0 = *(undefined **)PTR_DAT_04bb37e0;
                iVar9 = FUN_0277d6c4(&local_d8);
                puVar18 = (undefined *)0x33dd;
                if (iVar9 == 0x33dd) {
LAB_0290305c:
                  local_88 = puVar18;
                  FUN_0277d4ac(&local_88);
                  local_e0 = local_88;
                  uVar31 = (undefined2)local_88;
                  uVar7 = local_88._2_1_;
                  uVar27 = local_88._3_1_;
                  uVar11 = local_88._4_4_;
                }
                else {
                  iVar9 = FUN_0277d6c4(&local_d8);
                  puVar18 = (undefined *)0x33de;
                  if (iVar9 == 0x33de) goto LAB_0290305c;
                  iVar9 = FUN_0277d6c4(&local_d8);
                  puVar18 = (undefined *)0x33df;
                  if (iVar9 == 0x33df) goto LAB_0290305c;
                }
                lVar36 = *plVar34;
                uVar10 = FUN_0277d6c4(&local_e0);
                lVar29 = *plVar34;
                if (lVar29 != 0) {
                  lVar36 = *(long *)(lVar36 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar36 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar36 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar36 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    local_f0 = (undefined8 ***)
                               CONCAT44(uVar11,CONCAT13(uVar27,CONCAT12(uVar7,uVar31)));
                    local_e8 = (undefined **)0x0;
                    local_f8 = local_160;
                    uVar10 = FUN_0277d6c4(local_148);
                    puVar18 = PTR_DAT_04bb43c0;
                    if (*(long *)PTR_DAT_04bb43c0 != 0) {
                      lVar29 = *(long *)(lVar29 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        lVar29 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(&local_e0);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                        if (uVar10 < *(uint *)(lVar29 + 0x1d8)) {
                          ppuVar19 = *(undefined ***)
                                      (*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8);
                          if (ppuVar19 != (undefined **)0x0) {
                            local_e8 = ppuVar19;
                          }
                        }
                      }
                    }
                    local_100 = (undefined8 **)0x0;
                    lVar29 = *(long *)puVar18;
                    local_110 = (undefined8 ****)(PTR_DAT_04bc0510 + 0x10);
                    uVar10 = FUN_0277d6c4(local_158);
                    if (*(long *)puVar18 != 0) {
                      lVar29 = *(long *)(lVar29 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        lVar29 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(&local_d8);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                        if (uVar10 < *(uint *)(lVar29 + 0x1d8)) {
                          ppuVar20 = *(undefined8 ***)
                                      (*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8);
                          if (ppuVar20 != (undefined8 **)0x0) {
                            local_100 = ppuVar20;
                          }
                        }
                      }
                    }
                    uVar11 = FUN_01ae98d0(&local_110);
                    FUN_01afade0(&local_f8,uVar11);
                    FUN_01a50cb0(&local_c0,iVar16,&local_d0);
                    pppuVar25 = local_f0;
                    uVar11 = local_f0._4_4_;
                    local_118 = (undefined8 ****)local_f0;
                    local_120 = (long *)CONCAT44(iStack_c4,local_c8);
                    local_128 = PTR_DAT_04bb2010 + 0x10;
                    local_88 = local_140;
                    local_80 = 0;
                    lVar29 = *(long *)PTR_DAT_04bb2720;
                    if ((lVar29 == 0) || (*(long *)(lVar29 + 0x330) == 0)) {
                      puVar26 = &DAT_055c04a0;
                    }
                    else {
                      puVar26 = (undefined8 *)
                                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                          (*(long **)PTR_DAT_04bb2640,
                                           *(undefined4 *)(lVar29 + 0x338));
                      iVar9 = FUN_006bd550(*puVar26,0);
                      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                      if (iVar9 != 0x758f7eaf) {
                        puVar26 = &DAT_055c04a0;
                      }
                    }
                    local_7c = *(undefined4 *)(puVar26 + 7);
                    uVar7 = FUN_017baf44();
                    lVar29 = *(long *)puVar18;
                    local_98 = SUB84(pppuVar25,0);
                    local_a0 = PTR_DAT_04bc0510 + 0x10;
                    local_94 = uVar11;
                    local_90 = (uint *)0x0;
                    local_78 = (uint *)(CONCAT71(local_78._1_7_,uVar7) & 0xffffffffffffff01);
                    uVar10 = FUN_0277d6c4(local_150);
                    if (*(long *)puVar18 == 0) {
LAB_0290339c:
                      if (local_90 != (uint *)0x0) goto LAB_029033ac;
                      local_6c = 0xbc;
                    }
                    else {
                      lVar29 = *(long *)(lVar29 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                         (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                      goto LAB_0290339c;
                      lVar29 = *(long *)PTR_DAT_04bc0428;
                      uVar10 = FUN_0277d6c4(&local_118);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                         (puVar21 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8),
                         puVar21 == (uint *)0x0)) goto LAB_0290339c;
                      local_90 = puVar21;
LAB_029033ac:
                      uVar10 = *local_90;
                      local_6c = 0;
                      if ((uVar10 != 0) && (local_90 != (uint *)(ulong)uVar10)) {
                        puVar21 = (uint *)((long)local_90 - (long)(ulong)uVar10);
                        local_6c = 0;
                        if (*puVar21 != 0) {
                          uVar10 = puVar21[1];
                          if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                            lVar29 = 0xc;
                            if (*(char *)((long)puVar21 + 10) != '\0') {
                              lVar29 = 0x1c;
                            }
                            lVar29 = (long)puVar21 + lVar29 + (ulong)(ushort)puVar21[2] * 8;
                            if (lVar29 != 0) {
                              uVar12 = 0;
                              if ((ulong)uVar10 != 0) {
                                uVar12 = (uint)((ulong)((long)local_90 - lVar29) / (ulong)uVar10);
                              }
                              if (*puVar21 <= uVar12) {
                                uVar12 = 0xffffffff;
                              }
                              if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (local_6c = (uint)*(ushort *)
                                                    (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                    (long)(int)uVar12 * 2), local_6c < 0xbd))
                              goto LAB_02903440;
                            }
                          }
                          local_6c = 0;
                        }
                      }
                    }
LAB_02903440:
                    local_a8 = 0xb8;
                    if (local_6c == 0xb8) {
                      lVar29 = *(long *)puVar18;
                      uVar10 = FUN_0277d6c4(PTR_DAT_04bb37e0);
                      if (*(long *)puVar18 != 0) {
                        lVar29 = *(long *)(lVar29 + 0x57e58);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                        if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                          FUN_01b0ab1c(&local_a0,PTR_DAT_04bb37e0);
                        }
                      }
                    }
                    local_a8 = local_98;
                    uStack_a4 = local_94;
                    uVar14 = FUN_01a50590(&local_88,iVar16,&local_128,&local_a8);
                    if ((uVar14 & 1) != 0) {
                      local_a8 = local_98;
                      uStack_a4 = local_94;
                      FUN_01a50970(&local_88,iVar16,&local_a8,&local_128);
                    }
                  }
                }
                puVar18 = local_138;
                plVar34 = (long *)PTR_DAT_04bb43c0;
                iVar9 = iStack_12c;
                iVar15 = local_130;
              }
            }
          }
          if (iVar35 < *(int *)(lVar17 + 0x20)) {
            iVar35 = iVar35 + 1;
          }
          else {
            iVar30 = iVar30 + 1;
            iVar35 = *(int *)(lVar17 + 0x10);
          }
        } while ((iVar9 != iVar35) || (iVar15 != iVar30));
        iVar9 = *(int *)(lVar17 + 0x10);
      }
      iVar15 = 8;
      if (iVar16 < 8) {
        iVar15 = iVar16 + 1;
      }
      iVar16 = iVar15;
      if (iVar15 == 8) {
        return;
      }
    } while( true );
  }
  uVar28 = *(undefined8 *)PTR_DAT_04bb32f0;
  if (((*(short *)(DAT_04da6480 + 0x4070) == 0) && (*(short *)(DAT_04da6480 + 0x4068) == 0)) &&
     ((char)((ulong)*(undefined8 *)(DAT_04da6480 + 0x4060) >> 0x20) < '\x05')) {
    nn::time::ToPosixTimeFromUtc(aCStack_68 + 0x38);
    nn::time::ToCalendarTimeInUtc((PosixTime *)(aCStack_68 + 0x40));
  }
  uVar14 = FUN_008839a4(uVar28,aCStack_68 + 0x40);
  if ((uVar14 & 1) == 0) {
    local_108 = &local_100;
    local_100 = &local_f8;
    local_128 = (undefined *)0x0;
    local_120 = (long *)0x0;
    local_f8 = &local_f0;
    local_f0 = (undefined8 ***)&local_e8;
    local_118 = &local_108;
    local_e8 = &local_e0;
    local_e0 = (undefined *)0x0;
    if (&local_d8 != (long *)0x0) {
      local_128 = (undefined *)0x600000000;
      local_120 = &local_d8;
    }
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    local_1a0 = (undefined8 ****)0x0;
    local_188 = &local_180;
    local_180 = &local_178;
    local_198 = &local_188;
    local_178 = (undefined ****)&local_170;
    local_170 = &local_168;
    local_168 = &local_160;
    local_160 = (undefined8 *)0x0;
    if (&local_158 != (undefined8 *****)0x0) {
      local_1a8[0] = 0;
      local_1a8[1] = 6;
      local_1a0 = &local_158;
    }
    local_228[0] = 0;
    local_228[1] = 0;
    local_220 = (undefined8 *)0x0;
    local_208 = &local_200;
    local_200 = &local_1f8;
    local_218 = &local_208;
    local_1f8 = &local_1f0;
    local_1f0 = &local_1e8;
    local_1e8 = &local_1e0;
    local_1e0 = 0;
    if (local_1d8 != (undefined8 *)0x0) {
      local_228[0] = 0;
      local_228[1] = 6;
      local_220 = local_1d8;
    }
    uVar10 = 0;
    puVar18 = PTR_DAT_04bc0510 + 0x10;
    ppppuStack_210 = local_218;
    ppppuStack_190 = local_198;
    local_110 = local_118;
    do {
      puVar2 = PTR_DAT_04bb43c0;
      lVar29 = *(long *)PTR_DAT_04bb43c0;
      puVar24 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar12 = FUN_0277d6c4(puVar24);
      lVar17 = *(long *)puVar2;
      if (lVar17 != 0) {
        lVar29 = *(long *)(lVar29 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar29 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          lVar29 = param_1 + (long)(int)uVar10 * 8;
          local_78 = (uint *)0x0;
          puVar33 = (undefined2 *)(lVar29 + 2);
          puVar37 = (undefined4 *)(lVar29 + 4);
          local_7c = *puVar37;
          local_80 = CONCAT22(*puVar33,*puVar24);
          local_88 = puVar18;
          uVar12 = FUN_0277d6c4(&local_80);
          if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_02904644:
            uVar12 = 0xbc;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
            goto LAB_02904644;
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar12 = FUN_0277d6c4(puVar24);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
               (puVar21 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8),
               puVar21 == (uint *)0x0)) goto LAB_02904644;
            uVar12 = 0;
            uVar4 = *puVar21;
            local_78 = puVar21;
            if ((uVar4 != 0) && (puVar21 != (uint *)(ulong)uVar4)) {
              puVar23 = (uint *)((long)puVar21 - (long)(ulong)uVar4);
              uVar12 = 0;
              if (*puVar23 != 0) {
                uVar12 = puVar23[1];
                if ((uVar12 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar23 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar23 + lVar17 + (ulong)(ushort)puVar23[2] * 8;
                  if (lVar17 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar12 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar21 - lVar17) / (ulong)uVar12);
                    }
                    if (*puVar23 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar12 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                       uVar12 < 0xbd)) goto LAB_02904648;
                  }
                }
                uVar12 = 0;
              }
            }
          }
LAB_02904648:
          ppppuVar6 = local_118;
          ppppuVar5 = local_198;
          ppppuVar22 = local_218;
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar12);
          puVar1 = (undefined1 *)(lVar29 + 3);
          if (uVar12 - 0x10 < 3) {
            if (local_228[0] < local_228[1]) {
              if (local_218 != (undefined8 ****)0x0) {
                local_218 = (undefined8 ****)*local_218;
              }
              *(undefined2 *)ppppuVar22 = *puVar24;
              *(undefined1 *)((long)ppppuVar22 + 2) = *(undefined1 *)puVar33;
              *(undefined1 *)((long)ppppuVar22 + 3) = *puVar1;
              *(undefined4 *)((long)ppppuVar22 + 4) = *puVar37;
              if (local_228[0] < local_228[1]) {
                local_220[local_228[0]] = ppppuVar22;
                local_228[0] = local_228[0] + 1;
              }
            }
          }
          else if (uVar12 - 9 < 2) {
            if ((int)local_128 < local_128._4_4_) {
              if (local_118 != (undefined8 ****)0x0) {
                local_118 = (undefined8 ****)*local_118;
              }
              *(undefined2 *)ppppuVar6 = *puVar24;
              *(undefined1 *)((long)ppppuVar6 + 2) = *(undefined1 *)puVar33;
              *(undefined1 *)((long)ppppuVar6 + 3) = *puVar1;
              *(undefined4 *)((long)ppppuVar6 + 4) = *puVar37;
              if ((int)local_128 < local_128._4_4_) {
                local_120[(int)local_128] = (long)ppppuVar6;
                local_128 = (undefined *)CONCAT44(local_128._4_4_,(int)local_128 + 1);
              }
            }
          }
          else if (uVar12 == 0xd) {
            if (local_1a8[0] < local_1a8[1]) {
              if (local_198 != (undefined8 ****)0x0) {
                local_198 = (undefined8 ****)*local_198;
              }
              *(undefined2 *)ppppuVar5 = *puVar24;
              *(undefined1 *)((long)ppppuVar5 + 2) = *(undefined1 *)puVar33;
              *(undefined1 *)((long)ppppuVar5 + 3) = *puVar1;
              *(undefined4 *)((long)ppppuVar5 + 4) = *puVar37;
              if (local_1a8[0] < local_1a8[1]) {
                local_1a0[local_1a8[0]] = ppppuVar5;
                local_1a8[0] = local_1a8[0] + 1;
              }
            }
          }
        }
      }
      plVar34 = (long *)PTR_DAT_04bb43c0;
      uVar10 = uVar10 + 1;
      if (uVar10 == 0x40) {
        puVar26 = &DAT_055c04a0;
        local_238 = 0;
        puVar18 = PTR_DAT_04bbfe68 + 0x10;
        lVar17 = *(long *)PTR_DAT_04bb2720;
        local_240 = puVar18;
        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x330) != 0)) {
          puVar26 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
          iVar9 = FUN_006bd550(*puVar26,0);
          puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar9 != 0x758f7eaf) {
            puVar26 = &DAT_055c04a0;
          }
        }
        local_234 = *(undefined4 *)(puVar26 + 7);
        local_230 = FUN_017baf44();
        local_230 = local_230 & 1;
        lVar17 = FUN_01a4fa00(&local_240);
        iVar9 = *(int *)(lVar17 + 0x10);
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        puVar3 = PTR_DAT_04bb2010 + 0x10;
        iVar16 = 0;
        do {
          iVar30 = *(int *)(lVar17 + 0x14);
          iVar15 = *(int *)(lVar17 + 0x24) + 1;
          iVar35 = iVar9;
          if (iVar15 != iVar30) {
            do {
              local_250 = puVar3;
              local_248 = iVar35;
              iStack_244 = iVar30;
              FUN_01a50240(&local_258,&local_240,iVar16,&local_250);
              lVar29 = *plVar34;
              uVar10 = FUN_0277d6c4(&local_258);
              if (*plVar34 != 0) {
                lVar29 = *(long *)(lVar29 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  uVar31 = *(undefined2 *)PTR_DAT_04bb37e0;
                  uVar7 = PTR_DAT_04bb37e0[2];
                  uVar27 = PTR_DAT_04bb37e0[3];
                  uVar11 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                  local_268 = uVar31;
                  local_266 = uVar7;
                  local_265 = uVar27;
                  local_264 = uVar11;
                  local_260 = uVar31;
                  local_25e = uVar7;
                  local_25d = uVar27;
                  local_25c = uVar11;
                  iVar13 = FUN_0277d6c4(&local_258);
                  if (iVar13 == 0x33dd) {
                    local_88 = (undefined *)0x33dd;
                    FUN_0277d4ac(&local_88);
                    local_268 = (undefined2)local_88;
                    local_266 = local_88._2_1_;
                    local_265 = local_88._3_1_;
                    local_264 = local_88._4_4_;
                    uVar31 = (undefined2)local_88;
                    uVar7 = local_88._2_1_;
                    uVar27 = local_88._3_1_;
                    uVar11 = local_88._4_4_;
                    if ((int)local_128 != 0) {
                      puVar24 = (undefined2 *)*local_120;
                      local_260 = *puVar24;
                      local_25e = *(undefined1 *)(puVar24 + 1);
                      local_25d = *(undefined1 *)((long)puVar24 + 3);
                      local_25c = *(undefined4 *)(puVar24 + 2);
                      if ((int)local_128 < 1) {
                        piVar32 = (int *)&local_128;
                      }
                      else {
                        piVar32 = (int *)&local_128;
                        ppppuVar22 = (undefined8 ****)*local_120;
                        *ppppuVar22 = local_118;
                        local_118 = ppppuVar22;
                      }
LAB_02904b00:
                      uVar11 = local_264;
                      uVar27 = local_265;
                      uVar7 = local_266;
                      uVar31 = local_268;
                      uVar10 = *piVar32 - 1;
                      if (0 < *piVar32) {
                        if (uVar10 == 0) {
                          iVar13 = 1;
                        }
                        else {
                          memmove(*(void **)(piVar32 + 2),
                                  (void *)((long)*(void **)(piVar32 + 2) + 8),(ulong)uVar10 << 3);
                          iVar13 = *piVar32;
                        }
                        *piVar32 = iVar13 + -1;
                      }
                    }
                  }
                  else {
                    iVar13 = FUN_0277d6c4(&local_258);
                    if (iVar13 == 0x33de) {
                      local_88 = (undefined *)0x33de;
                      FUN_0277d4ac(&local_88);
                      local_268 = (undefined2)local_88;
                      local_266 = local_88._2_1_;
                      local_265 = local_88._3_1_;
                      local_264 = local_88._4_4_;
                      uVar31 = (undefined2)local_88;
                      uVar7 = local_88._2_1_;
                      uVar27 = local_88._3_1_;
                      uVar11 = local_88._4_4_;
                      if (local_1a8[0] != 0) {
                        pppuVar25 = *local_1a0;
                        local_260 = *(undefined2 *)pppuVar25;
                        local_25e = *(undefined1 *)((long)pppuVar25 + 2);
                        local_25d = *(undefined1 *)((long)pppuVar25 + 3);
                        local_25c = *(undefined4 *)((long)pppuVar25 + 4);
                        if (local_1a8[0] < 1) {
                          piVar32 = local_1a8;
                        }
                        else {
                          piVar32 = local_1a8;
                          ppppuVar22 = (undefined8 ****)*local_1a0;
                          *ppppuVar22 = local_198;
                          local_198 = ppppuVar22;
                        }
                        goto LAB_02904b00;
                      }
                    }
                    else {
                      iVar13 = FUN_0277d6c4(&local_258);
                      if (iVar13 == 0x33df) {
                        local_88 = (undefined *)0x33df;
                        FUN_0277d4ac(&local_88);
                        local_268 = (undefined2)local_88;
                        local_266 = local_88._2_1_;
                        local_265 = local_88._3_1_;
                        local_264 = local_88._4_4_;
                        uVar31 = (undefined2)local_88;
                        uVar7 = local_88._2_1_;
                        uVar27 = local_88._3_1_;
                        uVar11 = local_88._4_4_;
                        if (local_228[0] != 0) {
                          puVar24 = (undefined2 *)*local_220;
                          local_260 = *puVar24;
                          local_25e = *(undefined1 *)(puVar24 + 1);
                          local_25d = *(undefined1 *)((long)puVar24 + 3);
                          local_25c = *(undefined4 *)(puVar24 + 2);
                          if (0 < local_228[0]) {
                            ppppuVar22 = (undefined8 ****)*local_220;
                            *ppppuVar22 = local_218;
                            local_218 = ppppuVar22;
                          }
                          piVar32 = local_228;
                          goto LAB_02904b00;
                        }
                      }
                    }
                  }
                  lVar36 = *plVar34;
                  uVar10 = FUN_0277d6c4(&local_260);
                  lVar29 = *plVar34;
                  if (lVar29 == 0) {
LAB_02904c24:
                    uVar10 = FUN_0277d6c4(&local_268);
                    plVar34 = (long *)PTR_DAT_04bb43c0;
                    if (*(long *)PTR_DAT_04bb43c0 != 0) {
                      lVar29 = *(long *)(lVar29 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        FUN_01a50cb0(&local_240,iVar16,&local_250);
                        local_80 = 0;
                        local_280 = local_248;
                        iStack_27c = iStack_244;
                        local_288 = PTR_DAT_04bb2010 + 0x10;
                        lVar29 = *(long *)PTR_DAT_04bb2720;
                        local_88 = puVar18;
                        if ((lVar29 == 0) || (*(long *)(lVar29 + 0x330) == 0)) {
                          puVar26 = &DAT_055c04a0;
                        }
                        else {
                          puVar26 = (undefined8 *)
                                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                              (*(long **)PTR_DAT_04bb2640,
                                               *(undefined4 *)(lVar29 + 0x338));
                          iVar13 = FUN_006bd550(*puVar26,0);
                          puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                          if (iVar13 != 0x758f7eaf) {
                            puVar26 = &DAT_055c04a0;
                          }
                        }
                        local_7c = *(undefined4 *)(puVar26 + 7);
                        uVar8 = FUN_017baf44();
                        local_98._0_3_ = CONCAT12(uVar7,uVar31);
                        lVar29 = *plVar34;
                        local_98 = CONCAT13(uVar27,(undefined3)local_98);
                        local_90 = (uint *)0x0;
                        local_78 = (uint *)(CONCAT71(local_78._1_7_,uVar8) & 0xffffffffffffff01);
                        local_a0 = puVar2;
                        local_94 = uVar11;
                        uVar10 = FUN_0277d6c4(&local_98);
                        if (*plVar34 == 0) {
LAB_02904dc8:
                          if (local_90 != (uint *)0x0) goto LAB_02904dd8;
                          local_6c = 0xbc;
                        }
                        else {
                          lVar29 = *(long *)(lVar29 + 0x57e58);
                          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                          if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                             (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                          goto LAB_02904dc8;
                          lVar29 = *(long *)PTR_DAT_04bc0428;
                          uVar10 = FUN_0277d6c4(&local_268);
                          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                          if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                             (puVar21 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8
                                                  ), puVar21 == (uint *)0x0)) goto LAB_02904dc8;
                          local_90 = puVar21;
LAB_02904dd8:
                          uVar10 = *local_90;
                          local_6c = 0;
                          if ((uVar10 != 0) && (local_90 != (uint *)(ulong)uVar10)) {
                            puVar21 = (uint *)((long)local_90 - (long)(ulong)uVar10);
                            local_6c = 0;
                            if (*puVar21 != 0) {
                              uVar10 = puVar21[1];
                              if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                                lVar29 = 0xc;
                                if (*(char *)((long)puVar21 + 10) != '\0') {
                                  lVar29 = 0x1c;
                                }
                                lVar29 = (long)puVar21 + lVar29 + (ulong)(ushort)puVar21[2] * 8;
                                if (lVar29 != 0) {
                                  uVar12 = 0;
                                  if ((ulong)uVar10 != 0) {
                                    uVar12 = (uint)((ulong)((long)local_90 - lVar29) / (ulong)uVar10
                                                   );
                                  }
                                  if (*puVar21 <= uVar12) {
                                    uVar12 = 0xffffffff;
                                  }
                                  if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                                     (local_6c = (uint)*(ushort *)
                                                        (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                        (long)(int)uVar12 * 2), local_6c < 0xbd))
                                  goto LAB_02904e80;
                                }
                              }
                              local_6c = 0;
                            }
                          }
                        }
LAB_02904e80:
                        local_a8 = 0xb8;
                        if (local_6c == 0xb8) {
                          lVar29 = *plVar34;
                          uVar10 = FUN_0277d6c4(PTR_DAT_04bb37e0);
                          if (*plVar34 != 0) {
                            lVar29 = *(long *)(lVar29 + 0x57e58);
                            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                            if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                               (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0))
                            {
                              FUN_01b0ab1c(&local_a0,PTR_DAT_04bb37e0);
                            }
                          }
                        }
                        local_a8 = local_98;
                        uStack_a4 = local_94;
                        uVar14 = FUN_01a50590(&local_88,iVar16,&local_288,&local_a8);
                        if ((uVar14 & 1) != 0) {
                          ppuVar19 = &local_288;
                          goto LAB_0290511c;
                        }
                      }
                    }
                  }
                  else {
                    lVar36 = *(long *)(lVar36 + 0x57e58);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar36 + 0x1f8);
                    if ((*(uint *)(lVar36 + 0x1d8) <= uVar10) ||
                       (*(long *)(*(long *)(lVar36 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                    goto LAB_02904c24;
                    FUN_01a50cb0(&local_240,iVar16,&local_250);
                    plVar34 = (long *)PTR_DAT_04bb43c0;
                    local_80 = 0;
                    local_270 = local_248;
                    iStack_26c = iStack_244;
                    local_278 = PTR_DAT_04bb2010 + 0x10;
                    local_88 = PTR_DAT_04bbfe68 + 0x10;
                    lVar29 = *(long *)PTR_DAT_04bb2720;
                    if (lVar29 == 0) {
                      puVar26 = &DAT_055c04a0;
                    }
                    else if (*(long *)(lVar29 + 0x330) == 0) {
                      puVar26 = &DAT_055c04a0;
                    }
                    else {
                      puVar26 = (undefined8 *)
                                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                          (*(long **)PTR_DAT_04bb2640,
                                           *(undefined4 *)(lVar29 + 0x338));
                      iVar13 = FUN_006bd550(*puVar26,0);
                      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                      if (iVar13 != 0x758f7eaf) {
                        puVar26 = &DAT_055c04a0;
                      }
                    }
                    local_7c = *(undefined4 *)(puVar26 + 7);
                    uVar7 = FUN_017baf44();
                    local_78 = (uint *)(CONCAT71(local_78._1_7_,uVar7) & 0xffffffffffffff01);
                    local_90 = (uint *)0x0;
                    lVar29 = *plVar34;
                    local_a0 = PTR_DAT_04bc0510 + 0x10;
                    local_98 = local_258;
                    local_94 = uStack_254;
                    uVar10 = FUN_0277d6c4(&local_98);
                    if (*plVar34 == 0) {
LAB_02904fe4:
                      if (local_90 != (uint *)0x0) goto LAB_02904ff4;
                      local_6c = 0xbc;
                    }
                    else {
                      lVar29 = *(long *)(lVar29 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                         (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                      goto LAB_02904fe4;
                      lVar29 = *(long *)PTR_DAT_04bc0428;
                      uVar10 = FUN_0277d6c4(&local_258);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                         (puVar21 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8),
                         puVar21 == (uint *)0x0)) goto LAB_02904fe4;
                      local_90 = puVar21;
LAB_02904ff4:
                      uVar10 = *local_90;
                      local_6c = 0;
                      if ((uVar10 != 0) && (local_90 != (uint *)(ulong)uVar10)) {
                        puVar21 = (uint *)((long)local_90 - (long)(ulong)uVar10);
                        local_6c = 0;
                        if (*puVar21 != 0) {
                          uVar10 = puVar21[1];
                          if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                            lVar29 = 0xc;
                            if (*(char *)((long)puVar21 + 10) != '\0') {
                              lVar29 = 0x1c;
                            }
                            lVar29 = (long)puVar21 + lVar29 + (ulong)(ushort)puVar21[2] * 8;
                            if (lVar29 != 0) {
                              uVar12 = 0;
                              if ((ulong)uVar10 != 0) {
                                uVar12 = (uint)((ulong)((long)local_90 - lVar29) / (ulong)uVar10);
                              }
                              if (*puVar21 <= uVar12) {
                                uVar12 = 0xffffffff;
                              }
                              if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (local_6c = (uint)*(ushort *)
                                                    (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                    (long)(int)uVar12 * 2), local_6c < 0xbd))
                              goto LAB_02905088;
                            }
                          }
                          local_6c = 0;
                        }
                      }
                    }
LAB_02905088:
                    local_a8 = 0xb8;
                    if (local_6c == 0xb8) {
                      lVar29 = *plVar34;
                      uVar10 = FUN_0277d6c4(&local_260);
                      if (*plVar34 != 0) {
                        lVar29 = *(long *)(lVar29 + 0x57e58);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                        if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                          FUN_01b0ab1c(&local_a0,&local_260);
                        }
                      }
                    }
                    local_a8 = local_98;
                    uStack_a4 = local_94;
                    uVar14 = FUN_01a50590(&local_88,iVar16,&local_278,&local_a8);
                    if ((uVar14 & 1) == 0) goto LAB_02905134;
                    ppuVar19 = &local_278;
LAB_0290511c:
                    local_a8 = local_98;
                    uStack_a4 = local_94;
                    FUN_01a50970(&local_88,iVar16,&local_a8,ppuVar19);
                  }
                }
              }
LAB_02905134:
              if (iVar35 < *(int *)(lVar17 + 0x20)) {
                iVar35 = iVar35 + 1;
              }
              else {
                iVar30 = iVar30 + 1;
                iVar35 = *(int *)(lVar17 + 0x10);
              }
            } while ((iVar9 != iVar35) || (iVar15 != iVar30));
            iVar9 = *(int *)(lVar17 + 0x10);
          }
          iVar15 = 8;
          if (iVar16 < 8) {
            iVar15 = iVar16 + 1;
          }
          iVar16 = iVar15;
          if (iVar15 == 8) {
            return;
          }
        } while( true );
      }
    } while( true );
  }
  local_108 = &local_100;
  local_100 = &local_f8;
  local_128 = (undefined *)0x0;
  local_120 = (long *)0x0;
  local_f8 = &local_f0;
  local_f0 = (undefined8 ***)&local_e8;
  local_118 = &local_108;
  local_e8 = &local_e0;
  local_e0 = (undefined *)0x0;
  if (&local_d8 != (long *)0x0) {
    local_128 = (undefined *)0x600000000;
    local_120 = &local_d8;
  }
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_1a0 = (undefined8 ****)0x0;
  local_188 = &local_180;
  local_180 = &local_178;
  local_198 = &local_188;
  local_178 = (undefined ****)&local_170;
  local_170 = &local_168;
  local_168 = &local_160;
  local_160 = (undefined8 *)0x0;
  if (&local_158 != (undefined8 *****)0x0) {
    local_1a8[0] = 0;
    local_1a8[1] = 6;
    local_1a0 = &local_158;
  }
  local_228[0] = 0;
  local_228[1] = 0;
  local_220 = (undefined8 *)0x0;
  local_208 = &local_200;
  local_200 = &local_1f8;
  local_218 = &local_208;
  local_1f8 = &local_1f0;
  local_1f0 = &local_1e8;
  local_1e8 = &local_1e0;
  local_1e0 = 0;
  if (local_1d8 != (undefined8 *)0x0) {
    local_228[0] = 0;
    local_228[1] = 6;
    local_220 = local_1d8;
  }
  uVar10 = 0;
  puVar18 = PTR_DAT_04bc0510 + 0x10;
  ppppuStack_210 = local_218;
  ppppuStack_190 = local_198;
  local_110 = local_118;
  do {
    puVar2 = PTR_DAT_04bb43c0;
    puVar24 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
    lVar29 = *(long *)PTR_DAT_04bb43c0;
    uVar12 = FUN_0277d6c4(puVar24);
    lVar17 = *(long *)puVar2;
    if (lVar17 != 0) {
      lVar29 = *(long *)(lVar29 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar29 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        lVar29 = param_1 + (long)(int)uVar10 * 8;
        local_78 = (uint *)0x0;
        puVar33 = (undefined2 *)(lVar29 + 2);
        puVar37 = (undefined4 *)(lVar29 + 4);
        local_7c = *puVar37;
        local_80 = CONCAT22(*puVar33,*puVar24);
        local_88 = puVar18;
        uVar12 = FUN_0277d6c4(&local_80);
        if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_02903800:
          uVar12 = 0xbc;
        }
        else {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02903800;
          lVar17 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(puVar24);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
             (puVar21 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8),
             puVar21 == (uint *)0x0)) goto LAB_02903800;
          uVar12 = 0;
          uVar4 = *puVar21;
          local_78 = puVar21;
          if ((uVar4 != 0) && (puVar21 != (uint *)(ulong)uVar4)) {
            puVar23 = (uint *)((long)puVar21 - (long)(ulong)uVar4);
            uVar12 = 0;
            if (*puVar23 != 0) {
              uVar12 = puVar23[1];
              if ((uVar12 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar23 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar23 + lVar17 + (ulong)(ushort)puVar23[2] * 8;
                if (lVar17 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar21 - lVar17) / (ulong)uVar12);
                  }
                  if (*puVar23 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar12 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                     uVar12 < 0xbd)) goto LAB_02903804;
                }
              }
              uVar12 = 0;
            }
          }
        }
LAB_02903804:
        ppppuVar6 = local_118;
        ppppuVar5 = local_198;
        ppppuVar22 = local_218;
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar12);
        puVar1 = (undefined1 *)(lVar29 + 3);
        if (uVar12 - 0x10 < 3) {
          if (local_228[0] < local_228[1]) {
            if (local_218 != (undefined8 ****)0x0) {
              local_218 = (undefined8 ****)*local_218;
            }
            *(undefined2 *)ppppuVar22 = *puVar24;
            *(undefined1 *)((long)ppppuVar22 + 2) = *(undefined1 *)puVar33;
            *(undefined1 *)((long)ppppuVar22 + 3) = *puVar1;
            *(undefined4 *)((long)ppppuVar22 + 4) = *puVar37;
            if (local_228[0] < local_228[1]) {
              local_220[local_228[0]] = ppppuVar22;
              local_228[0] = local_228[0] + 1;
            }
          }
        }
        else if (uVar12 - 9 < 2) {
          if ((int)local_128 < local_128._4_4_) {
            if (local_118 != (undefined8 ****)0x0) {
              local_118 = (undefined8 ****)*local_118;
            }
            *(undefined2 *)ppppuVar6 = *puVar24;
            *(undefined1 *)((long)ppppuVar6 + 2) = *(undefined1 *)puVar33;
            *(undefined1 *)((long)ppppuVar6 + 3) = *puVar1;
            *(undefined4 *)((long)ppppuVar6 + 4) = *puVar37;
            if ((int)local_128 < local_128._4_4_) {
              local_120[(int)local_128] = (long)ppppuVar6;
              local_128 = (undefined *)CONCAT44(local_128._4_4_,(int)local_128 + 1);
            }
          }
        }
        else if (uVar12 == 0xd) {
          if (local_1a8[0] < local_1a8[1]) {
            if (local_198 != (undefined8 ****)0x0) {
              local_198 = (undefined8 ****)*local_198;
            }
            *(undefined2 *)ppppuVar5 = *puVar24;
            *(undefined1 *)((long)ppppuVar5 + 2) = *(undefined1 *)puVar33;
            *(undefined1 *)((long)ppppuVar5 + 3) = *puVar1;
            *(undefined4 *)((long)ppppuVar5 + 4) = *puVar37;
            if (local_1a8[0] < local_1a8[1]) {
              local_1a0[local_1a8[0]] = ppppuVar5;
              local_1a8[0] = local_1a8[0] + 1;
            }
          }
        }
      }
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 0x40) {
      puVar21 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      puVar18 = PTR_DAT_04bbfe68;
      puVar2 = PTR_DAT_04bb2720;
      puVar26 = &DAT_055c04a0;
      uVar12 = puVar21[3];
      local_238 = 0;
      uVar10 = *puVar21 ^ *puVar21 << 0xb;
      *puVar21 = puVar21[1];
      puVar21[1] = puVar21[2];
      puVar18 = puVar18 + 0x10;
      puVar21[2] = uVar12;
      puVar21[3] = uVar10 >> 8 ^ uVar12 >> 0x13 ^ uVar10 ^ uVar12;
      plVar34 = (long *)PTR_DAT_04bb43c0;
      lVar17 = *(long *)puVar2;
      local_240 = puVar18;
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x330) != 0)) {
        puVar26 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
        iVar9 = FUN_006bd550(*puVar26,0);
        puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar26 = &DAT_055c04a0;
        }
      }
      local_234 = *(undefined4 *)(puVar26 + 7);
      local_230 = FUN_017baf44();
      local_230 = local_230 & 1;
      lVar17 = FUN_01a4fa00(&local_240);
      iVar9 = *(int *)(lVar17 + 0x10);
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      iVar16 = 0;
      do {
        iVar30 = *(int *)(lVar17 + 0x14);
        iVar15 = *(int *)(lVar17 + 0x24) + 1;
        iVar35 = iVar9;
        if (iVar15 != iVar30) {
          do {
            local_250 = puVar3;
            local_248 = iVar35;
            iStack_244 = iVar30;
            FUN_01a50240(&local_258,&local_240,iVar16,&local_250);
            lVar29 = *plVar34;
            uVar10 = FUN_0277d6c4(&local_258);
            if (*plVar34 != 0) {
              lVar29 = *(long *)(lVar29 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                uVar31 = *(undefined2 *)PTR_DAT_04bb37e0;
                uVar7 = PTR_DAT_04bb37e0[2];
                uVar27 = PTR_DAT_04bb37e0[3];
                uVar11 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                local_268 = uVar31;
                local_266 = uVar7;
                local_265 = uVar27;
                local_264 = uVar11;
                local_260 = uVar31;
                local_25e = uVar7;
                local_25d = uVar27;
                local_25c = uVar11;
                iVar13 = FUN_0277d6c4(&local_258);
                if (iVar13 == 0x33dd) {
                  local_88 = (undefined *)0x33dd;
                  FUN_0277d4ac(&local_88);
                  local_268 = (undefined2)local_88;
                  local_266 = local_88._2_1_;
                  local_265 = local_88._3_1_;
                  local_264 = local_88._4_4_;
                  uVar31 = (undefined2)local_88;
                  uVar7 = local_88._2_1_;
                  uVar27 = local_88._3_1_;
                  uVar11 = local_88._4_4_;
                  if ((int)local_128 != 0) {
                    puVar24 = (undefined2 *)*local_120;
                    local_260 = *puVar24;
                    local_25e = *(undefined1 *)(puVar24 + 1);
                    local_25d = *(undefined1 *)((long)puVar24 + 3);
                    local_25c = *(undefined4 *)(puVar24 + 2);
                    if ((int)local_128 < 1) {
                      piVar32 = (int *)&local_128;
                    }
                    else {
                      piVar32 = (int *)&local_128;
                      ppppuVar22 = (undefined8 ****)*local_120;
                      *ppppuVar22 = local_118;
                      local_118 = ppppuVar22;
                    }
LAB_02903d04:
                    uVar11 = local_264;
                    uVar27 = local_265;
                    uVar7 = local_266;
                    uVar31 = local_268;
                    uVar10 = *piVar32 - 1;
                    if (0 < *piVar32) {
                      if (uVar10 == 0) {
                        iVar13 = 1;
                      }
                      else {
                        memmove(*(void **)(piVar32 + 2),(void *)((long)*(void **)(piVar32 + 2) + 8),
                                (ulong)uVar10 << 3);
                        iVar13 = *piVar32;
                      }
                      *piVar32 = iVar13 + -1;
                    }
                  }
                }
                else {
                  iVar13 = FUN_0277d6c4(&local_258);
                  if (iVar13 == 0x33de) {
                    local_88 = (undefined *)0x33de;
                    FUN_0277d4ac(&local_88);
                    local_268 = (undefined2)local_88;
                    local_266 = local_88._2_1_;
                    local_265 = local_88._3_1_;
                    local_264 = local_88._4_4_;
                    uVar31 = (undefined2)local_88;
                    uVar7 = local_88._2_1_;
                    uVar27 = local_88._3_1_;
                    uVar11 = local_88._4_4_;
                    if (local_1a8[0] != 0) {
                      pppuVar25 = *local_1a0;
                      local_260 = *(undefined2 *)pppuVar25;
                      local_25e = *(undefined1 *)((long)pppuVar25 + 2);
                      local_25d = *(undefined1 *)((long)pppuVar25 + 3);
                      local_25c = *(undefined4 *)((long)pppuVar25 + 4);
                      if (local_1a8[0] < 1) {
                        piVar32 = local_1a8;
                      }
                      else {
                        piVar32 = local_1a8;
                        ppppuVar22 = (undefined8 ****)*local_1a0;
                        *ppppuVar22 = local_198;
                        local_198 = ppppuVar22;
                      }
                      goto LAB_02903d04;
                    }
                  }
                  else {
                    iVar13 = FUN_0277d6c4(&local_258);
                    if (iVar13 == 0x33df) {
                      local_88 = (undefined *)0x33df;
                      FUN_0277d4ac(&local_88);
                      local_268 = (undefined2)local_88;
                      local_266 = local_88._2_1_;
                      local_265 = local_88._3_1_;
                      local_264 = local_88._4_4_;
                      uVar31 = (undefined2)local_88;
                      uVar7 = local_88._2_1_;
                      uVar27 = local_88._3_1_;
                      uVar11 = local_88._4_4_;
                      if (local_228[0] != 0) {
                        puVar24 = (undefined2 *)*local_220;
                        local_260 = *puVar24;
                        local_25e = *(undefined1 *)(puVar24 + 1);
                        local_25d = *(undefined1 *)((long)puVar24 + 3);
                        local_25c = *(undefined4 *)(puVar24 + 2);
                        if (0 < local_228[0]) {
                          ppppuVar22 = (undefined8 ****)*local_220;
                          *ppppuVar22 = local_218;
                          local_218 = ppppuVar22;
                        }
                        piVar32 = local_228;
                        goto LAB_02903d04;
                      }
                    }
                  }
                }
                lVar36 = *plVar34;
                uVar10 = FUN_0277d6c4(&local_260);
                lVar29 = *plVar34;
                if (lVar29 == 0) {
LAB_02903e28:
                  uVar10 = FUN_0277d6c4(&local_268);
                  plVar34 = (long *)PTR_DAT_04bb43c0;
                  if (*(long *)PTR_DAT_04bb43c0 != 0) {
                    lVar29 = *(long *)(lVar29 + 0x57e58);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                    if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                      FUN_01a50cb0(&local_240,iVar16,&local_250);
                      local_80 = 0;
                      local_280 = local_248;
                      iStack_27c = iStack_244;
                      local_288 = PTR_DAT_04bb2010 + 0x10;
                      lVar29 = *(long *)PTR_DAT_04bb2720;
                      local_88 = puVar18;
                      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x330) == 0)) {
                        puVar26 = &DAT_055c04a0;
                      }
                      else {
                        puVar26 = (undefined8 *)
                                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                            (*(long **)PTR_DAT_04bb2640,
                                             *(undefined4 *)(lVar29 + 0x338));
                        iVar13 = FUN_006bd550(*puVar26,0);
                        puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                        if (iVar13 != 0x758f7eaf) {
                          puVar26 = &DAT_055c04a0;
                        }
                      }
                      local_7c = *(undefined4 *)(puVar26 + 7);
                      uVar8 = FUN_017baf44();
                      local_98._0_3_ = CONCAT12(uVar7,uVar31);
                      lVar29 = *plVar34;
                      local_98 = CONCAT13(uVar27,(undefined3)local_98);
                      local_90 = (uint *)0x0;
                      local_78 = (uint *)(CONCAT71(local_78._1_7_,uVar8) & 0xffffffffffffff01);
                      local_a0 = puVar2;
                      local_94 = uVar11;
                      uVar10 = FUN_0277d6c4(&local_98);
                      if (*plVar34 == 0) {
LAB_02903fcc:
                        if (local_90 != (uint *)0x0) goto LAB_02903fdc;
                        local_6c = 0xbc;
                      }
                      else {
                        lVar29 = *(long *)(lVar29 + 0x57e58);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                        if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                           (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                        goto LAB_02903fcc;
                        lVar29 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(&local_268);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                        if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                           (puVar21 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8),
                           puVar21 == (uint *)0x0)) goto LAB_02903fcc;
                        local_90 = puVar21;
LAB_02903fdc:
                        uVar10 = *local_90;
                        local_6c = 0;
                        if ((uVar10 != 0) && (local_90 != (uint *)(ulong)uVar10)) {
                          puVar21 = (uint *)((long)local_90 - (long)(ulong)uVar10);
                          local_6c = 0;
                          if (*puVar21 != 0) {
                            uVar10 = puVar21[1];
                            if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                              lVar29 = 0xc;
                              if (*(char *)((long)puVar21 + 10) != '\0') {
                                lVar29 = 0x1c;
                              }
                              lVar29 = (long)puVar21 + lVar29 + (ulong)(ushort)puVar21[2] * 8;
                              if (lVar29 != 0) {
                                uVar12 = 0;
                                if ((ulong)uVar10 != 0) {
                                  uVar12 = (uint)((ulong)((long)local_90 - lVar29) / (ulong)uVar10);
                                }
                                if (*puVar21 <= uVar12) {
                                  uVar12 = 0xffffffff;
                                }
                                if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                                   (local_6c = (uint)*(ushort *)
                                                      (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                      (long)(int)uVar12 * 2), local_6c < 0xbd))
                                goto LAB_02904084;
                              }
                            }
                            local_6c = 0;
                          }
                        }
                      }
LAB_02904084:
                      local_a8 = 0xb8;
                      if (local_6c == 0xb8) {
                        lVar29 = *plVar34;
                        uVar10 = FUN_0277d6c4(PTR_DAT_04bb37e0);
                        if (*plVar34 != 0) {
                          lVar29 = *(long *)(lVar29 + 0x57e58);
                          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                          if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                            FUN_01b0ab1c(&local_a0,PTR_DAT_04bb37e0);
                          }
                        }
                      }
                      local_a8 = local_98;
                      uStack_a4 = local_94;
                      uVar14 = FUN_01a50590(&local_88,iVar16,&local_288,&local_a8);
                      if ((uVar14 & 1) != 0) {
                        ppuVar19 = &local_288;
                        goto LAB_02904320;
                      }
                    }
                  }
                }
                else {
                  lVar36 = *(long *)(lVar36 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar36 + 0x1f8);
                  if ((*(uint *)(lVar36 + 0x1d8) <= uVar10) ||
                     (*(long *)(*(long *)(lVar36 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                  goto LAB_02903e28;
                  FUN_01a50cb0(&local_240,iVar16,&local_250);
                  plVar34 = (long *)PTR_DAT_04bb43c0;
                  local_80 = 0;
                  local_270 = local_248;
                  iStack_26c = iStack_244;
                  local_278 = PTR_DAT_04bb2010 + 0x10;
                  local_88 = PTR_DAT_04bbfe68 + 0x10;
                  lVar29 = *(long *)PTR_DAT_04bb2720;
                  if (lVar29 == 0) {
                    puVar26 = &DAT_055c04a0;
                  }
                  else if (*(long *)(lVar29 + 0x330) == 0) {
                    puVar26 = &DAT_055c04a0;
                  }
                  else {
                    puVar26 = (undefined8 *)
                              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar29 + 0x338))
                    ;
                    iVar13 = FUN_006bd550(*puVar26,0);
                    puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                    if (iVar13 != 0x758f7eaf) {
                      puVar26 = &DAT_055c04a0;
                    }
                  }
                  local_7c = *(undefined4 *)(puVar26 + 7);
                  uVar7 = FUN_017baf44();
                  local_78 = (uint *)(CONCAT71(local_78._1_7_,uVar7) & 0xffffffffffffff01);
                  local_90 = (uint *)0x0;
                  lVar29 = *plVar34;
                  local_a0 = PTR_DAT_04bc0510 + 0x10;
                  local_98 = local_258;
                  local_94 = uStack_254;
                  uVar10 = FUN_0277d6c4(&local_98);
                  if (*plVar34 == 0) {
LAB_029041e8:
                    if (local_90 != (uint *)0x0) goto LAB_029041f8;
                    local_6c = 0xbc;
                  }
                  else {
                    lVar29 = *(long *)(lVar29 + 0x57e58);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                    if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                       (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                    goto LAB_029041e8;
                    lVar29 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(&local_258);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                    if ((*(uint *)(lVar29 + 0x1d8) <= uVar10) ||
                       (puVar21 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8),
                       puVar21 == (uint *)0x0)) goto LAB_029041e8;
                    local_90 = puVar21;
LAB_029041f8:
                    uVar10 = *local_90;
                    local_6c = 0;
                    if ((uVar10 != 0) && (local_90 != (uint *)(ulong)uVar10)) {
                      puVar21 = (uint *)((long)local_90 - (long)(ulong)uVar10);
                      local_6c = 0;
                      if (*puVar21 != 0) {
                        uVar10 = puVar21[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                          lVar29 = 0xc;
                          if (*(char *)((long)puVar21 + 10) != '\0') {
                            lVar29 = 0x1c;
                          }
                          lVar29 = (long)puVar21 + lVar29 + (ulong)(ushort)puVar21[2] * 8;
                          if (lVar29 != 0) {
                            uVar12 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar12 = (uint)((ulong)((long)local_90 - lVar29) / (ulong)uVar10);
                            }
                            if (*puVar21 <= uVar12) {
                              uVar12 = 0xffffffff;
                            }
                            if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_6c = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar12 * 2), local_6c < 0xbd))
                            goto LAB_0290428c;
                          }
                        }
                        local_6c = 0;
                      }
                    }
                  }
LAB_0290428c:
                  local_a8 = 0xb8;
                  if (local_6c == 0xb8) {
                    lVar29 = *plVar34;
                    uVar10 = FUN_0277d6c4(&local_260);
                    if (*plVar34 != 0) {
                      lVar29 = *(long *)(lVar29 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar29 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        FUN_01b0ab1c(&local_a0,&local_260);
                      }
                    }
                  }
                  local_a8 = local_98;
                  uStack_a4 = local_94;
                  uVar14 = FUN_01a50590(&local_88,iVar16,&local_278,&local_a8);
                  if ((uVar14 & 1) == 0) goto LAB_02904340;
                  ppuVar19 = &local_278;
LAB_02904320:
                  local_a8 = local_98;
                  uStack_a4 = local_94;
                  FUN_01a50970(&local_88,iVar16,&local_a8,ppuVar19);
                }
              }
            }
LAB_02904340:
            if (iVar35 < *(int *)(lVar17 + 0x20)) {
              iVar35 = iVar35 + 1;
            }
            else {
              iVar30 = iVar30 + 1;
              iVar35 = *(int *)(lVar17 + 0x10);
            }
          } while ((iVar9 != iVar35) || (iVar15 != iVar30));
          iVar9 = *(int *)(lVar17 + 0x10);
        }
        iVar15 = 8;
        if (iVar16 < 8) {
          iVar15 = iVar16 + 1;
        }
        iVar16 = iVar15;
        if (iVar15 == 8) {
          return;
        }
      } while( true );
    }
  } while( true );
}

