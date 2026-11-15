
uint FUN_022f5830(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  bool bVar23;
  ushort uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  byte local_124 [4];
  undefined **local_120;
  char *pcStack_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  byte local_100;
  undefined2 local_ff;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined2 local_c8;
  undefined4 local_c6;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  undefined *local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint local_8c;
  
  puVar7 = PTR_DAT_04bb37e0;
  *(undefined8 *)(param_1 + 0x38) = 0x900000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar1 = *(undefined4 *)puVar7;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(puVar7 + 4);
  pbVar21 = (byte *)(param_1 + 0x10);
  local_100 = *pbVar21;
  puVar22 = (undefined4 *)(param_1 + 0x40);
  *puVar22 = uVar1;
  local_110 = *(undefined4 *)(param_2 + 1);
  local_10c = *(undefined8 *)((long)param_2 + 0xc);
  if (7 < local_100) {
    local_100 = 0xff;
  }
  pcStack_118 = (char *)*param_2;
  local_104 = *(undefined4 *)((long)param_2 + 0x14);
  local_120 = &PTR_LAB_04a7f180;
  local_ff = *(undefined2 *)(param_2 + 3);
  uVar8 = FUN_022f6fe0(param_1 + 0x18,param_1 + 0x30,&local_120);
  if ((uVar8 & 1) == 0) goto LAB_022f6000;
  fVar29 = *(float *)((long)param_2 + 0xc);
  fVar30 = *(float *)((long)param_2 + 0x14);
  iVar4 = (int)((float)(int)*(float *)(param_1 + 0x54) / 10.0) -
          (uint)(*(float *)(param_1 + 0x54) < 0.0);
  iVar5 = (int)((float)(int)*(float *)(param_1 + 0x5c) / 10.0) -
          (uint)(*(float *)(param_1 + 0x5c) < 0.0);
  if (*(short *)(param_1 + 0x40) == -2) goto LAB_022f5958;
  bVar23 = true;
  local_f8 = (undefined *)CONCAT44(local_f8._4_4_,1);
  uVar18 = FUN_025579bc(pbVar21,puVar22,&local_f8);
  puVar7 = PTR_DAT_04bb43c0;
  if ((uVar18 & 1) != 0) goto LAB_022f597c;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(puVar22);
  lVar12 = *(long *)puVar7;
  if (lVar12 == 0) {
LAB_022f5958:
    bVar23 = false;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_022f5958;
    local_e8 = (undefined *)0x0;
    local_f0 = *(undefined **)(param_1 + 0x40);
    local_f8 = PTR_DAT_04bc0510 + 0x10;
    uVar9 = FUN_0277d6c4(&local_f0);
    if (*(long *)puVar7 == 0) goto LAB_022f5958;
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_022f5958;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(puVar22);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar9) ||
       (((puVar11 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar11 == (uint *)0x0 || (uVar9 = *puVar11, uVar9 == 0)) ||
        (puVar11 == (uint *)(ulong)uVar9)))) goto LAB_022f5958;
    puVar16 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
    if (((*puVar16 == 0) || (uVar9 = puVar16[1], uVar9 == 0)) || ((ulong)(ushort)puVar16[2] == 0))
    goto LAB_022f5958;
    lVar12 = 0xc;
    if (*(char *)((long)puVar16 + 10) != '\0') {
      lVar12 = 0x1c;
    }
    lVar12 = (long)puVar16 + lVar12 + (ulong)(ushort)puVar16[2] * 8;
    if (lVar12 == 0) goto LAB_022f5958;
    uVar2 = 0;
    if ((ulong)uVar9 != 0) {
      uVar2 = (uint)((ulong)((long)puVar11 - lVar12) / (ulong)uVar9);
    }
    if (*puVar16 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
       (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2), 0xbc < uVar24)
       ) goto LAB_022f5958;
    if (uVar24 != 0x92) {
      if (uVar24 == 0x8a) {
        local_a8 = PTR_DAT_04bb2020 + 0x10;
        local_a0 = 0x409651b;
        uStack_9c = 0;
        iVar10 = FUN_0274bce0(pbVar21,&local_a8);
        if (iVar10 == 0) goto LAB_022f597c;
      }
      goto LAB_022f5958;
    }
    bVar13 = *pbVar21;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    local_a8 = (undefined *)CONCAT71(local_a8._1_7_,bVar13);
    uVar18 = FUN_02669430(&local_a8);
    if ((uVar18 & 1) != 0) goto LAB_022f5958;
  }
LAB_022f597c:
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar1);
  bVar13 = *(byte *)(param_1 + 0x10);
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar9 = *puVar11 ^ *puVar11 << 0xb;
  uVar2 = puVar11[3];
  *puVar11 = puVar11[1];
  puVar11[1] = puVar11[2];
  uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar9 ^ uVar2;
  fVar25 = (float)iVar4 * 10.0;
  fVar27 = (float)iVar5 * 10.0;
  puVar11[2] = uVar2;
  puVar11[3] = uVar9;
  fVar26 = fVar25 + 2.5;
  fVar28 = fVar27 + 2.5;
  fVar25 = fVar25 + 10.0 + -2.5;
  fVar27 = fVar27 + 10.0 + -2.5;
  local_d0 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
  local_f0 = PTR_DAT_04bbc1a0 + 0x10;
  local_e8 = PTR_DAT_04bb2010 + 0x10;
  local_c8 = 0xff00;
  local_c0 = 0xffffffffffffffff;
  local_ac = 0xff00;
  iStack_cc = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
  local_c6 = 0;
  local_c2 = 0;
  local_f8 = (undefined *)CONCAT62(local_f8._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
  local_b8 = 1;
  iVar10 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  iVar6 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  local_e0 = local_d0;
  if (iVar10 <= local_d0) {
    local_e0 = iVar10;
  }
  if (local_d0 <= iVar10) {
    local_d0 = iVar10;
  }
  iStack_dc = iStack_cc;
  if (iVar6 <= iStack_cc) {
    iStack_dc = iVar6;
  }
  if (iStack_cc <= iVar6) {
    iStack_cc = iVar6;
  }
  local_b4 = 0x3fc00000;
  if (*(char *)(param_1 + 0x11) != '\0') {
    local_a8 = PTR_DAT_04bbc600 + 0x10;
    local_a0 = *(uint *)(param_1 + 8);
    lVar17 = *(long *)PTR_DAT_04bbc218;
    lVar12 = *(long *)(lVar17 + 0x18);
    uVar2 = local_a0;
    if (*(uint *)(lVar17 + 0x10) <= local_a0) {
      uVar2 = 0;
    }
    puVar11 = *(uint **)(lVar12 + (long)(int)uVar2 * 0x18 + 0x10);
    if (0 < (int)*puVar11) {
      uVar3 = *(uint *)(param_1 + 0xc);
      lVar14 = (long)(int)uVar3;
      if (uVar3 < *(uint *)(lVar12 + (long)(int)uVar2 * 0x18 + 8)) {
        uVar18 = 0;
        uVar20 = (ulong)uVar3;
        lVar19 = 0x78;
        do {
          if (((uVar18 < puVar11[lVar14 * 4]) && (*(long *)(puVar11 + lVar14 * 4 + 2) != 0)) &&
             (*(int *)(*(long *)(puVar11 + lVar14 * 4 + 2) + lVar19 + -0x4c) == 0)) {
            if ((int)(uint)uVar18 < 0) break;
            uStack_9c = (undefined4)uVar20;
            uStack_98 = (undefined4)(uVar20 >> 0x20);
            uVar2 = local_a0;
            if (*(uint *)(lVar17 + 0x10) <= local_a0) {
              uVar2 = 0;
            }
            local_d8 = local_e8;
            local_8c = local_a0;
            if (((uVar3 < *(uint *)(lVar12 + (long)(int)uVar2 * 0x18 + 8)) &&
                (lVar12 = *(long *)(lVar12 + (long)(int)uVar2 * 0x18 + 0x10),
                (uint)uVar18 < *(uint *)(lVar12 + lVar14 * 0x10))) &&
               ((lVar12 = *(long *)(lVar12 + lVar14 * 0x10 + 8), lVar12 != 0 &&
                (puVar15 = *(undefined8 **)(lVar12 + lVar19), puVar15 != (undefined8 *)0x0)))) {
              if (((*PTR_DAT_04bbc748 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04bbc748), iVar10 != 0)) {
                *(undefined **)PTR_DAT_04bbc740 = PTR_DAT_04bbc660 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbc748);
              }
              uVar18 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bbc740);
              if ((uVar18 & 1) != 0) {
                *(char *)((long)puVar15 + 0xc) = (char)uVar1;
                *(short *)((long)puVar15 + 0xe) = (short)iVar4;
                *(short *)(puVar15 + 2) = (short)iVar5;
                *(ushort *)((long)puVar15 + 0x12) =
                     (short)(int)((float)(int)fVar29 / 10.0) - (ushort)(fVar29 < 0.0);
                *(ushort *)((long)puVar15 + 0x14) =
                     (short)(int)((float)(int)fVar30 / 10.0) - (ushort)(fVar30 < 0.0);
                *(byte *)((long)puVar15 + 0x16) = bVar13;
                *(bool *)((long)puVar15 + 0x17) = bVar23;
                *(uint *)(puVar15 + 3) = uVar9;
              }
            }
            uVar18 = FUN_01393290(param_1,&local_f8,&local_a8);
            if ((bVar23) && ((uVar18 & 1) != 0)) {
              *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
            }
            else if ((uVar18 & 1) == 0) break;
            puVar7 = PTR_DAT_04bb43c0;
            lVar17 = *(long *)PTR_DAT_04bb43c0;
            uVar8 = FUN_0277d6c4(puVar22);
            lVar12 = *(long *)puVar7;
            if (lVar12 != 0) {
              lVar17 = *(long *)(lVar17 + 0x57e58);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                local_e8 = (undefined *)0x0;
                local_f0 = *(undefined **)(param_1 + 0x40);
                local_f8 = PTR_DAT_04bc0510 + 0x10;
                uVar8 = FUN_0277d6c4(&local_f0);
                if (*(long *)puVar7 == 0) {
LAB_022f6030:
                  puVar11 = (uint *)0x0;
                  local_120 = (undefined **)CONCAT44(local_120._4_4_,0x86);
                  uVar8 = 0xbc;
                  bVar23 = true;
                }
                else {
                  lVar12 = *(long *)(lVar12 + 0x57e58);
                  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                  if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
                     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                  goto LAB_022f6030;
                  lVar12 = *(long *)PTR_DAT_04bc0428;
                  uVar8 = FUN_0277d6c4(puVar22);
                  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                  if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
                     (puVar11 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8),
                     puVar11 == (uint *)0x0)) goto LAB_022f6030;
                  uVar8 = 0;
                  local_120 = (undefined **)CONCAT44(local_120._4_4_,0x86);
                  uVar9 = *puVar11;
                  if ((uVar9 == 0) || (puVar11 == (uint *)(ulong)uVar9)) {
LAB_022f61a8:
                    bVar23 = false;
                  }
                  else {
                    puVar16 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
                    uVar8 = 0;
                    if (*puVar16 == 0) goto LAB_022f61a8;
                    uVar8 = puVar16[1];
                    if ((uVar8 == 0) || ((ulong)(ushort)puVar16[2] == 0)) {
LAB_022f61a4:
                      uVar8 = 0;
                      goto LAB_022f61a8;
                    }
                    lVar12 = 0xc;
                    if (*(char *)((long)puVar16 + 10) != '\0') {
                      lVar12 = 0x1c;
                    }
                    lVar12 = (long)puVar16 + lVar12 + (ulong)(ushort)puVar16[2] * 8;
                    if (lVar12 == 0) goto LAB_022f61a4;
                    uVar9 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar9 = (uint)((ulong)((long)puVar11 - lVar12) / (ulong)uVar8);
                    }
                    if (*puVar16 <= uVar9) {
                      uVar9 = 0xffffffff;
                    }
                    if (*(uint *)PTR_DAT_04bc00c8 <= uVar9) goto LAB_022f61a4;
                    uVar8 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2);
                    if (uVar8 < 0xbd) goto LAB_022f61a8;
                    bVar23 = false;
                    uVar8 = 0;
                  }
                }
                local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar8);
                if (uVar8 == (uint)local_120) {
                  local_120 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                  pcStack_118 = "DigBell";
                  FUN_02799370(pbVar21,&local_120,1);
                }
                if (bVar23) {
                  uVar24 = 0xbc;
                }
                else {
                  uVar8 = *puVar11;
                  uVar24 = 0;
                  if ((uVar8 != 0) && (puVar11 != (uint *)(ulong)uVar8)) {
                    puVar16 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
                    if ((*puVar16 != 0) &&
                       ((uVar8 = puVar16[1], uVar8 != 0 && ((ulong)(ushort)puVar16[2] != 0)))) {
                      lVar12 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar12 = 0x1c;
                      }
                      lVar12 = (long)puVar16 + lVar12 + (ulong)(ushort)puVar16[2] * 8;
                      if (lVar12 != 0) {
                        uVar9 = 0;
                        if ((ulong)uVar8 != 0) {
                          uVar9 = (uint)((ulong)((long)puVar11 - lVar12) / (ulong)uVar8);
                        }
                        if (*puVar16 <= uVar9) {
                          uVar9 = 0xffffffff;
                        }
                        if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar24 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
                           uVar24 < 0xbd)) {
                          if (uVar24 == 0x71) {
                            local_120 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                            pcStack_118 = "DigFossil";
                            FUN_02799370(pbVar21,&local_120,1);
                          }
                          goto LAB_022f614c;
                        }
                      }
                    }
                    uVar24 = 0;
                  }
                }
LAB_022f614c:
                local_124[0] = *pbVar21;
                if (7 < local_124[0]) {
                  local_124[0] = 0xff;
                }
                uVar18 = FUN_02669430(local_124);
                if ((uVar24 == 0x49) && ((uVar18 & 1) != 0)) {
                  local_120 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                  pcStack_118 = "DigGyroid";
                  FUN_0279a9f0(pbVar21,&local_120,1);
                }
              }
            }
            uVar8 = 1;
            goto LAB_022f6004;
          }
          uVar18 = uVar18 + 1;
          lVar19 = lVar19 + 0x518;
          uVar20 = uVar20 + 0x100000000;
        } while (*puVar11 != uVar18);
      }
    }
  }
LAB_022f6000:
  uVar8 = uVar8 ^ 1;
LAB_022f6004:
  return uVar8 & 1;
}

