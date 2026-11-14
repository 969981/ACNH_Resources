
undefined8 FUN_01d19de0(undefined8 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  long lVar10;
  ushort uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ushort *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  byte bVar20;
  char cVar21;
  uint uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  int *piVar30;
  long lVar31;
  byte *pbVar32;
  undefined8 uVar33;
  ulong uVar34;
  long *plVar35;
  undefined *local_1e0;
  undefined8 *local_1d8;
  uint local_1d0;
  undefined *local_1c8;
  long local_1c0;
  uint local_1b8;
  undefined8 local_1a8;
  char *pcStack_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [63];
  undefined1 local_125;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined8 local_c8;
  undefined6 uStack_c0;
  undefined2 local_ba;
  undefined6 uStack_b8;
  undefined1 auStack_b2 [2];
  undefined4 local_b0;
  int local_a8 [2];
  long local_a0;
  undefined *local_98;
  uint *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  memset(param_1,0,0x1182f0);
  lVar23 = *(long *)PTR_DAT_04bb46b0;
  if (lVar23 == 0) {
LAB_01d19ea0:
    uVar33 = 0;
  }
  else {
    puVar24 = *(undefined8 **)(lVar23 + 0x10);
    if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
      lVar23 = (**(code **)(*(long *)*puVar24 + 0x38))();
      if (lVar23 == 0) goto LAB_01d19ea0;
      lVar23 = lVar23 + 0x70;
    }
    else if (((puVar24 == (undefined8 *)0x0) || ((long *)puVar24[0x26] == (long *)0x0)) ||
            (lVar23 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar23 == 0))
    goto LAB_01d19ea0;
    puVar1 = (uint *)(param_1 + 0x2305c);
    if ((*(long **)(lVar23 + 0x28) == (long *)0x0) ||
       (puVar24 = (undefined8 *)**(long **)(lVar23 + 0x28), puVar24 == (undefined8 *)0x0)) {
      uVar16 = 0;
    }
    else {
      uVar16 = (**(code **)*puVar24)();
      uVar16 = uVar16 & 0xffffffff;
    }
    *param_1 = 0x220a002803;
    local_1a8 = (undefined *)nn::oe::GetDesiredLanguage();
    lVar25 = 0;
    do {
      if (local_164[lVar25 + -0x44] == '\0') goto LAB_01d19f40;
      if (local_164[lVar25 + -0x43] == '\0') {
        lVar25 = lVar25 + 1;
        goto LAB_01d19f40;
      }
      if (local_164[lVar25 + -0x42] == '\0') {
        lVar25 = lVar25 + 2;
        goto LAB_01d19f40;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_01d19f40:
    uVar15 = (uint)lVar25;
    param_1[1] = 0;
    if (6 < (int)uVar15) {
      uVar15 = 7;
    }
    memcpy(param_1 + 1,&local_1a8,(ulong)uVar15);
    puStack_170 = local_164;
    pcStack_1a0 = (char *)&local_c8;
    lVar25 = *(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar25 + 0x1e3828);
    local_1a8 = PTR_DAT_04bb5128;
    bVar20 = 2;
    if (*(byte *)(lVar25 + 0x1e3840) < 4) {
      bVar20 = *(byte *)(lVar25 + 0x1e3840);
    }
    local_198 = 0xb;
    local_194 = 0;
    local_190 = 0xffffffff;
    uStack_188 = 0xffffffff00000000;
    local_168 = 0x40;
    local_110 = 0x40;
    puStack_118 = local_10c;
    local_178 = PTR_DAT_04bb2bc0 + 0x10;
    *(byte *)((long)param_1 + 0x14) = bVar20;
    local_180 = 0xffffffff;
    local_125 = 0;
    local_164[0] = 0;
    local_cd = 0;
    local_10c[0] = 0;
    puVar9 = auStack_b2;
    if (auStack_b2 <= (undefined1 *)((long)&local_c8 + 2U)) {
      puVar9 = (undefined1 *)((long)&local_c8 + 2U);
    }
    local_1a8 = local_1a8 + 0x10;
    uStack_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_ba = 0;
    local_120 = local_178;
    memset(pcStack_1a0,0,(ulong)(puVar9 + (-0xe1 - (long)&local_1a8)) & 0xfffffffffffffffc | 2);
    local_b0 = 2;
    FUN_01c138cc(&local_1a8);
    puVar2 = PTR_DAT_04bb2030;
    local_1b8 = 0x1f;
    *(undefined1 *)((long)param_1 + 0x33) = 0;
    local_1e0 = (undefined *)CONCAT44(local_1e0._4_4_,10);
    local_1c8 = puVar2 + 0x10;
    local_1d8 = (undefined8 *)(lVar25 + 0x1e382c);
    local_1c0 = (long)param_1 + 0x15;
    (**(code **)(local_1a8 + 0x38))(&local_1a8);
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
    local_70 = 1;
    local_6c = 0;
    local_98 = PTR_DAT_04bc0cd8 + 0x10;
    local_90 = (uint *)0x0;
    FUN_02906b00(&local_98,&local_1a8,&local_1e0);
    puVar17 = (ushort *)(**(code **)(local_1a8 + 0x18))(&local_1a8);
    (**(code **)(local_1c8 + 0x18))(&local_1c8);
    if (local_1b8 == 0) {
      iVar14 = 3;
    }
    else {
      uVar15 = 0;
      lVar25 = 0x7fffffff;
      do {
        pbVar32 = (byte *)(local_1c0 + (ulong)uVar15);
        if (lVar25 == 0) {
LAB_01d1a1a4:
          iVar14 = 0;
          goto LAB_01d1a1a8;
        }
        uVar11 = *puVar17;
        if (uVar11 == 0) goto LAB_01d1a1a4;
        bVar20 = (byte)uVar11;
        if (uVar11 < 0x80) {
          *pbVar32 = bVar20;
          iVar14 = 1;
        }
        else if (uVar11 < 0x800) {
          if (local_1b8 <= uVar15 + 1) break;
          *pbVar32 = (byte)(uVar11 >> 6) | 0xc0;
          pbVar32[1] = bVar20 & 0x3f | 0x80;
          iVar14 = 2;
        }
        else {
          if (local_1b8 <= uVar15 + 2) break;
          *pbVar32 = (byte)(uVar11 >> 0xc) | 0xe0;
          pbVar32[1] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
          pbVar32[2] = bVar20 & 0x3f | 0x80;
          iVar14 = 3;
        }
        uVar15 = iVar14 + uVar15;
        lVar25 = lVar25 + -1;
        puVar17 = puVar17 + 1;
      } while (uVar15 < local_1b8);
      pbVar32 = (byte *)(local_1c0 + (ulong)(uVar15 - 1));
      iVar14 = 2;
LAB_01d1a1a8:
      *pbVar32 = 0;
    }
    local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar14);
    if (iVar14 == 0) {
      local_1a8 = (undefined *)
                  (ulong)*(ushort *)(*(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8) + 0x495060);
      FUN_0277d4ac(&local_1a8);
      uVar13 = FUN_0277d6c4(&local_1a8);
      *(undefined4 *)((long)param_1 + 0x34) = uVar13;
      FUN_0265eba0(&local_1a8);
      puVar4 = PTR_DAT_04bc27f0;
      puVar3 = PTR_DAT_04bb2020;
      uVar34 = 0;
      lVar25 = *(long *)(lVar23 + 8);
      lVar10 = *(long *)(lVar23 + 0x10);
      *(undefined4 *)(param_1 + 0x1b) = 0;
      pbVar32 = (byte *)(lVar10 + lVar25 + 0x10);
      do {
        uVar15 = *(uint *)(local_164 +
                          ((-(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2) - 0x44));
        if (uVar15 != 0xffffffff) {
          pbVar8 = pbVar32 + (ulong)uVar15 * 0x13230;
          if (9 < uVar15) {
            pbVar8 = pbVar32;
          }
          uVar26 = (ulong)*pbVar8;
          if (((uVar26 < 0x23) && (pbVar8[1] <= (byte)puVar4[uVar26])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar26 * 4) >> (ulong)(pbVar8[1] & 0x1f) & 1) != 0)) {
            local_90 = (uint *)0x40c483e;
            local_98 = puVar3 + 0x10;
            iVar14 = FUN_02749340(pbVar8 + 0x1267c,&local_98);
            if (iVar14 != 0) {
              puVar28 = (uint *)((long)(param_1 + 7) + (ulong)*(uint *)(param_1 + 0x1b) * 4 * 4);
              if (9 < *(uint *)(param_1 + 0x1b)) {
                puVar28 = (uint *)(param_1 + 7);
              }
              *(undefined1 *)((long)puVar28 + 0xd) = 0;
              local_88 = CONCAT44(local_88._4_4_,10);
              local_98 = puVar2 + 0x10;
              local_90 = puVar28 + 1;
              FUN_038d1270(&local_98,"-----");
              if ((ulong)*pbVar8 < 0x23) {
                FUN_038d1270(&local_98,"%s%02d",
                             *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar8 * 8 + 0xb0),pbVar8[1]
                            );
              }
              uVar33 = *(undefined8 *)PTR_DAT_04bb4138;
              uVar13 = FUN_006bd550(puVar28 + 1,0);
              local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar13);
              puVar18 = (uint *)FUN_0079e770(uVar33,&local_98);
              puVar5 = PTR_DAT_04bb40b8;
              if (puVar18 != (uint *)0x0) {
                if (*puVar18 == 0) {
LAB_01d1a254:
                  uVar15 = 0;
                }
                else {
                  cVar21 = *PTR_DAT_04bb40b0;
                  do {
                    if (cVar21 == '\0') {
                      cVar21 = '\x01';
                      *PTR_DAT_04bb40b0 = 1;
                      *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
                      *(undefined8 *)puVar5 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
                    }
                    else {
                      uVar15 = *(uint *)(puVar5 + 0x58);
                      if (-1 < (int)uVar15) {
                        if ((ushort *)((ulong)uVar15 + (long)puVar18) == (ushort *)0x0)
                        goto LAB_01d1a254;
                        uVar15 = (uint)*(ushort *)((ulong)uVar15 + (long)puVar18);
                        goto LAB_01d1a258;
                      }
                      if (uVar15 != 0xffffffff) goto LAB_01d1a254;
                    }
                    puVar29 = (uint *)(ulong)*puVar18;
                    uVar15 = 0;
                    if ((*puVar18 == 0) || (puVar18 == puVar29)) goto LAB_01d1a258;
                    lVar25 = 0xc;
                    if (*(char *)((long)puVar18 + (10 - (long)puVar29)) != '\0') {
                      lVar25 = 0x1c;
                    }
                    lVar25 = (long)puVar18 + (lVar25 - (long)puVar29);
                    if (lVar25 == 0) goto LAB_01d1a254;
                    uVar26 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar29));
                    *(undefined4 *)(puVar5 + 0x58) = 0xfffffffe;
                    uVar15 = 0;
                    if (uVar26 == 0) goto LAB_01d1a258;
                    piVar30 = (int *)(lVar25 + 4);
                    while (piVar30[-1] != 0x54706054) {
                      piVar30 = piVar30 + 2;
                      uVar26 = uVar26 - 1;
                      if (uVar26 == 0) {
                        uVar15 = 0;
                        goto LAB_01d1a258;
                      }
                    }
                    iVar14 = 0;
                    if (*piVar30 != -1) {
                      iVar14 = *piVar30;
                    }
                    *(int *)(puVar5 + 0x58) = iVar14;
                  } while (*puVar18 != 0);
                  uVar15 = 0;
                }
LAB_01d1a258:
                *puVar28 = uVar15;
                *(int *)(param_1 + 0x1b) = *(int *)(param_1 + 0x1b) + 1;
              }
            }
          }
        }
        uVar15 = (int)uVar34 + 1;
        uVar34 = (ulong)uVar15;
      } while (uVar15 != 10);
      FUN_0266b370(&local_1c8);
      *puVar1 = 0;
      puVar9 = auStack_b2;
      if (auStack_b2 <= (undefined1 *)((long)&local_c8 + 2U)) {
        puVar9 = (undefined1 *)((long)&local_c8 + 2U);
      }
      uVar34 = 0;
      puVar2 = PTR_DAT_04bb2bc0 + 0x10;
      puVar3 = PTR_DAT_04bb5128 + 0x10;
      puVar4 = PTR_DAT_04bb2030 + 0x10;
      puVar5 = PTR_DAT_04bc0cd8 + 0x10;
      puVar6 = PTR_DAT_04bb8610 + 0x10;
      puVar7 = PTR_DAT_04bb2020 + 0x10;
      plVar35 = (long *)PTR_DAT_04bb46b0;
      do {
        if (*(int *)(local_164 + ((-(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2) - 100)) !=
            -1) {
          if ((*plVar35 != 0) && (lVar25 = FUN_026eec4c(), lVar25 != 0)) {
            puVar24 = param_1 + 0x1c + (ulong)*puVar1 * 0x4608;
            if (7 < *puVar1) {
              puVar24 = param_1 + 0x1c;
            }
            if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
               (puVar19 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar19 == (undefined8 *)0x0)) {
              uVar15 = 0;
            }
            else {
              uVar15 = (**(code **)*puVar19)();
            }
            local_198 = 0xb;
            local_190 = 0xffffffff;
            uStack_188 = 0xffffffff00000000;
            local_180 = 0xffffffff;
            lVar10 = *(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8);
            local_194 = 0;
            local_168 = 0x40;
            local_125 = 0;
            local_164[0] = 0;
            local_110 = 0x40;
            local_cd = 0;
            local_10c[0] = 0;
            uStack_b8 = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_ba = 0;
            local_1a8 = puVar3;
            pcStack_1a0 = (char *)&local_c8;
            local_178 = puVar2;
            puStack_170 = local_164;
            local_120 = puVar2;
            puStack_118 = local_10c;
            memset(&local_c8,0,(ulong)(puVar9 + (-0xe1 - (long)&local_1a8)) & 0xfffffffffffffffc | 2
                  );
            *(undefined1 *)((long)puVar24 + 0x1e) = 0;
            local_a8[0] = 10;
            local_1d0 = 0x1f;
            local_a0 = lVar10 + 0xc158;
            local_1e0 = puVar4;
            local_1d8 = puVar24;
            FUN_0082b014(&local_1a8);
            local_6c = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_90 = (uint *)0x0;
            local_88 = 0;
            local_70 = 1;
            local_98 = puVar5;
            FUN_02906b00(&local_98,&local_1a8,local_a8);
            local_90 = (uint *)(**(code **)(local_1a8 + 0x18))(&local_1a8);
            local_98 = puVar6;
            (**(code **)(local_1e0 + 0x18))(&local_1e0);
            uVar27 = local_1d0;
            puVar19 = local_1d8;
            (**(code **)(local_98 + 0x18))(&local_98);
            if (uVar27 == 0) {
              local_a8[0] = 3;
            }
            else {
              uVar22 = 0;
              lVar31 = 0x7fffffff;
              puVar28 = local_90;
              do {
                pbVar32 = (byte *)((long)puVar19 + (ulong)uVar22);
                if (lVar31 == 0) {
LAB_01d1a804:
                  local_a8[0] = 0;
                  goto LAB_01d1a808;
                }
                uVar12 = *puVar28;
                uVar11 = (ushort)uVar12;
                if (uVar11 == 0) goto LAB_01d1a804;
                bVar20 = (byte)uVar12;
                if (uVar11 < 0x80) {
                  *pbVar32 = bVar20;
                  iVar14 = 1;
                }
                else if (uVar11 < 0x800) {
                  if (uVar27 <= uVar22 + 1) break;
                  *pbVar32 = (byte)(uVar11 >> 6) | 0xc0;
                  pbVar32[1] = bVar20 & 0x3f | 0x80;
                  iVar14 = 2;
                }
                else {
                  if (uVar27 <= uVar22 + 2) break;
                  *pbVar32 = (byte)(uVar12 >> 8) >> 4 | 0xe0;
                  pbVar32[1] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
                  pbVar32[2] = bVar20 & 0x3f | 0x80;
                  iVar14 = 3;
                }
                uVar22 = iVar14 + uVar22;
                lVar31 = lVar31 + -1;
                puVar28 = (uint *)((long)puVar28 + 2);
              } while (uVar22 < uVar27);
              pbVar32 = (byte *)((long)puVar19 + (ulong)(uVar22 - 1));
              local_a8[0] = 2;
LAB_01d1a808:
              *pbVar32 = 0;
            }
            if (local_a8[0] == 0) {
              *(undefined4 *)(puVar24 + 4) = *(undefined4 *)(lVar10 + 0xc154);
              lVar10 = *(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8);
              uVar27 = *(uint *)(lVar10 + 0x13440);
              if (0xfffdcfff < uVar27 - 0x23001) {
                uVar22 = 0;
                piVar30 = (int *)(lVar10 + 0x13438);
                for (uVar26 = 4;
                    uVar22 = (piVar30[-1] * 0x16a88000 | (uint)(piVar30[-1] * -0x3361d2af) >> 0x11)
                             * 0x1b873593 ^ uVar22,
                    uVar22 = (uVar22 >> 0x13 | uVar22 << 0xd) * 5 + 0xe6546b64, uVar26 < 0x23019;
                    uVar26 = uVar26 + 8) {
                  uVar22 = (*piVar30 * 0x16a88000 | (uint)(*piVar30 * -0x3361d2af) >> 0x11) *
                           0x1b873593 ^ uVar22;
                  uVar22 = (uVar22 >> 0x13 | uVar22 << 0xd) * 5 + 0xe6546b64;
                  piVar30 = piVar30 + 2;
                }
                uVar22 = uVar22 ^ 0x2301c;
                uVar22 = (uVar22 ^ uVar22 >> 0x10) * -0x7a143595;
                uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
                if (*(uint *)(lVar10 + 0x13430) == (uVar22 ^ uVar22 >> 0x10)) {
                  uVar22 = 0;
                  piVar30 = (int *)(lVar10 + 0x13438);
                  for (uVar26 = 4;
                      uVar22 = (piVar30[-1] * 0x16a88000 | (uint)(piVar30[-1] * -0x3361d2af) >> 0x11
                               ) * 0x1b873593 ^ uVar22,
                      uVar22 = (uVar22 >> 0x13 | uVar22 << 0xd) * 5 + 0xe6546b64, uVar26 < 0x23019;
                      uVar26 = uVar26 + 8) {
                    uVar22 = (*piVar30 * 0x16a88000 | (uint)(*piVar30 * -0x3361d2af) >> 0x11) *
                             0x1b873593 ^ uVar22;
                    uVar22 = (uVar22 >> 0x13 | uVar22 << 0xd) * 5 + 0xe6546b64;
                    piVar30 = piVar30 + 2;
                  }
                  uVar22 = uVar22 ^ 0x2301c;
                  uVar22 = (uVar22 ^ uVar22 >> 0x10) * -0x7a143595;
                  uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
                  if (*(uint *)(lVar10 + 0x13430) == (uVar22 ^ uVar22 >> 0x10)) {
                    memset(puVar24 + 6,0,0x23000);
                    if (0x22fff < uVar27) {
                      uVar27 = 0x23000;
                    }
                    puVar24[5] = (ulong)uVar27;
                    memcpy(puVar24 + 6,(void *)(lVar10 + 0x13444),(ulong)uVar27);
                    *(undefined1 *)(puVar24 + 0x4607) = 0;
                    lVar10 = *(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8);
                    bVar20 = *(byte *)(lVar10 + 0x1341c);
                    if ((0xb < bVar20 - 1) ||
                       ((byte)(&DAT_0417b531)[bVar20 - 1] <=
                        (byte)(*(char *)(lVar10 + 0x1341d) - 1U))) {
                      bVar20 = 1;
                    }
                    *(byte *)(puVar24 + 0x4606) = bVar20;
                    plVar35 = (long *)PTR_DAT_04bb46b0;
                    lVar10 = *(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8);
                    uVar27 = (uint)*(byte *)(lVar10 + 0x1341c);
                    if ((0xb < uVar27 - 1) ||
                       (cVar21 = *(char *)(lVar10 + 0x1341d),
                       (byte)(&DAT_0417b531)[uVar27 - 1] <= (byte)(cVar21 - 1U))) {
                      cVar21 = '\x01';
                    }
                    *(char *)((long)puVar24 + 0x23031) = cVar21;
                    pcStack_1a0 = "MakeVillagePlayerFlag";
                    local_1a8 = puVar7;
                    iVar14 = FUN_0274bbb0(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8) + 0xc170,
                                          &local_1a8);
                    *(bool *)((long)puVar24 + 0x23032) = iVar14 != 0;
                    *(undefined4 *)((long)puVar24 + 0x23034) =
                         *(undefined4 *)(local_164 + (long)(int)uVar34 * 4 + -100);
                    *puVar1 = *puVar1 + 1;
                    if ((((uVar15 & 1) != 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
                       (puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8),
                       puVar24 != (undefined8 *)0x0)) {
                      (**(code **)*puVar24)();
                    }
                    goto LAB_01d1a5a4;
                  }
                }
              }
            }
            if ((((uVar15 & 1) != 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
               (puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8),
               puVar24 != (undefined8 *)0x0)) {
              (**(code **)*puVar24)();
            }
          }
          uVar33 = 0;
          if ((uVar16 & 1) == 0) {
            return 0;
          }
          goto LAB_01d1abf0;
        }
LAB_01d1a5a4:
        uVar15 = (int)uVar34 + 1;
        uVar34 = (ulong)uVar15;
      } while (uVar15 != 8);
      local_1a8 = PTR_DAT_04bb2020 + 0x10;
      pcStack_1a0 = "EnableMyDream";
      iVar14 = FUN_0273ec70(&LAB_0022ebf0 + *(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8),
                            &local_1a8);
      if (iVar14 == 0) {
        param_1[0x2305d] = 0;
      }
      else {
        param_1[0x2305d] =
             *(undefined8 *)(&LAB_00578438 + *(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8));
      }
      uVar33 = 1;
    }
    else {
      uVar33 = 0;
    }
    if ((uVar16 & 1) != 0) {
LAB_01d1abf0:
      if ((*(long *)(lVar23 + 0x28) != 0) &&
         (puVar24 = *(undefined8 **)(*(long *)(lVar23 + 0x28) + 8), puVar24 != (undefined8 *)0x0)) {
        (**(code **)*puVar24)();
      }
    }
  }
  return uVar33;
}

