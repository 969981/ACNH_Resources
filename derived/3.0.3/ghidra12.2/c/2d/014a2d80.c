
/* WARNING: Removing unreachable block (ram,0x014a2de0) */
/* WARNING: Removing unreachable block (ram,0x014a2df0) */
/* WARNING: Removing unreachable block (ram,0x014a2dfc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014a2d80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  uint *puVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  float *pfVar16;
  undefined4 uVar17;
  long lVar18;
  undefined **ppuVar19;
  uint *puVar20;
  long *plVar21;
  undefined ***pppuVar22;
  undefined ***pppuVar23;
  int *piVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  int iVar28;
  int iVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  char cVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 local_200;
  float local_1f8;
  float local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined **local_1e0;
  undefined *local_1d8;
  int local_1d0;
  int local_1cc;
  undefined **local_1c8;
  undefined *puStack_1c0;
  int local_1b8;
  int iStack_1b4;
  undefined4 local_1b0;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  int local_198;
  undefined1 auStack_194 [100];
  undefined4 local_130;
  undefined2 local_12c;
  undefined1 local_12a;
  undefined *local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined4 local_f4;
  uint *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  int local_d0;
  int local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  byte local_b8;
  undefined1 local_ac [12];
  
  ppuVar27 = (undefined **)(param_1 + 0x1578);
  ppuVar19 = *(undefined ***)(param_1 + 0x1580);
  while (ppuVar19 != ppuVar27) {
    ppuVar25 = (undefined **)ppuVar19[1];
    ppuVar26 = ppuVar25;
    if (*ppuVar19 != (undefined *)0x0) {
      *(undefined ***)(*ppuVar19 + 8) = ppuVar25;
      ppuVar26 = (undefined **)ppuVar19[1];
    }
    if (ppuVar26 != (undefined **)0x0) {
      *ppuVar26 = *ppuVar19;
    }
    *ppuVar19 = (undefined *)0x0;
    ppuVar19[1] = (undefined *)0x0;
    *(int *)(param_1 + 0x1588) = *(int *)(param_1 + 0x1588) + -1;
    ppuVar19[-0x14] = *(undefined **)(param_1 + 0x1590);
    *(undefined ***)(param_1 + 0x1590) = ppuVar19 + -0x14;
    ppuVar19 = ppuVar25;
  }
  local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    local_c0 = 0;
    local_c8 = PTR_DAT_04bbfe68 + 0x10;
    lVar18 = *(long *)PTR_DAT_04bb2720;
    if (lVar18 == 0) {
      puVar31 = &DAT_055c04a0;
    }
    else {
      puVar31 = &DAT_055c04a0;
      if (*(long *)(lVar18 + 0x330) != 0) {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar12 = FUN_006bd550(*puVar31,0);
        puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          puVar31 = &DAT_055c04a0;
        }
      }
    }
    local_bc = *(undefined4 *)(puVar31 + 7);
    local_b8 = FUN_017baf44();
    local_b8 = local_b8 & 1;
    local_e8 = param_1 + 0x16d70;
    local_e0 = param_1 + 0x16d80;
    puVar30 = PTR_DAT_04bb2010 + 0x10;
    iVar12 = *(int *)(param_1 + 0x16d88);
    local_cc = *(int *)(param_1 + 0x16d8c);
    iVar4 = *(int *)(param_1 + 0x16d7c) + -1;
    local_d8 = puVar30;
    local_d0 = iVar12;
    if (iVar4 != local_cc) {
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      ppuVar19 = (undefined **)(PTR_DAT_04bb2e18 + 0x10);
      do {
        if (*(int *)(param_1 + 0x15a0) <= *(int *)(param_1 + 0x1588)) break;
        if (((((local_d0 < *(int *)(param_1 + 0x16da8)) || (*(int *)(param_1 + 0x16db8) < local_d0))
             || (local_cc < *(int *)(param_1 + 0x16dac))) ||
            (*(int *)(param_1 + 0x16dbc) < local_cc)) ||
           (((*(float *)(param_1 + 0x16dc0) != 0.0 &&
             (iVar28 = (int)(*(float *)(param_1 + 0x16dc0) *
                            (float)(local_cc - *(int *)(param_1 + 0x16dac))), 0 < iVar28)) &&
            (!(*(int *)(param_1 + 0x16da8) + iVar28 <= local_d0 &&
              local_d0 <= *(int *)(param_1 + 0x16db8) - iVar28))))) {
          if (*(int *)(param_1 + 0x17dc0) != 1) {
            if (*(int *)(param_1 + 0x16e38) <= local_d0) {
              if (local_d0 <= *(int *)(param_1 + 0x16e48)) {
                if (*(int *)(param_1 + 0x16e3c) <= local_cc) {
                  if (local_cc <= *(int *)(param_1 + 0x16e4c)) goto LAB_014a31d0;
                }
              }
            }
          }
        }
        else {
LAB_014a31d0:
          puVar31 = (undefined8 *)FUN_01a5010c(&local_c8,0,&local_d8);
          uVar15 = FUN_0277e294();
          if ((uVar15 & 1) != 0) {
            uVar15 = FUN_0277da10(puVar31);
            puVar11 = PTR_DAT_04bb43c0;
            if ((uVar15 & 1) != 0) {
              local_f8 = *(undefined2 *)puVar31;
              local_f6 = *(undefined1 *)((long)puVar31 + 2);
              local_f5 = *(undefined1 *)((long)puVar31 + 3);
              local_f4 = *(undefined4 *)((long)puVar31 + 4);
              local_f0 = (uint *)0x0;
              lVar18 = *(long *)PTR_DAT_04bb43c0;
              local_100 = puVar1;
              uVar14 = FUN_0277d6c4(&local_f8);
              if (*(long *)puVar11 != 0) {
                lVar18 = *(long *)(lVar18 + 0x57e58);
                uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                if ((uVar14 < *(uint *)(lVar18 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                  lVar18 = *(long *)PTR_DAT_04bc0428;
                  uVar14 = FUN_0277d6c4(puVar31);
                  uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                  if (uVar14 < *(uint *)(lVar18 + 0x1d8)) {
                    puVar20 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar14 * 8);
                    if (puVar20 != (uint *)0x0) {
                      local_f0 = puVar20;
                    }
                  }
                }
              }
              local_108 = 0;
              local_118 = 0;
              local_128 = puVar2;
              puStack_120 = puVar30;
              local_110 = puVar30;
              FUN_01afb480(&local_100,&local_128);
              local_198 = 0;
              local_118 = CONCAT44(local_118._4_4_ + local_cc,(int)local_118 + local_d0);
              local_108 = CONCAT44(local_108._4_4_ + local_cc,(int)local_108 + local_d0);
              local_1b8 = 0;
              iStack_1b4 = 0;
              local_1b0 = 0;
              local_1c8 = &PTR_LAB_049a6570;
              local_1a0 = 4;
              local_130 = 0;
              local_12c = 0;
              local_12a = 0;
              lVar18 = *(long *)puVar11;
              local_1e8 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
              local_1e0 = (undefined **)*puVar31;
              local_1d8 = (undefined *)0x0;
              puStack_1c0 = puVar30;
              local_1a8 = auStack_194;
              uVar14 = FUN_0277d6c4(&local_1e0);
              if (*(long *)puVar11 != 0) {
                lVar18 = *(long *)(lVar18 + 0x57e58);
                uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                if ((uVar14 < *(uint *)(lVar18 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                  FUN_0277d6c4(puVar31);
                }
              }
              puVar20 = local_f0;
              local_1b0 = 1;
              local_12c = 0;
              local_12a = 0;
              local_1b8 = local_d0;
              iStack_1b4 = local_cc;
              fVar33 = *(float *)PTR_DAT_04bb39d0 - ((float)local_d0 * 5.0 + 2.5);
              fVar35 = *(float *)(PTR_DAT_04bb39d0 + 8) - ((float)local_cc * 5.0 + 2.5);
              fVar36 = (float)*(int *)(param_1 + 0x16e1c) * 5.0;
              iVar28 = 10000;
              if (fVar36 + fVar36 <= SQRT(fVar35 * fVar35 + fVar33 * fVar33)) {
                iVar28 = 0;
              }
              iVar28 = iVar28 + local_cc;
              if ((((local_d0 < *(int *)(param_1 + 0x16dd8)) ||
                   (*(int *)(param_1 + 0x16de8) < local_d0)) ||
                  (local_cc < *(int *)(param_1 + 0x16ddc))) ||
                 (*(int *)(param_1 + 0x16dec) < local_cc)) {
LAB_014a3478:
                local_130 = iVar28 + -1000;
                if (((*(int *)(param_1 + 0x17dc0) != 1) && (*(int *)(param_1 + 0x16e38) <= local_d0)
                    ) && ((local_d0 <= *(int *)(param_1 + 0x16e48) &&
                          (*(int *)(param_1 + 0x16e3c) <= local_cc)))) {
                  iVar28 = iVar28 + -0x400;
                  if (*(int *)(param_1 + 0x16e4c) < local_cc) {
                    iVar28 = local_130;
                  }
                  local_130 = iVar28;
                }
              }
              else {
                local_130 = iVar28;
                if (((*(float *)(param_1 + 0x16df0) != 0.0) &&
                    (iVar29 = (int)(*(float *)(param_1 + 0x16df0) *
                                   (float)(local_cc - *(int *)(param_1 + 0x16ddc))), 0 < iVar29)) &&
                   ((local_d0 < *(int *)(param_1 + 0x16dd8) + iVar29 ||
                    (*(int *)(param_1 + 0x16de8) - iVar29 < local_d0)))) goto LAB_014a3478;
              }
              if (*(char *)(param_1 + 0x17dcc) != '\0') {
                fVar33 = 0.0;
                if ((local_f0 != (uint *)0x0) && (uVar14 = *local_f0, uVar14 != 0)) {
                  cVar32 = *PTR_DAT_04bbfe88;
                  do {
                    if (cVar32 == '\0') {
                      cVar32 = '\x01';
                      *PTR_DAT_04bbfe88 = 1;
                      memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                      uVar14 = *puVar20;
                    }
                    else {
                      uVar5 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
                      if (-1 < (int)uVar5) {
                        if ((float *)((ulong)uVar5 + (long)puVar20) != (float *)0x0) {
                          fVar33 = *(float *)((ulong)uVar5 + (long)puVar20);
                        }
                        break;
                      }
                      if (uVar5 != 0xffffffff) break;
                    }
                    puVar10 = (uint *)(ulong)uVar14;
                    if ((puVar10 == (uint *)0x0) || (puVar20 == puVar10)) break;
                    lVar18 = 0xc;
                    if (*(char *)((long)puVar20 + (10 - (long)puVar10)) != '\0') {
                      lVar18 = 0x1c;
                    }
                    lVar18 = (long)puVar20 + (lVar18 - (long)puVar10);
                    if (lVar18 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar10));
                    *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar24 = (int *)(lVar18 + 4);
                    while (piVar24[-1] != -0x3e783aea) {
                      piVar24 = piVar24 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_014a35e4;
                    }
                    iVar28 = 0;
                    if (*piVar24 != -1) {
                      iVar28 = *piVar24;
                    }
                    *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar28;
                    uVar14 = *puVar20;
                    if (uVar14 == 0) break;
                  } while( true );
                }
LAB_014a35e4:
                fVar35 = ((float)local_118._4_4_ * 5.0 + (float)local_108._4_4_ * 5.0 + 5.0) * 0.5;
                fVar36 = ((float)(int)local_118 * 5.0 + (float)(int)local_108 * 5.0 + 5.0) * 0.5;
                local_1e0 = (undefined **)CONCAT44(local_1e0._4_4_,fVar35);
                local_1e8 = (undefined **)CONCAT44(local_1e8._4_4_,fVar36);
                lVar18 = *(long *)PTR_DAT_04bb27c8;
                if (((lVar18 == 0) || (*(long *)(lVar18 + 0xa8) == 0)) ||
                   (*(char *)(lVar18 + 0x11c8) != '\0')) {
                  fVar40 = -500.0;
                }
                else {
                  local_ac[0] = 0;
                  sVar8 = *(short *)PTR_DAT_04bb6298;
                  if (sVar8 == -1) {
                    uVar17 = 7;
                  }
                  else {
                    local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
                    puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
                    if (0xff < (uint)(int)sVar8) {
                      puVar20 = (uint *)PTR_DAT_04bc39f8;
                    }
                    uVar17 = 7;
                    if ((*puVar20 & 2) != 0) {
                      uVar17 = 5;
                    }
                  }
                  local_200 = (undefined *)CONCAT44(local_200._4_4_,uVar17);
                  fVar40 = (float)FUN_00962700(*(long *)(lVar18 + 0xa8),&local_1e8,&local_200,1,
                                               local_ac);
                  fVar35 = local_1e0._0_4_;
                  fVar36 = (float)local_1e8;
                }
                fVar40 = fVar40 + fVar33 * 0.5;
                local_1e8 = (undefined **)CONCAT44(fVar40,(float)local_1e8);
                lVar18 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x78);
                if (lVar18 != 0) {
                  fVar39 = *(float *)(lVar18 + 0x40);
                  fVar38 = fVar39 * 0.017453292 * ((fVar35 + *(float *)(lVar18 + 0x38)) / 160.0);
                  fVar34 = cosf(fVar38);
                  if (fVar34 == 0.0) {
                    fVar34 = 0.001;
                  }
                  else {
                    fVar34 = cosf(fVar38);
                  }
                  fVar39 = 57600.0 / (fVar39 * 6.2831855) + fVar40;
                  fVar38 = sinf(fVar38);
                  fVar37 = *(float *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x78) + 0x3c);
                  fVar35 = fVar38 * fVar39 * fVar37 + (1.0 - fVar37) * fVar35;
                  fVar40 = fVar40 * (1.0 - fVar37) +
                           fVar37 * (fVar34 * fVar39 +
                                    -57600.0 /
                                    (*(float *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x78) + 0x40)
                                    * 6.2831855));
                }
                local_200 = (undefined *)CONCAT44(fVar40,fVar36);
                fVar36 = (float)(((int)local_108 - (int)local_118) + 1) * 5.0;
                fVar40 = (float)((local_108._4_4_ - local_118._4_4_) + 1) * 5.0;
                if (fVar36 <= fVar40) {
                  fVar36 = fVar40;
                }
                if (fVar33 <= fVar36) {
                  fVar33 = fVar36;
                }
                local_1f8 = fVar35;
                uVar15 = FUN_0073e274(fVar33 * 0.5,param_1 + 0x17dd0,&local_200);
                if ((uVar15 & 1) == 0) goto LAB_014a3c70;
              }
              iVar6 = (int)local_118;
              local_1d8 = PTR_DAT_04bb2010 + 0x10;
              iVar28 = local_108._4_4_ + 1;
              local_1e8 = &puStack_120;
              local_1e0 = &local_110;
              local_1d0 = (int)local_118;
              local_1cc = local_118._4_4_;
              iVar29 = local_130;
              while( true ) {
                local_130 = iVar29;
                if (iVar28 == local_1cc) break;
                do {
                  pfVar16 = (float *)FUN_01a5010c(&local_c8,1,&local_1d8);
                  uVar15 = FUN_0277e294();
                  if ((uVar15 & 1) != 0) {
                    uVar15 = FUN_0277da10(pfVar16);
                    puVar11 = PTR_DAT_04bb43c0;
                    if ((uVar15 & 1) != 0) {
                      local_200 = PTR_DAT_04bc0510 + 0x10;
                      local_1f8 = *pfVar16;
                      local_1f4 = pfVar16[1];
                      local_1f0 = 0;
                      lVar18 = *(long *)PTR_DAT_04bb43c0;
                      uVar14 = FUN_0277d6c4(&local_1f8);
                      if (*(long *)puVar11 != 0) {
                        lVar18 = *(long *)(lVar18 + 0x57e58);
                        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                        if ((uVar14 < *(uint *)(lVar18 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                          FUN_0277d6c4(pfVar16);
                        }
                      }
                      if (local_198 < (int)local_1a0) {
                        iVar29 = local_1a0._4_4_ + local_198;
                        local_198 = local_198 + 1;
                        iVar7 = 0;
                        if ((int)local_1a0 <= iVar29) {
                          iVar7 = (int)local_1a0;
                        }
                        plVar21 = (long *)(local_1a8 + (long)(iVar29 - iVar7) * 0x18);
                        *(int *)(plVar21 + 1) = local_1d0;
                        *(int *)((long)plVar21 + 0xc) = local_1cc;
                        *plVar21 = (long)(PTR_DAT_04bb2010 + 0x10);
                        *(undefined4 *)(plVar21 + 2) = 1;
                      }
                    }
                  }
                  if (local_1d0 < *(int *)(local_1e0 + 1)) {
                    local_1d0 = local_1d0 + 1;
                  }
                  else {
                    local_1cc = local_1cc + 1;
                    local_1d0 = *(int *)(local_1e8 + 1);
                  }
                  iVar29 = local_130;
                } while (iVar6 != local_1d0);
              }
              if (*(int *)(param_1 + 0x1588) < *(int *)(param_1 + 0x15a0)) {
                pppuVar22 = *(undefined ****)(param_1 + 0x1590);
                if (pppuVar22 != (undefined ***)0x0) {
                  *(undefined ***)(param_1 + 0x1590) = *pppuVar22;
                }
                *pppuVar22 = &PTR_LAB_049a6570;
                pppuVar22[1] = ppuVar19;
                *(int *)(pppuVar22 + 2) = local_1b8;
                puVar11 = PTR_DAT_04bb2010;
                *(undefined4 *)(pppuVar22 + 6) = 0;
                *(int *)((long)pppuVar22 + 0x14) = iStack_1b4;
                pppuVar22[1] = (undefined **)(puVar11 + 0x10);
                *(undefined4 *)(pppuVar22 + 3) = local_1b0;
                pppuVar22[4] = (undefined **)((long)pppuVar22 + 0x34);
                pppuVar22[5] = (undefined **)0x4;
                if (pppuVar22 != &local_1c8) {
                  iVar28 = local_198;
                  if (3 < local_198) {
                    iVar28 = 4;
                  }
                  if (0 < local_198) {
                    iVar6 = *(int *)(pppuVar22 + 6);
                    iVar7 = *(int *)(pppuVar22 + 5);
                    local_1a0._4_4_ = (int)((ulong)local_1a0 >> 0x20);
                    if (iVar6 < iVar7) {
                      iVar9 = 0;
                      if ((int)local_1a0 <= local_1a0._4_4_) {
                        iVar9 = (int)local_1a0;
                      }
                      iVar9 = local_1a0._4_4_ - iVar9;
                      *(int *)(pppuVar22 + 6) = iVar6 + 1;
                      iVar6 = *(int *)((long)pppuVar22 + 0x2c) + iVar6;
                      iVar3 = 0;
                      if (iVar7 <= iVar6) {
                        iVar3 = iVar7;
                      }
                      ppuVar25 = pppuVar22[4] + (long)(iVar6 - iVar3) * 3;
                      *ppuVar25 = PTR_DAT_04bb2e18 + 0x10;
                      *(undefined4 *)(ppuVar25 + 1) =
                           *(undefined4 *)(local_1a8 + (long)iVar9 * 0x18 + 8);
                      *(undefined4 *)((long)ppuVar25 + 0xc) =
                           *(undefined4 *)(local_1a8 + (long)iVar9 * 0x18 + 0xc);
                      *ppuVar25 = PTR_DAT_04bb2010 + 0x10;
                      *(undefined4 *)(ppuVar25 + 2) =
                           *(undefined4 *)(local_1a8 + (long)iVar9 * 0x18 + 0x10);
                    }
                    if (iVar28 != 1) {
                      iVar6 = *(int *)(pppuVar22 + 6);
                      iVar7 = *(int *)(pppuVar22 + 5);
                      if (iVar6 < iVar7) {
                        iVar9 = 0;
                        if ((int)local_1a0 <= (int)((long)local_1a0._4_4_ + 1)) {
                          iVar9 = (int)local_1a0;
                        }
                        lVar18 = ((long)local_1a0._4_4_ + 1) - (long)iVar9;
                        *(int *)(pppuVar22 + 6) = iVar6 + 1;
                        iVar6 = *(int *)((long)pppuVar22 + 0x2c) + iVar6;
                        iVar9 = 0;
                        if (iVar7 <= iVar6) {
                          iVar9 = iVar7;
                        }
                        ppuVar25 = pppuVar22[4] + (long)(iVar6 - iVar9) * 3;
                        *ppuVar25 = PTR_DAT_04bb2e18 + 0x10;
                        *(undefined4 *)(ppuVar25 + 1) =
                             *(undefined4 *)(local_1a8 + lVar18 * 0x18 + 8);
                        *(undefined4 *)((long)ppuVar25 + 0xc) =
                             *(undefined4 *)(local_1a8 + lVar18 * 0x18 + 0xc);
                        *ppuVar25 = PTR_DAT_04bb2010 + 0x10;
                        *(undefined4 *)(ppuVar25 + 2) =
                             *(undefined4 *)(local_1a8 + lVar18 * 0x18 + 0x10);
                      }
                      if (iVar28 != 2) {
                        iVar6 = *(int *)(pppuVar22 + 6);
                        iVar7 = *(int *)(pppuVar22 + 5);
                        if (iVar6 < iVar7) {
                          iVar9 = 0;
                          if ((int)local_1a0 <= (int)((long)local_1a0._4_4_ + 2)) {
                            iVar9 = (int)local_1a0;
                          }
                          lVar18 = ((long)local_1a0._4_4_ + 2) - (long)iVar9;
                          *(int *)(pppuVar22 + 6) = iVar6 + 1;
                          iVar6 = *(int *)((long)pppuVar22 + 0x2c) + iVar6;
                          iVar9 = 0;
                          if (iVar7 <= iVar6) {
                            iVar9 = iVar7;
                          }
                          ppuVar25 = pppuVar22[4] + (long)(iVar6 - iVar9) * 3;
                          *ppuVar25 = PTR_DAT_04bb2e18 + 0x10;
                          *(undefined4 *)(ppuVar25 + 1) =
                               *(undefined4 *)(local_1a8 + lVar18 * 0x18 + 8);
                          *(undefined4 *)((long)ppuVar25 + 0xc) =
                               *(undefined4 *)(local_1a8 + lVar18 * 0x18 + 0xc);
                          *ppuVar25 = PTR_DAT_04bb2010 + 0x10;
                          *(undefined4 *)(ppuVar25 + 2) =
                               *(undefined4 *)(local_1a8 + lVar18 * 0x18 + 0x10);
                        }
                        if (iVar28 != 3) {
                          iVar28 = *(int *)(pppuVar22 + 6);
                          iVar6 = *(int *)(pppuVar22 + 5);
                          if (iVar28 < iVar6) {
                            iVar7 = 0;
                            if ((int)local_1a0 <= (int)((long)local_1a0._4_4_ + 3)) {
                              iVar7 = (int)local_1a0;
                            }
                            lVar18 = ((long)local_1a0._4_4_ + 3) - (long)iVar7;
                            *(int *)(pppuVar22 + 6) = iVar28 + 1;
                            iVar28 = *(int *)((long)pppuVar22 + 0x2c) + iVar28;
                            iVar7 = 0;
                            if (iVar6 <= iVar28) {
                              iVar7 = iVar6;
                            }
                            ppuVar25 = pppuVar22[4] + (long)(iVar28 - iVar7) * 3;
                            *ppuVar25 = PTR_DAT_04bb2e18 + 0x10;
                            *(undefined4 *)(ppuVar25 + 1) =
                                 *(undefined4 *)(local_1a8 + lVar18 * 0x18 + 8);
                            *(undefined4 *)((long)ppuVar25 + 0xc) =
                                 *(undefined4 *)(local_1a8 + lVar18 * 0x18 + 0xc);
                            *ppuVar25 = PTR_DAT_04bb2010 + 0x10;
                            *(undefined4 *)(ppuVar25 + 2) =
                                 *(undefined4 *)(local_1a8 + lVar18 * 0x18 + 0x10);
                          }
                        }
                      }
                    }
                  }
                }
                local_130._3_1_ = (undefined1)((uint)iVar29 >> 0x18);
                pppuVar23 = pppuVar22 + 0x14;
                *pppuVar23 = (undefined **)0x0;
                pppuVar22[0x15] = (undefined **)0x0;
                *(uint *)((long)pppuVar22 + 0x9b) =
                     CONCAT13(local_12a,CONCAT21(local_12c,local_130._3_1_));
                *(int *)(pppuVar22 + 0x13) = iVar29;
                ppuVar25 = (undefined **)*ppuVar27;
                *ppuVar27 = (undefined *)pppuVar23;
                *pppuVar23 = ppuVar25;
                pppuVar22[0x15] = ppuVar27;
                if (ppuVar25 != (undefined **)0x0) {
                  ppuVar25[1] = (undefined *)pppuVar23;
                }
                *(int *)(param_1 + 0x1588) = *(int *)(param_1 + 0x1588) + 1;
              }
            }
          }
        }
LAB_014a3c70:
        if (*(int *)(local_e8 + 8) < local_d0) {
          local_d0 = local_d0 + -1;
        }
        else {
          local_d0 = *(int *)(local_e0 + 8);
          local_cc = local_cc + -1;
        }
      } while ((iVar12 != local_d0) || (iVar4 != local_cc));
    }
  }
  if (*(char *)(param_1 + 0x280) != '\0') {
    *(undefined1 *)(param_1 + 0x281) = 1;
  }
  FUN_014a86e0(*(undefined8 *)(param_1 + 0x1580),*(undefined8 *)(param_1 + 0x1578),
               *(undefined4 *)(param_1 + 0x1588));
  ppuVar19 = *(undefined ***)(param_1 + 0x1580);
  if (ppuVar19 != ppuVar27) {
    uVar14 = 0;
    ppuVar27 = ppuVar19 + -0x14;
    do {
      ppuVar19 = (undefined **)ppuVar19[1];
      *(undefined1 *)((long)ppuVar27 + 0x9c) = 0;
      iVar12 = *(int *)(ppuVar27 + 3);
      uVar5 = *(uint *)(ppuVar27 + 6);
      if (uVar5 != 0) {
        puVar30 = ppuVar27[4];
        iVar4 = *(int *)(ppuVar27 + 5);
        if (uVar5 == 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            iVar28 = *(int *)((long)ppuVar27 + 0x2c) + uVar13;
            uVar13 = uVar13 + 2;
            iVar29 = 0;
            if (iVar4 <= iVar28) {
              iVar29 = iVar4;
            }
            iVar6 = 0;
            if (iVar4 <= iVar28 + 1) {
              iVar6 = iVar4;
            }
            iVar12 = *(int *)(puVar30 + (long)((iVar28 + 1) - iVar6) * 0x18 + 0x10) +
                     *(int *)(puVar30 + (long)(iVar28 - iVar29) * 0x18 + 0x10) + iVar12;
          } while ((uVar5 & 0xfffffffe) != uVar13);
        }
        if ((uVar5 & 1) != 0) {
          iVar28 = uVar13 + *(int *)((long)ppuVar27 + 0x2c);
          iVar29 = 0;
          if (iVar4 <= iVar28) {
            iVar29 = iVar4;
          }
          iVar12 = *(int *)(puVar30 + (long)(iVar28 - iVar29) * 0x18 + 0x10) + iVar12;
        }
      }
      uVar14 = iVar12 + uVar14;
      if (0xc3 < uVar14) {
        return;
      }
      *(undefined1 *)((long)ppuVar27 + 0x9c) = 1;
      ppuVar27 = ppuVar19 + -0x14;
    } while (ppuVar27 != (undefined **)(param_1 + 0x14d8));
  }
  return;
}

