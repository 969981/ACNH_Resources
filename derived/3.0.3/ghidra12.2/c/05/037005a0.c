
/* WARNING: Type propagation algorithm not settling */

void FUN_037005a0(long param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  char *__src;
  long lVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  char *pcVar26;
  uint uVar27;
  ulong uVar28;
  char cVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  char *pcVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  int local_378;
  uint local_374;
  undefined *local_370;
  char *pcStack_368;
  undefined *local_360;
  char *local_358;
  undefined4 local_350;
  char local_34c [31];
  undefined1 local_32d;
  undefined8 local_328;
  undefined8 *local_320;
  undefined8 *******local_318;
  undefined8 *******pppppppuStack_310;
  undefined8 *******local_308;
  undefined8 *******local_300;
  undefined8 *******local_2f8;
  undefined8 *******local_2f0;
  undefined8 *******local_2e8;
  undefined8 *******local_2e0;
  undefined8 *******local_2d8;
  undefined8 *******local_2d0;
  undefined8 *******local_2c8;
  undefined8 *******local_2c0;
  undefined8 *******local_2b8;
  undefined8 *******local_2b0;
  undefined8 *******local_2a8;
  undefined8 ******local_2a0;
  undefined8 *****local_298;
  undefined8 ****local_290;
  undefined8 ***local_288;
  undefined8 **local_280;
  undefined8 *local_278;
  undefined8 local_270;
  undefined8 local_268 [20];
  undefined8 local_1c8;
  undefined1 *local_1c0;
  undefined8 *******local_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******local_1a8;
  undefined8 *******local_1a0;
  undefined8 ******local_198;
  undefined8 *****local_190;
  undefined8 ****local_188;
  undefined8 ***local_180;
  undefined8 **local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined1 auStack_160 [72];
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 *******local_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******local_f8;
  undefined8 *******local_f0;
  undefined8 ******local_e8;
  undefined8 *****local_e0;
  undefined8 ****local_d8;
  undefined8 ***local_d0;
  undefined8 **local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [10];
  
  puVar21 = PTR_DAT_04bc2a20;
  puVar5 = PTR_DAT_04bc27f0;
  puVar4 = PTR_DAT_04bc2550;
  puVar3 = PTR_DAT_04bc2548;
  local_f8 = &local_f0;
  local_f0 = &local_e8;
  local_b8 = 0;
  local_e8 = &local_e0;
  local_e0 = &local_d8;
  local_108 = &local_f8;
  local_d8 = &local_d0;
  local_d0 = &local_c8;
  local_c8 = &local_c0;
  local_c0 = &local_b8;
  local_118 = 0;
  local_110 = (undefined8 *)0x0;
  if (local_b0 != (undefined8 *)0x0) {
    local_118 = 0x900000000;
    local_110 = local_b0;
  }
  local_1c8 = 0;
  local_1c0 = (undefined1 *)0x0;
  local_1a8 = &local_1a0;
  local_1a0 = &local_198;
  pppppppuStack_1b0 = &local_1a8;
  local_198 = &local_190;
  local_190 = &local_188;
  local_188 = &local_180;
  local_180 = &local_178;
  local_178 = &local_170;
  local_170 = &local_168;
  local_168 = 0;
  if (auStack_160 != (undefined1 *)0x0) {
    local_1c8 = 0x900000000;
    local_1c0 = auStack_160;
  }
  lVar16 = 6;
  cVar29 = *PTR_DAT_04bc2548;
  local_1b8 = pppppppuStack_1b0;
  pppppppuStack_100 = local_108;
  do {
    pppppppuVar11 = local_108;
    pppppppuVar10 = local_1b8;
    if ((&DAT_0545b2cc)[lVar16 * 0x118] != '\0') {
      lVar25 = (lVar16 + -6) * 3;
      uVar32 = (ulong)(byte)(&DAT_0545a400)[lVar25];
      if (((uVar32 < 0x23) && ((byte)(&DAT_0545a401)[lVar25] <= (byte)puVar5[uVar32])) &&
         ((*(uint *)(puVar21 + uVar32 * 4) >> (ulong)((byte)(&DAT_0545a401)[lVar25] & 0x1f) & 1) !=
          0)) {
        if ((&DAT_0545b308)[lVar16 * 0x118] == '\0') {
          uVar12 = (&DAT_0545b2e4)[lVar16 * 0x46];
          if (-1 < (int)uVar12) {
            if ((int)*(uint *)(param_1 + 0x598) < 1) {
              if (((((*(long *)(param_1 + 0x488) != 0) &&
                    (puVar14 = *(uint **)(*(long *)(param_1 + 0x488) + 8), puVar14 != (uint *)0x0))
                   && ((*(uint *)(param_1 + 0x4a0) <= uVar12 ||
                       (*(char *)(*(long *)(param_1 + 0x4a8) + (ulong)uVar12) != '\0')))) &&
                  ((uVar12 < *puVar14 && (puVar14[1] != 0)))) && ((ushort)puVar14[2] != 0)) {
                iVar13 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  iVar13 = 0x1c;
                }
                puVar14 = (uint *)((ulong)(puVar14[1] * uVar12 + (uint)(ushort)puVar14[2] * 8 +
                                          iVar13) + (long)puVar14);
                goto joined_r0x03700900;
              }
            }
            else if (uVar12 < *(uint *)(param_1 + 0x598)) {
              uVar27 = uVar12;
              if (*(uint *)(param_1 + 0x588) <= uVar12) {
                uVar27 = 0;
              }
              puVar14 = *(uint **)(*(long *)(param_1 + 0x590) + (ulong)uVar27 * 8);
joined_r0x03700900:
              if (puVar14 != (uint *)0x0) {
                uVar27 = *puVar14;
                if (uVar27 != 0) {
                  do {
                    if (cVar29 == '\0') {
                      cVar29 = '\x01';
                      *puVar3 = 1;
                      *(undefined8 *)puVar4 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                      uVar27 = *puVar14;
                    }
                    else {
                      uVar18 = *(uint *)(puVar4 + 8);
                      if (-1 < (int)uVar18) {
                        if (((int *)((ulong)uVar18 + (long)puVar14) != (int *)0x0) &&
                           (*(int *)((ulong)uVar18 + (long)puVar14) < 0)) goto LAB_037006d4;
                        break;
                      }
                      if (uVar18 != 0xffffffff) break;
                    }
                    if (((ulong)uVar27 == 0) ||
                       (lVar25 = (long)puVar14 - (ulong)uVar27, lVar25 == 0)) break;
                    lVar7 = 0xc;
                    if (*(char *)(lVar25 + 10) != '\0') {
                      lVar7 = 0x1c;
                    }
                    if (lVar7 + lVar25 == 0) break;
                    uVar32 = (ulong)*(ushort *)(lVar25 + 8);
                    *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
                    if (uVar32 == 0) break;
                    piVar17 = (int *)(lVar7 + lVar25 + 4);
                    while (piVar17[-1] != 0x5b589691) {
                      piVar17 = piVar17 + 2;
                      uVar32 = uVar32 - 1;
                      if (uVar32 == 0) goto LAB_03700858;
                    }
                    iVar13 = 0;
                    if (*piVar17 != -1) {
                      iVar13 = *piVar17;
                    }
                    *(int *)(puVar4 + 8) = iVar13;
                    uVar27 = *puVar14;
                    if (uVar27 == 0) break;
                  } while( true );
                }
LAB_03700858:
                if ((int)local_118 < local_118._4_4_) {
                  if (local_108 != (undefined8 *******)0x0) {
                    local_108 = (undefined8 *******)*local_108;
                  }
                  *(uint *)pppppppuVar11 = uVar12;
                  if ((int)local_118 < local_118._4_4_) {
                    local_110[(int)local_118] = pppppppuVar11;
                    local_118 = CONCAT44(local_118._4_4_,(int)local_118 + 1);
                  }
                }
              }
            }
          }
        }
        else if ((int)local_1c8 < local_1c8._4_4_) {
          if (local_1b8 != (undefined8 *******)0x0) {
            local_1b8 = (undefined8 *******)*local_1b8;
          }
          *(int *)pppppppuVar10 = (int)lVar16;
          if ((int)local_1c8 < local_1c8._4_4_) {
            *(undefined8 ********)(local_1c0 + (long)(int)local_1c8 * 8) = pppppppuVar10;
            local_1c8 = CONCAT44(local_1c8._4_4_,(int)local_1c8 + 1);
          }
        }
      }
    }
LAB_037006d4:
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0xf);
  if ((int)local_1c8 != 0) {
    uVar12 = nn::os::GetSystemTick();
    if (1 < (int)local_1c8) {
      uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
      uVar27 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
      uVar18 = (uVar27 ^ uVar27 >> 0x1e) * 0x6c078965 + 3;
      uVar24 = (ulong)((uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 4);
      uVar32 = local_1c8 & 0xffffffff;
      do {
        uVar12 = uVar12 ^ uVar12 << 0xb;
        uVar22 = (uint)uVar24;
        uVar24 = (ulong)(uVar22 >> 0x13 ^ uVar12 >> 8 ^ uVar22 ^ uVar12);
        lVar16 = (uVar32 - 1 & 0xffffffff) * 8;
        uVar31 = *(undefined8 *)(local_1c0 + lVar16);
        uVar28 = uVar32 * uVar24 >> 0x1d & 0x7fffffff8;
        *(undefined8 *)(local_1c0 + lVar16) = *(undefined8 *)(local_1c0 + uVar28);
        *(undefined8 *)(local_1c0 + uVar28) = uVar31;
        bVar1 = 2 < uVar32;
        uVar32 = uVar32 - 1;
        uVar12 = uVar27;
        uVar27 = uVar18;
        uVar18 = uVar22;
      } while (bVar1);
    }
    plVar2 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x184e8);
    plVar6 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x184b8);
    if ((int)local_118 != 0) {
      plVar6 = plVar2;
    }
    puVar14 = (uint *)(**(code **)(*plVar6 + 0xf0))();
    local_374 = *puVar14;
    iVar13 = *(int *)(param_1 + 0x598);
    if (iVar13 < 1) {
      iVar13 = 0;
      if (*(long *)(param_1 + 0x488) != 0) {
        piVar17 = *(int **)(*(long *)(param_1 + 0x488) + 8);
        iVar13 = 0;
        if (piVar17 != (int *)0x0) {
          iVar13 = *piVar17;
        }
      }
    }
    local_328 = 0;
    local_320 = (undefined8 *)0x0;
    local_308 = &local_300;
    local_300 = &local_2f8;
    pppppppuStack_310 = &local_308;
    local_2f8 = &local_2f0;
    local_2f0 = &local_2e8;
    local_2e8 = &local_2e0;
    local_2e0 = &local_2d8;
    local_2d8 = &local_2d0;
    local_2d0 = &local_2c8;
    local_2c8 = &local_2c0;
    local_2c0 = &local_2b8;
    local_2b8 = &local_2b0;
    local_2b0 = &local_2a8;
    local_2a8 = &local_2a0;
    local_2a0 = &local_298;
    local_298 = &local_290;
    local_290 = &local_288;
    local_288 = &local_280;
    local_280 = &local_278;
    local_278 = &local_270;
    local_270 = 0;
    local_318 = pppppppuStack_310;
    if (local_268 != (undefined8 *)0x0) {
      local_328 = 0x1400000000;
      local_320 = local_268;
      if (0 < iVar13) {
        iVar23 = 0;
        iVar19 = 0;
        do {
          pppppppuVar10 = local_318;
          if (iVar23 < local_328._4_4_) {
            if (local_318 != (undefined8 *******)0x0) {
              local_318 = (undefined8 *******)*local_318;
            }
            *(int *)pppppppuVar10 = iVar19;
            iVar23 = (int)local_328;
            if ((int)local_328 < local_328._4_4_) {
              local_268[(int)local_328] = pppppppuVar10;
              iVar23 = (int)local_328 + 1;
              local_328 = CONCAT44(local_328._4_4_,iVar23);
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar13 != iVar19);
      }
    }
    uVar12 = nn::os::GetSystemTick();
    if (1 < (int)local_328) {
      uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
      uVar27 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
      uVar18 = (uVar27 ^ uVar27 >> 0x1e) * 0x6c078965 + 3;
      uVar24 = (ulong)((uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 4);
      uVar32 = local_328 & 0xffffffff;
      do {
        uVar12 = uVar12 ^ uVar12 << 0xb;
        uVar22 = (uint)uVar24;
        uVar24 = (ulong)(uVar22 >> 0x13 ^ uVar12 >> 8 ^ uVar22 ^ uVar12);
        uVar30 = uVar32 - 1 & 0xffffffff;
        uVar31 = local_320[uVar30];
        uVar28 = uVar32 * uVar24 >> 0x1d & 0x7fffffff8;
        local_320[uVar30] = *(undefined8 *)((long)local_320 + uVar28);
        *(undefined8 *)((long)local_320 + uVar28) = uVar31;
        bVar1 = 2 < uVar32;
        uVar32 = uVar32 - 1;
        uVar12 = uVar27;
        uVar27 = uVar18;
        uVar18 = uVar22;
      } while (bVar1);
    }
    if (0 < (int)local_328) {
      local_378 = 0;
      lVar16 = 0;
      puVar3 = PTR_DAT_04bb2a08 + 0x10;
      puVar4 = PTR_DAT_04bb2028 + 0x10;
      puVar5 = PTR_DAT_04bb2020 + 0x10;
      puVar33 = (undefined8 *)PTR_DAT_04bc2550;
      pcVar34 = PTR_DAT_04bc2548;
      do {
        uVar12 = *(uint *)local_320[lVar16];
        if ((int)*(uint *)(param_1 + 0x598) < 1) {
          if (*(long *)(param_1 + 0x488) != 0) {
            puVar14 = *(uint **)(*(long *)(param_1 + 0x488) + 8);
            if (puVar14 != (uint *)0x0) {
              if (uVar12 < *(uint *)(param_1 + 0x4a0)) {
                if (*(char *)(*(long *)(param_1 + 0x4a8) + (long)(int)uVar12) == '\0')
                goto LAB_03700c30;
              }
              if (uVar12 < *puVar14) {
                if (puVar14[1] != 0) {
                  if ((ushort)puVar14[2] != 0) {
                    iVar13 = 0xc;
                    if (*(char *)((long)puVar14 + 10) != '\0') {
                      iVar13 = 0x1c;
                    }
                    puVar14 = (uint *)((ulong)(puVar14[1] * uVar12 + (uint)(ushort)puVar14[2] * 8 +
                                              iVar13) + (long)puVar14);
                    goto joined_r0x03700d94;
                  }
                }
              }
            }
          }
        }
        else if (uVar12 < *(uint *)(param_1 + 0x598)) {
          uVar27 = uVar12;
          if (*(uint *)(param_1 + 0x588) <= uVar12) {
            uVar27 = 0;
          }
          puVar14 = *(uint **)(*(long *)(param_1 + 0x590) + (ulong)uVar27 * 8);
joined_r0x03700d94:
          if (puVar14 != (uint *)0x0) {
            uVar27 = *puVar14;
            if (uVar27 != 0) {
              cVar29 = *pcVar34;
              do {
                if (cVar29 == '\0') {
                  cVar29 = '\x01';
                  *pcVar34 = '\x01';
                  *puVar33 = 0xffffffffffffffff;
                  puVar33[1] = 0xffffffffffffffff;
                  puVar33[2] = 0xffffffffffffffff;
                  puVar33[3] = 0xffffffffffffffff;
                  puVar33[4] = 0xffffffffffffffff;
                  puVar33[5] = 0xffffffffffffffff;
                  uVar27 = *puVar14;
                }
                else {
                  uVar18 = *(uint *)(puVar33 + 1);
                  if (-1 < (int)uVar18) {
                    if ((int *)((ulong)uVar18 + (long)puVar14) != (int *)0x0) {
                      if (*(int *)((ulong)uVar18 + (long)puVar14) < 0) goto LAB_03700c30;
                    }
                    break;
                  }
                  if (uVar18 != 0xffffffff) break;
                }
                if (((ulong)uVar27 == 0) || (lVar25 = (long)puVar14 - (ulong)uVar27, lVar25 == 0))
                break;
                lVar7 = 0xc;
                if (*(char *)(lVar25 + 10) != '\0') {
                  lVar7 = 0x1c;
                }
                if (lVar7 + lVar25 == 0) break;
                uVar32 = (ulong)*(ushort *)(lVar25 + 8);
                *(undefined4 *)(puVar33 + 1) = 0xfffffffe;
                if (uVar32 == 0) break;
                piVar17 = (int *)(lVar7 + lVar25 + 4);
                while (piVar17[-1] != 0x5b589691) {
                  piVar17 = piVar17 + 2;
                  uVar32 = uVar32 - 1;
                  if (uVar32 == 0) goto LAB_03700db0;
                }
                iVar13 = 0;
                if (*piVar17 != -1) {
                  iVar13 = *piVar17;
                }
                *(int *)(puVar33 + 1) = iVar13;
                uVar27 = *puVar14;
                if (uVar27 == 0) break;
              } while( true );
            }
LAB_03700db0:
            uVar32 = local_118 & 0xffffffff;
            if (0 < (int)local_118) {
              puVar20 = local_110;
              do {
                if (uVar12 == *(uint *)*puVar20) goto LAB_03700c30;
                puVar20 = puVar20 + 1;
                uVar32 = uVar32 - 1;
              } while (uVar32 != 0);
            }
            uVar27 = *puVar14;
            if (uVar27 != 0) {
              cVar29 = *pcVar34;
              do {
                if (cVar29 == '\0') {
                  cVar29 = '\x01';
                  *pcVar34 = '\x01';
                  *puVar33 = 0xffffffffffffffff;
                  puVar33[1] = 0xffffffffffffffff;
                  puVar33[2] = 0xffffffffffffffff;
                  puVar33[3] = 0xffffffffffffffff;
                  puVar33[4] = 0xffffffffffffffff;
                  puVar33[5] = 0xffffffffffffffff;
                  uVar27 = *puVar14;
                }
                else {
                  uVar18 = *(uint *)((long)puVar33 + 0x2c);
                  if (-1 < (int)uVar18) {
                    pcVar26 = (char *)((ulong)uVar18 + (long)puVar14);
                    goto LAB_03700e9c;
                  }
                  if (uVar18 != 0xffffffff) break;
                }
                puVar15 = (uint *)(ulong)uVar27;
                pcVar26 = (char *)0x0;
                if ((puVar15 == (uint *)0x0) || (pcVar26 = (char *)0x0, puVar14 == puVar15))
                goto LAB_03700e9c;
                lVar25 = 0xc;
                if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
                  lVar25 = 0x1c;
                }
                lVar25 = (long)puVar14 + (lVar25 - (long)puVar15);
                pcVar26 = (char *)0x0;
                if (lVar25 == 0) goto LAB_03700e9c;
                uVar32 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
                *(undefined4 *)((long)puVar33 + 0x2c) = 0xfffffffe;
                if (uVar32 == 0) break;
                piVar17 = (int *)(lVar25 + 4);
                while (piVar17[-1] != 0x62a2abe9) {
                  piVar17 = piVar17 + 2;
                  uVar32 = uVar32 - 1;
                  if (uVar32 == 0) goto LAB_03700e98;
                }
                iVar13 = 0;
                if (*piVar17 != -1) {
                  iVar13 = *piVar17;
                }
                *(int *)((long)puVar33 + 0x2c) = iVar13;
                uVar27 = *puVar14;
                if (uVar27 == 0) break;
              } while( true );
            }
LAB_03700e98:
            pcVar26 = (char *)0x0;
LAB_03700e9c:
            local_350 = 0x20;
            __src = "";
            if (pcVar26 != (char *)0x0) {
              __src = pcVar26;
            }
            local_32d = 0;
            local_358 = local_34c;
            if (local_34c != __src) {
              lVar25 = 0;
              do {
                if (__src[lVar25] == '\0') {
LAB_03700f14:
                  iVar13 = (int)lVar25;
joined_r0x03700f18:
                  if (0x1f < iVar13) {
                    iVar13 = 0x1f;
                  }
                  goto LAB_03700f20;
                }
                if (__src[lVar25 + 1] == '\0') {
                  lVar25 = lVar25 + 1;
                  goto LAB_03700f14;
                }
                if (__src[lVar25 + 2] == '\0') {
                  iVar13 = (int)lVar25 + 2;
                  goto joined_r0x03700f18;
                }
                lVar25 = lVar25 + 3;
              } while (lVar25 != 0x80001);
              iVar13 = 0;
LAB_03700f20:
              local_360 = puVar3;
              memcpy(local_34c,__src,(long)iVar13);
              local_34c[iVar13] = '\0';
              puVar33 = (undefined8 *)PTR_DAT_04bc2550;
              pcVar34 = PTR_DAT_04bc2548;
            }
            local_360 = puVar4;
            if (*local_358 == '\0') {
            }
            else {
              iVar13 = FUN_02758850(&local_360);
              puVar33 = (undefined8 *)PTR_DAT_04bc2550;
              if (iVar13 == 0) goto LAB_03700c30;
            }
            if (local_378 < (int)local_1c8) {
              uVar27 = 100;
              if (param_2 <= local_378) {
                uVar27 = local_374;
              }
              puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
              uVar22 = puVar15[3];
              uVar18 = *puVar15 ^ *puVar15 << 0xb;
              *puVar15 = puVar15[1];
              puVar15[1] = puVar15[2];
              uVar18 = uVar18 >> 8 ^ uVar22 >> 0x13 ^ uVar18 ^ uVar22;
              puVar15[2] = uVar22;
              puVar15[3] = uVar18;
              if (uVar27 <= (uint)((ulong)uVar18 * 100 >> 0x20)) {
                return;
              }
              pcStack_368 = "ManGenerateInFieldTemp";
              local_370 = puVar5;
              iVar13 = FUN_02758850(&local_370);
              puVar33 = (undefined8 *)PTR_DAT_04bc2550;
              local_374 = uVar27;
              if (iVar13 == 1) {
                uVar27 = *puVar14;
                if (uVar27 != 0) {
                  cVar29 = *pcVar34;
                  do {
                    if (cVar29 == '\0') {
                      cVar29 = '\x01';
                      *pcVar34 = '\x01';
                      *puVar33 = 0xffffffffffffffff;
                      *(undefined8 *)((long)puVar33 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)((long)puVar33 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)((long)puVar33 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)((long)puVar33 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)((long)puVar33 + 0x28) = 0xffffffffffffffff;
                      uVar27 = *puVar14;
                    }
                    else {
                      uVar18 = *(uint *)((long)puVar33 + 8);
                      if (-1 < (int)uVar18) {
                        if (((int *)((ulong)uVar18 + (long)puVar14) != (int *)0x0) &&
                           (*(int *)((ulong)uVar18 + (long)puVar14) != 0)) goto LAB_037010e0;
                        break;
                      }
                      if (uVar18 != 0xffffffff) break;
                    }
                    if ((ulong)uVar27 == 0) break;
                    lVar25 = (long)puVar14 - (ulong)uVar27;
                    if (lVar25 == 0) break;
                    lVar7 = 0xc;
                    if (*(char *)(lVar25 + 10) != '\0') {
                      lVar7 = 0x1c;
                    }
                    if (lVar7 + lVar25 == 0) break;
                    uVar32 = (ulong)*(ushort *)(lVar25 + 8);
                    *(undefined4 *)((long)puVar33 + 8) = 0xfffffffe;
                    if (uVar32 == 0) break;
                    piVar17 = (int *)(lVar7 + lVar25 + 4);
                    while (piVar17[-1] != 0x5b589691) {
                      piVar17 = piVar17 + 2;
                      uVar32 = uVar32 - 1;
                      if (uVar32 == 0) goto LAB_03700c30;
                    }
                    iVar13 = 0;
                    if (*piVar17 != -1) {
                      iVar13 = *piVar17;
                    }
                    *(int *)((long)puVar33 + 8) = iVar13;
                    uVar27 = *puVar14;
                    if (uVar27 == 0) break;
                  } while( true );
                }
              }
              else {
LAB_037010e0:
                uVar27 = **(uint **)(local_1c0 + (long)local_378 * 8);
                if (uVar27 != 0xffffffff && (int)uVar27 < 0x10) {
                  puVar21 = &DAT_0545b240 + (ulong)uVar27 * 0x118;
                  uVar18 = uVar27 - 6;
                  if (0xf < uVar27) {
                    puVar21 = &DAT_0545b240;
                  }
                  puVar8 = (undefined *)0x0;
                  if (puVar21[0x8c] != '\0') {
                    puVar8 = puVar21;
                  }
                  if (uVar18 < 10) {
                    puVar9 = &DAT_0545c3c0;
                    if (uVar18 != 9) {
                      puVar9 = &DAT_0545c3c0 + (ulong)uVar18 * 2;
                    }
                    if (puVar21[0x8c] != '\0') {
                      puVar21[200] = 0;
                      uVar35 = 0;
                      *(undefined4 *)(puVar21 + 0xa0) = 0xe;
                      *(uint *)(puVar21 + 0xa4) = uVar12;
                      *(undefined4 *)(puVar21 + 0xa8) = 3;
                      uVar12 = *puVar14;
                      if (uVar12 == 0) {
                        uVar36 = 0x43750000;
                        uVar37 = 0x44228000;
                      }
                      else {
                        cVar29 = *pcVar34;
LAB_03701174:
                        puVar15 = (uint *)(ulong)uVar12;
                        uVar37 = 0x44228000;
                        if (cVar29 == '\0') {
                          cVar29 = '\x01';
                          *pcVar34 = '\x01';
                          *puVar33 = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar33 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar33 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar33 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar33 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar33 + 0x28) = 0xffffffffffffffff;
                          puVar15 = (uint *)(ulong)*puVar14;
LAB_037011a8:
                          uVar36 = 0x43750000;
                          if ((puVar15 == (uint *)0x0) || (puVar14 == puVar15)) goto LAB_037012ac;
                          lVar25 = 0xc;
                          if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
                            lVar25 = 0x1c;
                          }
                          lVar25 = (long)puVar14 + (lVar25 - (long)puVar15);
                          if (lVar25 == 0) goto LAB_037012a4;
                          uVar32 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
                          *(undefined4 *)((long)puVar33 + 8) = 0xfffffffe;
                          if (uVar32 == 0) goto LAB_037012a4;
                          piVar17 = (int *)(lVar25 + 4);
                          while (piVar17[-1] != 0x5b589691) {
                            piVar17 = piVar17 + 2;
                            uVar32 = uVar32 - 1;
                            if (uVar32 == 0) goto LAB_037012a4;
                          }
                          iVar13 = 0;
                          if (*piVar17 != -1) {
                            iVar13 = *piVar17;
                          }
                          *(int *)((long)puVar33 + 8) = iVar13;
                          uVar12 = *puVar14;
                          if (uVar12 == 0) goto LAB_037012a4;
                          goto LAB_03701174;
                        }
                        uVar12 = *(uint *)((long)puVar33 + 8);
                        if ((int)uVar12 < 0) {
                          if (uVar12 != 0xffffffff) goto LAB_037012a4;
                          goto LAB_037011a8;
                        }
                        if ((uint *)((ulong)uVar12 + (long)puVar14) != (uint *)0x0) {
                          uVar12 = *(uint *)((ulong)uVar12 + (long)puVar14);
                          if (2 < uVar12) goto LAB_037012c8;
                          lVar25 = (long)(int)uVar12 * 4;
                          uVar37 = *(undefined4 *)(&DAT_04198f3c + lVar25);
                          uVar35 = *(undefined4 *)(&DAT_04198f48 + lVar25);
                          uVar36 = *(undefined4 *)(&DAT_04198f54 + lVar25);
                          goto LAB_037012ac;
                        }
LAB_037012a4:
                        uVar36 = 0x43750000;
                      }
LAB_037012ac:
                      *(undefined4 *)(puVar8 + 0x94) = uVar37;
                      *(undefined4 *)(puVar8 + 0x98) = uVar35;
                      *(undefined4 *)(puVar8 + 0x9c) = uVar36;
                      puVar8[0x90] = 1;
                      puVar15 = (uint *)(ulong)*puVar14;
                      if (*puVar14 != 0) {
                        cVar29 = *pcVar34;
LAB_037012c8:
                        do {
                          if (cVar29 == '\0') {
                            cVar29 = '\x01';
                            *pcVar34 = '\x01';
                            *puVar33 = 0xffffffffffffffff;
                            *(undefined8 *)((long)puVar33 + 8) = 0xffffffffffffffff;
                            *(undefined8 *)((long)puVar33 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)((long)puVar33 + 0x18) = 0xffffffffffffffff;
                            *(undefined8 *)((long)puVar33 + 0x20) = 0xffffffffffffffff;
                            *(undefined8 *)((long)puVar33 + 0x28) = 0xffffffffffffffff;
                            puVar15 = (uint *)(ulong)*puVar14;
                          }
                          else {
                            uVar12 = *(uint *)((long)puVar33 + 8);
                            if (-1 < (int)uVar12) {
                              uVar35 = 0;
                              if ((undefined4 *)((long)puVar14 + (ulong)uVar12) != (undefined4 *)0x0
                                 ) {
                                uVar35 = *(undefined4 *)((long)puVar14 + (ulong)uVar12);
                              }
                              goto LAB_03701378;
                            }
                            if (uVar12 != 0xffffffff) break;
                          }
                          uVar35 = 0;
                          if ((puVar15 == (uint *)0x0) || (uVar35 = 0, puVar14 == puVar15))
                          goto LAB_03701378;
                          lVar25 = 0xc;
                          if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
                            lVar25 = 0x1c;
                          }
                          lVar25 = (long)puVar14 + (lVar25 - (long)puVar15);
                          if (lVar25 == 0) break;
                          uVar32 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
                          *(undefined4 *)((long)puVar33 + 8) = 0xfffffffe;
                          uVar35 = 0;
                          if (uVar32 == 0) goto LAB_03701378;
                          piVar17 = (int *)(lVar25 + 4);
                          while (piVar17[-1] != 0x5b589691) {
                            piVar17 = piVar17 + 2;
                            uVar32 = uVar32 - 1;
                            if (uVar32 == 0) {
                              uVar35 = 0;
                              goto LAB_03701378;
                            }
                          }
                          iVar13 = 0;
                          if (*piVar17 != -1) {
                            iVar13 = *piVar17;
                          }
                          *(int *)((long)puVar33 + 8) = iVar13;
                          puVar15 = (uint *)(ulong)*puVar14;
                        } while (*puVar14 != 0);
                      }
                      uVar35 = 0;
LAB_03701378:
                      *puVar9 = uVar35;
                      local_378 = local_378 + 1;
                      puVar14 = (uint *)(**(code **)(*plVar2 + 0xf0))();
                      puVar33 = (undefined8 *)PTR_DAT_04bc2550;
                      local_374 = *puVar14;
                    }
                  }
                }
              }
            }
          }
        }
LAB_03700c30:
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)local_328);
    }
  }
  return;
}

