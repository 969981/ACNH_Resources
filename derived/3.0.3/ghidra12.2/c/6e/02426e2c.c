
uint FUN_02426e2c(long param_1,byte param_2,undefined4 *param_3,undefined8 *param_4,uint param_5)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  undefined **ppuVar18;
  void *__src;
  uint *puVar19;
  byte bVar20;
  char *pcVar21;
  long lVar22;
  uint *puVar23;
  byte bVar24;
  short *psVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined4 uVar28;
  uint uVar29;
  byte local_28c [4];
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  uint local_278;
  byte bStack_274;
  undefined1 uStack_273;
  undefined2 uStack_272;
  undefined8 local_270;
  undefined4 uStack_268;
  uint local_264;
  undefined *puStack_260;
  undefined8 local_258;
  undefined *local_250;
  char *pcStack_248;
  undefined8 local_240;
  undefined8 local_238;
  uint local_230;
  byte local_22c;
  undefined1 local_22b;
  undefined *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  uint local_214;
  undefined2 local_210;
  undefined1 local_20e;
  undefined4 local_20d;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  undefined4 uStack_1e4;
  uint uStack_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined1 auStack_1a8 [8];
  char *local_1a0;
  int local_198;
  undefined1 auStack_150 [8];
  void *local_148;
  int local_140;
  undefined1 local_f8;
  undefined4 local_ec;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8 [4];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c [3];
  
  pbVar2 = (byte *)(param_1 + 0x1ee8);
  uVar15 = FUN_024f5320(pbVar2);
  local_200 = PTR_DAT_04bb37e0;
  if ((uVar15 & 1) == 0) goto LAB_02427fd0;
  if (param_3 != (undefined4 *)0x0) {
    *(undefined2 *)param_3 = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)((long)param_3 + 2) = local_200[2];
    *(undefined *)((long)param_3 + 3) = local_200[3];
    param_3[1] = *(undefined4 *)(local_200 + 4);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
    *(undefined4 *)(param_4 + 1) = 0;
  }
  local_a4 = *(undefined4 *)local_200;
  local_90 = *(undefined4 *)local_200;
  local_a0 = *(undefined4 *)(local_200 + 4);
  local_200 = *(undefined **)local_200;
  local_a8[0] = *pbVar2;
  local_1f8 = PTR_DAT_04bb2010 + 0x10;
  local_1d8 = (ulong)(uint3)((uint)(undefined4)local_1d8 >> 8) << 8;
  local_1f0 = 0.0;
  fStack_1ec = 0.0;
  lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)local_a8[0] * 0x740;
  if (7 < local_a8[0]) {
    local_a8[0] = 0xff;
    lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  local_1e8 = 0.0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  local_1dc = 0;
  local_8c[0] = local_a0;
  uVar15 = FUN_022cf570(&local_200,local_a8);
  uVar14 = 0;
  if ((uVar15 & 1) == 0) {
LAB_02426f90:
    uVar29 = 0;
    uVar28 = 0;
  }
  else {
    uVar15 = FUN_0277e158(&local_200);
    if ((uVar15 & 1) == 0) goto LAB_02426f90;
    uVar29 = 0;
    uVar28 = 0;
    if (local_1e8 == 1.4013e-45) {
      local_a4 = (undefined4)local_200;
      local_a0 = local_200._4_4_;
      uVar29 = uStack_1e0;
      uVar14 = local_1dc;
      uVar28 = uStack_1e4;
    }
  }
  uVar15 = FUN_0231a7d4(pbVar2,&local_90,&local_9c);
  psVar25 = (short *)PTR_DAT_04bb6298;
  bVar11 = (uVar15 & 1) == 0;
  puVar3 = &local_90;
  if (bVar11) {
    puVar3 = &local_a4;
  }
  puVar9 = &local_90;
  if (bVar11) {
    puVar9 = &local_a4;
  }
  puVar10 = &local_90;
  if (bVar11) {
    puVar10 = &local_a4;
  }
  local_b0 = CONCAT13(*(undefined1 *)((ulong)puVar10 | 3),
                      CONCAT12(*(undefined1 *)((ulong)puVar9 | 2),*(undefined2 *)puVar3));
  puVar3 = local_8c;
  if (bVar11) {
    puVar3 = &local_a0;
  }
  local_ac = *puVar3;
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 != -1) {
    local_200 = (undefined *)CONCAT44(local_200._4_4_,0x19);
    puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar19 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar19 >> 0x19 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)) {
      uVar16 = FUN_016e4d80(&local_90);
      if ((uVar16 & 1) != 0) goto LAB_02427fd0;
    }
  }
  puVar1 = PTR_DAT_04bb27d0;
  if ((*(long **)PTR_DAT_04bb27d0 != (long *)0x0) &&
     (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476))) {
    pcVar17 = (char *)FUN_02582a24(pbVar2);
    lVar22 = **(long **)puVar1;
    bVar20 = *(byte *)(lVar22 + 0x473);
    pcVar21 = PTR_DAT_04bc1220;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar19 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar19 = (uint *)(lVar22 + 0x48);
      }
      if ((*puVar19 & 8) != 0) {
        pcVar21 = (char *)(lVar22 + 0x472);
      }
    }
    if (*pcVar17 != *pcVar21) goto LAB_024273e4;
    sVar8 = *psVar25;
    if (sVar8 != -1) {
      local_200 = (undefined *)CONCAT44(local_200._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
      if (0xff < (uint)(int)sVar8) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_024273e4;
    }
    lVar22 = *(long *)PTR_DAT_04bbbc68;
    if ((((((lVar22 == 0) || (*(long *)(lVar22 + 0xb0) == 0)) ||
          (*(long *)(*(long *)(lVar22 + 0xb0) + 8) == 0)) ||
         ((*(long *)(lVar22 + 0x488) == 0 || (*(long *)(*(long *)(lVar22 + 0x488) + 8) == 0)))) ||
        (*(long *)(lVar22 + 0x2b0) == 0)) || (*(long *)(*(long *)(lVar22 + 0x2b0) + 8) == 0))
    goto LAB_024273e4;
    uVar12 = FUN_0277d6c4(&local_b0);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar12) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_024273e4;
    FUN_0124c030(&local_288,&local_b0);
    FUN_0257a010(&local_200);
    pcVar17 = local_1f8;
    (**(code **)(DAT_054c2648 + 0x18))(&DAT_054c2648);
    pcVar21 = DAT_054c2650;
    if (pcVar17 != DAT_054c2650) {
      (**(code **)(DAT_054c2648 + 0x18))(&DAT_054c2648);
      lVar22 = 0;
      do {
        if (DAT_054c2650[lVar22] == '\0') goto LAB_02427248;
        if (DAT_054c2650[lVar22 + 1] == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_02427248;
        }
        if (DAT_054c2650[lVar22 + 2] == '\0') {
          lVar22 = lVar22 + 2;
          goto LAB_02427248;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      lVar22 = 0;
LAB_02427248:
      iVar13 = (int)lVar22;
      if ((int)local_1f0 <= (int)lVar22) {
        iVar13 = (int)local_1f0 + -1;
      }
      memcpy(pcVar17,pcVar21,(long)iVar13);
      pcVar17[iVar13] = '\0';
    }
    if (local_1a0 != "CannotPickupLadder_NetHost") {
      iVar13 = 0x1a;
      if (local_198 < 0x1b) {
        iVar13 = local_198 + -1;
      }
      memcpy(local_1a0,"CannotPickupLadder_NetHost",(long)iVar13);
      local_1a0[iVar13] = '\0';
    }
    puVar1 = PTR_PTR_04bb2238;
    local_ec = 0xc;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src = *(void **)(puVar1 + 8);
    if (local_148 != __src) {
      (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
      lVar22 = 0;
      do {
        if (*(char *)(*(long *)(puVar1 + 8) + lVar22) == '\0') goto LAB_02427348;
        lVar27 = *(long *)(puVar1 + 8) + lVar22;
        if (*(char *)(lVar27 + 1) == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_02427348;
        }
        if (*(char *)(lVar27 + 2) == '\0') {
          lVar22 = lVar22 + 2;
          goto LAB_02427348;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      lVar22 = 0;
LAB_02427348:
      iVar13 = (int)lVar22;
      if (local_140 <= (int)lVar22) {
        iVar13 = local_140 + -1;
      }
      memcpy(local_148,__src,(long)iVar13);
      *(undefined1 *)((long)local_148 + (long)iVar13) = 0;
    }
    local_f8 = 0;
    iVar13 = FUN_0123db50(&local_280,
                          CONCAT26(uStack_272,CONCAT15(uStack_273,CONCAT14(bStack_274,local_278))));
    if (iVar13 != 0x22) {
      iVar13 = FUN_0123db50(&local_280,
                            CONCAT26(uStack_272,CONCAT15(uStack_273,CONCAT14(bStack_274,local_278)))
                           );
      if (iVar13 != 0x21) goto LAB_024273e4;
      if ((param_2 & 1) == 0) {
        local_228 = PTR_DAT_04bb2020 + 0x10;
        local_220 = 0x40a7205;
        local_21c = 0;
        FUN_006e43a0(auStack_1a8,&local_228);
        goto LAB_02428224;
      }
      goto LAB_02428230;
    }
    if ((param_2 & 1) != 0) goto LAB_02428230;
LAB_02428224:
    FUN_024480f0(param_1,&local_200);
    goto LAB_02428230;
  }
LAB_024273e4:
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar15 & 1) == 0) {
    lVar22 = *(long *)PTR_DAT_04bb43c0;
    uVar12 = FUN_0277d6c4(&local_a4);
    lVar27 = *(long *)puVar1;
    if (lVar27 != 0) {
      lVar22 = *(long *)(lVar22 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (uVar12 < *(uint *)(lVar22 + 0x1d8)) {
        if (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) != 0) {
          if ((((param_5 & 1) == 0) && (lVar22 = *(long *)PTR_DAT_04bb39b0, lVar22 != 0)) &&
             (*(int *)(lVar22 + 0x15c) != 0)) {
            pbVar5 = PTR_DAT_04bb32e0;
            if (*(int *)(lVar22 + 0x15c) != 0) {
              pbVar5 = (byte *)(lVar22 + 0x158);
            }
            bVar24 = *pbVar2;
            bVar20 = *pbVar5;
            if (7 < bVar20) {
              bVar20 = 0xff;
            }
            if (7 < bVar24) {
              bVar24 = 0xff;
            }
            if (bVar20 != bVar24) {
              uVar12 = FUN_0277d6c4(&local_a4);
              if (*(long *)puVar1 != 0) {
                lVar22 = *(long *)(lVar27 + 0x57e58);
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                if ((uVar12 < *(uint *)(lVar22 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                  FUN_01ad5d04(&local_200,&local_a4);
                  iVar13 = FUN_01ad9fd0(&local_200);
                  if (((iVar13 - 0x8fU < 4) && (iVar13 - 0x8fU != 2)) || (iVar13 == 0x93))
                  goto LAB_02427fd0;
                }
              }
            }
          }
          goto LAB_02427708;
        }
        bVar11 = false;
        goto LAB_02427adc;
      }
    }
    bVar11 = false;
  }
  else {
    if ((param_5 & 1) == 0) {
      lVar22 = *(long *)PTR_DAT_04bb39b0;
      if ((lVar22 != 0) && (*(int *)(lVar22 + 0x15c) != 0)) {
        pbVar5 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar22 + 0x15c) != 0) {
          pbVar5 = (byte *)(lVar22 + 0x158);
        }
        bVar24 = *pbVar2;
        bVar20 = *pbVar5;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        if (7 < bVar24) {
          bVar24 = 0xff;
        }
        if (bVar20 != bVar24) {
          lVar22 = *(long *)PTR_DAT_04bb43c0;
          uVar12 = FUN_0277d6c4(&local_90);
          lVar27 = *(long *)puVar1;
          if (lVar27 != 0) {
            lVar22 = *(long *)(lVar22 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar22 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
              local_200 = PTR_DAT_04bc0510 + 0x10;
              local_1f8._0_4_ = local_90;
              local_1f8._4_4_ = (float)local_8c[0];
              local_1f0 = 0.0;
              fStack_1ec = 0.0;
              uVar12 = FUN_0277d6c4(&local_1f8);
              local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
              if (*(long *)PTR_DAT_04bb43c0 != 0) {
                lVar22 = *(long *)(lVar27 + 0x57e58);
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                if ((uVar12 < *(uint *)(lVar22 + 0x1d8)) &&
                   (local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8),
                   *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                  lVar22 = *(long *)PTR_DAT_04bc0428;
                  uVar12 = FUN_0277d6c4(&local_90);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                  local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                  if (uVar12 < *(uint *)(lVar22 + 0x1d8)) {
                    puVar19 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8);
                    local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                    if (puVar19 != (uint *)0x0) {
                      uVar12 = *puVar19;
                      local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                      if ((uVar12 != 0) &&
                         (local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8),
                         puVar19 != (uint *)(ulong)uVar12)) {
                        puVar23 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
                        local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                        if (*puVar23 != 0) {
                          uVar12 = puVar23[1];
                          local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                          if (uVar12 != 0) {
                            local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                            if ((ulong)(ushort)puVar23[2] != 0) {
                              lVar22 = 0xc;
                              if (*(char *)((long)puVar23 + 10) != '\0') {
                                lVar22 = 0x1c;
                              }
                              lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                              local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                              if (lVar22 != 0) {
                                uVar6 = 0;
                                if ((ulong)uVar12 != 0) {
                                  uVar6 = (uint)((ulong)((long)puVar19 - lVar22) / (ulong)uVar12);
                                }
                                if (*puVar23 <= uVar6) {
                                  uVar6 = 0xffffffff;
                                }
                                local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                                if (uVar6 < *(uint *)PTR_DAT_04bc00c8) {
                                  uVar7 = *(ushort *)
                                           (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2);
                                  local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8
                                                              );
                                  if ((uVar7 < 0xbd) &&
                                     ((uVar12 = uVar7 - 0x8f, uVar12 < 4 && uVar12 != 2 ||
                                      (local_1f8 = (char *)CONCAT44(local_1f8._4_4_,
                                                                    (undefined4)local_1f8),
                                      uVar7 == 0x93)))) goto LAB_02427fd0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_02427708:
    local_204 = FUN_022cdafc(pbVar2);
    bVar11 = (uVar15 & 1) == 0;
    local_210 = 1;
    local_20e = 1;
    uStack_218 = uStack_98;
    if (bVar11) {
      uStack_218 = uVar29;
    }
    local_228 = *(undefined **)(*(long *)(param_1 + 0x68) + 0x278);
    local_21c = local_9c;
    local_214 = local_94;
    if (bVar11) {
      local_21c = uVar28;
      local_214 = uVar14;
    }
    local_220 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
    local_20d = 0x101;
    uVar15 = FUN_016e4d80(&local_b0);
    if ((uVar15 & 1) == 0) {
      uVar15 = FUN_016e4e3c(&local_b0);
      if ((uVar15 & 1) == 0) {
        uVar15 = FUN_016f0c64(&local_228,0);
        if ((uVar15 & 1) == 0) {
          bVar11 = false;
          goto LAB_02427adc;
        }
      }
    }
    if (((param_2 & 1) == 0) && (*(int *)(param_1 + 0x178) == 0)) {
      if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
        puVar26 = *(undefined8 **)(param_1 + 0x1dc0);
        *(undefined4 *)(param_1 + 0x1da8) = 0;
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
        if (puVar26 != &DAT_0407ebb1) {
          iVar13 = 0;
          if (*(int *)(param_1 + 0x1dc8) < 1) {
            iVar13 = *(int *)(param_1 + 0x1dc8) + -1;
          }
          memset(puVar26,0,(long)iVar13);
          *(undefined1 *)((long)puVar26 + (long)iVar13) = 0;
        }
        puVar26 = *(undefined8 **)(param_1 + 0x1e18);
        if (puVar26 != &DAT_0407ebb1) {
          iVar13 = 0;
          if (*(int *)(param_1 + 0x1e20) < 1) {
            iVar13 = *(int *)(param_1 + 0x1e20) + -1;
          }
          memset(puVar26,0,(long)iVar13);
          *(undefined1 *)((long)puVar26 + (long)iVar13) = 0;
        }
        *(undefined8 *)(param_1 + 0x1e68) = 0;
        *(undefined8 *)(param_1 + 0x1e78) = 0;
        *(undefined2 *)(param_1 + 0x1e70) = 0xff;
      }
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
    }
    bVar20 = param_2 & 1;
    FUN_0257a010(&local_200);
    pcVar21 = local_1f8;
    if (local_1f8 != "Player_FtrActionError") {
      iVar13 = 0x15;
      if ((int)local_1f0 < 0x16) {
        iVar13 = (int)local_1f0 + -1;
      }
      memcpy(local_1f8,"Player_FtrActionError",(long)iVar13);
      pcVar21[iVar13] = '\0';
    }
    switch(local_204) {
    case 1:
      uVar14 = 1;
      uStack_273 = 1;
      local_288 = (undefined *)CONCAT44(local_ac,local_b0);
      local_280 = local_9c;
      uStack_27c = uStack_98;
      local_278 = local_94;
      bStack_274 = bVar20;
      uVar15 = FUN_024282d0(param_1,&local_288,param_3,param_4,0);
      if ((uVar15 & 1) != 0) goto LAB_02428234;
      break;
    case 2:
      if ((param_2 & 1) == 0) {
        local_288 = (undefined *)CONCAT44(local_ac,local_b0);
        local_280 = local_9c;
        uStack_27c = uStack_98;
        local_278 = local_94;
        uStack_273 = 1;
        bStack_274 = bVar20;
        uVar15 = FUN_024282d0(param_1,&local_288,param_3,param_4,0);
        if ((uVar15 & 1) != 0) goto LAB_02428230;
        uVar15 = FUN_0277d9a8(&local_b0);
        if ((uVar15 & 1) != 0) {
          FUN_01ad5d04(&local_240,&local_b0);
          uVar15 = FUN_01ae59b0(&local_240);
          if ((uVar15 & 1) != 0) {
            ppuVar18 = &local_250;
            local_250 = PTR_DAT_04bb2020 + 0x10;
            pcStack_248 = "FtrPickupError_ExistsVisitor";
            goto LAB_02428204;
          }
        }
      }
      break;
    case 3:
    case 4:
      local_270 = (undefined *)CONCAT44(local_270._4_4_,(undefined4)local_270);
      if ((param_2 & 1) == 0) {
        local_280 = 0x40a71a9;
LAB_024281ec:
        local_288 = PTR_DAT_04bb2020 + 0x10;
        ppuVar18 = (undefined **)&local_288;
        uStack_27c = 0;
LAB_02428204:
        FUN_006e43a0(auStack_1a8,ppuVar18);
        local_ec = 0xc;
        FUN_006e43a0(auStack_150,PTR_PTR_04bb2238);
        local_f8 = 0;
        goto LAB_02428224;
      }
      break;
    case 5:
      local_270 = (undefined *)CONCAT44(local_270._4_4_,(undefined4)local_270);
      if ((param_2 & 1) == 0) {
        local_280 = 0x4078272;
        goto LAB_024281ec;
      }
      break;
    case 6:
      local_270 = (undefined *)CONCAT44(local_270._4_4_,(undefined4)local_270);
      if ((param_2 & 1) == 0) {
        local_280 = 0x40fa9e4;
        goto LAB_024281ec;
      }
      break;
    case 7:
      local_270 = (undefined *)CONCAT44(local_270._4_4_,(undefined4)local_270);
      if ((param_2 & 1) == 0) {
        local_280 = 0x40a1b75;
        goto LAB_024281ec;
      }
      break;
    default:
      bVar24 = *pbVar2;
      puStack_260 = PTR_DAT_04bb2010 + 0x10;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      if (7 < bVar24) {
        bVar24 = 0xff;
      }
      local_288 = (undefined *)CONCAT71(local_288._1_7_,bVar24);
      uStack_268 = 0;
      local_264 = 0;
      local_278 = (uint)puVar1;
      bStack_274 = (byte)((ulong)puVar1 >> 0x20);
      uStack_273 = (undefined1)((ulong)puVar1 >> 0x28);
      uStack_272 = (undefined2)((ulong)puVar1 >> 0x30);
      local_258 = 0;
      local_280 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_288 = (undefined *)CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,(undefined4)local_288);
      local_270 = puStack_260;
      uVar15 = FUN_0150ee60(&local_288);
      if ((uVar15 & 1) == 0) {
        local_240 = CONCAT44(local_240._4_4_,0x11);
        uVar15 = FUN_0290cbcc(&local_240);
        if ((uVar15 & 1) == 0) {
          uVar15 = FUN_016e61bc();
          if ((uVar15 & 1) == 0) goto LAB_02427fd0;
        }
      }
      local_238 = CONCAT44(uStack_218,local_21c);
      local_240 = CONCAT44(local_ac,local_b0);
      local_230 = local_214;
      local_22b = 1;
      local_22c = bVar20;
      uVar15 = FUN_024282d0(param_1,&local_240,param_3,param_4,param_2 & 1);
      if ((uVar15 & 1) == 0) {
        local_22b = 0;
        uVar15 = FUN_024282d0(param_1,&local_240,param_3,param_4,param_2 & 1);
        if ((uVar15 & 1) == 0) break;
      }
      goto LAB_02428230;
    }
    bVar11 = true;
    psVar25 = (short *)PTR_DAT_04bb6298;
  }
LAB_02427adc:
  sVar8 = *psVar25;
  if (sVar8 == -1) {
LAB_02427c34:
    local_228 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_228);
    FUN_016e49e4(&local_228,&local_90,0);
    sVar8 = *psVar25;
    local_288 = (undefined *)((ulong)local_288 & 0xffffffff00000000);
    if (sVar8 == -1) {
LAB_02427ca8:
      bVar20 = *pbVar2;
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      local_200 = (undefined *)CONCAT71(local_200._1_7_,bVar20);
      FUN_02669430(&local_200);
      uVar15 = FUN_025579bc(pbVar2,&local_228,&local_288);
      uVar14 = *(uint *)(param_1 + 0x17cc);
      if ((uVar15 & 1) == 0) goto LAB_02427ce4;
      uVar14 = uVar14 | 0x40;
    }
    else {
      local_200 = (undefined *)CONCAT44(local_200._4_4_,0x15);
      puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
      if (0xff < (uint)(int)sVar8) {
        puVar19 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar19 >> 0x15 & 1) == 0) goto LAB_02427ca8;
      uVar14 = *(uint *)(param_1 + 0x17cc);
LAB_02427ce4:
      uVar14 = uVar14 & 0xffffffbf;
    }
    *(uint *)(param_1 + 0x17cc) = uVar14;
    if (!bVar11) {
LAB_02427f48:
      sVar8 = *psVar25;
      if (sVar8 != -1) {
        local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
        puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
        if (0xff < (uint)(int)sVar8) {
          puVar19 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar19 >> 1 & 1) != 0) {
          uVar15 = FUN_023db258(param_1,1,param_2 & 1);
          if ((uVar15 & 1) == 0) {
            uVar15 = FUN_023db258(param_1,0,param_2 & 1);
            if ((uVar15 & 1) == 0) goto LAB_02427fc8;
          }
          uVar14 = param_5 ^ 1;
          goto LAB_02428234;
        }
      }
LAB_02427fc8:
      puVar1 = PTR_DAT_04bb39b0;
      if ((param_5 & 1) != 0) goto LAB_02427fd0;
      lVar22 = *(long *)PTR_DAT_04bb39b0;
      if ((lVar22 == 0) || (*(int *)(lVar22 + 0x15c) == 0)) {
LAB_0242802c:
        uVar15 = FUN_02429380(param_1,param_2 & 1);
        if ((uVar15 & 1) != 0) goto LAB_02428230;
        lVar22 = *(long *)puVar1;
        if (lVar22 != 0) goto LAB_02428044;
LAB_02428088:
        uVar14 = 1;
        uVar15 = FUN_0242a0b0(param_1,1,param_2 & 1);
        if ((uVar15 & 1) != 0) goto LAB_02428234;
        lVar22 = *(long *)puVar1;
        if (lVar22 != 0) goto LAB_024280a8;
LAB_024280ec:
        uVar15 = FUN_0242a0b0(param_1,0,param_2 & 1);
        if ((uVar15 & 1) != 0) goto LAB_02428230;
        local_28c[0] = *pbVar2;
      }
      else {
        pbVar5 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar22 + 0x15c) != 0) {
          pbVar5 = (byte *)(lVar22 + 0x158);
        }
        bVar24 = *pbVar2;
        bVar20 = *pbVar5;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        if (7 < bVar24) {
          bVar24 = 0xff;
        }
        if (bVar20 == bVar24) goto LAB_0242802c;
LAB_02428044:
        if (*(int *)(lVar22 + 0x15c) == 0) goto LAB_02428088;
        pbVar5 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar22 + 0x15c) != 0) {
          pbVar5 = (byte *)(lVar22 + 0x158);
        }
        bVar24 = *pbVar2;
        bVar20 = *pbVar5;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        if (7 < bVar24) {
          bVar24 = 0xff;
        }
        if (bVar20 == bVar24) goto LAB_02428088;
LAB_024280a8:
        if (*(int *)(lVar22 + 0x15c) == 0) goto LAB_024280ec;
        pbVar5 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar22 + 0x15c) != 0) {
          pbVar5 = (byte *)(lVar22 + 0x158);
        }
        bVar20 = *pbVar5;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        local_28c[0] = *pbVar2;
        bVar24 = local_28c[0];
        if (7 < local_28c[0]) {
          bVar24 = 0xff;
        }
        if (bVar20 == bVar24) goto LAB_024280ec;
      }
      local_1d8._1_7_ = (uint7)((ulong)local_1d8 >> 8) & 0xffffff;
      local_200 = *(undefined **)PTR_DAT_04bb37e0;
      local_1e8 = 0.0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      local_1dc = 0;
      local_1d8 = (ulong)local_1d8._1_7_ << 8;
      local_1f8 = PTR_DAT_04bb2010 + 0x10;
      local_1f0 = 0.0;
      fStack_1ec = 0.0;
      if (7 < local_28c[0]) {
        local_28c[0] = 0xff;
      }
      uVar15 = FUN_022cf570(&local_200,local_28c);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0277e158(&local_200);
        if (((uVar15 & 1) != 0) && (local_1e8 == 1.4013e-45)) {
          local_240 = 0xfffe;
          FUN_0277d4ac(&local_240);
          FUN_016e49e4(&local_240,&local_200,0);
          local_288 = (undefined *)((ulong)local_288 & 0xffffffff00000000);
          FUN_0231c94c(param_1,&local_240,&local_288);
          bVar20 = *(byte *)(param_1 + 0x17cc) >> 6;
          local_250 = (undefined *)(CONCAT71(local_250._1_7_,bVar20) & 0xffffffffffffff01);
          if ((param_2 & 1) != 0) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = local_90;
              param_3[1] = local_8c[0];
            }
            if (param_4 != (undefined8 *)0x0) {
              *(uint *)(param_4 + 1) = local_1dc;
              *param_4 = CONCAT44(uStack_1e0,uStack_1e4);
            }
            goto LAB_02428230;
          }
          *(undefined4 *)(lVar4 + 0xa8) = 0;
          *(undefined8 *)(lVar4 + 8) = 0x100000000;
          uVar15 = FUN_022bbadc(lVar4 + 0xb0,&local_250,&local_1f8);
          if ((uVar15 & 1) != 0) {
            FUN_02429180(&local_288);
            puVar26 = &local_288;
            local_264 = CONCAT31(local_264._1_3_,bVar20) & 0xffffff01;
            uStack_27c = uStack_1e4;
            local_278 = uStack_1e0;
            bStack_274 = (byte)local_1dc;
            uStack_273 = (undefined1)(local_1dc >> 8);
            uStack_272 = (undefined2)(local_1dc >> 0x10);
            local_288 = local_200;
            local_280 = 0;
            local_270 = (undefined *)0x100000000;
            uStack_268 = 1;
            goto LAB_024282b8;
          }
        }
      }
LAB_02427fd0:
      uVar14 = 0;
      goto LAB_02428234;
    }
    bVar20 = (byte)(uVar14 >> 6);
    local_240 = CONCAT71(local_240._1_7_,bVar20) & 0xffffffffffffff01;
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(lVar4 + 0xa8) = 0;
      *(undefined8 *)(lVar4 + 8) = 0x100000000;
      uVar15 = FUN_022bb6dc(lVar4 + 0xb0,&local_240);
      if ((uVar15 & 1) == 0) goto LAB_02427f48;
      local_1f8._0_4_ = 0;
      local_1f8._4_4_ = 0.0;
      local_1f0 = 0.0;
      fStack_1ec = 0.0;
      local_1e8 = 0.0;
      local_200 = *(undefined **)PTR_DAT_04bb37e0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      local_1dc = local_1dc & 0xffffff00;
      local_1d8 = 0xfffe;
      FUN_0277d4ac(&local_1d8);
      local_200 = *(undefined **)(lVar4 + 0xc4);
      local_1f8._4_4_ = *(float *)(lVar4 + 0xdc);
      local_1f0 = *(float *)(lVar4 + 0xe0);
      uStack_1e4 = 0;
      uStack_1e0 = 1;
      fStack_1ec = *(float *)(lVar4 + 0xe4);
      local_1e8 = *(float *)(lVar4 + 0xe8);
      local_1dc = CONCAT31(local_1dc._1_3_,bVar20) & 0xffffff01;
      local_1f8._0_4_ = *(undefined4 *)(lVar4 + 0x108);
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      iVar13 = (int)(local_1f0 * 4.0);
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      local_1d8 = CONCAT44(local_8c[0],local_90);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(int *)(param_1 + 0x1989) = (int)(local_1f8._4_4_ * 999.99994);
      if (0x7ffe < iVar13) {
        iVar13 = 0x7fff;
      }
      if (iVar13 < -0x7fff) {
        iVar13 = -0x8000;
      }
      *(short *)(param_1 + 0x198d) = (short)iVar13;
      *(int *)(param_1 + 0x198f) = (int)(fStack_1ec * 999.99994);
      iVar13 = (int)(local_1e8 * 999.99994);
      if (0x7ffe < iVar13) {
        iVar13 = 0x7fff;
      }
      if (iVar13 < -0x7fff) {
        iVar13 = -0x8000;
      }
      *(short *)(param_1 + 0x1993) = (short)iVar13;
      *(char *)(param_1 + 0x1988) = (char)(undefined4)local_1f8;
      *(undefined **)(param_1 + 0x1980) = local_200;
      *(undefined1 *)(param_1 + 0x1996) = 0;
      *(byte *)(param_1 + 0x1997) = bVar20 & 1;
      *(undefined1 *)(param_1 + 0x1995) = 1;
      *(long *)(param_1 + 0x1998) = local_1d8;
      local_288 = (undefined *)CONCAT44(local_288._4_4_,0x22);
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar4 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar4 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar4,0x22);
    }
    else {
LAB_02427d00:
      uVar15 = FUN_0231a7d4(pbVar2,&local_90,&local_9c);
      if ((uVar15 & 1) == 0) goto LAB_02427fd0;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_90;
        param_3[1] = local_8c[0];
      }
      if (param_4 != (undefined8 *)0x0) {
        *(uint *)(param_4 + 1) = local_94;
        *param_4 = CONCAT44(uStack_98,local_9c);
      }
    }
  }
  else {
    local_200 = (undefined *)CONCAT44(local_200._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((((*(uint *)(puVar1 + 4) & 1) == 0) || (lVar22 = *(long *)PTR_DAT_04bbbc68, lVar22 == 0))
        || (*(long *)(lVar22 + 0xb0) == 0)) ||
       (((*(long *)(*(long *)(lVar22 + 0xb0) + 8) == 0 || (*(long *)(lVar22 + 0x488) == 0)) ||
        ((*(long *)(*(long *)(lVar22 + 0x488) + 8) == 0 ||
         ((*(long *)(lVar22 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar22 + 0x2b0) + 8) == 0))))))))
    goto LAB_02427c34;
    uVar14 = FUN_0277d6c4(&local_90);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar14) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) goto LAB_02427c34;
    FUN_0124c030(&local_200,&local_90);
    uVar15 = FUN_01250394(&local_200,1);
    if (((uVar15 & 1) != 0) || (!bVar11)) goto LAB_02427c34;
    local_288 = (undefined *)((ulong)local_288 & 0xffffffffffffff00);
    if ((param_2 & 1) != 0) goto LAB_02427d00;
    *(undefined4 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 8) = 0x100000000;
    uVar15 = FUN_022bb6dc(lVar4 + 0xb0,&local_288);
    if ((uVar15 & 1) == 0) goto LAB_02427c34;
    FUN_02429180(&local_200);
    uStack_1e4 = 0;
    uStack_1e0 = 1;
    local_1dc = local_1dc & 0xffffff00;
    fStack_1ec = *(float *)(lVar4 + 0xe4);
    local_1e8 = *(float *)(lVar4 + 0xe8);
    puVar26 = &local_200;
    local_1f8._4_4_ = (float)*(undefined8 *)(lVar4 + 0xdc);
    local_1f0 = (float)((ulong)*(undefined8 *)(lVar4 + 0xdc) >> 0x20);
    local_200 = *(undefined **)(lVar4 + 0xc4);
    local_1f8 = (char *)CONCAT44(local_1f8._4_4_,*(undefined4 *)(lVar4 + 0x108));
    local_1d8 = CONCAT44(local_8c[0],local_90);
LAB_024282b8:
    FUN_024291c0(param_1,puVar26);
  }
LAB_02428230:
  uVar14 = 1;
LAB_02428234:
  return uVar14 & 1;
}

