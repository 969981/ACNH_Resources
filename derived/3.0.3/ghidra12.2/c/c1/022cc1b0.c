
undefined8 FUN_022cc1b0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  undefined *local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  long local_230;
  undefined *local_228;
  undefined *puStack_220;
  undefined8 local_218;
  undefined *local_210;
  undefined8 uStack_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  long local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined *puStack_1d0;
  int local_1c8;
  int iStack_1c4;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  byte local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  int local_198;
  int iStack_194;
  undefined *local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  long local_170;
  undefined1 local_168;
  undefined1 uStack_167;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined2 uStack_160;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 local_158;
  undefined1 uStack_157;
  undefined1 uStack_156;
  undefined5 uStack_155;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 local_146;
  undefined2 uStack_140;
  undefined6 local_13e;
  undefined2 uStack_138;
  undefined6 local_136;
  undefined2 uStack_130;
  undefined6 local_12e;
  undefined2 uStack_128;
  undefined6 local_126;
  undefined2 uStack_120;
  undefined6 local_11e;
  undefined2 uStack_118;
  undefined6 local_116;
  undefined2 uStack_110;
  undefined6 local_10e;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined4 local_104;
  byte local_100;
  undefined2 local_f8 [4];
  undefined *local_f0;
  undefined *puStack_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  bool local_c8;
  undefined1 uStack_c7;
  undefined4 local_c6;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  puVar8 = PTR_DAT_04bb43c0;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(param_2);
  puVar3 = PTR_DAT_04bc0510;
  lVar21 = *(long *)puVar8;
  if (lVar21 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      local_78 = *(undefined4 *)param_2;
      uStack_74 = *(undefined4 *)((long)param_2 + 4);
      local_70 = 0;
      local_80 = PTR_DAT_04bc0510 + 0x10;
      uVar11 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar8 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(param_2);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if (uVar11 < *(uint *)(lVar21 + 0x1d8)) {
            lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8);
            if (lVar21 != 0) {
              local_70 = lVar21;
            }
          }
        }
      }
      puVar10 = PTR_DAT_04bbc1a0;
      puVar7 = PTR_DAT_04bb2010;
      local_88 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      local_98 = 0;
      local_a8 = puVar1;
      puStack_a0 = puVar2;
      puStack_90 = puVar2;
      FUN_01afb7fc(&local_80,&local_a8,*(undefined4 *)(param_2 + 3));
      puVar9 = PTR_DAT_04bb6298;
      iVar12 = *(int *)(param_2 + 2);
      iVar4 = *(int *)((long)param_2 + 0x14);
      local_c0 = 0xffffffffffffffff;
      local_e0 = (int)local_98 + iVar12;
      iStack_dc = local_98._4_4_ + iVar4;
      local_d0 = (int)local_88 + iVar12;
      iStack_cc = local_88._4_4_ + iVar4;
      local_98 = CONCAT44(iStack_dc,local_e0);
      local_88 = CONCAT44(iStack_cc,local_d0);
      local_c6 = 0;
      local_c2 = 0;
      local_b8 = 0;
      local_ac = 0xff00;
      local_f8[0] = *(undefined2 *)PTR_DAT_04bb6298;
      iVar23 = 0;
      if (*(long *)PTR_DAT_04bbbc38 != 0) {
        iVar23 = *(int *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
      }
      uStack_167 = (undefined1)((uint)iVar23 >> 8);
      uStack_106 = 0;
      local_10e = 0;
      uStack_108 = 0;
      local_116 = 0;
      uStack_110 = 0;
      local_11e = 0;
      uStack_118 = 0;
      local_126 = 0;
      uStack_120 = 0;
      local_12e = 0;
      uStack_128 = 0;
      local_136 = 0;
      uStack_130 = 0;
      local_13e = 0;
      uStack_138 = 0;
      local_146 = 0;
      uStack_140 = 0;
      uStack_14e = 0;
      uStack_148 = 0;
      uStack_155 = 0;
      uStack_150 = 0;
      local_168 = 0;
      _local_c8 = CONCAT11(0xff,iVar23 != 0 && *(int *)((long)param_2 + 0x24) == 1);
      local_b4 = 0x100010041200000;
      local_15e = (undefined2)iVar12;
      local_15c = (undefined2)iVar4;
      uVar16 = *param_2;
      uStack_166 = (undefined2)uVar16;
      uStack_164 = (undefined4)((ulong)uVar16 >> 0x10);
      uStack_160 = (undefined2)((ulong)uVar16 >> 0x30);
      local_15a = (undefined1)*(int *)((long)param_2 + 0x24);
      local_159 = (undefined1)*(undefined4 *)(param_2 + 3);
      local_158 = (undefined1)*(undefined4 *)(param_2 + 4);
      uStack_157 = (undefined1)*(undefined4 *)((long)param_2 + 0x1c);
      local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,*(undefined4 *)((long)param_2 + 0x2c));
      local_104 = 0;
      uStack_156 = (undefined1)*(undefined4 *)((long)param_2 + 0x2c);
      local_100 = *(byte *)(param_1 + 0x10);
      if (7 < local_100) {
        local_100 = 0xff;
      }
      local_f0 = puVar1;
      puStack_e8 = puVar2;
      local_d8 = puVar2;
      uVar14 = FUN_01ae6020(&local_80);
      uVar11 = 0;
      if ((uVar14 & 1) == 0) {
        sVar5 = *(short *)puVar9;
        if (sVar5 == -1) {
          uVar11 = 0;
        }
        else {
          local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,0x20);
          puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
          if (0xff < (uint)(int)sVar5) {
            puVar1 = PTR_DAT_04bc39f8;
          }
          uVar11 = *(uint *)(puVar1 + 4) & 1;
        }
        uVar11 = uVar11 ^ 1;
      }
      if ((uVar11 == 0) && (*(uint *)((long)param_2 + 0x24) < 2)) {
        if (*(uint *)((long)param_2 + 0x24) == 1) {
          local_178 = *(undefined4 *)param_2;
          uStack_174 = *(undefined4 *)((long)param_2 + 4);
          lVar21 = *(long *)puVar8;
          local_180 = puVar3 + 0x10;
          local_170 = 0;
          uVar11 = FUN_0277d6c4(&local_178);
          if (*(long *)puVar8 != 0) {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar21 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4(param_2);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
              if (uVar11 < *(uint *)(lVar21 + 0x1d8)) {
                lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8);
                if (lVar21 != 0) {
                  local_170 = lVar21;
                }
              }
            }
          }
          local_1a8 = puVar10 + 0x10;
          local_190 = puVar7 + 0x10;
          local_198 = 0;
          iStack_194 = 0;
          local_188 = 0;
          local_1a0 = local_190;
          FUN_01afb7fc(&local_180,&local_1a8,*(undefined4 *)(param_2 + 3));
          local_1b8 = 0;
          local_198 = local_198 + *(int *)(param_2 + 2);
          iStack_194 = iStack_194 + *(int *)((long)param_2 + 0x14);
          local_188 = CONCAT44(local_188._4_4_ + *(int *)((long)param_2 + 0x14),
                               (int)local_188 + *(int *)(param_2 + 2));
          lVar21 = *(long *)PTR_DAT_04bb2720;
          if (lVar21 == 0) {
            puVar20 = &DAT_055c04a0;
          }
          else {
            puVar20 = &DAT_055c04a0;
            if (*(long *)(lVar21 + 0x330) != 0) {
              puVar20 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
              iVar12 = FUN_006bd550(*puVar20,0);
              puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar12 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
          }
          local_1b4 = *(undefined4 *)(puVar20 + 7);
          local_1b0 = FUN_017baf44();
          local_1b0 = local_1b0 & 1;
          local_1c0 = PTR_DAT_04bb3140 + 0x10;
          uVar14 = FUN_01a4ff00(&local_1c0,0,&local_1a8);
          iVar12 = local_198;
          if ((uVar14 & 1) == 0) {
            iVar4 = local_188._4_4_ + 1;
            if (iVar4 != iStack_194) {
              puVar3 = PTR_DAT_04bb2010 + 0x10;
              puVar1 = PTR_DAT_04bc0510 + 0x10;
              iVar23 = iStack_194;
              iVar24 = local_198;
              do {
                local_1d8 = 0;
                local_1e0 = puVar3;
                puStack_1d0 = puVar3;
                local_1c8 = iVar24;
                iStack_1c4 = iVar23;
                FUN_01a5033c(&local_1e8,&local_1c0,0,&puStack_1d0,&local_1e0);
                if ((short)local_1e8 != -2) {
                  lVar22 = *(long *)puVar8;
                  uVar11 = FUN_0277d6c4(&local_1e8);
                  lVar21 = *(long *)puVar8;
                  if (lVar21 != 0) {
                    lVar22 = *(long *)(lVar22 + 0x57e58);
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    if ((uVar11 < *(uint *)(lVar22 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                      local_1f0 = 0;
                      local_1f8 = local_1e8;
                      uStack_1f4 = uStack_1e4;
                      local_200 = puVar1;
                      uVar11 = FUN_0277d6c4(&local_1f8);
                      if (*(long *)puVar8 != 0) {
                        lVar21 = *(long *)(lVar21 + 0x57e58);
                        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                        if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                          lVar21 = *(long *)PTR_DAT_04bc0428;
                          uVar11 = FUN_0277d6c4(&local_1e8);
                          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                          if (uVar11 < *(uint *)(lVar21 + 0x1d8)) {
                            lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8);
                            if (lVar21 != 0) {
                              local_1f0 = lVar21;
                            }
                          }
                        }
                      }
                      uVar14 = FUN_01ae6020(&local_200);
                      if ((uVar14 & 1) == 0) {
                        iVar13 = FUN_01ae7550(&local_200);
                        local_228 = (undefined *)CONCAT44(local_228._4_4_,iVar13);
                        if (iVar13 - 1U < 6) {
                          local_218 = 0;
                          local_228 = PTR_DAT_04bbc1a0 + 0x10;
                          puStack_220 = PTR_DAT_04bb2010 + 0x10;
                          uStack_208 = 0;
                          lVar21 = *(long *)puVar8;
                          local_230 = 0;
                          local_240 = PTR_DAT_04bc0510 + 0x10;
                          local_238 = local_1e8;
                          uStack_234 = uStack_1e4;
                          local_210 = puStack_220;
                          uVar11 = FUN_0277d6c4(&local_238);
                          if (*(long *)puVar8 != 0) {
                            lVar21 = *(long *)(lVar21 + 0x57e58);
                            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                            if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
                               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0))
                            {
                              lVar21 = *(long *)PTR_DAT_04bc0428;
                              uVar11 = FUN_0277d6c4(&local_1e8);
                              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                              if (uVar11 < *(uint *)(lVar21 + 0x1d8)) {
                                lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8
                                                  );
                                if (lVar21 != 0) {
                                  local_230 = lVar21;
                                }
                              }
                            }
                          }
                          FUN_01afb480(&local_240,&local_228);
                          uVar14 = FUN_022ccd80(param_1,local_f8,&local_168);
                          goto joined_r0x022ccae0;
                        }
                      }
                    }
                  }
                }
                if (iVar24 < (int)local_188) {
                  iVar24 = iVar24 + 1;
                }
                else {
                  iVar23 = iVar23 + 1;
                  iVar24 = local_198;
                }
              } while ((iVar12 != iVar24) || (iVar4 != iVar23));
            }
          }
        }
        uVar14 = FUN_022ccb20(param_1,local_f8,&local_168);
joined_r0x022ccae0:
        if ((uVar14 & 1) != 0) {
          return 1;
        }
      }
      else if (*(char *)(param_1 + 0x11) != '\0') {
        local_1a8 = PTR_DAT_04bbc600 + 0x10;
        local_1a0._0_4_ = *(uint *)(param_1 + 8);
        lVar22 = *(long *)PTR_DAT_04bbc218;
        lVar21 = *(long *)(lVar22 + 0x18);
        uVar11 = (uint)local_1a0;
        if (*(uint *)(lVar22 + 0x10) <= (uint)local_1a0) {
          uVar11 = 0;
        }
        puVar17 = *(uint **)(lVar21 + (long)(int)uVar11 * 0x18 + 0x10);
        if (0 < (int)*puVar17) {
          uVar6 = *(uint *)(param_1 + 0xc);
          lVar15 = (long)(int)uVar6;
          if (uVar6 < *(uint *)(lVar21 + (long)(int)uVar11 * 0x18 + 8)) {
            uVar14 = 0;
            uVar19 = (ulong)uVar6;
            lVar18 = 0x78;
            do {
              if (((uVar14 < puVar17[lVar15 * 4]) && (*(long *)(puVar17 + lVar15 * 4 + 2) != 0)) &&
                 (*(int *)(*(long *)(puVar17 + lVar15 * 4 + 2) + lVar18 + -0x4c) == 0)) {
                if ((int)(uint)uVar14 < 0) {
                  return 0;
                }
                local_1a0._4_4_ = (undefined4)uVar19;
                local_198 = (int)(uVar19 >> 0x20);
                local_228 = (undefined *)CONCAT44(local_228._4_4_,(uint)local_1a0);
                uVar11 = (uint)local_1a0;
                if (*(uint *)(lVar22 + 0x10) <= (uint)local_1a0) {
                  uVar11 = 0;
                }
                if (((uVar6 < *(uint *)(lVar21 + (long)(int)uVar11 * 0x18 + 8)) &&
                    (lVar21 = *(long *)(lVar21 + (long)(int)uVar11 * 0x18 + 0x10),
                    (uint)uVar14 < *(uint *)(lVar21 + lVar15 * 0x10))) &&
                   ((lVar21 = *(long *)(lVar21 + lVar15 * 0x10 + 8), lVar21 != 0 &&
                    (puVar20 = *(undefined8 **)(lVar21 + lVar18), puVar20 != (undefined8 *)0x0)))) {
                  if (((*PTR_DAT_04bbc708 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbc708), iVar12 != 0)) {
                    *(undefined **)PTR_DAT_04bbc700 = PTR_DAT_04bbc660 + 0x10;
                    __cxa_guard_release(PTR_DAT_04bbc708);
                  }
                  uVar14 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bbc700);
                  if ((uVar14 & 1) != 0) {
                    *(ulong *)((long)puVar20 + 0x54) = CONCAT62(local_11e,uStack_120);
                    *(ulong *)((long)puVar20 + 0x5c) = CONCAT62(local_116,uStack_118);
                    *(ulong *)((long)puVar20 + 100) = CONCAT62(local_10e,uStack_110);
                    *(ulong *)((long)puVar20 + 0x34) = CONCAT62(local_13e,uStack_140);
                    *(uint *)((long)puVar20 + 0x6c) = CONCAT22(uStack_106,uStack_108);
                    *(ulong *)((long)puVar20 + 0x3c) = CONCAT62(local_136,uStack_138);
                    *(ulong *)((long)puVar20 + 0x44) = CONCAT62(local_12e,uStack_130);
                    *(ulong *)((long)puVar20 + 0x4c) = CONCAT62(local_126,uStack_128);
                    *(ulong *)((long)puVar20 + 0x14) =
                         CONCAT17(local_159,
                                  CONCAT16(local_15a,
                                           CONCAT24(local_15c,CONCAT22(local_15e,uStack_160))));
                    *(ulong *)((long)puVar20 + 0x1c) =
                         CONCAT53(uStack_155,CONCAT12(uStack_156,CONCAT11(uStack_157,local_158)));
                    *(ulong *)((long)puVar20 + 0x24) = CONCAT62(uStack_14e,uStack_150);
                    *(ulong *)((long)puVar20 + 0xc) =
                         CONCAT44(uStack_164,CONCAT22(uStack_166,CONCAT11(uStack_167,local_168)));
                    *(ulong *)((long)puVar20 + 0x2c) = CONCAT62(local_146,uStack_148);
                    *(undefined4 *)(puVar20 + 0xe) = local_104;
                    *(byte *)((long)puVar20 + 0x74) = local_100;
                  }
                }
                uVar14 = FUN_013930e4(param_1,local_f8,&local_1a8);
                goto joined_r0x022ccae0;
              }
              uVar14 = uVar14 + 1;
              lVar18 = lVar18 + 0x518;
              uVar19 = uVar19 + 0x100000000;
            } while (*puVar17 != uVar14);
          }
        }
      }
    }
  }
  return 0;
}

