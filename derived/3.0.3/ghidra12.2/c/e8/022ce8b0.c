
uint FUN_022ce8b0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  uint uVar28;
  undefined4 *puVar29;
  int iVar30;
  undefined4 *local_290;
  undefined8 local_288;
  int local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined *local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined2 local_240;
  undefined1 local_23e;
  undefined1 local_23d;
  undefined4 local_23c;
  undefined *local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined2 local_208;
  undefined1 local_206;
  undefined1 local_205;
  undefined4 local_204;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined2 local_1d0;
  undefined1 local_1ce;
  undefined1 local_1cd;
  undefined4 local_1cc;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_194;
  undefined4 local_190 [2];
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined8 local_170;
  uint local_168;
  undefined1 local_164 [2];
  undefined1 local_162;
  undefined1 local_161;
  undefined2 local_160;
  undefined2 local_15e;
  undefined *local_158;
  undefined8 local_150;
  undefined1 local_148 [2];
  undefined1 auStack_146 [8];
  byte abStack_13e [2];
  undefined2 auStack_13c [2];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  byte local_fc;
  undefined2 local_f8 [4];
  undefined *local_f0;
  undefined *puStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c6;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  byte local_78 [4];
  int local_74;
  undefined8 local_70 [2];
  
  local_78[0] = *(byte *)(param_1 + 0x10);
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (7 < local_78[0]) goto LAB_022ceb1c;
  local_74 = param_2;
  uVar16 = FUN_02582d8c(local_78,1);
  puVar12 = PTR_DAT_04bb4fb8;
  if ((((uVar16 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar16 * 0x13f0 + 0x13d4) != '\0')) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar16 * 0x13f0 + 0x13d6) != '\0')) &&
     ((uVar16 = FUN_02582d8c(local_78,1), uVar16 < 8 &&
      (*(char *)(*(long *)puVar12 + (ulong)uVar16 * 0x13f0 + 0x13d4) != '\0')))) {
    local_7c = *(uint *)(*(long *)puVar12 + (ulong)uVar16 * 0x13f0 + 0x4f8);
    uVar21 = FUN_015039ac(&local_7c);
    puVar12 = PTR_DAT_04bb27c0;
    if (((uVar21 & 1) != 0) && (lVar25 = *(long *)PTR_DAT_04bb27c0, lVar25 != 0)) {
      if ((((local_7c == 0) ||
           (plVar27 = *(long **)(*(long *)(*(long *)(lVar25 + 0x1c0) + 8) +
                                ((ulong)(local_7c >> 0x11) & 0x7ff8)), plVar27 == (long *)0x0)) ||
          ((*(uint *)(plVar27 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar27 + 0x46) != local_7c)) {
        plVar27 = (long *)0x0;
      }
      if ((*(int *)(lVar25 + 0x288) == 1) || (*(int *)(lVar25 + 0x288) == -1)) {
        plVar22 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar25 = *(long *)puVar12;
        iVar17 = (**(code **)(*plVar22 + 0x60))();
        if (iVar17 < 0x11) {
          uVar28 = 1;
        }
        else {
          if (4 < *(uint *)(lVar25 + 0x5e8)) goto LAB_022cea34;
          uVar28 = 0x1aU >> (ulong)(*(uint *)(lVar25 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_022cea34:
        uVar28 = 0;
      }
      if (plVar27 != (long *)0x0) {
        lVar25 = plVar27[0x2a];
        uVar20 = *(uint *)(plVar27 + 0x49);
        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar17 != 0)) {
          *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5928);
        }
        uVar18 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb5920);
        iVar17 = local_74;
        uVar16 = 0;
        if ((((int)lVar25 != 1) || ((uVar18 & uVar28) == 0)) || ((uVar20 >> 4 & 1) == 0))
        goto LAB_022ceb1c;
        local_80 = DAT_0547bc0c;
        if (local_74 == 1) {
          local_80 = DAT_0547bc10;
        }
        uVar19 = FUN_022cdafc(local_78);
        *(undefined4 *)(param_1 + 0x14) = uVar19;
        lVar25 = FUN_0251b3b0(local_78,0);
        uVar16 = 0;
        if (lVar25 == 0) goto LAB_022ceb1c;
        uVar19 = FUN_01473db4(plVar27,lVar25,&local_74);
        local_290._0_4_ = uVar19;
        uVar21 = FUN_01475430(plVar27,PTR_DAT_04bb2150,&local_80,&local_290,local_78,1,1);
        if (((uVar21 & 1) != 0) && (*(int *)(param_1 + 0x14) == 0)) {
          local_98 = 0;
          puVar1 = PTR_DAT_04bbc1a0 + 0x10;
          puVar2 = PTR_DAT_04bb2010 + 0x10;
          local_88 = 0;
          local_a8 = puVar1;
          puStack_a0 = puVar2;
          local_90 = puVar2;
          FUN_01477544(plVar27,&local_a8,&local_80,uVar19);
          local_c0 = 0xffffffffffffffff;
          local_c7 = 0xff;
          local_c6 = 0;
          local_c2 = 0;
          local_b8 = 0;
          local_ac = 0xff00;
          local_f8[0] = *(undefined2 *)PTR_DAT_04bb6298;
          local_108 = 0;
          local_110 = 0;
          local_118 = 0;
          local_120 = 0;
          local_128 = 0;
          local_130 = 0;
          local_138 = 0;
          stack0xfffffffffffffec0 = 0;
          _local_148 = 0;
          local_150 = 0;
          local_e0 = (undefined4)local_98;
          uStack_dc = local_98._4_4_;
          local_d0 = (undefined4)local_88;
          uStack_cc = local_88._4_4_;
          local_c8 = 1;
          local_b4 = 0x10041200000;
          local_164[0] = 4;
          local_290 = (undefined4 *)CONCAT44(local_290._4_4_,uVar19);
          local_162 = (undefined1)iVar17;
          local_161 = (undefined1)uVar19;
          local_f0 = puVar1;
          puStack_e8 = puVar2;
          local_d8 = puVar2;
          FUN_01473a3c(&local_290,plVar27,PTR_DAT_04bb2150,&local_80,uVar19);
          local_160 = (undefined2)plVar27[0x59];
          local_15e = (undefined2)*(undefined4 *)((long)plVar27 + 0x2cc);
          FUN_01476a50(local_70,plVar27);
          local_190[0] = FUN_0154f5d4(&local_290);
          FUN_01afbaa4(&local_188,local_70,local_190);
          local_158 = local_188;
          uVar14 = FUN_01434630(plVar27[0x151]);
          local_100 = 0;
          local_150 = CONCAT71(local_150._1_7_,uVar14) & 0xffffffffffffff01;
          local_fc = *(byte *)(param_1 + 0x10);
          if (7 < local_fc) {
            local_fc = 0xff;
          }
          FUN_022cdd34(&local_290,plVar27);
          puVar26 = (undefined8 *)CONCAT44(uStack_27c,local_280);
          uVar21 = 0;
          if (puVar26 != &local_288) {
            puVar1 = PTR_DAT_04bb3290 + 0x10;
            puVar3 = PTR_DAT_04bbd460 + 0x10;
            do {
              local_168 = *(uint *)(puVar26 + -1);
              uVar23 = FUN_015039ac(&local_168);
              if (((uVar23 & 1) != 0) && (lVar25 = *(long *)puVar12, lVar25 != 0)) {
                if ((local_168 == 0) ||
                   (((plVar22 = *(long **)(*(long *)(*(long *)(lVar25 + 0x1c0) + 8) +
                                          ((ulong)(local_168 >> 0x11) & 0x7ff8)),
                     plVar22 == (long *)0x0 || ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) ||
                    (*(uint *)(plVar22 + 0x46) != local_168)))) {
                  plVar22 = (long *)0x0;
                }
                if (*(int *)(lVar25 + 0x288) == 1 || *(int *)(lVar25 + 0x288) == -1) {
                  plVar24 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                         (*(long *)PTR_DAT_04bb3350 + 0x68));
                  lVar25 = *(long *)puVar12;
                  iVar17 = (**(code **)(*plVar24 + 0x60))();
                  if (iVar17 < 0x11) {
                    uVar16 = 1;
                  }
                  else {
                    if (4 < *(uint *)(lVar25 + 0x5e8)) goto LAB_022cef10;
                    uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar25 + 0x5e8) & 0x1f) & 1;
                  }
                }
                else {
LAB_022cef10:
                  uVar16 = 0;
                }
                if (plVar22 != (long *)0x0) {
                  lVar25 = plVar22[0x2a];
                  uVar28 = *(uint *)(plVar22 + 0x49);
                  if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                     (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar17 != 0)) {
                    *(undefined **)PTR_DAT_04bb5920 = puVar1;
                    __cxa_guard_release(PTR_DAT_04bb5928);
                  }
                  uVar20 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb5920);
                  if ((((int)lVar25 == 1) && ((uVar20 & uVar16) != 0)) && ((uVar28 >> 4 & 1) != 0))
                  {
                    uVar16 = (uint)uVar21;
                    bVar13 = uVar16 != 4;
                    if (4 < uVar16) break;
                    uVar7 = *(undefined4 *)((long)plVar22 + 0x2cc);
                    local_70[0] = 0xfffe;
                    lVar25 = uVar21 * 0x12;
                    puVar5 = auStack_13c;
                    if (bVar13) {
                      puVar5 = auStack_13c + uVar21 * 9;
                    }
                    *puVar5 = (short)plVar22[0x59];
                    puVar5 = auStack_13c + 1;
                    if (bVar13) {
                      puVar5 = auStack_13c + uVar21 * 9 + 1;
                    }
                    *puVar5 = (short)uVar7;
                    puVar5 = (undefined2 *)((long)&local_150 + 6);
                    if (bVar13) {
                      puVar5 = (undefined2 *)((long)&local_150 + 6) + uVar21 * 9;
                    }
                    pbVar6 = abStack_13e;
                    puVar9 = (undefined8 *)auStack_146;
                    puVar10 = (undefined2 *)local_148;
                    if (bVar13) {
                      pbVar6 = abStack_13e + lVar25;
                      puVar9 = (undefined8 *)(auStack_146 + lVar25);
                      puVar10 = (undefined2 *)(local_148 + lVar25);
                    }
                    FUN_0277d4ac(local_70);
                    local_180 = 0xfffe;
                    local_188 = puVar3;
                    FUN_0277d4ac(&local_180);
                    local_180 = local_70[0];
                    local_170 = 0;
                    local_178 = puVar2;
                    (**(code **)(*(long *)plVar22[0x152] + 0x110))
                              ((long *)plVar22[0x152],&local_188,PTR_DAT_04bb2150,&local_80,uVar19);
                    FUN_01476a50(local_190,plVar22);
                    local_194 = FUN_0154f5d4(&local_188);
                    FUN_01afbaa4(local_70,local_190,&local_194);
                    *puVar5 = (short)local_170;
                    lVar25 = plVar22[0x151];
                    *puVar10 = (short)((ulong)local_170 >> 0x20);
                    *puVar9 = local_70[0];
                    bVar15 = FUN_01434630(lVar25);
                    uVar21 = (ulong)(uVar16 + 1);
                    *pbVar6 = bVar15 & 1;
                  }
                }
              }
              puVar26 = (undefined8 *)puVar26[1];
            } while ((undefined4 **)(puVar26 + -1) != &local_290);
          }
          puVar12 = PTR_DAT_04bb2010;
          uVar16 = (uint)uVar21;
          puVar26 = &local_288;
          do {
            puVar26 = (undefined8 *)puVar26[1];
          } while (puVar26 != &local_288);
          local_260 = 0;
          uStack_258 = 0;
          local_290 = &local_278;
          local_270 = PTR_DAT_04bb2010 + 0x10;
          local_240 = *(undefined2 *)PTR_DAT_04bb37e0;
          local_23e = PTR_DAT_04bb37e0[2];
          local_23d = PTR_DAT_04bb37e0[3];
          local_278 = *(undefined4 *)PTR_DAT_04bb37e0;
          local_274 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          local_250 = 0;
          uStack_248 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_268 = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
          uStack_264 = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
          local_280 = 0;
          local_228 = 0;
          uStack_220 = 0;
          local_1e0 = 0;
          uStack_1d8 = 0;
          local_1f0 = 0;
          uStack_1e8 = 0;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_288 = 4;
          local_23c = local_274;
          local_238 = local_270;
          local_230 = local_268;
          uStack_22c = uStack_264;
          local_208 = local_240;
          local_206 = local_23e;
          local_205 = local_23d;
          local_204 = local_274;
          local_200 = local_270;
          local_1f8 = local_268;
          local_1f4 = uStack_264;
          local_1d0 = local_240;
          local_1ce = local_23e;
          local_1cd = local_23d;
          local_1cc = local_274;
          local_1c8 = local_270;
          local_1c0 = local_268;
          local_1bc = uStack_264;
          FUN_014746c0(plVar27,&local_290);
          if ((local_280 != 0) && (uVar16 < 5)) {
            iVar17 = 0;
            iVar8 = local_280 + -1;
            puVar1 = PTR_DAT_04bbd460 + 0x10;
            do {
              iVar4 = 0;
              if ((int)local_288 <= iVar17 + local_288._4_4_) {
                iVar4 = (int)local_288;
              }
              iVar30 = (int)uVar21;
              puVar29 = local_290 + (long)(iVar17 + (local_288._4_4_ - iVar4)) * 0xe;
              uVar7 = puVar29[5];
              local_70[0] = 0xfffe;
              puVar5 = auStack_13c;
              if (iVar30 != 4) {
                puVar5 = auStack_13c + uVar21 * 9;
              }
              *puVar5 = (short)puVar29[4];
              puVar5 = auStack_13c + 1;
              if (iVar30 != 4) {
                puVar5 = auStack_13c + uVar21 * 9 + 1;
              }
              *puVar5 = (short)uVar7;
              FUN_0277d4ac(local_70);
              local_180 = 0xfffe;
              local_188 = puVar1;
              FUN_0277d4ac(&local_180);
              local_170 = 0;
              local_180 = local_70[0];
              local_178 = puVar12 + 0x10;
              uVar23 = FUN_01473ae8(plVar27,&local_188,puVar29,PTR_DAT_04bb2150,&local_80,uVar19);
              if ((uVar23 & 1) != 0) {
                bVar13 = iVar30 != 4;
                lVar25 = uVar21 * 0x12;
                lVar11 = uVar21 * 9;
                uVar21 = (ulong)(iVar30 + 1);
                puVar5 = (undefined2 *)((long)&local_150 + 6);
                if (bVar13) {
                  puVar5 = (undefined2 *)((long)&local_150 + 6) + lVar11;
                }
                *puVar5 = (short)local_170;
                puVar5 = (undefined2 *)local_148;
                if (bVar13) {
                  puVar5 = (undefined2 *)(local_148 + lVar25);
                }
                *puVar5 = (short)((ulong)local_170 >> 0x20);
                puVar26 = (undefined8 *)auStack_146;
                if (bVar13) {
                  puVar26 = (undefined8 *)(auStack_146 + lVar25);
                }
                *puVar26 = local_180;
                pbVar6 = abStack_13e;
                if (bVar13) {
                  pbVar6 = abStack_13e + lVar25;
                }
                *pbVar6 = 0;
              }
              uVar16 = (uint)uVar21;
            } while ((iVar8 != iVar17) && (iVar17 = iVar17 + 1, uVar16 < 5));
          }
          local_108._0_7_ = CONCAT16((char)uVar16,(undefined6)local_108);
          uVar16 = FUN_022ccb20(param_1,local_f8,local_164);
          goto LAB_022ceb1c;
        }
      }
    }
  }
  uVar16 = 0;
LAB_022ceb1c:
  return uVar16 & 1;
}

