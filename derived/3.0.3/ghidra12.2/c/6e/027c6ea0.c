
void FUN_027c6ea0(ushort *param_1,undefined2 *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint *puVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  uint *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ushort local_8c;
  undefined1 local_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  
  lVar21 = *(long *)PTR_DAT_04bb46f0;
  uVar22 = DAT_05582b7c;
  if (lVar21 != 0) {
    uVar14 = FUN_027c5f10();
    if ((uVar14 & 1) == 0) {
      local_190 = CONCAT53(local_190._3_5_,0x80023);
      uVar7 = *param_1;
      if ((byte)(uVar7 >> 8) < 0x23) {
        FUN_020fd218(&local_190,uVar7 >> 8,uVar7 & 0xff);
      }
    }
    else {
      local_190 = (ulong)*(uint3 *)PTR_DAT_04bb9cf0;
    }
    local_8a = local_190._2_1_;
    local_8c = (ushort)local_190;
    uVar22 = DAT_05582b7c;
    if (((ushort)local_190 & 0xff) < 0x23) {
      if (((uint)((ushort)local_190 >> 8) <= (uint)(byte)PTR_DAT_04bc27f0[local_190 & 0xff]) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + (local_190 & 0xff) * 4) >>
           (ulong)((ushort)local_190 >> 8 & 0x1f) & 1) != 0)) {
        lVar1 = lVar21 + 0xe98e0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_160 = 0;
        uStack_158 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        uStack_178 = 0;
        local_190 = 0;
        uStack_188 = 0;
        FUN_0262ac20(lVar21,&local_190,1,lVar1);
        lVar18 = 0;
        do {
          lVar2 = lVar18 + 2;
          *(byte *)((long)&local_190 + lVar18) = ~*(byte *)((long)&local_190 + lVar18);
          *(byte *)((long)&local_190 + lVar18 + 1) = ~*(byte *)((long)&local_190 + lVar18 + 1);
          lVar18 = lVar2;
        } while (lVar2 != 0x100);
        uVar11 = FUN_020fd7d8(&local_8c);
        local_1b8 = (ushort *)(CONCAT44(local_1b8._4_4_,uVar11) & 0xffffffff000000ff);
        FUN_0262b380(lVar21,&local_190,&local_80,&local_1b8,lVar1);
        FUN_0262b4c0(lVar21,&local_190,lVar1);
        puVar10 = PTR_DAT_04bc00c8;
        local_1b0 = *param_2;
        lVar18 = (long)&uStack_1a0 + 4;
        local_1ac = *(undefined4 *)(param_2 + 2);
        lVar2 = (long)&local_1a8 + 4;
        local_1a8 = *(undefined8 *)(param_2 + 4);
        uStack_1a0 = *(undefined8 *)(param_2 + 8);
        uVar14 = 0;
        local_198 = *(undefined4 *)(param_2 + 0xc);
        puVar3 = PTR_DAT_04bc0510 + 0x10;
        puVar4 = PTR_DAT_04bb2e18 + 0x10;
        local_1b8 = param_1;
        do {
          uVar22 = (uint)uVar14;
          if (((uVar22 & 0xffff) < 0x800) &&
             ((*(byte *)(lVar1 + (uVar14 >> 3 & 0x1fff)) >> (ulong)(uVar22 & 7) & 1) != 0)) {
            FUN_0262eb00(&local_1c0,lVar21,uVar14,lVar1);
            uVar15 = FUN_0277dedc(&local_1c0);
            puVar9 = PTR_DAT_04bb43c0;
            if ((uVar15 & 1) != 0) goto LAB_027c7108;
            lVar24 = *(long *)PTR_DAT_04bb43c0;
            uVar12 = FUN_0277d6c4(&local_1c0);
            lVar23 = *(long *)puVar9;
            if (lVar23 != 0) {
              lVar24 = *(long *)(lVar24 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar24 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                local_1c8 = (uint *)0x0;
                local_1d0 = local_1c0;
                uStack_1cc = uStack_1bc;
                local_1d8 = puVar3;
                uVar12 = FUN_0277d6c4(&local_1d0);
                if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_027c7258:
                  local_80 = 0;
                  if (local_1c8 != (uint *)0x0) goto LAB_027c7264;
                  uVar12 = 0xbc;
                }
                else {
                  lVar23 = *(long *)(lVar23 + 0x57e58);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                  if ((*(uint *)(lVar23 + 0x1d8) <= uVar12) ||
                     (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
                  goto LAB_027c7258;
                  lVar23 = *(long *)PTR_DAT_04bc0428;
                  uVar12 = FUN_0277d6c4(&local_1c0);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                  if ((*(uint *)(lVar23 + 0x1d8) <= uVar12) ||
                     (puVar19 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8),
                     puVar19 == (uint *)0x0)) goto LAB_027c7258;
                  local_80 = 0;
                  local_1c8 = puVar19;
LAB_027c7264:
                  uVar5 = *local_1c8;
                  uVar12 = 0;
                  if ((uVar5 != 0) && (local_1c8 != (uint *)(ulong)uVar5)) {
                    puVar19 = (uint *)((long)local_1c8 - (long)(ulong)uVar5);
                    uVar12 = 0;
                    if (*puVar19 != 0) {
                      uVar12 = puVar19[1];
                      if ((uVar12 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                        lVar23 = 0xc;
                        if (*(char *)((long)puVar19 + 10) != '\0') {
                          lVar23 = 0x1c;
                        }
                        lVar23 = (long)puVar19 + lVar23 + (ulong)(ushort)puVar19[2] * 8;
                        if (lVar23 != 0) {
                          uVar5 = 0;
                          if ((ulong)uVar12 != 0) {
                            uVar5 = (uint)((ulong)((long)local_1c8 - lVar23) / (ulong)uVar12);
                          }
                          if (*puVar19 <= uVar5) {
                            uVar5 = 0xffffffff;
                          }
                          if ((uVar5 < *(uint *)puVar10) &&
                             (uVar12 = (uint)*(ushort *)
                                              (*(long *)(puVar10 + 8) + (long)(int)uVar5 * 2),
                             uVar12 < 0xbd)) goto LAB_027c72f4;
                        }
                      }
                      uVar12 = 0;
                    }
                  }
                }
LAB_027c72f4:
                local_80 = 0;
                local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,uVar12);
                if (uVar12 == 0) {
                  local_80 = 10;
                  iVar13 = FUN_01ae7550(&local_1d8);
                  local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,iVar13);
                  if (iVar13 != local_80) {
                    local_80 = 0xb;
                    iVar13 = FUN_01ae7550(&local_1d8);
                    local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,iVar13);
                    if (iVar13 != local_80) {
                      local_80 = 0xc;
                      iVar13 = FUN_01ae7550(&local_1d8);
                      local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,iVar13);
                      if (iVar13 != local_80) {
                        local_80 = 0xe;
                        iVar13 = FUN_01ae7550(&local_1d8);
                        local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,iVar13);
                        if (iVar13 != local_80) {
                          local_1e0 = 0;
                          local_1e8 = puVar4;
                          FUN_01afb1a0(&local_1d8,&local_1e8);
                          if (((int)local_1e0 < 5) && (local_1e0._4_4_ < 5)) {
                            uVar15 = FUN_0277dedc(&local_1ac);
                            puVar9 = PTR_DAT_04bb43c0;
                            if ((uVar15 & 1) == 0) {
                              lVar23 = *(long *)PTR_DAT_04bb43c0;
                              uVar12 = FUN_0277d6c4(&local_1ac);
                              if (*(long *)puVar9 != 0) {
                                lVar23 = *(long *)(lVar23 + 0x57e58);
                                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                                if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
                                   (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) !=
                                    0)) {
                                  FUN_01ad5d04(&local_80,&local_1ac);
                                  uVar15 = FUN_01ae69e4(&local_1d8,0);
                                  if ((uVar15 & 1) == 0) {
                                    uVar11 = FUN_01ae6950(&local_80);
                                    uVar15 = FUN_01ae69e4(&local_1d8,uVar11);
                                  }
                                  else {
                                    local_88 = local_1d0;
                                    uStack_84 = uStack_1cc;
                                    uVar15 = FUN_0277d7b4(&local_88,&local_1ac);
                                  }
                                  if ((uVar15 & 1) != 0) goto LAB_027c7108;
                                }
                              }
                            }
                            uVar15 = FUN_0277dedc(lVar2);
                            puVar9 = PTR_DAT_04bb43c0;
                            if ((uVar15 & 1) == 0) {
                              lVar23 = *(long *)PTR_DAT_04bb43c0;
                              uVar12 = FUN_0277d6c4(lVar2);
                              if (*(long *)puVar9 != 0) {
                                lVar23 = *(long *)(lVar23 + 0x57e58);
                                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                                if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
                                   (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) !=
                                    0)) {
                                  FUN_01ad5d04(&local_80,lVar2);
                                  uVar15 = FUN_01ae69e4(&local_1d8,0);
                                  if ((uVar15 & 1) == 0) {
                                    uVar11 = FUN_01ae6950(&local_80);
                                    uVar15 = FUN_01ae69e4(&local_1d8,uVar11);
                                  }
                                  else {
                                    local_88 = local_1d0;
                                    uStack_84 = uStack_1cc;
                                    uVar15 = FUN_0277d7b4(&local_88,lVar2);
                                  }
                                  if ((uVar15 & 1) != 0) goto LAB_027c7108;
                                }
                              }
                            }
                            uVar15 = FUN_0277dedc(lVar18);
                            puVar9 = PTR_DAT_04bb43c0;
                            if ((uVar15 & 1) == 0) {
                              lVar23 = *(long *)PTR_DAT_04bb43c0;
                              uVar12 = FUN_0277d6c4(lVar18);
                              if (*(long *)puVar9 != 0) {
                                lVar23 = *(long *)(lVar23 + 0x57e58);
                                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                                if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
                                   (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) !=
                                    0)) {
                                  FUN_01ad5d04(&local_80,lVar18);
                                  uVar15 = FUN_01ae69e4(&local_1d8,0);
                                  if ((uVar15 & 1) == 0) {
                                    uVar11 = FUN_01ae6950(&local_80);
                                    uVar15 = FUN_01ae69e4(&local_1d8,uVar11);
                                  }
                                  else {
                                    local_88 = local_1d0;
                                    uStack_84 = uStack_1cc;
                                    uVar15 = FUN_0277d7b4(&local_88,lVar18);
                                  }
                                  if ((uVar15 & 1) != 0) goto LAB_027c7108;
                                }
                              }
                            }
                            goto LAB_027c7118;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_027c7108;
              }
            }
          }
          else {
LAB_027c7108:
            *(byte *)((long)&local_190 + (uVar14 >> 3)) =
                 *(byte *)((long)&local_190 + (uVar14 >> 3)) & ((byte)(1 << (uVar14 & 7)) ^ 0xff);
          }
LAB_027c7118:
          uVar5 = DAT_05582b78;
          uVar12 = DAT_05582b74;
          uVar14 = (ulong)(uVar22 + 1);
        } while (uVar22 + 1 != 0x800);
        uVar17 = 0;
        uVar14 = 0;
        do {
          uVar20 = (uint)uVar14 & 6;
          uVar22 = (uint)uVar14 + 2;
          bVar6 = *(byte *)((long)&local_190 + (uVar14 >> 3));
          uVar17 = (bVar6 >> (ulong)(uVar20 | 1) & 1) + (bVar6 >> (ulong)uVar20 & 1) + uVar17;
          uVar14 = (ulong)uVar22;
        } while (uVar22 != 0x800);
        uVar22 = DAT_05582b7c;
        if (uVar17 != 0) {
          uVar22 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar22 = uVar22 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar22 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          uVar17 = (uint)((ulong)uVar22 * (ulong)uVar17 >> 0x20);
          if (uVar17 < 0x7fffffff) {
            uVar14 = 0;
            uVar20 = 0;
            do {
              uVar16 = (uint)uVar14;
              uVar8 = 1 << (ulong)(uVar16 & 7);
              if ((uVar8 & *(byte *)((long)&local_190 + (uVar14 >> 3))) != 0) {
                if (uVar20 == uVar17) {
                  if (0x7ff < (uVar16 & 0xffff)) {
                    DAT_05582b70 = uVar12;
                    DAT_05582b74 = uVar5;
                    DAT_05582b7c = uVar22;
                    return;
                  }
                  if ((uVar8 & *(byte *)(lVar1 + (uVar14 >> 3 & 0x1fff))) == 0) {
                    DAT_05582b70 = uVar12;
                    DAT_05582b74 = uVar5;
                    DAT_05582b7c = uVar22;
                    return;
                  }
                  DAT_05582b7c = uVar22;
                  FUN_0262eb00(&local_80,lVar21,uVar14,lVar1);
                  *(int *)(param_1 + 0x12) = local_80;
                  *(undefined4 *)(param_1 + 0x14) = uStack_7c;
                  return;
                }
                uVar20 = uVar20 + 1;
              }
              uVar14 = (ulong)(uVar16 + 1);
            } while (uVar16 + 1 != 0x800);
          }
        }
      }
    }
  }
  DAT_05582b7c = uVar22;
  return;
}

