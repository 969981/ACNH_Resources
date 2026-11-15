
undefined8 FUN_0249a340(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  byte bVar16;
  char cVar17;
  uint *puVar18;
  int *piVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int local_ec;
  undefined4 uStack_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  ulong local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined8 local_bc;
  float local_b4;
  float fStack_b0;
  float local_ac;
  
  lVar10 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x2a0) + 0xf0))(lVar10 + 0x2a0);
  puVar20 = *(undefined8 **)(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x68);
  fVar29 = *pfVar11;
  lVar10 = 0x284;
  lVar1 = lVar2 + 0x284;
  if ((param_2 & 1) == 0) {
    lVar10 = 0x278;
    lVar1 = lVar2 + 0x278;
  }
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  local_e0 = 0.0;
  if (puVar20[0x227] == 0) {
    puVar12 = (uint *)FUN_0171ee68(&DAT_04c931a0);
    pcVar4 = PTR_DAT_04bbde88;
    puVar20 = (undefined8 *)PTR_DAT_04bbde90;
  }
  else {
    puVar12 = (uint *)FUN_0171ee68(*(long *)(puVar20[0x227] + 0x88) + 0x60);
    pcVar4 = PTR_DAT_04bbde88;
    puVar20 = (undefined8 *)PTR_DAT_04bbde90;
  }
  PTR_DAT_04bbde88 = pcVar4;
  PTR_DAT_04bbde90 = (undefined *)puVar20;
  if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
    cVar17 = *pcVar4;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *puVar20 = 0xffffffffffffffff;
        puVar20[1] = 0xffffffffffffffff;
        *pcVar4 = '\x01';
        puVar20[6] = 0xffffffffffffffff;
        puVar20[2] = 0xffffffffffffffff;
        puVar20[3] = 0xffffffffffffffff;
        puVar20[4] = 0xffffffffffffffff;
        puVar20[5] = 0xffffffffffffffff;
        uVar3 = *puVar12;
      }
      else {
        uVar3 = *(uint *)((long)puVar20 + 0x2c);
        if (-1 < (int)uVar3) {
          if (((char *)((ulong)uVar3 + (long)puVar12) != (char *)0x0) &&
             (*(char *)((ulong)uVar3 + (long)puVar12) < '\0')) {
            return 0;
          }
          break;
        }
        if (uVar3 != 0xffffffff) break;
        uVar3 = *puVar12;
      }
      if ((uVar3 == 0) || (puVar18 = (uint *)(ulong)uVar3, puVar12 == puVar18)) break;
      lVar15 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar18)) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar12 + (lVar15 - (long)puVar18);
      if (lVar15 == 0) break;
      uVar14 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar18));
      *(undefined4 *)((long)puVar20 + 0x2c) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar19 = (int *)(lVar15 + 4);
      while (piVar19[-1] != 0x42ad246a) {
        piVar19 = piVar19 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_0249a54c;
      }
      iVar9 = 0;
      if (*piVar19 != -1) {
        iVar9 = *piVar19;
      }
      *(int *)((long)puVar20 + 0x2c) = iVar9;
      if (*puVar12 == 0) break;
    } while( true );
  }
LAB_0249a54c:
  local_e0 = 0.0;
  FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,lVar1,&local_e0);
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
    local_b4 = 0.0;
    FUN_016e026c(0,lVar1,&local_b4,0);
    if (local_b4 == 3.08286e-44) {
      return 0;
    }
  }
  uVar13 = FUN_0240b8d0(param_1,param_2 & 1,0);
  puVar5 = PTR_DAT_04bb2d00;
  if ((int)uVar13 == 1) {
    return uVar13;
  }
  fVar24 = 3.0;
  fVar29 = fVar29 * 0.99;
  fVar23 = fVar29 * 0.5;
  do {
    iVar9 = 0;
    fVar30 = (fVar24 + 1.0) * 10.0 + 5.0;
    do {
      lVar15 = *(long *)(param_1 + 0x68);
      if (lVar15 == 0) {
        local_b4 = 0.0;
        fStack_b0 = 0.0;
        local_ac = 0.0;
      }
      else {
        pfVar11 = (float *)(puVar5 + ((ulong)(*(uint *)(lVar15 + 0x2b4) >> 0x14) & 0xff0));
        fVar25 = (float)(*(uint *)(lVar15 + 0x2b4) & 0xffffff) * 5.9604645e-08;
        fVar27 = *pfVar11 + fVar25 * pfVar11[1];
        fVar25 = pfVar11[2] + fVar25 * pfVar11[3];
        fVar28 = fVar27 * 0.0;
        local_b4 = *(float *)(lVar15 + 0x278) +
                   fVar28 * 0.0 + fVar25 * 0.0 + fVar30 * (fVar27 + 0.0);
        fStack_b0 = *(float *)(lVar15 + 0x27c) +
                    (fVar28 * 0.0 + 1.0) * 0.0 + fVar25 * 0.0 * 0.0 + fVar30 * fVar28;
        local_ac = *(float *)(lVar15 + 0x280) +
                   (fVar25 * 0.0 * 0.0 - fVar27 * 0.0) + fVar30 * fVar25;
      }
      if (iVar9 == 0) {
LAB_0249a88c:
        local_d0 = 0x673f800000;
        local_c8 = local_c8 & 0xffffffff00000000;
        local_e0 = local_b4;
        fStack_dc = fStack_b0;
        local_d8 = local_ac;
        local_d4 = fVar29;
        iVar8 = FUN_016ed290(&local_e0,0,0,0);
        if (iVar8 == 0) {
          local_e0 = 0.0;
          FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_b4,&local_e0);
          if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
            local_ec = 0;
            FUN_016e026c(0,&local_b4,&local_ec,0);
            if (local_ec == 0x16) goto LAB_0249a6c0;
          }
          lVar15 = FUN_0251e98c(1);
          pfVar11 = (float *)(**(code **)(*(long *)(lVar15 + 0x210) + 0xf0))(lVar15 + 0x210);
          local_d4 = *pfVar11;
          local_c0 = 0x101;
          local_bc = 0x1000000000000;
          local_be = 0;
          local_d8 = local_ac;
          local_e0 = local_b4;
          fStack_dc = fStack_b0;
          bVar16 = *(byte *)(param_1 + 0x1ee8);
          if (7 < bVar16) {
            bVar16 = 0xff;
          }
          local_d0 = CONCAT71(local_d0._1_7_,bVar16);
          local_d0 = CONCAT44(*(undefined4 *)(param_1 + 0x230),(undefined4)local_d0);
          local_c8 = 0xbf8000000000001f;
          uVar14 = FUN_0251fad0(&local_e0,0);
          if ((uVar14 & 1) == 0) {
            fVar27 = 0.0;
            fVar26 = local_b4 - *(float *)(*(long *)(param_1 + 0x68) + 0x278);
            fVar28 = local_ac - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
            fVar25 = SQRT(fVar26 * fVar26 + 0.0 + fVar28 * fVar28);
            if (0.0 < fVar25) {
              fVar25 = 1.0 / fVar25;
              fVar26 = fVar26 * fVar25;
              fVar27 = fVar25 * 0.0;
              fVar28 = fVar28 * fVar25;
            }
            local_e0 = local_b4 + fVar26 * 5.0;
            fStack_dc = fStack_b0 + fVar27 * 5.0;
            local_d8 = local_ac + fVar28 * 5.0;
            uVar14 = FUN_0251fad0(&local_e0,0);
            if ((uVar14 & 1) == 0) {
              local_e0 = fVar26 * 10.0 + local_b4;
              fStack_dc = fVar27 * 10.0 + fStack_b0;
              local_d8 = fVar28 * 10.0 + local_ac;
              uVar14 = FUN_0251fad0(&local_e0,0);
              if ((uVar14 & 1) == 0) {
                lVar15 = *(long *)(param_1 + 0x68);
                fVar32 = *(float *)(lVar15 + 0x278);
                fVar31 = *(float *)(lVar15 + 0x27c);
                fVar28 = local_b4 - fVar32;
                fVar26 = *(float *)(lVar15 + 0x280);
                fVar27 = fStack_b0 - fVar31;
                fVar25 = local_ac - fVar26;
                local_d8 = fVar26 + fVar25 * 35.0 * 0.01;
                local_e0 = fVar32 + fVar28 * 35.0 * 0.01;
                fStack_dc = fVar31 + fVar27 * 35.0 * 0.01;
                uVar14 = FUN_016ebc50(fVar23,&local_e0);
                if ((uVar14 & 1) != 0) {
                  fVar21 = (float)FUN_016e026c(0,&local_e0,0,0);
                  fVar21 = fVar21 - fVar31;
                  fVar22 = -fVar21;
                  if (0.0 <= fVar21) {
                    fVar22 = fVar21;
                  }
                  if ((fVar22 <= 20.0) &&
                     (uVar14 = FUN_016e9c80(0x40000000,&local_e0,0,0,0), (uVar14 & 1) != 0)) {
                    local_d8 = fVar26 + fVar25 * 40.0 * 0.01;
                    local_e0 = fVar32 + fVar28 * 40.0 * 0.01;
                    fStack_dc = fVar31 + fVar27 * 40.0 * 0.01;
                    uVar14 = FUN_016ebc50(fVar23,&local_e0);
                    if ((uVar14 & 1) != 0) {
                      fVar21 = (float)FUN_016e026c(0,&local_e0,0,0);
                      fVar21 = fVar21 - fVar31;
                      fVar22 = -fVar21;
                      if (0.0 <= fVar21) {
                        fVar22 = fVar21;
                      }
                      if ((fVar22 <= 20.0) &&
                         (uVar14 = FUN_016e9c80(0x40000000,&local_e0,0,0,0), (uVar14 & 1) != 0)) {
                        local_d8 = fVar26 + fVar25 * 45.0 * 0.01;
                        local_e0 = fVar32 + fVar28 * 45.0 * 0.01;
                        fStack_dc = fVar31 + fVar27 * 45.0 * 0.01;
                        uVar14 = FUN_016ebc50(fVar23,&local_e0);
                        if ((uVar14 & 1) != 0) {
                          fVar21 = (float)FUN_016e026c(0,&local_e0,0,0);
                          fVar21 = fVar21 - fVar31;
                          fVar22 = -fVar21;
                          if (0.0 <= fVar21) {
                            fVar22 = fVar21;
                          }
                          if ((fVar22 <= 20.0) &&
                             (uVar14 = FUN_016e9c80(0x40000000,&local_e0,0,0,0), (uVar14 & 1) != 0))
                          {
                            local_d8 = fVar26 + fVar25 * 50.0 * 0.01;
                            local_e0 = fVar32 + fVar28 * 50.0 * 0.01;
                            fStack_dc = fVar31 + fVar27 * 50.0 * 0.01;
                            uVar14 = FUN_016ebc50(fVar23,&local_e0);
                            if ((uVar14 & 1) != 0) {
                              fVar21 = (float)FUN_016e026c(0,&local_e0,0,0);
                              fVar21 = fVar21 - fVar31;
                              fVar22 = -fVar21;
                              if (0.0 <= fVar21) {
                                fVar22 = fVar21;
                              }
                              if ((fVar22 <= 20.0) &&
                                 (uVar14 = FUN_016e9c80(0x40000000,&local_e0,0,0,0),
                                 (uVar14 & 1) != 0)) {
                                local_d8 = fVar26 + fVar25 * 55.0 * 0.01;
                                local_e0 = fVar32 + fVar28 * 55.0 * 0.01;
                                fStack_dc = fVar31 + fVar27 * 55.0 * 0.01;
                                uVar14 = FUN_016ebc50(fVar23,&local_e0);
                                if ((uVar14 & 1) != 0) {
                                  fVar21 = (float)FUN_016e026c(0,&local_e0,0,0);
                                  fVar21 = fVar21 - fVar31;
                                  fVar22 = -fVar21;
                                  if (0.0 <= fVar21) {
                                    fVar22 = fVar21;
                                  }
                                  if ((fVar22 <= 20.0) &&
                                     (uVar14 = FUN_016e9c80(0x40000000,&local_e0,0,0,0),
                                     (uVar14 & 1) != 0)) {
                                    local_d8 = fVar26 + fVar25 * 60.0 * 0.01;
                                    local_e0 = fVar32 + fVar28 * 60.0 * 0.01;
                                    fStack_dc = fVar31 + fVar27 * 60.0 * 0.01;
                                    uVar14 = FUN_016ebc50(fVar23,&local_e0);
                                    if ((uVar14 & 1) != 0) {
                                      fVar21 = (float)FUN_016e026c(0,&local_e0,0,0);
                                      fVar21 = fVar21 - fVar31;
                                      fVar22 = -fVar21;
                                      if (0.0 <= fVar21) {
                                        fVar22 = fVar21;
                                      }
                                      if ((fVar22 <= 20.0) &&
                                         (uVar14 = FUN_016e9c80(0x40000000,&local_e0,0,0,0),
                                         (uVar14 & 1) != 0)) {
                                        local_d8 = fVar26 + fVar25 * 65.0 * 0.01;
                                        local_e0 = fVar32 + fVar28 * 65.0 * 0.01;
                                        fVar25 = fVar31 + fVar27 * 65.0 * 0.01;
                                        fStack_dc = fVar25;
                                        uVar14 = FUN_016ebc50(fVar23,&local_e0);
                                        if ((uVar14 & 1) != 0) {
                                          fVar28 = (float)FUN_016e026c(0,&local_e0,0,0);
                                          fVar28 = fVar28 - fVar31;
                                          fVar27 = -fVar28;
                                          if (0.0 <= fVar28) {
                                            fVar27 = fVar28;
                                          }
                                          if ((fVar27 <= 20.0) &&
                                             (uVar14 = FUN_016e9c80(0x40000000,&local_e0,0,0,0),
                                             (uVar14 & 1) != 0)) {
                                            fVar28 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
                                            fVar27 = (float)FUN_016e026c(0,&local_b4,0,0);
                                            fVar28 = fVar28 - fVar27;
                                            fVar27 = -fVar28;
                                            if (0.0 <= fVar28) {
                                              fVar27 = fVar28;
                                            }
                                            if ((fVar27 < 0.5) &&
                                               (uVar14 = FUN_016e9c80(fVar29,&local_b4,1,0,0),
                                               (uVar14 & 1) != 0)) {
                                              if (0.0 < fVar30) {
                                                fVar27 = 0.0;
                                                do {
                                                  uVar6 = 0;
                                                  local_ec = FUN_016e46d8(fVar27,param_1);
                                                  uStack_e8 = uVar6;
                                                  local_e0 = (float)((uint)local_e0 & 0xffffff00);
                                                  fStack_dc = -100.0;
                                                  local_d8 = 0.0;
                                                  local_d4 = (float)((uint)local_d4 & 0xffffff00);
                                                  local_e4 = fVar25;
                                                  FUN_016e7890((long)&local_d4 + 2);
                                                  fVar28 = (float)FUN_016e8340(fVar29 * 0.725,
                                                                               &local_ec,&local_e0);
                                                  if (1.0 < fVar28 - *(float *)(*(long *)(param_1 +
                                                                                         0x68) +
                                                                               0x27c))
                                                  goto LAB_0249a6c0;
                                                  fVar27 = fVar27 + 5.0;
                                                } while (fVar27 < fVar30);
                                              }
                                              uVar14 = FUN_0249aff4(param_1,&local_b4,param_2 & 1);
                                              if ((uVar14 & 1) != 0) {
                                                return 1;
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
                }
              }
            }
          }
        }
      }
      else {
        if (iVar9 == 2) {
          iVar8 = (int)local_b4;
          bVar7 = local_b4 < 0.0;
          fVar25 = (float)(int)((int)((float)(int)local_ac / 5.0) - (uint)(local_ac < 0.0) &
                               0xfffffffe) * 5.0 + 5.0;
          fStack_b0 = (float)FUN_016e026c(0,&local_b4,0,0);
          local_b4 = (float)(int)((int)((float)iVar8 / 5.0) - (uint)bVar7 & 0xfffffffe) * 5.0 + 5.0;
LAB_0249a85c:
          local_ac = fVar25;
        }
        else if (iVar9 == 1) {
          fVar27 = (float)(int)((int)((float)(int)local_b4 / 5.0) - (uint)(local_b4 < 0.0));
          fVar28 = fVar27 * 5.0;
          fVar26 = (float)(int)((int)((float)(int)local_ac / 5.0) - (uint)(local_ac < 0.0));
          fVar25 = fVar26 * 5.0;
          if (fVar26 * 5.0 + 2.5 < local_ac) {
            fVar25 = fVar25 + 5.0;
          }
          bVar7 = fVar27 * 5.0 + 2.5 < local_b4;
          local_b4 = fVar28;
          if (bVar7) {
            local_b4 = fVar28 + 5.0;
          }
          goto LAB_0249a85c;
        }
        fVar25 = local_b4 - *(float *)(lVar2 + lVar10);
        fVar27 = local_ac - *(float *)(lVar1 + 8);
        if (SQRT(fVar27 * fVar27 + fVar25 * fVar25) <= 60.0) goto LAB_0249a88c;
      }
LAB_0249a6c0:
      iVar9 = iVar9 + 1;
    } while (iVar9 != 3);
    fVar24 = fVar24 + 0.25;
    if (4.5 < fVar24) {
      return 0;
    }
  } while( true );
}

