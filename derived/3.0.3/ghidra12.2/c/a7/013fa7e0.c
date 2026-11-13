
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_013fa7e0(long param_1,uint *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            byte *param_6,ulong param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined2 uVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  char *pcVar12;
  undefined2 *puVar13;
  ushort *puVar14;
  char cVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  uint local_1a0;
  undefined4 local_19c;
  undefined *local_198;
  uint local_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  uint local_180 [65];
  uint local_7c;
  
  fVar23 = 0.0;
  *param_2 = 0xfffe;
  puVar3 = PTR_DAT_04bbcae8;
  local_180[0x3c] = 0;
  local_180[0x3d] = 0;
  local_180[0x3e] = 0;
  local_180[0x3f] = 0;
  uVar21 = 0;
  local_180[0x38] = 0;
  local_180[0x39] = 0;
  local_180[0x3a] = 0;
  local_180[0x3b] = 0;
  local_180[0x34] = 0;
  local_180[0x35] = 0;
  local_180[0x36] = 0;
  local_180[0x37] = 0;
  local_180[0x30] = 0;
  local_180[0x31] = 0;
  local_180[0x32] = 0;
  local_180[0x33] = 0;
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
  puVar1 = PTR_DAT_04bc0510 + 0x10;
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
  pcVar7 = PTR_DAT_04bbcae0;
LAB_013fa8f8:
  if (0 < (int)*(uint *)(param_3 + 0x1c0)) {
    if (*(uint *)(param_3 + 0x1c0) <= uVar21) goto LAB_013fb25c;
    uVar17 = uVar21 & 0xffffffff;
    if (*(uint *)(param_3 + 0x1b0) <= uVar21) {
      uVar17 = 0;
    }
    puVar22 = *(uint **)(*(long *)(param_3 + 0x1b8) + uVar17 * 8);
joined_r0x013fa9a8:
    if (puVar22 == (uint *)0x0) {
      return 0;
    }
    puVar10 = (uint *)(ulong)*puVar22;
    if (*puVar22 == 0) {
LAB_013faa10:
      uVar6 = 0;
    }
    else {
      if ((DAT_051b7230 & 1) == 0) {
        DAT_051b7230 = 1;
        uVar17 = 0xffffffff;
        DAT_051b72d4 = 0xffffffff;
        DAT_051b7234 = 0xffffffffffffffff;
        DAT_051b723c = 0xffffffffffffffff;
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
LAB_013faa08:
        if (puVar22 != puVar10) {
          do {
            if (uVar17 != 0xffffffff) goto LAB_013faa10;
            lVar11 = 0xc;
            if (*(char *)((long)puVar22 + (10 - (long)puVar10)) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar22 + (lVar11 - (long)puVar10);
            if (lVar11 == 0) goto LAB_013faa10;
            uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar10));
            DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
            if (uVar17 == 0) goto LAB_013faa10;
            puVar18 = (uint *)(lVar11 + 4);
            while (puVar18[-1] != 0x20cb67bc) {
              puVar18 = puVar18 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_013faa10;
            }
            uVar17 = (ulong)*puVar18;
            uVar19 = 0;
            if (*puVar18 != 0xffffffff) {
              uVar19 = uVar17;
            }
            DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,(int)uVar19);
          } while ((int)uVar19 < 0);
          puVar14 = (ushort *)(uVar19 + (long)puVar22);
          if (puVar14 != (ushort *)0x0) goto LAB_013fa9cc;
        }
        goto LAB_013faa10;
      }
      uVar17 = DAT_051b7234 & 0xffffffff;
      if ((int)DAT_051b7234 < 0) goto LAB_013faa08;
      puVar14 = (ushort *)(uVar17 + (long)puVar22);
      if (puVar14 == (ushort *)0x0) goto LAB_013faa10;
LAB_013fa9cc:
      uVar6 = (uint)*puVar14;
    }
    uVar5 = uVar6 - *(ushort *)(param_1 + 0x348);
    uVar17 = param_7;
    if (uVar5 < *(uint *)(param_1 + 0x328)) {
      puVar10 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar5 * 8);
      if (puVar10 != (uint *)0x0) {
        if (*puVar10 != 0) {
          cVar15 = *pcVar7;
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *pcVar7 = '\x01';
              *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
              *(undefined4 *)(puVar3 + 0x48) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              uVar5 = *puVar10;
            }
            else {
              uVar5 = *(uint *)(puVar3 + 0x34);
              if (-1 < (int)uVar5) {
                if ((char *)((ulong)uVar5 + (long)puVar10) == (char *)0x0) break;
                if (*(char *)((ulong)uVar5 + (long)puVar10) == '\0') break;
                local_19c = 0;
                local_1a0 = uVar6;
                FUN_0277d4ac(&local_1a0);
                local_188 = 0;
                local_190 = local_1a0;
                uStack_18c = local_19c;
                lVar11 = *(long *)PTR_DAT_04bb43c0;
                local_198 = puVar1;
                uVar5 = FUN_0277d6c4(&local_190);
                if (*(long *)PTR_DAT_04bb43c0 == 0) {
                  uVar5 = 0xbc;
                }
                else {
                  lVar11 = *(long *)(lVar11 + 0x57e58);
                  uVar16 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  uVar5 = 0xbc;
                  if (uVar16 < *(uint *)(lVar11 + 0x1d8)) {
                    if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar16 * 8) == 0) {
                      uVar5 = 0xbc;
                    }
                    else {
                      lVar11 = *(long *)PTR_DAT_04bc0428;
                      uVar5 = FUN_0277d6c4(&local_1a0);
                      uVar16 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                      uVar5 = 0xbc;
                      if (uVar16 < *(uint *)(lVar11 + 0x1d8)) {
                        puVar10 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar16 * 8);
                        if (puVar10 == (uint *)0x0) {
                          uVar5 = 0xbc;
                        }
                        else {
                          uVar16 = *puVar10;
                          uVar5 = 0;
                          if ((uVar16 != 0) && (puVar10 != (uint *)(ulong)uVar16)) {
                            puVar18 = (uint *)((long)puVar10 - (long)(ulong)uVar16);
                            uVar5 = 0;
                            if (*puVar18 != 0) {
                              uVar5 = puVar18[1];
                              if ((uVar5 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                                lVar11 = 0xc;
                                if (*(char *)((long)puVar18 + 10) != '\0') {
                                  lVar11 = 0x1c;
                                }
                                lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
                                if (lVar11 != 0) {
                                  uVar16 = 0;
                                  if ((ulong)uVar5 != 0) {
                                    uVar16 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar5);
                                  }
                                  if (*puVar18 <= uVar16) {
                                    uVar16 = 0xffffffff;
                                  }
                                  if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
                                     (uVar5 = (uint)*(ushort *)
                                                     (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                     (long)(int)uVar16 * 2), uVar5 < 0xbd))
                                  goto LAB_013fad98;
                                }
                              }
                              uVar5 = 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
LAB_013fad98:
                local_7c = uVar5;
                if (uVar5 != 0x6a) goto LAB_013fa8f0;
                uVar6 = uVar6 - *(ushort *)(param_1 + 0x348);
                if ((uVar6 < *(uint *)(param_1 + 0x328)) &&
                   (puVar10 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar6 * 8),
                   puVar10 != (uint *)0x0)) {
                  uVar5 = *puVar10;
                  uVar16 = 0;
                  if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
                    puVar18 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
                    uVar16 = 0;
                    if (*puVar18 != 0) {
                      uVar5 = puVar18[1];
                      if ((uVar5 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                        lVar11 = 0xc;
                        if (*(char *)((long)puVar18 + 10) != '\0') {
                          lVar11 = 0x1c;
                        }
                        lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
                        if (lVar11 != 0) {
                          uVar16 = 0;
                          if ((ulong)uVar5 != 0) {
                            uVar16 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar5);
                          }
                          if (*puVar18 <= uVar16) {
                            uVar16 = 0xffffffff;
                          }
                          if ((uVar16 < DAT_051b69d0) &&
                             (uVar16 = (uint)*(ushort *)(DAT_051b69d8 + (long)(int)uVar16 * 2),
                             uVar16 < 7)) goto LAB_013fae4c;
                        }
                      }
                      goto LAB_013fae48;
                    }
                  }
                }
                else {
LAB_013fae48:
                  uVar16 = 0;
                }
LAB_013fae4c:
                local_198 = (undefined *)CONCAT44(local_198._4_4_,uVar16);
                if ((6 < uVar16) || ((1 << (ulong)(uVar16 & 0x1f) & (uint)*param_6) == 0))
                goto LAB_013fa8f0;
                if ((param_7 & 1) != 0) {
                  lVar11 = *(long *)PTR_DAT_04bb4920;
                  if ((*(long *)(lVar11 + 0x218) == 0) ||
                     (**(char **)(lVar11 + 0x220) != '\0' || (*(char **)(lVar11 + 0x220))[1] != '\0'
                     )) {
                    if (*(uint *)(param_1 + 0x328) <= uVar6) goto LAB_013faf6c;
                    puVar10 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar6 * 8);
                    local_7c = 0;
                    if (((puVar10 != (uint *)0x0) && (uVar6 = *puVar10, uVar6 != 0)) &&
                       (puVar10 != (uint *)(ulong)uVar6)) {
                      puVar18 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
                      local_7c = 0;
                      if (*puVar18 != 0) {
                        uVar6 = puVar18[1];
                        if ((uVar6 == 0) || ((ulong)(ushort)puVar18[2] == 0)) {
LAB_013faf6c:
                          local_7c = 0;
                        }
                        else {
                          lVar2 = 0xc;
                          if (*(char *)((long)puVar18 + 10) != '\0') {
                            lVar2 = 0x1c;
                          }
                          lVar2 = (long)puVar18 + lVar2 + (ulong)(ushort)puVar18[2] * 8;
                          if (lVar2 != 0) {
                            uVar5 = 0;
                            if ((ulong)uVar6 != 0) {
                              uVar5 = (uint)((ulong)((long)puVar10 - lVar2) / (ulong)uVar6);
                            }
                            if (*puVar18 <= uVar5) {
                              uVar5 = 0xffffffff;
                            }
                            if (uVar5 < *(uint *)PTR_DAT_04bbcad8) {
                              local_7c = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bbcad8 + 8) +
                                                (long)(int)uVar5 * 2);
                              if (local_7c < 9) goto LAB_013faf70;
                              goto LAB_013faf6c;
                            }
                          }
                          local_7c = 0;
                        }
                      }
                    }
LAB_013faf70:
                    uVar17 = param_7 & 0xffffffff;
                    pcVar7 = PTR_DAT_04bbcae0;
                    if (*(char *)(lVar11 + 0x228) != '\0') {
                      if (*(long *)(lVar11 + 0x218) == 0) goto LAB_013fb068;
                      pcVar12 = *(char **)(lVar11 + 0x220);
                      if (*pcVar12 != '\0' || pcVar12[1] != '\0') {
                        local_1a0 = local_7c;
                        if (local_7c < 9) {
                          local_198 = (undefined *)CONCAT44(local_198._4_4_,local_7c);
                          uVar6 = local_7c + 7;
                          if (-1 < (int)local_7c) {
                            uVar6 = local_7c;
                          }
                          if ((uint)((int)uVar6 >> 3) < 2) {
                            local_198 = (undefined *)CONCAT44(local_198._4_4_,local_7c);
                            if (((byte)pcVar12[(uint)((int)uVar6 >> 3)] >> (ulong)(local_7c & 7) & 1
                                ) != 0) goto LAB_013fb068;
                            uVar21 = uVar21 + 1;
                            param_7 = uVar17;
                            goto LAB_013fa8f8;
                          }
                        }
                      }
                    }
                    break;
                  }
                }
                puVar10 = (uint *)(ulong)*puVar22;
                if (*puVar22 == 0) goto LAB_013fb030;
                if ((DAT_051b7230 & 1) == 0) {
                  DAT_051b7230 = 1;
                  uVar17 = 0xffffffff;
                  DAT_051b7234 = 0xffffffffffffffff;
                  DAT_051b723c = 0xffffffffffffffff;
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
                  uVar17 = DAT_051b7234 & 0xffffffff;
                  uVar19 = uVar17;
                  if (-1 < (int)DAT_051b7234) goto joined_r0x013faeb0;
                }
                if (puVar22 == puVar10) goto LAB_013fb030;
                goto LAB_013fb0a8;
              }
              if (uVar5 != 0xffffffff) break;
              uVar5 = *puVar10;
            }
            if (uVar5 == 0) break;
            puVar18 = (uint *)(ulong)uVar5;
            if (puVar10 == puVar18) break;
            lVar11 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar18)) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar10 + (lVar11 - (long)puVar18);
            if (lVar11 == 0) break;
            uVar19 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar18));
            *(undefined4 *)(puVar3 + 0x34) = 0xfffffffe;
            if (uVar19 == 0) break;
            piVar20 = (int *)(lVar11 + 4);
            while (piVar20[-1] != 0x3dc49bc2) {
              piVar20 = piVar20 + 2;
              uVar19 = uVar19 - 1;
              if (uVar19 == 0) goto LAB_013fa8f4;
            }
            iVar9 = 0;
            if (*piVar20 != -1) {
              iVar9 = *piVar20;
            }
            *(int *)(puVar3 + 0x34) = iVar9;
            if (*puVar10 == 0) break;
          } while( true );
        }
      }
    }
    goto LAB_013fa8f4;
  }
  lVar11 = *(long *)(param_3 + 0xb0);
  if (lVar11 != 0) {
    uVar17 = 0;
    if (*(uint **)(lVar11 + 8) != (uint *)0x0) {
      uVar17 = (ulong)**(uint **)(lVar11 + 8);
    }
    if (uVar21 < uVar17) {
      if (lVar11 == 0) {
        return 0;
      }
      puVar22 = *(uint **)(lVar11 + 8);
      if (puVar22 == (uint *)0x0) {
        return 0;
      }
      if ((uVar21 < *(uint *)(param_3 + 200)) &&
         (*(char *)(*(long *)(param_3 + 0xd0) + uVar21) == '\0')) {
        return 0;
      }
      if (*puVar22 <= uVar21) {
        return 0;
      }
      if (puVar22[1] == 0) {
        return 0;
      }
      if ((ushort)puVar22[2] == 0) {
        return 0;
      }
      iVar9 = 0xc;
      if (*(char *)((long)puVar22 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar22 = (uint *)((ulong)(puVar22[1] * (uint)uVar21 + (uint)(ushort)puVar22[2] * 8 + iVar9) +
                        (long)puVar22);
      goto joined_r0x013fa9a8;
    }
  }
LAB_013fb25c:
  if (fVar23 == 0.0) {
    return 0;
  }
  uVar6 = nn::os::GetSystemTick();
  uVar5 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar21 = 0;
  uVar6 = uVar5 ^ uVar5 * 0x800;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  fVar24 = 0.0;
  goto LAB_013fb338;
  while( true ) {
    lVar11 = 0xc;
    if (*(char *)((long)puVar22 + (10 - (long)puVar10)) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar22 + (lVar11 - (long)puVar10);
    if (lVar11 == 0) goto LAB_013fb030;
    uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar10));
    DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
    if (uVar17 == 0) goto LAB_013fb030;
    puVar18 = (uint *)(lVar11 + 4);
    while (puVar18[-1] != 0x20cb67bc) {
      puVar18 = puVar18 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_013fb030;
    }
    uVar17 = (ulong)*puVar18;
    uVar19 = 0;
    if (*puVar18 != 0xffffffff) {
      uVar19 = uVar17;
    }
    DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,(int)uVar19);
    if (-1 < (int)uVar19) break;
LAB_013fb0a8:
    if (uVar17 != 0xffffffff) goto LAB_013fb030;
  }
joined_r0x013faeb0:
  if ((undefined2 *)(uVar19 + (long)puVar22) == (undefined2 *)0x0) {
LAB_013fb030:
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined2 *)(uVar19 + (long)puVar22);
  }
  uVar17 = FUN_013f4ed0(param_1,uVar8);
  if ((uVar17 & 1) == 0) {
    uVar21 = uVar21 + 1;
    pcVar7 = PTR_DAT_04bbcae0;
    param_7 = param_7 & 0xffffffff;
    goto LAB_013fa8f8;
  }
LAB_013fb068:
  puVar10 = (uint *)(ulong)*puVar22;
  if (*puVar22 != 0) {
    if ((DAT_051b7230 & 1) != 0) {
      uVar17 = DAT_051b7234 & 0xffffffff;
      if ((int)DAT_051b7234 < 0) goto LAB_013fb148;
      puVar13 = (undefined2 *)(uVar17 + (long)puVar22);
      if (puVar13 == (undefined2 *)0x0) goto LAB_013fb150;
LAB_013fb088:
      uVar8 = *puVar13;
      goto LAB_013fb154;
    }
    DAT_051b7230 = 1;
    uVar17 = 0xffffffff;
    DAT_051b72d4 = 0xffffffff;
    DAT_051b7234 = 0xffffffffffffffff;
    DAT_051b723c = 0xffffffffffffffff;
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
LAB_013fb148:
    if (puVar22 != puVar10) {
      do {
        if (uVar17 != 0xffffffff) goto LAB_013fb150;
        lVar11 = 0xc;
        if (*(char *)((long)puVar22 + (10 - (long)puVar10)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar22 + (lVar11 - (long)puVar10);
        if (lVar11 == 0) goto LAB_013fb150;
        uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar10));
        DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
        if (uVar17 == 0) goto LAB_013fb150;
        puVar18 = (uint *)(lVar11 + 4);
        while (puVar18[-1] != 0x20cb67bc) {
          puVar18 = puVar18 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_013fb150;
        }
        uVar17 = (ulong)*puVar18;
        uVar19 = 0;
        if (*puVar18 != 0xffffffff) {
          uVar19 = uVar17;
        }
        DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,(int)uVar19);
      } while ((int)uVar19 < 0);
      puVar13 = (undefined2 *)(uVar19 + (long)puVar22);
      if (puVar13 != (undefined2 *)0x0) goto LAB_013fb088;
    }
  }
LAB_013fb150:
  uVar8 = 0;
LAB_013fb154:
  uVar17 = FUN_013f5600(param_1,uVar8);
  if ((uVar17 & 1) != 0) {
    uVar4 = FUN_013f1d00(param_1,puVar22,param_4,param_5);
    fVar23 = fVar23 + (float)uVar4;
    if (uVar21 < 0x800) {
      uVar17 = uVar21 >> 3 & 0x1ffffffffffffffc;
      *(uint *)((long)local_180 + uVar17) =
           *(uint *)((long)local_180 + uVar17) | 1 << (ulong)((uint)uVar21 & 0x1f);
    }
  }
LAB_013fa8f0:
  pcVar7 = PTR_DAT_04bbcae0;
  uVar17 = param_7 & 0xffffffff;
LAB_013fa8f4:
  uVar21 = uVar21 + 1;
  param_7 = uVar17;
  goto LAB_013fa8f8;
LAB_013fb338:
  uVar16 = *(uint *)(param_3 + 0x1c0);
  uVar17 = (ulong)uVar16;
  if ((int)uVar16 < 1) {
    uVar17 = 0;
    if (*(long *)(param_3 + 0xb0) != 0) {
      puVar22 = *(uint **)(*(long *)(param_3 + 0xb0) + 8);
      uVar17 = 0;
      if (puVar22 != (uint *)0x0) {
        uVar17 = (ulong)*puVar22;
      }
    }
  }
  if (uVar17 <= uVar21) {
    return 0;
  }
  if ((local_180[uVar21 >> 5 & 0x7ffffff] >> (ulong)((uint)uVar21 & 0x1f) & 1) != 0) {
    if ((int)uVar16 < 1) {
      if (*(long *)(param_3 + 0xb0) == 0) {
        return 0;
      }
      puVar22 = *(uint **)(*(long *)(param_3 + 0xb0) + 8);
      if (puVar22 == (uint *)0x0) {
        return 0;
      }
      if ((uVar21 < *(uint *)(param_3 + 200)) &&
         (*(char *)(*(long *)(param_3 + 0xd0) + uVar21) == '\0')) {
        return 0;
      }
      if (*puVar22 <= uVar21) {
        return 0;
      }
      if (puVar22[1] == 0) {
        return 0;
      }
      if ((ushort)puVar22[2] == 0) {
        return 0;
      }
      iVar9 = 0xc;
      if (*(char *)((long)puVar22 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar22 = (uint *)((ulong)(puVar22[1] * (uint)uVar21 + (uint)(ushort)puVar22[2] * 8 + iVar9) +
                        (long)puVar22);
    }
    else {
      if (uVar16 <= uVar21) {
        return 0;
      }
      uVar17 = uVar21 & 0xffffffff;
      if (*(uint *)(param_3 + 0x1b0) <= uVar21) {
        uVar17 = 0;
      }
      puVar22 = *(uint **)(*(long *)(param_3 + 0x1b8) + uVar17 * 8);
    }
    if (puVar22 == (uint *)0x0) {
      return 0;
    }
    puVar10 = (uint *)(ulong)*puVar22;
    if (*puVar22 == 0) {
LAB_013fb310:
      uVar16 = 0;
    }
    else {
      if ((DAT_051b7230 & 1) == 0) {
        DAT_051b72d4 = 0xffffffff;
        DAT_051b7230 = 1;
        uVar17 = 0xffffffff;
        DAT_051b7234 = 0xffffffffffffffff;
        DAT_051b723c = 0xffffffffffffffff;
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
LAB_013fb480:
        if (puVar22 != puVar10) {
          do {
            if (uVar17 != 0xffffffff) goto LAB_013fb310;
            lVar11 = 0xc;
            if (*(char *)((long)puVar22 + (10 - (long)puVar10)) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar22 + (lVar11 - (long)puVar10);
            if (lVar11 == 0) goto LAB_013fb310;
            uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar10));
            DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,0xfffffffe);
            if (uVar17 == 0) goto LAB_013fb310;
            puVar18 = (uint *)(lVar11 + 4);
            while (puVar18[-1] != 0x20cb67bc) {
              puVar18 = puVar18 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_013fb310;
            }
            uVar17 = (ulong)*puVar18;
            uVar19 = 0;
            if (*puVar18 != 0xffffffff) {
              uVar19 = uVar17;
            }
            DAT_051b7234 = CONCAT44(DAT_051b7234._4_4_,(int)uVar19);
          } while ((int)uVar19 < 0);
          puVar14 = (ushort *)(uVar19 + (long)puVar22);
          if (puVar14 != (ushort *)0x0) goto LAB_013fb43c;
        }
        goto LAB_013fb310;
      }
      uVar17 = DAT_051b7234 & 0xffffffff;
      if ((int)DAT_051b7234 < 0) goto LAB_013fb480;
      puVar14 = (ushort *)(uVar17 + (long)puVar22);
      if (puVar14 == (ushort *)0x0) goto LAB_013fb310;
LAB_013fb43c:
      uVar16 = (uint)*puVar14;
    }
    uVar4 = FUN_013f1d00(param_1,puVar22,param_4,param_5);
    fVar24 = fVar24 + (float)uVar4;
    if (fVar23 * ((float)((uVar6 >> 8 ^ uVar5 >> 0x13 ^ uVar6 ^ uVar5) >> 9 | 0x3f800000) + -1.0) +
        0.0 < fVar24) {
      *param_2 = uVar16;
      return 1;
    }
  }
  uVar21 = uVar21 + 1;
  goto LAB_013fb338;
}

