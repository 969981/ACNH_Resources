
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_013f8a90(long param_1,uint *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined2 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ushort *puVar22;
  undefined2 *puVar23;
  char *pcVar24;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  byte *pbVar31;
  long lVar32;
  uint *puVar33;
  uint uVar34;
  long lVar35;
  uint local_1b4;
  uint local_1b0;
  uint local_1a8;
  undefined4 local_1a4;
  undefined *local_1a0;
  uint local_198;
  undefined4 uStack_194;
  undefined8 local_190;
  uint local_184;
  uint local_180 [56];
  undefined8 local_a0;
  undefined *local_98;
  char *local_90;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_04bb30a0;
  local_7c = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  *param_2 = 0xfffe;
  puVar2 = PTR_DAT_04bb27c0;
  if (1 < local_7c) {
    local_7c = 0;
  }
  lVar21 = *(long *)PTR_DAT_04bb27c0;
  if ((param_3 & 1) != 0) {
    if (lVar21 == 0) {
LAB_013f8e4c:
      if (local_7c == 1) {
        puVar18 = (undefined8 *)0x0;
        if ((*(long *)(param_1 + 0x20) == 0) || (*(uint *)(param_1 + 0x18) < 4)) goto LAB_013f8ee4;
        puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x18);
        if (((DAT_051b72f0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_051b72f0), iVar12 != 0))
        {
          DAT_051b72e8 = &PTR_LAB_04997628;
          __cxa_guard_release(&DAT_051b72f0);
        }
      }
      else {
        if (local_7c != 0) {
          return 0;
        }
        puVar18 = (undefined8 *)0x0;
        if ((*(long *)(param_1 + 0x20) == 0) || (*(uint *)(param_1 + 0x18) < 3)) goto LAB_013f8ee4;
        puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
        if (((DAT_051b72f0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_051b72f0), iVar12 != 0))
        {
          DAT_051b72e8 = &PTR_LAB_04997628;
          __cxa_guard_release(&DAT_051b72f0);
        }
      }
      if (puVar18 == (undefined8 *)0x0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        uVar15 = (**(code **)*puVar18)(puVar18,&DAT_051b72e8);
        if ((uVar15 & 1) == 0) {
          puVar18 = (undefined8 *)0x0;
        }
      }
LAB_013f8ee4:
      local_90 = (char *)0x0;
      local_88 = 0;
      *param_2 = 0xfffe;
      local_a0 = 0;
      local_98 = (undefined *)0x0;
      local_7c = *(uint *)(DAT_0534d2f0 + 0x214);
      local_180[0x34] = 0;
      local_180[0x35] = 0;
      local_180[0x36] = 0;
      local_180[0x37] = 0;
      local_180[0x30] = 0;
      local_180[0x31] = 0;
      local_180[0x32] = 0;
      local_180[0x33] = 0;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,*(undefined4 *)(DAT_0534d2f0 + 0x210));
      uVar13 = *(uint *)(puVar18 + 0x38);
      local_180[0x2c] = 0;
      local_180[0x2d] = 0;
      local_180[0x2e] = 0;
      local_180[0x2f] = 0;
      local_180[0x28] = 0;
      local_180[0x29] = 0;
      local_180[0x2a] = 0;
      local_180[0x2b] = 0;
      local_180[0x24] = 0;
      local_180[0x25] = 0;
      local_180[0x26] = 0;
      local_180[0x27] = 0;
      local_180[0x20] = 0;
      local_180[0x21] = 0;
      local_180[0x22] = 0;
      local_180[0x23] = 0;
      local_180[0x1c] = 0;
      local_180[0x1d] = 0;
      local_180[0x1e] = 0;
      local_180[0x1f] = 0;
      local_180[0x18] = 0;
      local_180[0x19] = 0;
      local_180[0x1a] = 0;
      local_180[0x1b] = 0;
      local_180[0x14] = 0;
      local_180[0x15] = 0;
      local_180[0x16] = 0;
      local_180[0x17] = 0;
      local_180[0x10] = 0;
      local_180[0x11] = 0;
      local_180[0x12] = 0;
      local_180[0x13] = 0;
      local_180[0xc] = 0;
      local_180[0xd] = 0;
      local_180[0xe] = 0;
      local_180[0xf] = 0;
      local_180[8] = 0;
      local_180[9] = 0;
      local_180[10] = 0;
      local_180[0xb] = 0;
      local_180[4] = 0;
      local_180[5] = 0;
      local_180[6] = 0;
      local_180[7] = 0;
      local_180[0] = 0;
      local_180[1] = 0;
      local_180[2] = 0;
      local_180[3] = 0;
      if ((0 < (int)uVar13) ||
         (((puVar18[0x16] != 0 && (puVar33 = *(uint **)(puVar18[0x16] + 8), puVar33 != (uint *)0x0))
          && (uVar13 = *puVar33, 0 < (int)uVar13)))) {
        local_1b0 = 0;
        uVar15 = 0;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        do {
          if ((int)*(uint *)(puVar18 + 0x38) < 1) {
            if (puVar18[0x16] != 0) {
              puVar33 = *(uint **)(puVar18[0x16] + 8);
              if (((puVar33 != (uint *)0x0) &&
                  ((*(uint *)(puVar18 + 0x19) <= uVar15 ||
                   (*(char *)(puVar18[0x1a] + uVar15) != '\0')))) && (uVar15 < *puVar33)) {
                if (puVar33[1] != 0) {
                  if ((ushort)puVar33[2] != 0) {
                    iVar12 = 0xc;
                    if (*(char *)((long)puVar33 + 10) != '\0') {
                      iVar12 = 0x1c;
                    }
                    puVar33 = (uint *)((ulong)(puVar33[1] * (uint)uVar15 +
                                               (uint)(ushort)puVar33[2] * 8 + iVar12) +
                                      (long)puVar33);
                    goto joined_r0x013f9d18;
                  }
                }
              }
            }
          }
          else if (uVar15 < *(uint *)(puVar18 + 0x38)) {
            uVar28 = uVar15 & 0xffffffff;
            if (*(uint *)(puVar18 + 0x36) <= uVar15) {
              uVar28 = 0;
            }
            puVar33 = *(uint **)(puVar18[0x37] + uVar28 * 8);
joined_r0x013f9d18:
            if (puVar33 != (uint *)0x0) {
              uVar11 = FUN_013f1d00(param_1,puVar33,&local_78,&local_7c);
              if (uVar11 != 0) {
                puVar25 = (uint *)(ulong)*puVar33;
                if (*puVar33 == 0) {
                  uVar34 = 0;
LAB_013f9e38:
                  uVar17 = 0;
                }
                else {
                  if ((DAT_051b7230 & 1) == 0) {
                    DAT_051b7234 = 0xffffffffffffffff;
                    DAT_051b723c = 0xffffffffffffffff;
                    DAT_051b7230 = 1;
                    uVar28 = 0xffffffff;
                    DAT_051b72d4 = 0xffffffff;
                    DAT_051b7244 = 0xffffffffffffffff;
                    DAT_051b724c = 0xffffffffffffffff;
                    DAT_051b7254 = 0xffffffffffffffff;
                    DAT_051b725c = 0xffffffffffffffff;
                    DAT_051b7264 = 0xffffffffffffffff;
                    DAT_051b726c = 0xffffffffffffffff;
                    DAT_051b7274 = 0xffffffffffffffff;
                    DAT_051b727c = 0xffffffffffffffff;
                    DAT_051b7284 = 0xffffffffffffffff;
                    DAT_051b728c = 0xffffffffffffffff;
                    DAT_051b7294 = 0xffffffffffffffff;
                    DAT_051b729c = 0xffffffffffffffff;
                    DAT_051b72a4 = 0xffffffffffffffff;
                    DAT_051b72ac = 0xffffffffffffffff;
                    DAT_051b72b4 = 0xffffffffffffffff;
                    DAT_051b72bc = 0xffffffffffffffff;
                    DAT_051b72c4 = 0xffffffffffffffff;
                    DAT_051b72cc = 0xffffffffffffffff;
LAB_013f9d60:
                    uVar29 = uVar28;
                    if (puVar33 != puVar25) {
                      do {
                        uVar28 = uVar29;
                        if (uVar28 != 0xffffffff) goto LAB_013f9d68;
                        lVar21 = 0xc;
                        if (*(char *)((long)puVar33 + (10 - (long)puVar25)) != '\0') {
                          lVar21 = 0x1c;
                        }
                        lVar21 = (long)puVar33 + (lVar21 - (long)puVar25);
                        if (lVar21 == 0) {
                          uVar34 = 0;
                          uVar28 = 0xffffffff;
                          uVar20 = *puVar33;
                          goto joined_r0x013f9e14;
                        }
                        uVar28 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar25));
                        DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
                        if (uVar28 == 0) {
LAB_013f9e08:
                          uVar34 = 0;
                          uVar28 = 0xfffffffe;
                          uVar20 = *puVar33;
                          goto joined_r0x013f9e14;
                        }
                        puVar27 = (uint *)(lVar21 + 4);
                        while (puVar27[-1] != 0x20cb67bc) {
                          puVar27 = puVar27 + 2;
                          uVar28 = uVar28 - 1;
                          if (uVar28 == 0) goto LAB_013f9e08;
                        }
                        uVar34 = *puVar27;
                        uVar28 = 0;
                        if (uVar34 != 0xffffffff) {
                          uVar28 = (ulong)uVar34;
                        }
                        DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,(int)uVar28);
                        uVar29 = (ulong)uVar34;
                      } while ((int)uVar28 < 0);
                      puVar22 = (ushort *)(uVar28 + (long)puVar33);
                      if (puVar22 != (ushort *)0x0) goto LAB_013f9ca0;
                    }
LAB_013f9d68:
                    uVar34 = 0;
                    uVar20 = *puVar33;
                  }
                  else {
                    uVar28 = DAT_051b7234 & 0xffffffff;
                    if ((int)(uint)DAT_051b7234 < 0) goto LAB_013f9d60;
                    puVar22 = (ushort *)(uVar28 + (long)puVar33);
                    if (puVar22 == (ushort *)0x0) goto LAB_013f9d68;
LAB_013f9ca0:
                    uVar34 = (uint)*puVar22;
                    uVar20 = *puVar33;
                  }
joined_r0x013f9e14:
                  if (uVar20 == 0) goto LAB_013f9e38;
                  puVar25 = (uint *)(ulong)uVar20;
                  if ((int)uVar28 < 0) {
                    if (puVar33 == puVar25) goto LAB_013f9e38;
                    do {
                      if (uVar28 != 0xffffffff) goto LAB_013f9e38;
                      lVar21 = 0xc;
                      if (*(char *)((long)puVar33 + (10 - (long)puVar25)) != '\0') {
                        lVar21 = 0x1c;
                      }
                      lVar21 = (long)puVar33 + (lVar21 - (long)puVar25);
                      if (lVar21 == 0) goto LAB_013f9e38;
                      uVar28 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar25));
                      DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
                      if (uVar28 == 0) goto LAB_013f9e38;
                      puVar27 = (uint *)(lVar21 + 4);
                      while (puVar27[-1] != 0x20cb67bc) {
                        puVar27 = puVar27 + 2;
                        uVar28 = uVar28 - 1;
                        if (uVar28 == 0) goto LAB_013f9e38;
                      }
                      uVar28 = (ulong)*puVar27;
                      uVar29 = 0;
                      if (*puVar27 != 0xffffffff) {
                        uVar29 = uVar28;
                      }
                      DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,(int)uVar29);
                    } while ((int)uVar29 < 0);
                  }
                  else {
                    uVar29 = uVar28;
                  }
                  if ((undefined2 *)(uVar29 + (long)puVar33) == (undefined2 *)0x0)
                  goto LAB_013f9e38;
                  uVar17 = *(undefined2 *)(uVar29 + (long)puVar33);
                }
                uVar28 = FUN_013f5600(param_1,uVar17);
                if ((uVar28 & 1) != 0) {
                  puVar25 = (uint *)(ulong)*puVar33;
                  if (*puVar33 == 0) {
LAB_013f9eb8:
                    uVar17 = 0;
                  }
                  else {
                    if ((DAT_051b7230 & 1) == 0) {
                      DAT_051b7234 = 0xffffffffffffffff;
                      DAT_051b723c = 0xffffffffffffffff;
                      DAT_051b7230 = 1;
                      uVar28 = 0xffffffff;
                      DAT_051b72d4 = 0xffffffff;
                      DAT_051b7244 = 0xffffffffffffffff;
                      DAT_051b724c = 0xffffffffffffffff;
                      DAT_051b7254 = 0xffffffffffffffff;
                      DAT_051b725c = 0xffffffffffffffff;
                      DAT_051b7264 = 0xffffffffffffffff;
                      DAT_051b726c = 0xffffffffffffffff;
                      DAT_051b7274 = 0xffffffffffffffff;
                      DAT_051b727c = 0xffffffffffffffff;
                      DAT_051b7284 = 0xffffffffffffffff;
                      DAT_051b728c = 0xffffffffffffffff;
                      DAT_051b7294 = 0xffffffffffffffff;
                      DAT_051b729c = 0xffffffffffffffff;
                      DAT_051b72a4 = 0xffffffffffffffff;
                      DAT_051b72ac = 0xffffffffffffffff;
                      DAT_051b72b4 = 0xffffffffffffffff;
                      DAT_051b72bc = 0xffffffffffffffff;
                      DAT_051b72c4 = 0xffffffffffffffff;
                      DAT_051b72cc = 0xffffffffffffffff;
LAB_013f9eb0:
                      if (puVar33 != puVar25) {
                        do {
                          if (uVar28 != 0xffffffff) goto LAB_013f9eb8;
                          lVar21 = 0xc;
                          if (*(char *)((long)puVar33 + (10 - (long)puVar25)) != '\0') {
                            lVar21 = 0x1c;
                          }
                          lVar21 = (long)puVar33 + (lVar21 - (long)puVar25);
                          if (lVar21 == 0) goto LAB_013f9eb8;
                          uVar28 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar25));
                          DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
                          if (uVar28 == 0) goto LAB_013f9eb8;
                          puVar27 = (uint *)(lVar21 + 4);
                          while (puVar27[-1] != 0x20cb67bc) {
                            puVar27 = puVar27 + 2;
                            uVar28 = uVar28 - 1;
                            if (uVar28 == 0) goto LAB_013f9eb8;
                          }
                          uVar28 = (ulong)*puVar27;
                          uVar29 = 0;
                          if (*puVar27 != 0xffffffff) {
                            uVar29 = uVar28;
                          }
                          DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,(int)uVar29);
                        } while ((int)uVar29 < 0);
                        puVar23 = (undefined2 *)(uVar29 + (long)puVar33);
                        if (puVar23 != (undefined2 *)0x0) goto LAB_013f9e70;
                      }
                      goto LAB_013f9eb8;
                    }
                    uVar28 = DAT_051b7234 & 0xffffffff;
                    if ((int)(uint)DAT_051b7234 < 0) goto LAB_013f9eb0;
                    puVar23 = (undefined2 *)(uVar28 + (long)puVar33);
                    if (puVar23 == (undefined2 *)0x0) goto LAB_013f9eb8;
LAB_013f9e70:
                    uVar17 = *puVar23;
                  }
                  uVar28 = FUN_013f4ed0(param_1,uVar17);
                  if ((uVar28 & 1) != 0) {
                    uVar20 = uVar34 - *(ushort *)(param_1 + 0x348);
                    if ((uVar20 < *(uint *)(param_1 + 0x328)) &&
                       (puVar33 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar20 * 8),
                       puVar33 != (uint *)0x0)) {
                      uVar20 = *puVar33;
                      if (!(uVar20 == 0 || puVar33 == (uint *)(ulong)uVar20)) {
                        puVar25 = (uint *)((long)puVar33 - (long)(ulong)uVar20);
                        if (((*puVar25 != 0) && (uVar20 = puVar25[1], uVar20 != 0)) &&
                           ((ulong)(ushort)puVar25[2] != 0)) {
                          lVar21 = 0xc;
                          if (*(char *)((long)puVar25 + 10) != '\0') {
                            lVar21 = 0x1c;
                          }
                          lVar21 = (long)puVar25 + lVar21 + (ulong)(ushort)puVar25[2] * 8;
                          if (lVar21 != 0) {
                            uVar19 = 0;
                            if ((ulong)uVar20 != 0) {
                              uVar19 = (uint)((ulong)((long)puVar33 - lVar21) / (ulong)uVar20);
                            }
                            if (*puVar25 <= uVar19) {
                              uVar19 = 0xffffffff;
                            }
                            if (uVar19 < *(uint *)PTR_DAT_04bbcad8) {
                              uVar5 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bbcad8 + 8) + (long)(int)uVar19 * 2);
                              local_1b4 = (uint)uVar5;
                              if (8 < uVar5) goto LAB_013f9f6c;
                              goto LAB_013fa010;
                            }
                          }
                        }
                      }
                      local_1b4 = 0;
                    }
                    else {
LAB_013f9f6c:
                      local_1b4 = 0;
                    }
LAB_013fa010:
                    lVar35 = *(long *)PTR_DAT_04bb4920;
                    local_1a4 = 0;
                    local_1a8 = uVar34;
                    FUN_0277d4ac(&local_1a8);
                    puVar8 = PTR_DAT_04bb43c0;
                    local_190 = 0;
                    local_198 = local_1a8;
                    uStack_194 = local_1a4;
                    lVar21 = *(long *)PTR_DAT_04bb43c0;
                    local_1a0 = puVar2;
                    uVar34 = FUN_0277d6c4(&local_198);
                    if (*(long *)puVar8 == 0) {
LAB_013fa15c:
                      uVar20 = 0xbc;
                    }
                    else {
                      lVar21 = *(long *)(lVar21 + 0x57e58);
                      uVar34 = (uVar34 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                      uVar20 = 0xbc;
                      if (uVar34 < *(uint *)(lVar21 + 0x1d8)) {
                        if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar34 * 8) == 0)
                        goto LAB_013fa15c;
                        lVar21 = *(long *)PTR_DAT_04bc0428;
                        uVar34 = FUN_0277d6c4(&local_1a8);
                        uVar34 = (uVar34 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                        uVar20 = 0xbc;
                        if (uVar34 < *(uint *)(lVar21 + 0x1d8)) {
                          puVar33 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar34 * 8);
                          if (puVar33 == (uint *)0x0) goto LAB_013fa15c;
                          uVar34 = *puVar33;
                          uVar20 = 0;
                          if ((uVar34 != 0) && (puVar33 != (uint *)(ulong)uVar34)) {
                            puVar25 = (uint *)((long)puVar33 - (long)(ulong)uVar34);
                            uVar20 = 0;
                            if (*puVar25 != 0) {
                              uVar34 = puVar25[1];
                              if ((uVar34 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
                                lVar21 = 0xc;
                                if (*(char *)((long)puVar25 + 10) != '\0') {
                                  lVar21 = 0x1c;
                                }
                                lVar21 = (long)puVar25 + lVar21 + (ulong)(ushort)puVar25[2] * 8;
                                if (lVar21 != 0) {
                                  uVar20 = 0;
                                  if ((ulong)uVar34 != 0) {
                                    uVar20 = (uint)((ulong)((long)puVar33 - lVar21) / (ulong)uVar34)
                                    ;
                                  }
                                  if (*puVar25 <= uVar20) {
                                    uVar20 = 0xffffffff;
                                  }
                                  if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                                     (uVar20 = (uint)*(ushort *)
                                                      (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                      (long)(int)uVar20 * 2), uVar20 < 0xbd))
                                  goto LAB_013fa160;
                                }
                              }
                              uVar20 = 0;
                            }
                          }
                        }
                      }
                    }
LAB_013fa160:
                    local_78 = (undefined *)CONCAT44(local_1b4,(int)local_78);
                    local_184 = uVar20;
                    if (*(char *)(lVar35 + 0x228) != '\0') {
                      if (*(long *)(lVar35 + 0x218) == 0) {
joined_r0x013fa230:
                        if (uVar15 < 0x800) {
                          uVar28 = uVar15 >> 3 & 0x1ffffffffffffffc;
                          *(uint *)((long)local_180 + uVar28) =
                               *(uint *)((long)local_180 + uVar28) |
                               1 << (ulong)((uint)uVar15 & 0x1f);
                        }
                        local_1b0 = local_1b0 + uVar11;
                      }
                      else {
                        pcVar24 = *(char **)(lVar35 + 0x220);
                        if (*pcVar24 == '\0' && pcVar24[1] == '\0') {
                          if (uVar20 != 0x6a) goto joined_r0x013fa230;
                        }
                        else {
                          local_70 = (char *)CONCAT44(local_70._4_4_,local_1b4);
                          if (local_1b4 < 9) {
                            local_70 = (char *)CONCAT44(local_1b4,local_1b4);
                            if (((uint)((int)local_1b4 >> 3) < 2) &&
                               (local_70 = (char *)CONCAT44(local_1b4,local_1b4),
                               ((byte)pcVar24[(uint)((int)local_1b4 >> 3)] >> (ulong)(local_1b4 & 7)
                               & 1) != 0)) goto joined_r0x013fa230;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar13);
        if (local_1b0 != 0) {
          puVar33 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
          uVar13 = *puVar33 ^ *puVar33 << 0xb;
          uVar34 = puVar33[3];
          *puVar33 = puVar33[1];
          puVar33[1] = puVar33[2];
          uVar13 = uVar13 >> 8 ^ uVar34 >> 0x13 ^ uVar13 ^ uVar34;
          puVar33[2] = uVar34;
          puVar33[3] = uVar13;
          uVar34 = *(uint *)(puVar18 + 0x38);
          if ((0 < (int)uVar34) ||
             (((puVar18[0x16] != 0 &&
               (puVar33 = *(uint **)(puVar18[0x16] + 8), puVar33 != (uint *)0x0)) &&
              (uVar34 = *puVar33, 0 < (int)uVar34)))) {
            uVar15 = 0;
            uVar28 = (ulong)uVar13 * (ulong)local_1b0 >> 0x20;
            do {
              if ((local_180[uVar15 >> 5 & 0x7ffffff] >> (ulong)((uint)uVar15 & 0x1f) & 1) != 0) {
                if ((int)*(uint *)(puVar18 + 0x38) < 1) {
                  if (((((puVar18[0x16] == 0) ||
                        (puVar33 = *(uint **)(puVar18[0x16] + 8), puVar33 == (uint *)0x0)) ||
                       ((uVar15 < *(uint *)(puVar18 + 0x19) &&
                        (*(char *)(puVar18[0x1a] + uVar15) == '\0')))) ||
                      ((*puVar33 <= uVar15 || (puVar33[1] == 0)))) || ((ushort)puVar33[2] == 0))
                  goto LAB_013fa334;
                  iVar12 = 0xc;
                  if (*(char *)((long)puVar33 + 10) != '\0') {
                    iVar12 = 0x1c;
                  }
                  puVar33 = (uint *)((ulong)(puVar33[1] * (uint)uVar15 +
                                             (uint)(ushort)puVar33[2] * 8 + iVar12) + (long)puVar33)
                  ;
                }
                else if (uVar15 < *(uint *)(puVar18 + 0x38)) {
                  uVar29 = uVar15 & 0xffffffff;
                  if (*(uint *)(puVar18 + 0x36) <= uVar15) {
                    uVar29 = 0;
                  }
                  puVar33 = *(uint **)(puVar18[0x37] + uVar29 * 8);
                }
                else {
LAB_013fa334:
                  puVar33 = (uint *)0x0;
                }
                uVar13 = FUN_013f1d00(param_1,puVar33,&local_78,&local_7c);
                iVar12 = (int)uVar28;
                uVar28 = (ulong)(iVar12 - (uVar13 & 0xffff));
                if (iVar12 < (int)(uVar13 & 0xffff)) {
                  puVar25 = (uint *)(ulong)*puVar33;
                  if (*puVar33 == 0) {
                    uVar13 = 0;
                    goto LAB_013fa4f4;
                  }
                  if ((DAT_051b7230 & 1) == 0) {
                    DAT_051b7234 = 0xffffffffffffffff;
                    DAT_051b723c = 0xffffffffffffffff;
                    DAT_051b7234._0_4_ = 0xffffffff;
                    DAT_051b7230 = 1;
                    DAT_051b72d4 = 0xffffffff;
                    DAT_051b7244 = 0xffffffffffffffff;
                    DAT_051b724c = 0xffffffffffffffff;
                    DAT_051b7254 = 0xffffffffffffffff;
                    DAT_051b725c = 0xffffffffffffffff;
                    DAT_051b7264 = 0xffffffffffffffff;
                    DAT_051b726c = 0xffffffffffffffff;
                    DAT_051b7274 = 0xffffffffffffffff;
                    DAT_051b727c = 0xffffffffffffffff;
                    DAT_051b7284 = 0xffffffffffffffff;
                    DAT_051b728c = 0xffffffffffffffff;
                    DAT_051b7294 = 0xffffffffffffffff;
                    DAT_051b729c = 0xffffffffffffffff;
                    DAT_051b72a4 = 0xffffffffffffffff;
                    DAT_051b72ac = 0xffffffffffffffff;
                    DAT_051b72b4 = 0xffffffffffffffff;
                    DAT_051b72bc = 0xffffffffffffffff;
                    DAT_051b72c4 = 0xffffffffffffffff;
                    DAT_051b72cc = 0xffffffffffffffff;
                  }
                  else {
                    uVar34 = (uint)DAT_051b7234;
                    if (-1 < (int)(uint)DAT_051b7234) goto LAB_013fa490;
                  }
                  uVar13 = (uint)DAT_051b7234;
                  if (puVar33 == puVar25) goto LAB_013fa4ec;
                  goto LAB_013fa510;
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar34 != uVar15);
          }
        }
      }
      return 0;
    }
    uVar13 = *(uint *)PTR_DAT_04bbc7c0;
    if ((((uVar13 == 0) ||
         (plVar30 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                              ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
        ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar30 + 0x46) != uVar13)) {
      plVar30 = (long *)0x0;
    }
    if (*(int *)(lVar21 + 0x288) != 1 && *(int *)(lVar21 + 0x288) != -1) {
LAB_013f8c34:
      uVar13 = 0;
      if (plVar30 != (long *)0x0) goto LAB_013f8c54;
      goto LAB_013f8e4c;
    }
    plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)puVar2;
    iVar12 = (**(code **)(*plVar14 + 0x60))();
    if (iVar12 < 0x11) {
      uVar13 = 1;
    }
    else {
      uVar13 = *(uint *)(lVar21 + 0x5e8);
      if (4 < uVar13) goto LAB_013f8c34;
      uVar13 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
    }
    if (plVar30 == (long *)0x0) goto LAB_013f8e4c;
LAB_013f8c54:
    lVar21 = plVar30[0x2a];
    if (((*PTR_DAT_04bbc7a8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7a8);
    }
    uVar15 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bbc7a0);
    uVar34 = 0;
    if ((int)lVar21 == 1) {
      uVar34 = uVar13;
    }
    if ((((uVar15 & 1) == 0) || (uVar34 == 0)) || (*(char *)((long)plVar30 + 0x301) == '\0'))
    goto LAB_013f8e4c;
    if (*(char *)((long)plVar30 + 0x302) != '\0') {
      puVar33 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar13 = *puVar33 ^ *puVar33 << 0xb;
      uVar34 = puVar33[3];
      *puVar33 = puVar33[1];
      puVar33[1] = puVar33[2];
      uVar13 = uVar13 >> 8 ^ uVar34 >> 0x13 ^ uVar13 ^ uVar34;
      puVar33[2] = uVar34;
      puVar33[3] = uVar13;
      if ((uint)((ulong)uVar13 * 100 >> 0x20) < 0x28) goto LAB_013f94e0;
      goto LAB_013f8e4c;
    }
    plVar30 = *(long **)PTR_DAT_04bb48c8;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
    puVar2 = local_78;
    local_78._0_4_ = 3;
    iVar12 = (int)local_78;
    uVar13 = *(uint *)(plVar30 + 0xb);
    lVar21 = plVar30[0xc];
    local_78 = puVar2;
    if ((char)plVar30[1] == '\0') {
      lVar35 = nn::oe::GetProgramTotalActiveTime();
      *plVar30 = lVar35;
      *(undefined1 *)(plVar30 + 1) = 1;
    }
    else {
      lVar35 = *plVar30;
    }
    if (uVar13 < 4) {
      iVar12 = 0;
    }
    lVar21 = *(long *)(lVar21 + (long)iVar12 * 8);
    lVar32 = *(long *)(param_1 + 0x148);
    puVar33 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar34 = puVar33[3];
    uVar13 = *puVar33 ^ *puVar33 << 0xb;
    *puVar33 = puVar33[1];
    puVar33[1] = puVar33[2];
    uVar13 = uVar13 >> 8 ^ uVar34 >> 0x13 ^ uVar13 ^ uVar34;
    puVar33[2] = uVar34;
    puVar33[3] = uVar13;
    uVar13 = (uint)((ulong)uVar13 * 100 >> 0x20);
    if (lVar32 < (lVar35 - lVar21) / 1000000000) {
      if (9 < uVar13) goto LAB_013f8e4c;
    }
    else if (0xe < uVar13) goto LAB_013f8e4c;
LAB_013f94e0:
    uVar13 = 0x30e2;
    goto LAB_013f94e4;
  }
  if (lVar21 == 0) goto LAB_013f8ff8;
  uVar13 = *(uint *)PTR_DAT_04bbc7c0;
  if ((((uVar13 == 0) ||
       (plVar30 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
      ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar30 + 0x46) != uVar13)) {
    plVar30 = (long *)0x0;
  }
  if (*(int *)(lVar21 + 0x288) == 1 || *(int *)(lVar21 + 0x288) == -1) {
    plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)puVar2;
    iVar12 = (**(code **)(*plVar14 + 0x60))();
    if (iVar12 < 0x11) {
      uVar13 = 1;
    }
    else {
      uVar13 = *(uint *)(lVar21 + 0x5e8);
      if (4 < uVar13) goto LAB_013f8c40;
      uVar13 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
    }
  }
  else {
LAB_013f8c40:
    uVar13 = 0;
  }
  if (plVar30 != (long *)0x0) {
    lVar21 = plVar30[0x2a];
    if (((*PTR_DAT_04bbc7a8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7a8);
    }
    uVar15 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bbc7a0);
    uVar34 = 0;
    if ((int)lVar21 == 1) {
      uVar34 = uVar13;
    }
    if ((((uVar15 & 1) != 0) && (uVar34 != 0)) && (*(char *)((long)plVar30 + 0x301) != '\0')) {
      if (*(char *)((long)plVar30 + 0x302) == '\0') {
        plVar30 = *(long **)PTR_DAT_04bb48c8;
        local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
        puVar2 = local_78;
        local_78._0_4_ = 3;
        iVar12 = (int)local_78;
        uVar13 = *(uint *)(plVar30 + 0xb);
        lVar21 = plVar30[0xc];
        local_78 = puVar2;
        if ((char)plVar30[1] == '\0') {
          lVar35 = nn::oe::GetProgramTotalActiveTime();
          *plVar30 = lVar35;
          *(undefined1 *)(plVar30 + 1) = 1;
        }
        else {
          lVar35 = *plVar30;
        }
        if (uVar13 < 4) {
          iVar12 = 0;
        }
        uVar13 = 10;
        if ((lVar35 - *(long *)(lVar21 + (long)iVar12 * 8)) / 1000000000 <=
            *(long *)(param_1 + 0x148)) {
          uVar13 = 0xf;
        }
      }
      else {
        uVar13 = 0x28;
      }
      puVar33 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar34 = *puVar33 ^ *puVar33 << 0xb;
      uVar20 = puVar33[3];
      *puVar33 = puVar33[1];
      puVar33[1] = puVar33[2];
      uVar34 = uVar34 >> 8 ^ uVar20 >> 0x13 ^ uVar34 ^ uVar20;
      puVar33[2] = uVar20;
      puVar33[3] = uVar34;
      puVar2 = PTR_DAT_04bb2020;
      if ((uint)((ulong)uVar34 * 100 >> 0x20) < uVar13) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        local_70 = "CatchFishFesQuestStart";
        local_78 = puVar1;
        iVar12 = FUN_02743000(&local_78);
        bVar10 = iVar12 == 0;
        FUN_02507c6c(&local_88,7,1,0,0);
        puVar9 = PTR_DAT_04bb5038;
        if ((byte)local_88 < 8) {
          do {
            local_70 = "BeyDaily_QuestStart";
            local_78 = puVar1;
            iVar12 = FUN_0274bce0(&local_88,&local_78);
            if (iVar12 != 0) {
              local_98 = puVar2 + 0x10;
              local_90 = "BeyDaily_QuestClear";
              iVar12 = FUN_0274bce0(&local_88,&local_98);
              bVar10 = (bool)(iVar12 != 0 & bVar10);
            }
            bVar4 = (byte)local_88;
            uVar15 = local_88 & 0xff;
            if ((7 < (byte)local_88) || (uVar15 + 1 == 8)) goto LAB_013f94dc;
            pbVar31 = puVar9 + uVar15 + 1;
            uVar28 = FUN_02507924(&local_88,pbVar31);
            if ((uVar28 & 1) == 0) {
              if (uVar15 + 2 == 8) goto LAB_013f94dc;
              pbVar31 = puVar9 + uVar15 + 2;
              uVar28 = FUN_02507924(&local_88,pbVar31);
              if ((uVar28 & 1) == 0) {
                if (uVar15 + 3 == 8) goto LAB_013f94dc;
                pbVar31 = puVar9 + uVar15 + 3;
                uVar28 = FUN_02507924(&local_88,pbVar31);
                if ((uVar28 & 1) == 0) {
                  if (uVar15 + 4 == 8) goto LAB_013f94dc;
                  pbVar31 = puVar9 + uVar15 + 4;
                  uVar28 = FUN_02507924(&local_88,pbVar31);
                  if ((uVar28 & 1) == 0) {
                    if (uVar15 + 5 == 8) goto LAB_013f94dc;
                    pbVar31 = puVar9 + uVar15 + 5;
                    uVar28 = FUN_02507924(&local_88,pbVar31);
                    if ((uVar28 & 1) == 0) {
                      if (uVar15 + 6 == 8) goto LAB_013f94dc;
                      pbVar31 = puVar9 + uVar15 + 6;
                      uVar28 = FUN_02507924(&local_88,pbVar31);
                      if ((uVar28 & 1) == 0) {
                        if (uVar15 + 7 == 8) goto LAB_013f94dc;
                        pbVar31 = puVar9 + uVar15 + 7;
                        uVar28 = FUN_02507924(&local_88,pbVar31);
                        if ((uVar28 & 1) == 0) {
                          if (bVar4 == 0) goto LAB_013f94dc;
                          pbVar31 = puVar9 + uVar15 + 8;
                          FUN_02507924(&local_88,pbVar31);
                        }
                      }
                    }
                  }
                }
              }
            }
            if (7 < *pbVar31) goto LAB_013f94dc;
            local_88 = CONCAT71(local_88._1_7_,*pbVar31);
          } while( true );
        }
        if (iVar12 == 0) goto LAB_013f94e0;
      }
    }
  }
LAB_013f8ff8:
  local_a0 = 0;
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 == -1) {
LAB_013f905c:
    lVar21 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
  }
  else {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
    if (0xff < (uint)(int)sVar6) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_013f905c;
    lVar21 = FUN_00a8c18c(*(undefined8 *)puVar8);
  }
  bVar4 = *(byte *)(lVar21 + 4);
  if (bVar4 - 4 < 5) {
    iVar12 = 0;
  }
  else if (bVar4 - 9 < 7) {
    iVar12 = 1;
  }
  else {
    iVar12 = (uint)(4 < bVar4 - 0x10) << 1;
  }
  local_a0 = CONCAT44(*(byte *)(lVar21 + 2) - 1,iVar12);
  if (local_7c == 1) {
    puVar18 = (undefined8 *)0x0;
    if ((*(long *)(param_1 + 0x20) != 0) && (3 < *(uint *)(param_1 + 0x18))) {
      puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x18);
      if (((DAT_051b72f0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_051b72f0), iVar12 != 0)) {
        DAT_051b72e8 = &PTR_LAB_04997628;
        __cxa_guard_release(&DAT_051b72f0);
      }
      if (puVar18 == (undefined8 *)0x0) goto LAB_013f90fc;
LAB_013f913c:
      uVar15 = (**(code **)*puVar18)(puVar18,&DAT_051b72e8);
      if ((uVar15 & 1) == 0) {
        puVar18 = (undefined8 *)0x0;
      }
    }
  }
  else {
    if (local_7c != 0) {
      return 0;
    }
    puVar18 = (undefined8 *)0x0;
    if ((*(long *)(param_1 + 0x20) != 0) && (2 < *(uint *)(param_1 + 0x18))) {
      puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
      if (((DAT_051b72f0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_051b72f0), iVar12 != 0)) {
        DAT_051b72e8 = &PTR_LAB_04997628;
        __cxa_guard_release(&DAT_051b72f0);
      }
      if (puVar18 != (undefined8 *)0x0) goto LAB_013f913c;
LAB_013f90fc:
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar13 = nn::os::GetSystemTick();
  uVar19 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  uVar13 = 0;
  uVar34 = 0;
  uVar20 = uVar19 ^ uVar19 * 0x800;
  uVar19 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 2;
  uVar19 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 3;
  uVar7 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 4;
  uVar19 = *(uint *)(puVar18 + 0x38);
  do {
    uVar3 = uVar13 & 0xffff;
    if ((int)uVar19 < 1) {
      if ((((puVar18[0x16] == 0) ||
           (puVar33 = *(uint **)(puVar18[0x16] + 8), puVar33 == (uint *)0x0)) || (*puVar33 <= uVar3)
          ) || (((uVar3 < *(uint *)(puVar18 + 0x19) &&
                 (*(char *)(puVar18[0x1a] + (ulong)uVar3) == '\0')) ||
                ((puVar33[1] == 0 || ((ushort)puVar33[2] == 0)))))) break;
      iVar12 = 0xc;
      if (*(char *)((long)puVar33 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar33 = (uint *)((ulong)(puVar33[1] * uVar3 + (uint)(ushort)puVar33[2] * 8 + iVar12) +
                        (long)puVar33);
    }
    else {
      if (uVar19 <= uVar3) break;
      uVar13 = uVar3;
      if (*(uint *)(puVar18 + 0x36) <= uVar3) {
        uVar13 = 0;
      }
      puVar33 = *(uint **)(puVar18[0x37] + (ulong)uVar13 * 8);
    }
    if (puVar33 == (uint *)0x0) break;
    iVar12 = FUN_013f1d00(param_1,puVar33,(long)&local_a0 + 4,&local_a0);
    uVar34 = iVar12 + uVar34;
    if ((uint)((ulong)(uVar20 >> 8 ^ uVar7 >> 0x13 ^ uVar20 ^ uVar7) * 100 >> 0x20) <
        (uVar34 & 0xffff)) {
      puVar25 = (uint *)(ulong)*puVar33;
      if (*puVar33 == 0) goto LAB_013f9338;
      if ((DAT_051b7230 & 1) == 0) {
        DAT_051b7230 = 1;
        DAT_051b72d4 = 0xffffffff;
        DAT_051b7234 = 0xffffffffffffffff;
        DAT_051b723c = 0xffffffffffffffff;
        DAT_051b7234._0_4_ = 0xffffffff;
        DAT_051b7244 = 0xffffffffffffffff;
        DAT_051b724c = 0xffffffffffffffff;
        DAT_051b7254 = 0xffffffffffffffff;
        DAT_051b725c = 0xffffffffffffffff;
        DAT_051b7264 = 0xffffffffffffffff;
        DAT_051b726c = 0xffffffffffffffff;
        DAT_051b7274 = 0xffffffffffffffff;
        DAT_051b727c = 0xffffffffffffffff;
        DAT_051b7284 = 0xffffffffffffffff;
        DAT_051b728c = 0xffffffffffffffff;
        DAT_051b7294 = 0xffffffffffffffff;
        DAT_051b729c = 0xffffffffffffffff;
        DAT_051b72a4 = 0xffffffffffffffff;
        DAT_051b72ac = 0xffffffffffffffff;
        DAT_051b72b4 = 0xffffffffffffffff;
        DAT_051b72bc = 0xffffffffffffffff;
        DAT_051b72c4 = 0xffffffffffffffff;
        DAT_051b72cc = 0xffffffffffffffff;
      }
      else if (-1 < (int)(uint)DAT_051b7234) {
        uVar15 = DAT_051b7234 & 0xffffffff;
        goto joined_r0x013f92e0;
      }
      uVar13 = (uint)DAT_051b7234;
      if (puVar33 == puVar25) goto LAB_013f9338;
      goto LAB_013f9508;
    }
    uVar19 = *(uint *)(puVar18 + 0x38);
    uVar26 = uVar19;
    if ((int)uVar19 < 1) {
      if ((puVar18[0x16] == 0) || (puVar33 = *(uint **)(puVar18[0x16] + 8), puVar33 == (uint *)0x0))
      {
        uVar26 = 0;
      }
      else {
        uVar26 = *puVar33;
      }
    }
    uVar13 = uVar3 + 1;
  } while (uVar26 != uVar3);
LAB_013f9870:
  uVar16 = 0;
  uVar13 = 0xfffe;
LAB_013f9878:
  *param_2 = uVar13;
  return uVar16;
LAB_013fa4ec:
  uVar13 = 0;
  goto LAB_013fa4f4;
LAB_013f94dc:
  if (bVar10) goto LAB_013f94e0;
  goto LAB_013f8ff8;
  while( true ) {
    lVar21 = 0xc;
    if (*(char *)((long)puVar33 + (10 - (long)puVar25)) != '\0') {
      lVar21 = 0x1c;
    }
    lVar21 = (long)puVar33 + (lVar21 - (long)puVar25);
    if (lVar21 == 0) goto LAB_013f9338;
    uVar15 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar25));
    DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
    if (uVar15 == 0) goto LAB_013f9338;
    puVar27 = (uint *)(lVar21 + 4);
    while (puVar27[-1] != 0x20cb67bc) {
      puVar27 = puVar27 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_013f9338;
    }
    uVar13 = *puVar27;
    uVar34 = 0;
    if (uVar13 != 0xffffffff) {
      uVar34 = uVar13;
    }
    DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,uVar34);
    if (-1 < (int)uVar34) break;
LAB_013f9508:
    if (uVar13 != 0xffffffff) goto LAB_013f9338;
  }
  uVar15 = (ulong)uVar34;
joined_r0x013f92e0:
  if ((undefined2 *)((long)puVar33 + uVar15) == (undefined2 *)0x0) {
LAB_013f9338:
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined2 *)((long)puVar33 + uVar15);
  }
  uVar15 = FUN_013f5600(param_1,uVar17);
  if ((uVar15 & 1) != 0) {
    puVar25 = (uint *)(ulong)*puVar33;
    if (*puVar33 == 0) {
LAB_013f95c0:
      uVar17 = 0;
    }
    else {
      if ((DAT_051b7230 & 1) == 0) {
        DAT_051b7230 = 1;
        DAT_051b72d4 = 0xffffffff;
        DAT_051b7234 = 0xffffffffffffffff;
        DAT_051b723c = 0xffffffffffffffff;
        DAT_051b7234._0_4_ = 0xffffffff;
        DAT_051b7244 = 0xffffffffffffffff;
        DAT_051b724c = 0xffffffffffffffff;
        DAT_051b7254 = 0xffffffffffffffff;
        DAT_051b725c = 0xffffffffffffffff;
        DAT_051b7264 = 0xffffffffffffffff;
        DAT_051b726c = 0xffffffffffffffff;
        DAT_051b7274 = 0xffffffffffffffff;
        DAT_051b727c = 0xffffffffffffffff;
        DAT_051b7284 = 0xffffffffffffffff;
        DAT_051b728c = 0xffffffffffffffff;
        DAT_051b7294 = 0xffffffffffffffff;
        DAT_051b729c = 0xffffffffffffffff;
        DAT_051b72a4 = 0xffffffffffffffff;
        DAT_051b72ac = 0xffffffffffffffff;
        DAT_051b72b4 = 0xffffffffffffffff;
        DAT_051b72bc = 0xffffffffffffffff;
        DAT_051b72c4 = 0xffffffffffffffff;
        DAT_051b72cc = 0xffffffffffffffff;
LAB_013f95b8:
        uVar13 = (uint)DAT_051b7234;
        if (puVar33 != puVar25) {
          do {
            if (uVar13 != 0xffffffff) goto LAB_013f95c0;
            lVar21 = 0xc;
            if (*(char *)((long)puVar33 + (10 - (long)puVar25)) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar33 + (lVar21 - (long)puVar25);
            if (lVar21 == 0) goto LAB_013f95c0;
            uVar15 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar25));
            DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
            if (uVar15 == 0) goto LAB_013f95c0;
            puVar27 = (uint *)(lVar21 + 4);
            while (puVar27[-1] != 0x20cb67bc) {
              puVar27 = puVar27 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_013f95c0;
            }
            uVar13 = *puVar27;
            uVar34 = 0;
            if (uVar13 != 0xffffffff) {
              uVar34 = uVar13;
            }
            DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,uVar34);
          } while ((int)uVar34 < 0);
          puVar23 = (undefined2 *)((long)puVar33 + (ulong)uVar34);
          if (puVar23 != (undefined2 *)0x0) goto LAB_013f9370;
        }
        goto LAB_013f95c0;
      }
      if ((int)(uint)DAT_051b7234 < 0) goto LAB_013f95b8;
      puVar23 = (undefined2 *)((long)puVar33 + (DAT_051b7234 & 0xffffffff));
      if (puVar23 == (undefined2 *)0x0) goto LAB_013f95c0;
LAB_013f9370:
      uVar17 = *puVar23;
    }
    uVar15 = FUN_013f4ed0(param_1,uVar17);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(param_1 + 0x1408) != '\0') {
        puVar25 = (uint *)(ulong)*puVar33;
        if (*puVar33 != 0) {
          if ((DAT_051b7230 & 1) == 0) {
            DAT_051b7230 = 1;
            DAT_051b72d4 = 0xffffffff;
            DAT_051b7234 = 0xffffffffffffffff;
            DAT_051b723c = 0xffffffffffffffff;
            DAT_051b7234._0_4_ = 0xffffffff;
            DAT_051b7244 = 0xffffffffffffffff;
            DAT_051b724c = 0xffffffffffffffff;
            DAT_051b7254 = 0xffffffffffffffff;
            DAT_051b725c = 0xffffffffffffffff;
            DAT_051b7264 = 0xffffffffffffffff;
            DAT_051b726c = 0xffffffffffffffff;
            DAT_051b7274 = 0xffffffffffffffff;
            DAT_051b727c = 0xffffffffffffffff;
            DAT_051b7284 = 0xffffffffffffffff;
            DAT_051b728c = 0xffffffffffffffff;
            DAT_051b7294 = 0xffffffffffffffff;
            DAT_051b729c = 0xffffffffffffffff;
            DAT_051b72a4 = 0xffffffffffffffff;
            DAT_051b72ac = 0xffffffffffffffff;
            DAT_051b72b4 = 0xffffffffffffffff;
            DAT_051b72bc = 0xffffffffffffffff;
            DAT_051b72c4 = 0xffffffffffffffff;
            DAT_051b72cc = 0xffffffffffffffff;
LAB_013f96d8:
            uVar13 = (uint)DAT_051b7234;
            if (puVar33 == puVar25) {
LAB_013f96e0:
              puVar25 = (uint *)0x0;
            }
            else {
              do {
                if (uVar13 != 0xffffffff) goto LAB_013f96e0;
                lVar21 = 0xc;
                if (*(char *)((long)puVar33 + (10 - (long)puVar25)) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar33 + (lVar21 - (long)puVar25);
                if (lVar21 == 0) goto LAB_013f96e0;
                uVar15 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar25));
                DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
                if (uVar15 == 0) goto LAB_013f96e0;
                puVar27 = (uint *)(lVar21 + 4);
                while (puVar27[-1] != 0x20cb67bc) {
                  puVar27 = puVar27 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_013f96e0;
                }
                uVar13 = *puVar27;
                uVar34 = 0;
                if (uVar13 != 0xffffffff) {
                  uVar34 = uVar13;
                }
                DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,uVar34);
              } while ((int)uVar34 < 0);
              puVar22 = (ushort *)((long)puVar33 + (ulong)uVar34);
              if (puVar22 != (ushort *)0x0) goto LAB_013f9604;
              puVar25 = (uint *)0x0;
            }
          }
          else {
            if ((int)(uint)DAT_051b7234 < 0) goto LAB_013f96d8;
            puVar22 = (ushort *)((long)puVar33 + (DAT_051b7234 & 0xffffffff));
            puVar25 = (uint *)0x0;
            if (puVar22 == (ushort *)0x0) goto LAB_013f96e4;
LAB_013f9604:
            puVar25 = (uint *)(ulong)*puVar22;
          }
        }
LAB_013f96e4:
        local_98 = (undefined *)((ulong)puVar25 & 0xffff);
        FUN_0277d4ac(&local_98);
        puVar2 = PTR_DAT_04bb43c0;
        local_68 = 0;
        local_78 = PTR_DAT_04bc0510 + 0x10;
        local_70 = local_98;
        lVar21 = *(long *)PTR_DAT_04bb43c0;
        uVar13 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar2 == 0) {
LAB_013f982c:
          uVar11 = 0xbc;
        }
        else {
          lVar21 = *(long *)(lVar21 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar13) ||
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_013f982c;
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar13 = FUN_0277d6c4(&local_98);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar13) ||
             (puVar25 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8),
             puVar25 == (uint *)0x0)) goto LAB_013f982c;
          uVar13 = *puVar25;
          uVar11 = 0;
          if ((uVar13 != 0) && (puVar25 != (uint *)(ulong)uVar13)) {
            puVar27 = (uint *)((long)puVar25 - (long)(ulong)uVar13);
            uVar11 = 0;
            if (*puVar27 != 0) {
              uVar13 = puVar27[1];
              if ((uVar13 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
                lVar21 = 0xc;
                if (*(char *)((long)puVar27 + 10) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar27 + lVar21 + (ulong)(ushort)puVar27[2] * 8;
                if (lVar21 != 0) {
                  uVar34 = 0;
                  if ((ulong)uVar13 != 0) {
                    uVar34 = (uint)((ulong)((long)puVar25 - lVar21) / (ulong)uVar13);
                  }
                  if (*puVar27 <= uVar34) {
                    uVar34 = 0xffffffff;
                  }
                  if ((uVar34 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar34 * 2),
                     uVar11 < 0xbd)) goto LAB_013f9830;
                }
              }
              uVar11 = 0;
            }
          }
        }
LAB_013f9830:
        if (uVar11 != 0x6a) goto LAB_013f9870;
      }
      puVar25 = (uint *)(ulong)*puVar33;
      uVar13 = 0;
      if (*puVar33 != 0) {
        if ((DAT_051b7230 & 1) == 0) {
          DAT_051b7230 = 1;
          DAT_051b72d4 = 0xffffffff;
          DAT_051b7234 = 0xffffffffffffffff;
          DAT_051b723c = 0xffffffffffffffff;
          DAT_051b7234._0_4_ = 0xffffffff;
          DAT_051b7244 = 0xffffffffffffffff;
          DAT_051b724c = 0xffffffffffffffff;
          DAT_051b7254 = 0xffffffffffffffff;
          DAT_051b725c = 0xffffffffffffffff;
          DAT_051b7264 = 0xffffffffffffffff;
          DAT_051b726c = 0xffffffffffffffff;
          DAT_051b7274 = 0xffffffffffffffff;
          DAT_051b727c = 0xffffffffffffffff;
          DAT_051b7284 = 0xffffffffffffffff;
          DAT_051b728c = 0xffffffffffffffff;
          DAT_051b7294 = 0xffffffffffffffff;
          DAT_051b729c = 0xffffffffffffffff;
          DAT_051b72a4 = 0xffffffffffffffff;
          DAT_051b72ac = 0xffffffffffffffff;
          DAT_051b72b4 = 0xffffffffffffffff;
          DAT_051b72bc = 0xffffffffffffffff;
          DAT_051b72c4 = 0xffffffffffffffff;
          DAT_051b72cc = 0xffffffffffffffff;
LAB_013f98e0:
          if (puVar33 == puVar25) {
LAB_013f98e8:
            *param_2 = 0;
            return 1;
          }
          uVar16 = 1;
          uVar13 = (uint)DAT_051b7234;
          do {
            if (uVar13 != 0xffffffff) goto LAB_013f98e8;
            lVar21 = 0xc;
            if (*(char *)((long)puVar33 + (10 - (long)puVar25)) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar33 + (lVar21 - (long)puVar25);
            uVar13 = 0;
            if (lVar21 == 0) goto LAB_013f94e4;
            uVar15 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar25));
            DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
            if (uVar15 == 0) goto LAB_013f98e8;
            puVar27 = (uint *)(lVar21 + 4);
            while (puVar27[-1] != 0x20cb67bc) {
              uVar13 = 0;
              puVar27 = puVar27 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_013f9878;
            }
            uVar13 = *puVar27;
            uVar34 = 0;
            if (uVar13 != 0xffffffff) {
              uVar34 = uVar13;
            }
            DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,uVar34);
          } while ((int)uVar34 < 0);
          puVar22 = (ushort *)((long)puVar33 + (ulong)uVar34);
          if (puVar22 == (ushort *)0x0) {
            uVar13 = 0;
            goto LAB_013f94e4;
          }
        }
        else {
          if ((int)(uint)DAT_051b7234 < 0) goto LAB_013f98e0;
          puVar22 = (ushort *)((long)puVar33 + (DAT_051b7234 & 0xffffffff));
          uVar13 = 0;
          if (puVar22 == (ushort *)0x0) goto LAB_013f94e4;
        }
        uVar13 = (uint)*puVar22;
      }
LAB_013f94e4:
      uVar16 = 1;
      goto LAB_013f9878;
    }
  }
  goto LAB_013f9870;
  while( true ) {
    lVar21 = 0xc;
    if (*(char *)((long)puVar33 + (10 - (long)puVar25)) != '\0') {
      lVar21 = 0x1c;
    }
    lVar21 = (long)puVar33 + (lVar21 - (long)puVar25);
    if (lVar21 == 0) goto LAB_013fa4ec;
    uVar15 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar25));
    DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
    if (uVar15 == 0) goto LAB_013fa4ec;
    puVar27 = (uint *)(lVar21 + 4);
    while (puVar27[-1] != 0x20cb67bc) {
      puVar27 = puVar27 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_013fa4ec;
    }
    uVar13 = *puVar27;
    uVar34 = 0;
    if (uVar13 != 0xffffffff) {
      uVar34 = uVar13;
    }
    DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,uVar34);
    if (-1 < (int)uVar34) break;
LAB_013fa510:
    if (uVar13 != 0xffffffff) goto LAB_013fa4ec;
  }
LAB_013fa490:
  uVar13 = 0;
  if ((ushort *)((long)puVar33 + (ulong)uVar34) != (ushort *)0x0) {
    uVar13 = (uint)*(ushort *)((long)puVar33 + (ulong)uVar34);
  }
LAB_013fa4f4:
  *param_2 = uVar13;
  return 1;
}

