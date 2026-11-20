
void FUN_03ebfef0(long param_1,long *param_2,long param_3,uint *param_4)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  undefined **ppuVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStack_168 [16];
  float local_158;
  float fStack_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined1 auStack_138 [16];
  float local_128;
  float fStack_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  long local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar16 = *(uint *)(param_3 + 0x18);
  if (0 < (int)uVar16) {
    fVar26 = 0.0;
    lVar18 = *(long *)(param_3 + 0x10);
    uVar21 = 0;
    uVar15 = 0;
    do {
      uVar23 = uVar15;
      if (*(uint *)(param_3 + 8) <= uVar15) {
        uVar23 = 0;
      }
      uVar6 = *(ushort *)(lVar18 + (ulong)uVar23 * 0x30 + 0x24);
      if ((uVar6 != 0) &&
         ((((uVar6 >> 5 & 1) == 0 || (*(short *)(lVar18 + (ulong)uVar23 * 0x30 + 0x28) == -1)) &&
          ((*(ushort *)(*(long *)(lVar18 + (ulong)uVar23 * 0x30 + 0x10) + 0x7a) >> 3 & 1) == 0)))) {
        uVar21 = uVar21 | (uVar6 & 8) >> 3;
        fVar26 = fVar26 + *(float *)(lVar18 + (ulong)uVar23 * 0x30 + 0x1c);
      }
      uVar15 = uVar15 + 1;
    } while (uVar16 != uVar15);
    if (fVar26 != 0.0) {
      uVar15 = 0;
      fVar26 = 1.0 / fVar26;
      plVar1 = (long *)(param_1 + 0x28);
      fVar27 = fVar26;
      if (uVar21 == 0) {
        fVar27 = 1.0;
      }
      do {
        lVar18 = *(long *)(param_3 + 0x10);
        uVar23 = uVar15;
        if (*(uint *)(param_3 + 8) <= uVar15) {
          uVar23 = 0;
        }
        uVar20 = (ulong)uVar23;
        lVar25 = lVar18 + uVar20 * 0x30;
        uVar6 = *(ushort *)(lVar25 + 0x24);
        uVar23 = (uint)uVar6;
        if (uVar6 != 0) {
          if ((*(ushort *)(*(long *)(lVar25 + 0x10) + 0x7a) >> 3 & 1) != 0) {
            if (uVar21 != 0) goto LAB_03ec0094;
            uVar23 = uVar6 & 0xfffffffd;
          }
          if (0 < (int)param_4[4]) {
            uVar16 = 0;
            do {
              uVar19 = uVar16;
              if (*param_4 <= uVar16) {
                uVar19 = 0;
              }
              lVar24 = *(long *)(param_4 + 2) + (ulong)uVar19 * 0x20;
              if (*(short *)(lVar18 + uVar20 * 0x30 + 0x26) == *(short *)(lVar24 + 0x18))
              goto LAB_03ec011c;
              uVar16 = uVar16 + 1;
            } while (param_4[4] != uVar16);
          }
          lVar24 = 0;
LAB_03ec011c:
          lVar12 = (**(code **)(*param_2 + 200))
                             (param_2,*(undefined2 *)(lVar18 + uVar20 * 0x30 + 0x18));
          fVar52 = 1.0;
          fVar51 = 1.0;
          fVar44 = 1.0;
          if (*plVar1 != 0) {
            local_d8 = (undefined **)((ulong)local_d8 & 0xffffff0000000000);
            uVar13 = FUN_03b36b40(plVar1,&local_d8,*(long *)(lVar12 + 8) + 2);
            if ((uVar13 & 1) == 0) {
LAB_03ec0244:
              fVar44 = 1.0;
              fVar52 = 1.0;
              fVar51 = 1.0;
            }
            else {
              if (local_d8._4_1_ - 0xc0 < 2) {
                ppuVar22 = (undefined **)*plVar1;
                local_d0 = (long)ppuVar22 + ((ulong)local_d8 & 0xffffffff);
              }
              else {
                if (local_d8._4_1_ != 0xff) goto LAB_03ec0244;
                local_d0 = 0;
                ppuVar22 = (undefined **)*plVar1;
              }
              fVar52 = 1.0;
              fVar51 = 1.0;
              fVar44 = 1.0;
              local_d8 = ppuVar22;
              if (ppuVar22 != (undefined **)0x0) {
                local_108 = (undefined **)((ulong)local_108 & 0xffffff0000000000);
                uVar13 = FUN_03b36b40(&local_d8,&local_108,"scale");
                if (((uVar13 & 1) == 0) || (1 < local_108._4_1_ - 0xc0)) goto LAB_03ec0244;
                puVar2 = (uint *)((long)ppuVar22 + ((ulong)local_108 & 0xffffffff));
                bVar5 = (byte)*puVar2;
                uVar16 = (uint)bVar5;
                if (bVar5 == 0xc1) {
                  sVar7 = *(short *)ppuVar22;
                  uVar16 = *puVar2;
                  uVar19 = uVar16 >> 8;
                  if (sVar7 == 0x5942) {
                    uVar19 = uVar19 & 0xff00 | uVar16 >> 0x18 | (uVar19 & 0xff) << 0x10;
                  }
                  if (uVar19 != 0) {
                    cVar8 = *(char *)((long)puVar2 + 7);
                    fVar52 = (float)puVar2[2];
                    goto LAB_03ec0ccc;
                  }
LAB_03ec0ce8:
                  fVar51 = 1.0;
                }
                else {
                  fVar51 = 1.0;
                  if (bVar5 == 0xc0) {
                    sVar7 = *(short *)ppuVar22;
                    uVar16 = *puVar2;
                    uVar19 = uVar16 >> 8;
                    if (sVar7 == 0x5942) {
                      uVar19 = uVar19 & 0xff00 | uVar16 >> 0x18 | (uVar19 & 0xff) << 0x10;
                      if (uVar19 == 0) goto LAB_03ec0ce8;
                    }
                    else {
                      fVar51 = 1.0;
                      if (uVar16 < 0x100) goto LAB_03ec0cec;
                    }
                    cVar8 = (char)puVar2[1];
                    fVar52 = *(float *)((long)puVar2 + (ulong)(uVar19 + 3 & 0x1fffffc) + 4);
LAB_03ec0ccc:
                    uVar19 = ((uint)fVar52 & 0xff00ff00) >> 8 | ((uint)fVar52 & 0xff00ff) << 8;
                    fVar51 = (float)(uVar19 >> 0x10 | uVar19 << 0x10);
                    if (sVar7 != 0x5942) {
                      fVar51 = fVar52;
                    }
                    if (cVar8 != -0x2e) goto LAB_03ec0ce8;
                  }
                }
LAB_03ec0cec:
                if ((uVar16 & 0xff) == 0xc1) {
                  sVar7 = *(short *)ppuVar22;
                  uVar16 = *puVar2;
                  uVar19 = uVar16 >> 8;
                  if (sVar7 == 0x5942) {
                    uVar19 = uVar19 & 0xff00 | uVar16 >> 0x18 | (uVar19 & 0xff) << 0x10;
                  }
                  if (uVar19 != 0) {
                    cVar8 = *(char *)((long)puVar2 + 0xf);
                    fVar44 = (float)puVar2[4];
LAB_03ec0d90:
                    uVar19 = ((uint)fVar44 & 0xff00ff00) >> 8 | ((uint)fVar44 & 0xff00ff) << 8;
                    fVar52 = (float)(uVar19 >> 0x10 | uVar19 << 0x10);
                    if (sVar7 != 0x5942) {
                      fVar52 = fVar44;
                    }
                    if (cVar8 == -0x2e) goto LAB_03ec0db0;
                  }
                  fVar52 = 1.0;
                }
                else {
                  fVar52 = 1.0;
                  if ((uVar16 & 0xff) == 0xc0) {
                    sVar7 = *(short *)ppuVar22;
                    uVar16 = *puVar2;
                    uVar19 = uVar16 >> 8;
                    if (sVar7 == 0x5942) {
                      fVar52 = 1.0;
                      uVar19 = uVar19 & 0xff00 | uVar16 >> 0x18 | (uVar19 & 0xff) << 0x10;
                      if (1 < uVar19) goto LAB_03ec0d78;
                    }
                    else {
                      fVar52 = 1.0;
                      if (0x1ff < uVar16) {
LAB_03ec0d78:
                        cVar8 = *(char *)((long)puVar2 + 5);
                        fVar44 = *(float *)((long)puVar2 + (ulong)((uVar19 + 3 & 0x1fffffc) + 4) + 4
                                           );
                        goto LAB_03ec0d90;
                      }
                    }
                  }
                }
LAB_03ec0db0:
                if ((uVar16 & 0xff) == 0xc1) {
                  sVar7 = *(short *)ppuVar22;
                  uVar16 = *puVar2 >> 8;
                  if (sVar7 == 0x5942) {
                    uVar16 = uVar16 & 0xff00 | *puVar2 >> 0x18 | (uVar16 & 0xff) << 0x10;
                  }
                  if (uVar16 != 0) {
                    cVar8 = *(char *)((long)puVar2 + 0x17);
                    fVar39 = (float)puVar2[6];
LAB_03ec0e48:
                    uVar16 = ((uint)fVar39 & 0xff00ff00) >> 8 | ((uint)fVar39 & 0xff00ff) << 8;
                    fVar44 = (float)(uVar16 >> 0x10 | uVar16 << 0x10);
                    if (sVar7 != 0x5942) {
                      fVar44 = fVar39;
                    }
                    if (cVar8 == -0x2e) goto LAB_03ec0250;
                  }
                }
                else if ((uVar16 & 0xff) == 0xc0) {
                  sVar7 = *(short *)ppuVar22;
                  uVar19 = *puVar2;
                  uVar16 = uVar19 >> 8;
                  if (sVar7 == 0x5942) {
                    uVar16 = uVar16 & 0xff00 | uVar19 >> 0x18 | (uVar16 & 0xff) << 0x10;
                    if (2 < uVar16) goto LAB_03ec0e30;
                  }
                  else if (0x2ff < uVar19) {
LAB_03ec0e30:
                    cVar8 = *(char *)((long)puVar2 + 6);
                    fVar39 = *(float *)((long)puVar2 + (ulong)((uVar16 + 3 & 0x1fffffc) + 4) + 8);
                    goto LAB_03ec0e48;
                  }
                }
                fVar44 = 1.0;
              }
            }
          }
LAB_03ec0250:
          local_100 = (**(code **)(*param_2 + 0x70))
                                (param_2,(long)*(short *)(param_1 + 8),
                                 (long)*(short *)(param_1 + 10));
          local_108 = &PTR_LAB_048f9770;
          uVar6 = *(ushort *)(lVar12 + 0x4c);
          if ((ulong)uVar6 != 0) {
            uVar13 = 0;
            do {
              local_d0 = *(long *)(*(long *)(lVar12 + 0x28) + uVar13 * 0x38) + 2;
              local_d8 = &PTR_LAB_048f9770;
              (*(code *)local_108[3])(&local_108);
              (*(code *)local_108[3])(&local_108);
              lVar3 = local_100;
              (*(code *)local_d8[3])(&local_d8);
              if (lVar3 == local_d0) {
LAB_03ec0380:
                fVar39 = 0.0;
                if (*(long *)(lVar12 + 0x28) == 0) {
                  fVar42 = 0.0;
                  fVar50 = 0.0;
                  fVar39 = 0.0;
                  goto LAB_03ec0054;
                }
                if (lVar24 == 0) {
                  if ((uVar23 >> 2 & 1) == 0) {
                    if ((uVar23 >> 9 & 1) == 0) {
                      fVar50 = *(float *)(lVar25 + 4);
                      if ((uVar23 >> 10 & 1) == 0) {
                        if (1.0 <= fVar50) goto LAB_03ec041c;
                        if ((uVar23 >> 7 & 1) == 0) {
                          fVar49 = 0.0;
                          if ((uVar23 >> 8 & 1) != 0) {
                            fVar42 = 0.0;
                            fVar50 = 0.0;
                            fVar39 = 0.0;
                            goto LAB_03ec0054;
                          }
                          bVar9 = false;
                          bVar11 = false;
                          fVar50 = 1.0;
                        }
                        else {
                          bVar11 = false;
                          bVar9 = true;
                          fVar49 = 0.0;
                          fVar50 = 0.0;
                        }
                      }
                      else {
                        fVar49 = *(float *)(lVar18 + uVar20 * 0x30 + 0x2c);
                        if (fVar49 + -1.0 <= fVar50) {
                          if ((uVar23 >> 7 & 1) == 0) {
                            fVar42 = 0.0;
                            fVar50 = 0.0;
                            fVar35 = 0.0;
                            fVar34 = 0.0;
                            fVar45 = 0.0;
                            if ((uVar23 >> 8 & 1) != 0) goto LAB_03ec005c;
                            bVar9 = false;
                            bVar11 = false;
                            fVar50 = fVar49 + -1.0;
                          }
                          else {
                            bVar11 = false;
                            bVar9 = true;
                            fVar50 = fVar49;
                          }
                        }
                        else {
                          bVar9 = false;
                          bVar11 = false;
                          fVar49 = fVar50 + 1.0;
                        }
                      }
                    }
                    else {
                      fVar49 = 0.0;
                      if ((uVar23 >> 10 & 1) != 0) {
                        fVar49 = *(float *)(lVar18 + uVar20 * 0x30 + 0x2c);
                      }
                      fVar50 = *(float *)(lVar25 + 4);
                      bVar9 = false;
                      bVar11 = false;
                    }
                  }
                  else {
                    bVar9 = false;
                    bVar11 = false;
                    if ((uVar23 >> 10 & 1) == 0) {
                      fVar50 = *(float *)(lVar18 + uVar20 * 0x30 + 0x2c);
LAB_03ec041c:
                      bVar11 = false;
                      bVar9 = false;
                      fVar49 = fVar50 + -1.0;
                    }
                    else {
                      fVar50 = 0.0;
                      fVar49 = 1.0;
                    }
                  }
                }
                else {
                  fVar50 = *(float *)(lVar25 + 4);
                  bVar9 = false;
                  fVar49 = *(float *)(lVar24 + 4);
                  bVar11 = fVar49 < fVar50;
                  if ((uVar23 >> 10 & 1) == 0) {
                    bVar11 = fVar49 != fVar50 && !bVar11;
                  }
                  else {
                  }
                }
                lVar25 = *(long *)(lVar12 + 0x28) + uVar13 * 0x38;
                uVar14 = (**(code **)(*param_2 + 0xd0))
                                   (param_2,(long)*(short *)(param_1 + 8),
                                    (long)*(short *)(param_1 + 10));
                FUN_003a1728(lVar25,&local_d8,uVar14);
                FUN_003a17f0(fVar50,lVar25,&local_d8);
                if (bVar9) {
                  local_e0 = 0.0;
                  local_e8 = 0;
                  local_f0 = 0.0;
                  local_f8 = 0;
                  uVar10 = local_e8;
                  fVar49 = local_e0;
                }
                else {
                  FUN_003a1728(lVar25,&local_108,uVar14);
                  FUN_003a17f0(fVar49,lVar25,&local_108);
                  uVar10 = local_e8;
                  fVar49 = local_e0;
                }
                local_e8 = uVar10;
                if ((uVar23 >> 4 & 1) != 0) {
                  local_b4 = -local_b4;
                  local_e8._4_4_ = (float)((ulong)uVar10 >> 0x20);
                  local_c8 = -local_c8;
                  local_e8._0_4_ = (float)uVar10;
                  local_e8 = CONCAT44(-local_e8._4_4_,(float)local_e8);
                  local_f8._4_4_ = (float)((ulong)local_f8 >> 0x20);
                  local_f8 = CONCAT44(local_f8._4_4_,-(float)local_f8);
                }
                local_e0 = fVar49;
                if (bVar11) {
                  FUN_003a1728(lVar25,auStack_138,uVar14);
                  FUN_003a17f0(0,lVar25,auStack_138);
                  FUN_003a1728(lVar25,auStack_168,uVar14);
                  FUN_003a17f0(*(undefined4 *)(lVar18 + uVar20 * 0x30 + 0x2c),lVar25,auStack_168);
                  fVar49 = local_e0;
                  if ((uVar23 >> 4 & 1) != 0) {
                    local_114 = -local_114;
                    local_144 = -local_144;
                    local_128 = -local_128;
                    local_158 = -local_158;
                  }
                  fVar45 = 0.0;
                  fVar50 = 0.0;
                  fVar42 = 0.0;
                  fVar39 = 0.0;
                  fVar34 = (float)local_e8;
                  fVar35 = local_e8._4_4_;
                  if ((uVar23 >> 10 & 1) == 0) {
                    if ((uVar23 & 1) != 0) {
                      fVar46 = local_158 - (float)local_f8;
                      fVar28 = fStack_154 - local_f8._4_4_;
                      fVar47 = local_150 - local_f0;
                      fVar48 = local_c8 - local_128;
                      fVar29 = fStack_c4 - fStack_124;
                      fVar30 = local_c0 - local_120;
                      fVar31 = sinf((float)local_e8);
                      fVar32 = sinf(fVar35);
                      fVar33 = sinf(fVar49);
                      fVar34 = cosf(fVar34);
                      fVar35 = cosf(fVar35);
                      fVar49 = cosf(fVar49);
                      fVar42 = local_110;
                      fVar50 = local_114;
                      fVar39 = local_118;
                      fVar36 = sinf(local_118);
                      fVar37 = sinf(fVar50);
                      fVar38 = sinf(fVar42);
                      fVar39 = cosf(fVar39);
                      fVar40 = cosf(fVar50);
                      fVar41 = cosf(fVar42);
                      fVar43 = *(float *)(lVar18 + uVar20 * 0x30 + 0x1c);
                      fVar50 = fVar51 * fVar27 * fVar43 * (((fVar28 * fVar33 * fVar35 +
                                                            fVar46 * fVar35 * fVar49) -
                                                           fVar47 * fVar32) +
                                                          ((fVar29 * fVar38 * fVar40 +
                                                           fVar48 * fVar40 * fVar41) -
                                                          fVar30 * fVar37));
                      fVar42 = fVar52 * fVar27 * fVar43 * (fVar28 * (fVar34 * fVar49 +
                                                                    fVar33 * fVar31 * fVar32) +
                                                           fVar46 * (fVar31 * fVar32 * fVar49 -
                                                                    fVar33 * fVar34) +
                                                           fVar47 * fVar31 * fVar35 +
                                                          fVar29 * (fVar39 * fVar41 +
                                                                   fVar38 * fVar36 * fVar37) +
                                                          fVar48 * (fVar36 * fVar37 * fVar41 -
                                                                   fVar38 * fVar39) +
                                                          fVar30 * fVar36 * fVar40);
                      fVar39 = fVar44 * fVar27 * fVar43 * (fVar28 * (-(fVar31 * fVar49) +
                                                                    fVar32 * fVar33 * fVar34) +
                                                           fVar46 * (fVar31 * fVar33 +
                                                                    fVar32 * fVar34 * fVar49) +
                                                           fVar47 * fVar34 * fVar35 +
                                                          fVar29 * (-(fVar36 * fVar41) +
                                                                   fVar37 * fVar38 * fVar39) +
                                                          fVar48 * (fVar36 * fVar38 +
                                                                   fVar37 * fVar39 * fVar41) +
                                                          fVar30 * fVar39 * fVar40);
                    }
                    if ((uVar23 >> 1 & 1) == 0) goto LAB_03ec0b98;
                    fVar49 = local_144 - local_e8._4_4_;
                    fVar44 = local_148 - (float)local_e8;
                    fVar28 = local_140 - local_e0;
                    fVar34 = local_b4 - local_114;
                    fVar51 = local_118;
                    fVar52 = local_110;
                  }
                  else {
                    if ((uVar23 & 1) != 0) {
                      fVar46 = local_128 - (float)local_f8;
                      fVar28 = fStack_124 - local_f8._4_4_;
                      fVar47 = local_120 - local_f0;
                      fVar48 = local_c8 - local_158;
                      fVar29 = fStack_c4 - fStack_154;
                      fVar30 = local_c0 - local_150;
                      fVar31 = sinf((float)local_e8);
                      fVar32 = sinf(fVar35);
                      fVar33 = sinf(fVar49);
                      fVar34 = cosf(fVar34);
                      fVar35 = cosf(fVar35);
                      fVar49 = cosf(fVar49);
                      fVar42 = local_140;
                      fVar50 = local_144;
                      fVar39 = local_148;
                      fVar36 = sinf(local_148);
                      fVar37 = sinf(fVar50);
                      fVar38 = sinf(fVar42);
                      fVar39 = cosf(fVar39);
                      fVar40 = cosf(fVar50);
                      fVar41 = cosf(fVar42);
                      fVar43 = *(float *)(lVar18 + uVar20 * 0x30 + 0x1c);
                      fVar50 = fVar51 * fVar27 * fVar43 * (((fVar28 * fVar33 * fVar35 +
                                                            fVar46 * fVar35 * fVar49) -
                                                           fVar47 * fVar32) +
                                                          ((fVar29 * fVar38 * fVar40 +
                                                           fVar48 * fVar40 * fVar41) -
                                                          fVar30 * fVar37));
                      fVar42 = fVar52 * fVar27 * fVar43 * (fVar28 * (fVar34 * fVar49 +
                                                                    fVar33 * fVar31 * fVar32) +
                                                           fVar46 * (fVar31 * fVar32 * fVar49 -
                                                                    fVar33 * fVar34) +
                                                           fVar47 * fVar31 * fVar35 +
                                                          fVar29 * (fVar39 * fVar41 +
                                                                   fVar38 * fVar36 * fVar37) +
                                                          fVar48 * (fVar36 * fVar37 * fVar41 -
                                                                   fVar38 * fVar39) +
                                                          fVar30 * fVar36 * fVar40);
                      fVar39 = fVar44 * fVar27 * fVar43 * (fVar28 * (-(fVar31 * fVar49) +
                                                                    fVar32 * fVar33 * fVar34) +
                                                           fVar46 * (fVar31 * fVar33 +
                                                                    fVar32 * fVar34 * fVar49) +
                                                           fVar47 * fVar34 * fVar35 +
                                                          fVar29 * (-(fVar36 * fVar41) +
                                                                   fVar37 * fVar38 * fVar39) +
                                                          fVar48 * (fVar36 * fVar38 +
                                                                   fVar37 * fVar39 * fVar41) +
                                                          fVar30 * fVar39 * fVar40);
                    }
                    if ((uVar23 >> 1 & 1) == 0) {
LAB_03ec0b98:
                      fVar34 = 0.0;
                      fVar35 = 0.0;
                      goto LAB_03ec005c;
                    }
                    fVar49 = local_114 - local_e8._4_4_;
                    fVar44 = local_118 - (float)local_e8;
                    fVar28 = local_110 - local_e0;
                    fVar34 = local_b4 - local_144;
                    fVar51 = local_148;
                    fVar52 = local_140;
                  }
                  fVar35 = *(float *)(lVar18 + uVar20 * 0x30 + 0x1c);
                  fVar45 = (fVar44 + (local_b8 - fVar51)) * fVar35;
                  fVar34 = (fVar49 + fVar34) * fVar35;
                  fVar35 = fVar35 * (fVar28 + (local_b0 - fVar52));
                }
                else {
                  fVar50 = 0.0;
                  fVar42 = 0.0;
                  fVar39 = 0.0;
                  if ((uVar23 & 1) != 0) {
                    fVar31 = local_c8 - (float)local_f8;
                    fVar34 = fStack_c4 - local_f8._4_4_;
                    fVar39 = (float)local_e8;
                    fVar50 = local_e8._4_4_;
                    fVar32 = local_c0 - local_f0;
                    fVar45 = sinf((float)local_e8);
                    fVar35 = sinf(fVar50);
                    fVar28 = sinf(fVar49);
                    fVar39 = cosf(fVar39);
                    fVar29 = cosf(fVar50);
                    fVar49 = cosf(fVar49);
                    fVar30 = *(float *)(lVar18 + uVar20 * 0x30 + 0x1c);
                    fVar50 = fVar51 * fVar27 * fVar30 * ((fVar34 * fVar28 * fVar29 +
                                                         fVar31 * fVar29 * fVar49) - fVar32 * fVar35
                                                        );
                    fVar42 = fVar52 * fVar27 * fVar30 * (fVar34 * (fVar39 * fVar49 +
                                                                  fVar28 * fVar45 * fVar35) +
                                                         fVar31 * (fVar45 * fVar35 * fVar49 -
                                                                  fVar28 * fVar39) +
                                                        fVar32 * fVar45 * fVar29);
                    fVar39 = fVar44 * fVar27 * fVar30 * (fVar34 * (-(fVar45 * fVar49) +
                                                                  fVar35 * fVar28 * fVar39) +
                                                         fVar31 * (fVar45 * fVar28 +
                                                                  fVar35 * fVar39 * fVar49) +
                                                        fVar32 * fVar39 * fVar29);
                  }
                  if ((uVar23 >> 1 & 1) == 0) goto LAB_03ec0054;
                  fVar35 = *(float *)(lVar18 + uVar20 * 0x30 + 0x1c);
                  fVar45 = (local_b8 - (float)local_e8) * fVar35;
                  fVar34 = (local_b4 - local_e8._4_4_) * fVar35;
                  fVar35 = (local_b0 - local_e0) * fVar35;
                }
                fVar45 = fVar26 * fVar45;
                fVar34 = fVar26 * fVar34;
                fVar35 = fVar26 * fVar35;
                goto LAB_03ec005c;
              }
              uVar17 = 0;
              bVar11 = true;
              do {
                lVar3 = local_100 + 1 + uVar17;
                lVar4 = local_d0 + 1 + uVar17;
                cVar8 = *(char *)(lVar3 + -1);
                if (cVar8 != *(char *)(lVar4 + -1)) break;
                if (cVar8 == '\0') {
                  if (bVar11) goto LAB_03ec0380;
                  break;
                }
                cVar8 = *(char *)(local_100 + 1 + uVar17);
                if (cVar8 != *(char *)(local_d0 + 1 + uVar17)) break;
                if (cVar8 == '\0') goto LAB_03ec0380;
                cVar8 = *(char *)(lVar3 + 1);
                if (cVar8 != *(char *)(lVar4 + 1)) break;
                if (cVar8 == '\0') goto LAB_03ec0380;
                bVar11 = uVar17 < 0x7fffe;
                uVar17 = uVar17 + 3;
              } while (uVar17 != 0x80001);
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar6);
          }
          fVar42 = 0.0;
          fVar50 = 0.0;
          fVar39 = 0.0;
LAB_03ec0054:
          fVar35 = 0.0;
          fVar34 = 0.0;
          fVar45 = 0.0;
LAB_03ec005c:
          *(float *)(param_1 + 0xc) = fVar50 + *(float *)(param_1 + 0xc);
          *(float *)(param_1 + 0x10) = fVar42 + *(float *)(param_1 + 0x10);
          *(float *)(param_1 + 0x14) = fVar39 + *(float *)(param_1 + 0x14);
          *(float *)(param_1 + 0x18) = fVar45 + *(float *)(param_1 + 0x18);
          *(float *)(param_1 + 0x1c) = fVar34 + *(float *)(param_1 + 0x1c);
          *(float *)(param_1 + 0x20) = fVar35 + *(float *)(param_1 + 0x20);
          uVar16 = *(uint *)(param_3 + 0x18);
        }
LAB_03ec0094:
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar16);
    }
  }
  return;
}

