
uint FUN_01507210(undefined8 param_1,float *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *__s;
  int iVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  ulong uVar14;
  long *plVar15;
  float *pfVar16;
  long lVar17;
  uint *puVar18;
  undefined *puVar19;
  int *piVar20;
  int iVar21;
  undefined8 *puVar22;
  long lVar23;
  char cVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  long *plVar28;
  uint *puVar29;
  float fVar30;
  float fVar31;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_104;
  float local_100;
  uint local_fc;
  uint local_f8;
  float local_f4;
  undefined8 *local_f0;
  undefined **local_e8;
  undefined *local_e0;
  int local_d8;
  int local_d4;
  float local_cc;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  uint local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  
  local_88 = 0;
  local_90 = PTR_DAT_04bbfe68 + 0x10;
  lVar17 = *(long *)PTR_DAT_04bb2720;
  if (lVar17 == 0) {
    puVar22 = &DAT_055c04a0;
  }
  else {
    puVar22 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar22 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar9 = FUN_006bd550(*puVar22,0);
      puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar22 = &DAT_055c04a0;
      }
    }
  }
  local_84 = *(undefined4 *)(puVar22 + 7);
  local_80 = FUN_017baf44();
  pfVar16 = (float *)PTR_DAT_04bb3238;
  local_80 = local_80 & 1;
  local_90 = PTR_DAT_04bb3140 + 0x10;
  fVar26 = *(float *)PTR_DAT_04bb3238;
  local_98 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_94 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  puVar19 = PTR_DAT_04bb2010 + 0x10;
  local_c0 = (undefined *)
             CONCAT44((int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0),
                      (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0));
  local_c8 = puVar19;
  pfVar13 = (float *)FUN_014fbd50(&local_90,0,&local_c8);
  fVar25 = *pfVar13;
  local_9c = fVar25;
  if (fVar25 != 0.0) {
    uVar14 = FUN_015039ac(&local_9c);
    if ((uVar14 & 1) != 0) {
      local_c8 = PTR_DAT_04bb2010 + 0x10;
      local_c0 = (undefined *)
                 CONCAT44((int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0),
                          (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0));
      puVar22 = (undefined8 *)FUN_01a5190c(&local_90,0,&local_c8,0);
      puVar3 = PTR_DAT_04bb43c0;
      local_98 = *(undefined4 *)puVar22;
      local_94 = *(undefined4 *)((long)puVar22 + 4);
      uVar2 = *puVar22;
      lVar17 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(&local_98);
      lVar23 = *(long *)puVar3;
      if (lVar23 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          local_c8 = PTR_DAT_04bc0510 + 0x10;
          local_b8 = 0;
          local_c0 = (undefined *)uVar2;
          uVar10 = FUN_0277d6c4(&local_c0);
          if (*(long *)puVar3 != 0) {
            lVar17 = *(long *)(lVar23 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              lVar17 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(&local_98);
              __s = PTR_DAT_04bbfe90;
              puVar3 = PTR_DAT_04bbfe88;
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                 ((puVar29 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
                  puVar29 != (uint *)0x0 && (uVar10 = *puVar29, uVar10 != 0)))) {
                cVar24 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *puVar3 = 1;
                    memset(__s,0xff,0x1ac);
                    uVar10 = *puVar29;
                  }
                  else if (*(int *)(__s + 0xf0) != -1) break;
                  puVar18 = (uint *)(ulong)uVar10;
                  if ((puVar18 == (uint *)0x0) || (puVar29 == puVar18)) break;
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar29 + (10 - (long)puVar18)) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar29 + (lVar17 - (long)puVar18);
                  if (lVar17 == 0) break;
                  uVar14 = (ulong)*(ushort *)((long)puVar29 + (8 - (long)puVar18));
                  *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
                  if (uVar14 == 0) break;
                  piVar20 = (int *)(lVar17 + 4);
                  while (piVar20[-1] != -0x499d99d4) {
                    piVar20 = piVar20 + 2;
                    uVar14 = uVar14 - 1;
                    if (uVar14 == 0) goto LAB_015075e4;
                  }
                  iVar9 = 0;
                  if (*piVar20 != -1) {
                    iVar9 = *piVar20;
                  }
                  *(int *)(__s + 0xf0) = iVar9;
                  uVar10 = *puVar29;
                  if (uVar10 == 0) break;
                } while( true );
              }
            }
          }
        }
      }
LAB_015075e4:
      pfVar16 = (float *)PTR_DAT_04bb3238;
      fVar26 = fVar25;
    }
  }
  local_a0 = (int)param_2[3] + 0x20000000U >> 0x1e;
  iVar9 = 2;
  if (local_a0 == 1) {
    iVar9 = 1;
  }
  iVar21 = 1;
  if (local_a0 == 1) {
    iVar21 = 2;
  }
  iVar27 = 1;
  if (local_a0 != 3) {
    iVar27 = iVar9;
  }
  uVar14 = (ulong)((float)local_a0 * 90.0 * 11930465.0);
  pfVar13 = (float *)(PTR_DAT_04bb2d00 + (uVar14 >> 0x18 & 0xff) * 0x10);
  iVar9 = 2;
  if (local_a0 != 3) {
    iVar9 = iVar21;
  }
  fVar30 = (float)((uint)uVar14 & 0xffffff) * 5.9604645e-08;
  fVar25 = *pfVar16;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  fVar31 = ((*pfVar13 + fVar30 * pfVar13[1]) * 7.5 + *param_2) - ((float)iVar27 * 0.5 * 5.0 + -2.5);
  fVar30 = ((pfVar13[2] + fVar30 * pfVar13[3]) * 7.5 + param_2[2]) -
           ((float)iVar9 * 0.5 * 5.0 + -2.5);
  iVar21 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
  local_a8 = iVar27 + iVar21 + -1;
  local_d4 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
  iVar9 = iVar9 + local_d4;
  local_b8 = CONCAT44(local_d4,iVar21);
  local_a4 = iVar9 + -1;
  local_f0 = &local_c0;
  local_e8 = &local_b0;
  local_e0 = puVar19;
  local_d8 = iVar21;
  local_c0 = puVar19;
  local_b0 = puVar19;
  do {
    pfVar13 = (float *)FUN_014fbd50(&local_90,1,&local_e0);
    fVar30 = *pfVar13;
    local_120 = fVar30;
    if (fVar30 == 0.0) goto LAB_015077c4;
    uVar14 = FUN_015039ac(&local_120);
    if ((uVar14 & 1) == 0) {
      local_cc = fVar25;
      break;
    }
    if (fVar25 == 0.0) {
      fVar25 = fVar30;
    }
    else if (fVar25 == fVar30) {
      local_cc = fVar25;
      uVar14 = FUN_015039ac(&local_cc);
      puVar19 = PTR_DAT_04bb27c0;
      if ((uVar14 & 1) != 0) {
        lVar17 = *(long *)PTR_DAT_04bb27c0;
        if (lVar17 != 0) {
          plVar28 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                              (ulong)((uint)fVar25 >> 0x14) * 8);
          if (((plVar28 == (long *)0x0) || ((*(uint *)(plVar28 + 0x49) >> 1 & 1) != 0)) ||
             (*(float *)(plVar28 + 0x46) != fVar25)) {
            plVar28 = (long *)0x0;
          }
          if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
            plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar17 = *(long *)puVar19;
            iVar9 = (**(code **)(*plVar15 + 0x60))();
            if (iVar9 < 0x11) {
              uVar10 = 1;
            }
            else {
              if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_01507898;
              uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_01507898:
            uVar10 = 0;
          }
          if (plVar28 != (long *)0x0) {
            lVar17 = plVar28[0x2a];
            uVar1 = *(uint *)(plVar28 + 0x49);
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar12 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb5920);
            puVar19 = PTR_DAT_04bb43c0;
            if ((((int)lVar17 == 1) && ((uVar12 & uVar10) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
              local_120 = 0.0;
              if (plVar28[0xe] == 0) {
                iVar9 = -1;
              }
              else {
                iVar9 = *(int *)(plVar28[0xe] + 0x280);
              }
              if (iVar9 == 0) {
                local_e0 = (undefined *)0x0;
                local_f0 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
                local_e8 = (undefined **)plVar28[0x51];
                lVar17 = *(long *)PTR_DAT_04bb43c0;
                uVar10 = FUN_0277d6c4(&local_e8);
                if (*(long *)puVar19 != 0) {
                  lVar17 = *(long *)(lVar17 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    lVar17 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(plVar28 + 0x51);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if (uVar10 < *(uint *)(lVar17 + 0x1d8)) {
                      puVar19 = *(undefined **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8);
                      if (puVar19 != (undefined *)0x0) {
                        local_e0 = puVar19;
                      }
                    }
                  }
                }
                bVar7 = (**(code **)(*(long *)plVar28[0x151] + 0x1c0))();
                bVar7 = bVar7 ^ 1;
                local_f4 = (float)FUN_01317b90(param_2,0);
                iVar9 = local_a4 + 1;
                if (iVar9 != local_b8._4_4_) {
                  iVar4 = (int)local_b8;
                  iVar21 = local_b8._4_4_;
                  iVar27 = (int)local_b8;
                  do {
                    fVar25 = local_f4;
                    local_120 = (float)iVar27 * 5.0 + 2.5;
                    local_118 = (float)iVar21 * 5.0 + 2.5;
                    local_104 = (float)FUN_01317b90(&local_120,0);
                    bVar7 = fVar25 == local_104 & bVar7;
                    if (iVar27 < local_a8) {
                      iVar27 = iVar27 + 1;
                    }
                    else {
                      iVar21 = iVar21 + 1;
                      iVar27 = (int)local_b8;
                    }
                  } while ((iVar4 != iVar27) || (iVar9 != iVar21));
                }
                bVar6 = FUN_01ae6020(&local_f0);
                pfVar13 = (float *)FUN_01a5190c(&local_90,0,&local_c0,0);
                local_120 = *pfVar13;
                local_11c = pfVar13[1];
                iVar9 = FUN_006f0400(*(float *)(plVar28[0xd] + 0x278) - *param_2,
                                     *(float *)(plVar28[0xd] + 0x280) - param_2[2]);
                bVar8 = FUN_01aef228(&local_120,iVar9 + 0x20000000U >> 0x1e);
                bVar8 = bVar6 & bVar7 & bVar8;
                uVar14 = FUN_01aeec60(&local_f0);
                if ((uVar14 & 1) == 0) {
                  uVar14 = FUN_01aeef8c(&local_f0);
                  plVar15 = (long *)PTR_DAT_04bb43c0;
                  if ((uVar14 & 1) == 0) {
                    uVar14 = FUN_01aef03c(&local_f0);
                    if ((uVar14 & 1) != 0) {
                      iVar9 = FUN_006f0400(*param_2 - *(float *)(plVar28[0xd] + 0x278),
                                           param_2[2] - *(float *)(plVar28[0xd] + 0x280));
                      local_120 = (float)(iVar9 + 0x20000000U >> 0x1e);
                      lVar17 = plVar28[0xd];
                      local_104 = (float)(*(int *)(lVar17 + 0x2b4) + 0x20000000U >> 0x1e);
                      if (local_120 != local_104) {
                        iVar9 = FUN_006f0400(*param_2 - *(float *)(lVar17 + 0x278),
                                             param_2[2] - *(float *)(lVar17 + 0x280));
                        local_f8 = iVar9 + 0xa0000000U >> 0x1e;
                        local_fc = *(int *)(plVar28[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
                        bVar5 = local_f8 == local_fc;
                        goto LAB_01507bd0;
                      }
                    }
                  }
                  else {
                    iVar9 = FUN_006f0400(*param_2 - *(float *)(plVar28[0xd] + 0x278),
                                         param_2[2] - *(float *)(plVar28[0xd] + 0x280));
                    local_120 = (float)(iVar9 + 0xa0000000U >> 0x1e);
                    local_104 = (float)(*(int *)(plVar28[0xd] + 0x2b4) + 0x20000000U >> 0x1e);
                    bVar5 = local_120 != local_104;
LAB_01507bd0:
                    bVar8 = bVar5 & bVar8;
                  }
                }
                else {
                  iVar9 = FUN_006f0400(*param_2 - *(float *)(plVar28[0xd] + 0x278),
                                       param_2[2] - *(float *)(plVar28[0xd] + 0x280));
                  local_120 = (float)(iVar9 + 0x20000000U >> 0x1e);
                  local_104 = (float)(*(int *)(plVar28[0xd] + 0x2b4) + 0x20000000U >> 0x1e);
                  bVar8 = local_120 == local_104 & bVar8;
                  plVar15 = (long *)PTR_DAT_04bb43c0;
                }
                pfVar13 = (float *)FUN_01a5190c(&local_90,0,&local_c0,0);
                local_104 = *pfVar13;
                local_100 = pfVar13[1];
                lVar17 = *plVar15;
                uVar10 = FUN_0277d6c4(&local_104);
                if (*plVar15 == 0) {
LAB_01507ed8:
                  if ((bVar8 & 1) == 0) break;
LAB_01507edc:
                  local_124 = -param_2[3];
                  FUN_01508700(&local_cc,&local_124);
LAB_015081f8:
                  uVar12 = FUN_01479cd8(plVar28,param_1,param_2 + 4);
                  goto LAB_01507cfc;
                }
                lVar17 = *(long *)(lVar17 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
                   (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                goto LAB_01507ed8;
                FUN_01ad5d04(&local_120,&local_104);
                bVar7 = FUN_01ae6020(&local_120);
                if ((bVar7 & bVar8 & 1) != 0) goto LAB_01507edc;
              }
            }
          }
        }
      }
      break;
    }
LAB_015077c4:
    if (local_d8 < *(int *)(local_e8 + 1)) {
      local_d8 = local_d8 + 1;
    }
    else {
      local_d4 = local_d4 + 1;
      local_d8 = *(int *)(local_f0 + 1);
    }
  } while (iVar21 != local_d8 || iVar9 != local_d4);
  iVar21 = (int)local_b8;
  fVar25 = *pfVar16;
  local_d8 = (int)local_b8;
  local_d4 = local_b8._4_4_;
  local_e0 = PTR_DAT_04bb2010 + 0x10;
  iVar9 = local_a4 + 1;
  if (iVar9 != local_b8._4_4_) {
    local_f0 = &local_c0;
    local_e8 = &local_b0;
    do {
      pfVar16 = (float *)FUN_014fbd50(&local_90,0,&local_e0);
      fVar30 = *pfVar16;
      local_120 = fVar30;
      if (fVar26 != fVar30 && fVar30 != 0.0) {
        uVar14 = FUN_015039ac(&local_120);
        if ((uVar14 & 1) == 0) break;
        if (fVar25 == 0.0) {
          fVar25 = fVar30;
        }
        else if (fVar25 == fVar30) {
          local_cc = fVar25;
          uVar14 = FUN_015039ac(&local_cc);
          puVar19 = PTR_DAT_04bb27c0;
          if (((uVar14 & 1) == 0) || (lVar17 = *(long *)PTR_DAT_04bb27c0, lVar17 == 0)) break;
          plVar28 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                              (ulong)((uint)fVar25 >> 0x14) * 8);
          if ((plVar28 == (long *)0x0) ||
             (((*(uint *)(plVar28 + 0x49) >> 1 & 1) != 0 || (*(float *)(plVar28 + 0x46) != fVar25)))
             ) {
            plVar28 = (long *)0x0;
          }
          if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
            plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar17 = *(long *)puVar19;
            iVar9 = (**(code **)(*plVar15 + 0x60))();
            if (iVar9 < 0x11) {
              uVar10 = 1;
            }
            else {
              if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_01507e68;
              uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_01507e68:
            uVar10 = 0;
          }
          if (plVar28 != (long *)0x0) {
            lVar17 = plVar28[0x2a];
            uVar1 = *(uint *)(plVar28 + 0x49);
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar11 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb5920);
            puVar19 = PTR_DAT_04bb43c0;
            uVar12 = 0;
            if ((((int)lVar17 != 1) || ((uVar11 & uVar10) == 0)) || ((uVar1 >> 4 & 1) == 0))
            goto LAB_01507cfc;
            local_120 = 0.0;
            if (plVar28[0xe] == 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = *(int *)(plVar28[0xe] + 0x280);
            }
            if (iVar9 == 0) {
              local_e0 = (undefined *)0x0;
              local_f0 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
              local_e8 = (undefined **)plVar28[0x51];
              lVar17 = *(long *)PTR_DAT_04bb43c0;
              uVar10 = FUN_0277d6c4(&local_e8);
              if (*(long *)puVar19 != 0) {
                lVar17 = *(long *)(lVar17 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar17 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(plVar28 + 0x51);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                  if (uVar10 < *(uint *)(lVar17 + 0x1d8)) {
                    puVar19 = *(undefined **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8);
                    if (puVar19 != (undefined *)0x0) {
                      local_e0 = puVar19;
                    }
                  }
                }
              }
              bVar7 = (**(code **)(*(long *)plVar28[0x151] + 0x1c0))
                                ((long *)plVar28[0x151],param_2 + 4);
              bVar7 = bVar7 ^ 1;
              local_104 = (float)FUN_01317b90(param_2,0);
              iVar9 = local_a4 + 1;
              if (iVar9 != local_b8._4_4_) {
                iVar4 = (int)local_b8;
                iVar21 = local_b8._4_4_;
                iVar27 = (int)local_b8;
                do {
                  fVar26 = local_104;
                  local_120 = (float)iVar27 * 5.0 + 2.5;
                  local_118 = (float)iVar21 * 5.0 + 2.5;
                  local_f4 = (float)FUN_01317b90(&local_120,0);
                  bVar7 = fVar26 == local_f4 & bVar7;
                  if (iVar27 < local_a8) {
                    iVar27 = iVar27 + 1;
                  }
                  else {
                    iVar21 = iVar21 + 1;
                    iVar27 = (int)local_b8;
                  }
                } while ((iVar4 != iVar27) || (iVar9 != iVar21));
              }
              bVar8 = FUN_01ae6020(&local_f0);
              bVar8 = bVar8 & bVar7;
              uVar14 = FUN_01aeec60(&local_f0);
              if ((uVar14 & 1) == 0) {
                uVar14 = FUN_01aeef8c(&local_f0);
                if ((uVar14 & 1) == 0) {
                  uVar14 = FUN_01aef03c(&local_f0);
                  if ((uVar14 & 1) != 0) {
                    iVar9 = FUN_006f0400(*param_2 - *(float *)(plVar28[0xd] + 0x278),
                                         param_2[2] - *(float *)(plVar28[0xd] + 0x280));
                    local_120 = (float)(iVar9 + 0x20000000U >> 0x1e);
                    lVar17 = plVar28[0xd];
                    local_f4 = (float)(*(int *)(lVar17 + 0x2b4) + 0x20000000U >> 0x1e);
                    if (local_120 != local_f4) {
                      iVar9 = FUN_006f0400(*param_2 - *(float *)(lVar17 + 0x278),
                                           param_2[2] - *(float *)(lVar17 + 0x280));
                      local_f8 = iVar9 + 0xa0000000U >> 0x1e;
                      local_fc = *(int *)(plVar28[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
                      bVar5 = local_f8 == local_fc;
                      goto LAB_01508164;
                    }
                  }
                  bVar8 = bVar8 & 1;
                }
                else {
                  iVar9 = FUN_006f0400(*param_2 - *(float *)(plVar28[0xd] + 0x278),
                                       param_2[2] - *(float *)(plVar28[0xd] + 0x280));
                  local_120 = (float)(iVar9 + 0xa0000000U >> 0x1e);
                  local_f4 = (float)(*(int *)(plVar28[0xd] + 0x2b4) + 0x20000000U >> 0x1e);
                  bVar5 = local_120 != local_f4;
LAB_01508164:
                  bVar8 = bVar5 & bVar8;
                }
              }
              else {
                iVar9 = FUN_006f0400(*param_2 - *(float *)(plVar28[0xd] + 0x278),
                                     param_2[2] - *(float *)(plVar28[0xd] + 0x280));
                local_120 = (float)(iVar9 + 0x20000000U >> 0x1e);
                local_f4 = (float)(*(int *)(plVar28[0xd] + 0x2b4) + 0x20000000U >> 0x1e);
                bVar8 = local_120 == local_f4 & bVar8;
              }
              if (bVar8 != 0) {
                local_128 = -param_2[3];
                FUN_01508700(&local_cc,&local_128);
                goto LAB_015081f8;
              }
            }
          }
          break;
        }
      }
      if (local_d8 < *(int *)(local_e8 + 1)) {
        local_d8 = local_d8 + 1;
      }
      else {
        local_d4 = local_d4 + 1;
        local_d8 = *(int *)(local_f0 + 1);
      }
    } while (iVar21 != local_d8 || iVar9 != local_d4);
  }
  uVar12 = 0;
LAB_01507cfc:
  return uVar12 & 1;
}

