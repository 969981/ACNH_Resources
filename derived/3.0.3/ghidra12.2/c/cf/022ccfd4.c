
/* WARNING: Removing unreachable block (ram,0x022cd4a4) */

uint FUN_022ccfd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float *pfVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  int *piVar26;
  undefined4 *puVar27;
  ulong uVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_298;
  undefined8 local_290;
  int local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined *local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined2 local_248;
  undefined1 local_246;
  undefined1 local_245;
  undefined4 local_244;
  undefined *local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined2 local_210;
  undefined1 local_20e;
  undefined1 local_20d;
  undefined4 local_20c;
  undefined *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined2 local_1d8;
  undefined1 local_1d6;
  undefined1 local_1d5;
  undefined4 local_1d4;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_19c;
  undefined4 local_198 [2];
  undefined *local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined1 uStack_15b;
  byte bStack_15a;
  undefined1 uStack_159;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined2 uStack_154;
  undefined2 local_152;
  undefined6 uStack_150;
  undefined2 local_14a;
  byte bStack_148;
  undefined5 uStack_147;
  undefined1 local_142 [4];
  undefined1 auStack_13e [8];
  byte abStack_136 [4];
  undefined8 local_132 [7];
  undefined2 local_fa;
  undefined4 local_f8;
  byte local_f4;
  undefined2 local_f0 [4];
  undefined *local_e8;
  undefined *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined4 local_be;
  undefined1 local_ba;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined2 local_a4;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  byte local_74 [4];
  undefined8 local_70 [2];
  
  local_74[0] = *(byte *)(param_1 + 0x10);
  uVar15 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (7 < local_74[0]) goto LAB_022cd330;
  uVar15 = FUN_02582d8c(local_74,1);
  puVar1 = PTR_DAT_04bb4fb8;
  if (((uVar15 < 8) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar15 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar15 * 0x13f0 + 0x13d6) != '\0')) {
    uVar15 = FUN_02582d8c(local_74,1);
    puVar2 = PTR_DAT_04bb5928;
    puVar4 = PTR_DAT_04bb27c0;
    if ((uVar15 < 8) && (*(char *)(*(long *)puVar1 + (ulong)uVar15 * 0x13f0 + 0x13d4) != '\0')) {
      lVar25 = *(long *)puVar1 + (ulong)uVar15 * 0x13f0;
      lVar22 = *(long *)PTR_DAT_04bb27c0;
      if (lVar22 == 0) {
        bVar13 = false;
        uVar28 = 0;
        plVar24 = (long *)0x0;
      }
      else {
        uVar15 = *(uint *)(lVar25 + 0x4f8);
        if (((uVar15 == 0) ||
            (plVar24 = *(long **)(*(long *)(*(long *)(lVar22 + 0x1c0) + 8) +
                                 ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar24 == (long *)0x0)) ||
           (((*(uint *)(plVar24 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar24 + 0x46) != uVar15)))) {
          plVar24 = (long *)0x0;
        }
        if ((*(int *)(lVar22 + 0x288) == 1) || (*(int *)(lVar22 + 0x288) == -1)) {
          plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar22 = *(long *)puVar4;
          iVar16 = (**(code **)(*plVar19 + 0x60))();
          if (iVar16 < 0x11) {
            uVar28 = 1;
          }
          else {
            if (4 < *(uint *)(lVar22 + 0x5e8)) goto LAB_022cd160;
            uVar28 = 0x101000100 >> (((ulong)*(uint *)(lVar22 + 0x5e8) & 7) << 3);
          }
        }
        else {
LAB_022cd160:
          uVar28 = 0;
        }
        if (plVar24 == (long *)0x0) {
          bVar13 = false;
        }
        else {
          bVar13 = (int)plVar24[0x2a] == 1;
          if (((*puVar2 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar16 != 0))
          {
            *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar20 = (**(code **)(*plVar24 + 0x20))(plVar24,PTR_DAT_04bb5920);
          uVar15 = (uint)uVar28;
          if ((uVar20 & 1) == 0) {
            uVar15 = 0;
          }
          uVar28 = (ulong)uVar15;
        }
      }
      if (((*puVar2 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar16 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      if ((plVar24 != (long *)0x0) &&
         (uVar20 = (**(code **)(*plVar24 + 0x20))(plVar24,PTR_DAT_04bb5920), (uVar20 & 1) != 0)) {
        uVar15 = 0;
        if ((!bVar13) || ((uVar28 & 0xff) == 0)) goto LAB_022cd330;
        uVar17 = FUN_022cdafc(local_74);
        *(undefined4 *)(param_1 + 0x14) = uVar17;
        piVar26 = (int *)(lVar25 + 0x51c);
        uVar28 = (ulong)((float)(*piVar26 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
        pfVar5 = (float *)(PTR_DAT_04bb2d00 + (uVar28 >> 0x19 & 0x7f) * 0x10);
        fVar30 = (float)((uint)uVar28 >> 1 & 0xffffff) * 5.9604645e-08;
        fVar31 = *pfVar5 + fVar30 * pfVar5[1];
        local_15c = 1;
        uStack_15b = 0;
        bStack_15a = 0;
        uStack_159 = 0;
        fVar30 = pfVar5[2] + fVar30 * pfVar5[3];
        fVar33 = fVar31 * 0.0;
        fVar30 = fVar30 + fVar30;
        fVar35 = fVar31 * (fVar31 + fVar31);
        fVar32 = (fVar31 + fVar31) * fVar33;
        fVar36 = fVar33 * (fVar33 + fVar33);
        fVar34 = fVar30 * fVar33;
        fVar30 = fVar31 * fVar30;
        fVar31 = fVar31 * (fVar33 + fVar33);
        local_298._0_4_ =
             (fVar31 - fVar34) * 0.0 + ((1.0 - fVar35) - fVar36) * 0.0 + (fVar30 + fVar36) * 5.0;
        local_298._4_4_ =
             ((1.0 - fVar36) - fVar36) * 0.0 + (fVar34 + fVar31) * 0.0 + (fVar32 - fVar34) * 5.0;
        local_290 = CONCAT44(local_290._4_4_,
                             (fVar34 + fVar32) * 0.0 + (fVar36 - fVar30) * 0.0 +
                             ((1.0 - fVar36) - fVar35) * 5.0);
        uVar28 = FUN_01475430(plVar24,&local_298,PTR_DAT_04bb2ce8,&local_15c,local_74,0,1);
        uVar15 = 0;
        if ((uVar28 & 1) == 0) goto LAB_022cd330;
        if (*(int *)(param_1 + 0x14) == 0) {
          local_80 = 0;
          puVar1 = PTR_DAT_04bbc1a0 + 0x10;
          puVar2 = PTR_DAT_04bb2010 + 0x10;
          local_90 = 0;
          local_a0 = puVar1;
          puStack_98 = puVar2;
          puStack_88 = puVar2;
          FUN_01477118(plVar24,&local_a0,piVar26);
          local_b8 = 0xffffffffffffffff;
          local_bf = 0xff;
          local_be = 0;
          local_ba = 0;
          local_b0 = 0;
          local_a4 = 0xff00;
          local_f0[0] = *(undefined2 *)PTR_DAT_04bb6298;
          local_fa = 0;
          local_132[6] = 0;
          local_132[5] = 0;
          local_132[4] = 0;
          local_132[3] = 0;
          local_132[2] = 0;
          local_132[1] = 0;
          local_132[0] = 0;
          stack0xfffffffffffffec6 = 0;
          _local_142 = 0;
          local_14a = 0;
          bStack_148 = 0;
          uStack_147 = 0;
          local_152 = 0;
          uStack_150 = 0;
          uStack_159 = 0;
          uStack_158 = 0;
          uStack_156 = 0;
          uStack_154 = 0;
          local_d8 = (undefined4)local_90;
          uStack_d4 = local_90._4_4_;
          local_c8 = (undefined4)local_80;
          uStack_c4 = local_80._4_4_;
          local_c0 = 1;
          local_ac = 0x10041200000;
          local_15c = 2;
          local_f4 = *(byte *)(param_1 + 0x10);
          local_f8 = 0;
          local_160 = 0;
          local_168 = 0;
          bStack_15a = (byte)(*piVar26 + 0x20000000U >> 0x1e);
          if (7 < local_f4) {
            local_f4 = 0xff;
          }
          local_298 = (undefined4 *)
                      CONCAT44(local_298._4_4_,
                               (int)(long)((float)(*piVar26 + 0x20000000U >> 0x1e) * 90.0 *
                                          11930465.0));
          local_e8 = puVar1;
          puStack_e0 = puVar2;
          local_d0 = puVar2;
          FUN_014724c0(0x40a00000,&local_168,&local_298);
          FUN_01473a3c(&local_298,plVar24,&local_168,PTR_DAT_04bb2ce8,1);
          uStack_158 = (undefined2)plVar24[0x59];
          uStack_156 = (undefined2)*(undefined4 *)((long)plVar24 + 0x2cc);
          FUN_01476a50(local_70,plVar24);
          local_198[0] = FUN_0154f5d4(&local_298);
          FUN_01afbaa4(&local_190,local_70,local_198);
          uStack_150 = SUB86(local_190,0);
          local_14a = (undefined2)((ulong)local_190 >> 0x30);
          bStack_148 = FUN_01434630(plVar24[0x151]);
          bStack_148 = bStack_148 & 1;
          local_f8 = 0;
          local_f4 = *(byte *)(param_1 + 0x10);
          if (7 < local_f4) {
            local_f4 = 0xff;
          }
          FUN_022cdd34(&local_298,plVar24);
          puVar23 = (undefined8 *)CONCAT44(uStack_284,local_288);
          uVar28 = 0;
          if (puVar23 != &local_290) {
            puVar1 = PTR_DAT_04bb3290 + 0x10;
            puVar3 = PTR_DAT_04bbd460 + 0x10;
            do {
              local_16c = *(uint *)(puVar23 + -1);
              uVar20 = FUN_015039ac(&local_16c);
              if (((uVar20 & 1) != 0) && (lVar22 = *(long *)puVar4, lVar22 != 0)) {
                if ((local_16c == 0) ||
                   (((plVar19 = *(long **)(*(long *)(*(long *)(lVar22 + 0x1c0) + 8) +
                                          ((ulong)(local_16c >> 0x11) & 0x7ff8)),
                     plVar19 == (long *)0x0 || ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) ||
                    (*(uint *)(plVar19 + 0x46) != local_16c)))) {
                  plVar19 = (long *)0x0;
                }
                if (*(int *)(lVar22 + 0x288) == 1 || *(int *)(lVar22 + 0x288) == -1) {
                  plVar21 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                         (*(long *)PTR_DAT_04bb3350 + 0x68));
                  lVar22 = *(long *)puVar4;
                  iVar16 = (**(code **)(*plVar21 + 0x60))();
                  if (iVar16 < 0x11) {
                    uVar15 = 1;
                  }
                  else {
                    if (4 < *(uint *)(lVar22 + 0x5e8)) goto LAB_022cd788;
                    uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar22 + 0x5e8) & 0x1f) & 1;
                  }
                }
                else {
LAB_022cd788:
                  uVar15 = 0;
                }
                if (plVar19 != (long *)0x0) {
                  lVar22 = plVar19[0x2a];
                  uVar10 = *(uint *)(plVar19 + 0x49);
                  if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                     (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar16 != 0)) {
                    *(undefined **)PTR_DAT_04bb5920 = puVar1;
                    __cxa_guard_release(PTR_DAT_04bb5928);
                  }
                  uVar18 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb5920);
                  if ((((int)lVar22 == 1) && ((uVar18 & uVar15) != 0)) && ((uVar10 >> 4 & 1) != 0))
                  {
                    uVar15 = (uint)uVar28;
                    bVar13 = uVar15 != 4;
                    if (4 < uVar15) break;
                    uVar17 = *(undefined4 *)((long)plVar19 + 0x2cc);
                    local_70[0] = 0xfffe;
                    lVar22 = uVar28 * 0x12;
                    pbVar9 = abStack_136 + 2;
                    if (bVar13) {
                      pbVar9 = abStack_136 + lVar22 + 2;
                    }
                    *(short *)pbVar9 = (short)plVar19[0x59];
                    puVar7 = local_132;
                    if (bVar13) {
                      puVar7 = (undefined8 *)((long)local_132 + lVar22);
                    }
                    *(short *)puVar7 = (short)uVar17;
                    puVar8 = (undefined2 *)local_142;
                    if (bVar13) {
                      puVar8 = (undefined2 *)((long)local_142 + uVar28 * 9 * 2);
                    }
                    pbVar9 = abStack_136;
                    puVar7 = (undefined8 *)auStack_13e;
                    puVar12 = (undefined2 *)(local_142 + 2);
                    if (bVar13) {
                      pbVar9 = abStack_136 + lVar22;
                      puVar7 = (undefined8 *)(auStack_13e + lVar22);
                      puVar12 = (undefined2 *)(local_142 + lVar22 + 2);
                    }
                    FUN_0277d4ac(local_70);
                    local_188 = 0xfffe;
                    local_190 = puVar3;
                    FUN_0277d4ac(&local_188);
                    local_188 = local_70[0];
                    local_178 = 0;
                    local_180 = puVar2;
                    (**(code **)(*(long *)plVar19[0x152] + 0x110))
                              ((long *)plVar19[0x152],&local_190,&local_168,PTR_DAT_04bb2ce8,1);
                    FUN_01476a50(local_198,plVar19);
                    local_19c = FUN_0154f5d4(&local_190);
                    FUN_01afbaa4(local_70,local_198,&local_19c);
                    *puVar8 = (short)local_178;
                    lVar22 = plVar19[0x151];
                    *puVar12 = (short)((ulong)local_178 >> 0x20);
                    *puVar7 = local_70[0];
                    bVar14 = FUN_01434630(lVar22);
                    uVar28 = (ulong)(uVar15 + 1);
                    *pbVar9 = bVar14 & 1;
                  }
                }
              }
              puVar23 = (undefined8 *)puVar23[1];
            } while (puVar23 + -1 != &local_298);
          }
          puVar1 = PTR_DAT_04bb2010;
          uVar15 = (uint)uVar28;
          puVar23 = &local_290;
          do {
            puVar23 = (undefined8 *)puVar23[1];
          } while (puVar23 != &local_290);
          local_268 = 0;
          uStack_260 = 0;
          local_298 = &local_280;
          local_278 = PTR_DAT_04bb2010 + 0x10;
          local_248 = *(undefined2 *)PTR_DAT_04bb37e0;
          local_246 = PTR_DAT_04bb37e0[2];
          local_245 = PTR_DAT_04bb37e0[3];
          local_280 = *(undefined4 *)PTR_DAT_04bb37e0;
          local_27c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          local_258 = 0;
          uStack_250 = 0;
          local_220 = 0;
          uStack_218 = 0;
          local_270 = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
          uStack_26c = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
          local_288 = 0;
          local_230 = 0;
          uStack_228 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_1c0 = 0;
          uStack_1b8 = 0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_290 = 4;
          local_244 = local_27c;
          local_240 = local_278;
          local_238 = local_270;
          uStack_234 = uStack_26c;
          local_210 = local_248;
          local_20e = local_246;
          local_20d = local_245;
          local_20c = local_27c;
          local_208 = local_278;
          local_200 = local_270;
          local_1fc = uStack_26c;
          local_1d8 = local_248;
          local_1d6 = local_246;
          local_1d5 = local_245;
          local_1d4 = local_27c;
          local_1d0 = local_278;
          local_1c8 = local_270;
          local_1c4 = uStack_26c;
          FUN_014746c0(plVar24,&local_298);
          if ((local_288 != 0) && (uVar15 < 5)) {
            iVar16 = 0;
            iVar11 = local_288 + -1;
            puVar4 = PTR_DAT_04bbd460 + 0x10;
            do {
              iVar6 = 0;
              if ((int)local_290 <= iVar16 + local_290._4_4_) {
                iVar6 = (int)local_290;
              }
              iVar29 = (int)uVar28;
              puVar27 = local_298 + (long)(iVar16 + (local_290._4_4_ - iVar6)) * 0xe;
              uVar17 = puVar27[5];
              local_70[0] = 0xfffe;
              pbVar9 = abStack_136 + 2;
              if (iVar29 != 4) {
                pbVar9 = abStack_136 + uVar28 * 0x12 + 2;
              }
              *(short *)pbVar9 = (short)puVar27[4];
              puVar23 = local_132;
              if (iVar29 != 4) {
                puVar23 = (undefined8 *)((long)local_132 + uVar28 * 0x12);
              }
              *(short *)puVar23 = (short)uVar17;
              FUN_0277d4ac(local_70);
              local_188 = 0xfffe;
              local_190 = puVar4;
              FUN_0277d4ac(&local_188);
              local_178 = 0;
              local_188 = local_70[0];
              local_180 = puVar1 + 0x10;
              uVar20 = FUN_01473ae8(plVar24,&local_190,puVar27,&local_168,PTR_DAT_04bb2ce8,1);
              if ((uVar20 & 1) != 0) {
                bVar13 = iVar29 != 4;
                lVar22 = uVar28 * 0x12;
                lVar25 = uVar28 * 9;
                uVar28 = (ulong)(iVar29 + 1);
                puVar8 = (undefined2 *)local_142;
                if (bVar13) {
                  puVar8 = (undefined2 *)((long)local_142 + lVar25 * 2);
                }
                *puVar8 = (short)local_178;
                puVar8 = (undefined2 *)(local_142 + 2);
                if (bVar13) {
                  puVar8 = (undefined2 *)(local_142 + lVar22 + 2);
                }
                *puVar8 = (short)((ulong)local_178 >> 0x20);
                puVar23 = (undefined8 *)auStack_13e;
                if (bVar13) {
                  puVar23 = (undefined8 *)(auStack_13e + lVar22);
                }
                *puVar23 = local_188;
                pbVar9 = abStack_136;
                if (bVar13) {
                  pbVar9 = abStack_136 + lVar22;
                }
                *pbVar9 = 0;
              }
              uVar15 = (uint)uVar28;
            } while ((iVar11 != iVar16) && (iVar16 = iVar16 + 1, uVar15 < 5));
          }
          local_fa = CONCAT11(local_fa._1_1_,(char)uVar15);
          uVar15 = FUN_022ccb20(param_1,local_f0,&local_15c);
          goto LAB_022cd330;
        }
      }
    }
  }
  uVar15 = 0;
LAB_022cd330:
  return uVar15 & 1;
}

