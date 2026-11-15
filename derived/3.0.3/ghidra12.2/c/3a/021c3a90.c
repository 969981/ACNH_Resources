
/* WARNING: Removing unreachable block (ram,0x021c3bf8) */
/* WARNING: Removing unreachable block (ram,0x021c3be0) */
/* WARNING: Removing unreachable block (ram,0x021c3bd8) */
/* WARNING: Removing unreachable block (ram,0x021c3bf0) */
/* WARNING: Removing unreachable block (ram,0x021c3d14) */
/* WARNING: Removing unreachable block (ram,0x021c3d24) */

void FUN_021c3a90(uint *param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined **ppuVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ushort uVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_9c9c;
  undefined8 *local_9c98;
  ushort *puStack_9c90;
  undefined8 *local_9c88;
  undefined *puStack_9c80;
  undefined *local_9c78;
  undefined8 uStack_9c70;
  undefined *local_9c68;
  undefined8 uStack_9c60;
  undefined1 local_9c58;
  undefined8 local_9c50;
  long lStack_9c48;
  undefined4 local_9c3c;
  ushort local_9c38;
  undefined1 auStack_9c36 [2];
  ushort uStack_9c34;
  ushort uStack_9c32;
  ushort local_9c30;
  ushort local_9c2e;
  undefined1 local_9c2c [12];
  ulong local_9c20;
  undefined1 *local_9c18;
  undefined8 uStack_9c10;
  undefined **local_9c08 [3];
  undefined1 local_9bf0 [8];
  undefined1 auStack_9be8 [8];
  undefined8 local_9be0 [3];
  undefined1 local_9bc8 [8];
  undefined1 auStack_9bc0 [8];
  undefined8 local_9bb8 [3];
  undefined1 local_9ba0 [38368];
  undefined *local_5c0;
  undefined8 uStack_5b8;
  undefined1 *local_5b0;
  undefined8 uStack_5a8;
  undefined4 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined1 auStack_578 [128];
  undefined1 auStack_4f8 [968];
  undefined *local_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  ulong local_118;
  undefined4 local_110;
  undefined1 auStack_10c [128];
  int local_8c;
  
  local_9c2c._0_8_ = 0x1f0000001f;
  local_9c18 = auStack_9be8;
  local_9c20 = 0x3c1;
  local_9bf0[0] = 0;
  uStack_9c10 = 0;
  local_9c08[2] = &local_5c0;
  local_9c08[0] = (undefined **)0x0;
  local_9c08[1] = (undefined **)0x0;
  lVar14 = 0x50;
  while( true ) {
    ppuVar3 = (undefined **)((long)local_9c08 + lVar14 + -8);
    *(undefined4 *)(auStack_9c36 + lVar14 + 1) = 0;
    *(undefined4 *)(auStack_9c36 + lVar14 + -2) = 0;
    *(undefined8 *)(local_9c2c + lVar14 + 0xc) = 0;
    *(undefined1 *)((long)local_9c08 + lVar14 + -0x10) = 0;
    *(undefined8 *)(local_9c2c + lVar14 + -4) = 0;
    *(undefined8 *)(local_9c2c + lVar14 + 4) = 0;
    if (ppuVar3 == local_9c08[2]) break;
    *(undefined4 *)((long)local_9c08 + lVar14 + -5) = 0;
    *(undefined4 *)ppuVar3 = 0;
    *(undefined8 *)((long)local_9c08 + lVar14 + 0x10) = 0;
    local_9bf0[lVar14] = 0;
    *(undefined4 *)(auStack_9be8 + lVar14) = 0;
    *(undefined4 *)(auStack_9be8 + lVar14 + 3) = 0;
    *(undefined8 *)((long)local_9be0 + lVar14 + 0x10) = 0;
    local_9bc8[lVar14] = 0;
    *(undefined4 *)(auStack_9bc0 + lVar14) = 0;
    *(undefined4 *)(auStack_9bc0 + lVar14 + 3) = 0;
    local_9ba0[lVar14] = 0;
    *(undefined8 *)((long)local_9bb8 + lVar14) = 0;
    *(undefined8 *)((long)local_9c08 + lVar14) = 0;
    *(undefined8 *)((long)local_9c08 + lVar14 + 8) = 0;
    *(undefined8 *)((long)local_9be0 + lVar14) = 0;
    *(undefined8 *)((long)local_9be0 + lVar14 + 8) = 0;
    *(undefined8 *)((long)local_9bb8 + lVar14 + 8) = 0;
    *(undefined8 *)((long)local_9bb8 + lVar14 + 0x10) = 0;
    lVar14 = lVar14 + 0xa0;
  }
  local_5a0 = 0x1f;
  local_598 = 0;
  uStack_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_5c0 = PTR_DAT_04bb7f28 + 0x10;
  uStack_5b8 = 0x1f000003c1;
  local_5b0 = auStack_578;
  uStack_5a8 = 0x1fffffffff;
  uStack_9c34 = 0x20;
  uStack_9c32 = 0x20;
  local_9c30 = 0xe1;
  local_9c2e = 0xc1;
  local_9c38 = 0x20;
  auStack_9c36 = (undefined1  [2])0x20;
  memset(auStack_4f8,0,0x3c1);
  local_130 = PTR_DAT_04bb7f30;
  local_110 = 0x1f;
  local_120 = auStack_10c;
  local_118 = 0x1fffffffff;
  param_1[0] = 0;
  puVar8 = PTR_DAT_04bb2720;
  param_1[1] = 0;
  local_130 = local_130 + 0x10;
  uStack_128 = 0x1f000003c1;
  param_1[2] = 0;
  local_9c3c = 0;
  lVar14 = *(long *)puVar8;
  if (lVar14 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar12 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  uVar13 = FUN_02b5f400(&local_9c3c,*(undefined4 *)(puVar20 + 7));
  puVar8 = PTR_DAT_04bb5ce0;
  if ((uVar13 & 1) == 0) {
    return;
  }
  lVar14 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar14 == 0) {
    local_9c2e = 0x18;
    local_9c30 = 0x14;
    uVar16 = 0xfffffffc;
    uVar21 = 0xfffffffc;
  }
  else {
    uVar21 = *(int *)(lVar14 + 0xd88) - 4;
    uVar16 = *(int *)(lVar14 + 0xd8c) - 4;
    local_9c30 = *(short *)(lVar14 + 0xd98) + 4;
    local_9c2e = *(short *)(lVar14 + 0xd9c) + 8;
  }
  local_9c50 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_9c88 = &local_9c50;
  puStack_9c80 = PTR_DAT_04bbc1a0 + 0x10;
  local_9c78 = PTR_DAT_04bb2010 + 0x10;
  puStack_9c90 = &local_9c38;
  uStack_9c70 = 0;
  uStack_9c60 = 0;
  local_9c98 = (undefined8 *)(PTR_DAT_04bb7f20 + 0x10);
  uStack_9c34 = (ushort)uVar21;
  uStack_9c32 = (ushort)uVar16;
  local_9c58 = 0;
  local_9c38 = uStack_9c34;
  if ((uint)local_9c30 <= (uVar21 & 0xffff)) {
    local_9c38 = local_9c30;
  }
  auStack_9c36 = (undefined1  [2])uStack_9c32;
  if ((uint)local_9c2e <= (uVar16 & 0xffff)) {
    auStack_9c36 = (undefined1  [2])local_9c2e;
  }
  lStack_9c48 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_9c68 = local_9c78;
  memset(auStack_4f8,2,0x3c1);
  memset(local_120,0,(long)uStack_128._4_4_ << 2);
  local_118 = local_118 & 0xffffffff00000000;
  FUN_035a4230(&local_9c38);
  uVar10 = local_9c38;
  if (local_9c20 != 0) {
    uVar13 = 0;
    iVar12 = local_9c2c._0_4_ + (uint)local_9c38;
    uVar21 = (uint)(ushort)auStack_9c36;
    uVar15 = local_9c20;
    uVar16 = (uint)local_9c38;
    do {
      iVar18 = uVar16 - local_9c38;
      if (-1 < iVar18) {
        if (iVar18 < (int)local_9c2c._0_4_) {
          iVar6 = uVar21 - (ushort)auStack_9c36;
          if (-1 < iVar6) {
            if ((iVar6 < (int)local_9c2c._4_4_) && (local_9c18 != (undefined1 *)0x0)) {
              (*(code *)*local_9c98)
                        (&local_9c98,local_9c18 + (long)(iVar18 + local_9c2c._0_4_ * iVar6) * 0x28);
              uVar15 = local_9c20;
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      bVar11 = uVar16 + 1 == iVar12;
      if (bVar11) {
        uVar21 = uVar21 + 1;
      }
      uVar19 = (uint)uVar10;
      if (!bVar11) {
        uVar19 = uVar16 + 1;
      }
      uVar16 = uVar19;
    } while (uVar13 < uVar15);
  }
  FUN_035a56c0(&local_9c38,0);
  puVar9 = PTR_DAT_04bb2720;
  fVar24 = *(float *)PTR_DAT_04bb76e8;
  fVar23 = *(float *)(PTR_DAT_04bb76e8 + 8);
  if (((fVar24 == 0.0) && (*(float *)(PTR_DAT_04bb76e8 + 4) == 0.0)) && (fVar23 == 0.0)) {
    uVar21 = 0;
    uVar16 = 0;
  }
  else {
    uVar21 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0) & 0xffff;
    uVar16 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0) & 0xffff;
  }
  local_9bf0[0] = 1;
  FUN_035a8968(&local_9c38,uVar21,uVar16);
  FUN_035a81f0(&local_9c38,uVar21,uVar16,0);
  local_9bf0[0] = 0;
  if ((*(long *)puVar8 != 0) && (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 != -1)) {
    local_8c = 6;
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 6 & 1) != 0) {
      local_8c = FUN_017e4de8();
      goto LAB_021c3fb8;
    }
  }
  local_8c = 0;
LAB_021c3fb8:
  puVar8 = PTR_DAT_04bb2640;
  if (local_8c - 1U < 8) {
    uVar21 = *(uint *)(&DAT_040580e0 + (long)(int)(local_8c - 1U) * 4);
    lVar14 = *(long *)puVar9;
  }
  else {
    uVar21 = 0;
    lVar14 = *(long *)puVar9;
  }
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x330) != 0)) {
    puVar20 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
    iVar12 = FUN_006bd550(*puVar20,0);
    if ((iVar12 == 0x758f7eaf) &&
       (((lVar14 = *(long *)puVar9, lVar14 != 0 && (*(long *)(lVar14 + 0x330) != 0)) &&
        (uVar16 = *(uint *)(*(long *)(lVar14 + 0x330) + 0x260), 0 < (int)uVar16)))) {
      uVar19 = 1;
      uVar22 = 0;
      do {
        uVar2 = uVar22 + 1;
        if ((lVar14 != 0) && (*(long *)(lVar14 + 0x330) != 0)) {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)puVar8 + 0x18))
                              (*(long **)puVar8,*(undefined4 *)(lVar14 + 0x338));
          iVar12 = FUN_006bd550(*puVar20,0);
          lVar14 = *(long *)puVar9;
          if (((iVar12 == 0x758f7eaf) &&
              ((lVar14 != 0 && (lVar17 = *(long *)(lVar14 + 0x330), lVar17 != 0)))) &&
             (uVar22 < *(uint *)(lVar17 + 0x260))) {
            lVar17 = lVar17 + 0x250;
            if (6 < uVar22) {
              uVar22 = uVar19 & 0xfffffff8;
              do {
                uVar22 = uVar22 - 8;
                lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar17 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                  + 8);
              } while (uVar22 != 0);
            }
            if ((uVar2 & 7) != 0) {
              uVar22 = uVar19 & 7;
              do {
                lVar17 = *(long *)(lVar17 + 8);
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
            if ((lVar17 != 0) && ((int *)(lVar17 + -0x40) != (int *)0x0)) {
              fVar23 = (float)NEON_ucvtf(*(undefined4 *)(lVar17 + -0x20));
              fVar24 = *(float *)(lVar17 + -0x1c) + *(float *)(lVar17 + -0x24) * 0.5 + 0.0;
              pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                                ((ulong)(long)(fVar23 * 11930465.0) >> 0x18 & 0xff) * 0x10);
              fVar23 = (float)((uint)(long)(fVar23 * 11930465.0) & 0xffffff) * 5.9604645e-08;
              fVar25 = *(float *)(lVar17 + -0x34) + fVar24 * (*pfVar1 + fVar23 * pfVar1[1]);
              fVar23 = *(float *)(lVar17 + -0x2c) + fVar24 * (pfVar1[2] + fVar23 * pfVar1[3]);
              uVar22 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
              if ((uint)local_9c38 <= (uVar22 & 0xffff)) {
                if (((uVar22 & 0xffff) <=
                     (((uint)local_9c38 + (uint)(ushort)local_9c2c._0_2_) - 1 & 0xffff)) &&
                   (uVar7 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0),
                   (uint)(ushort)auStack_9c36 <= (uVar7 & 0xffff))) {
                  if (((uVar7 & 0xffff) <=
                       (((uint)(ushort)auStack_9c36 + (uint)(ushort)local_9c2c._4_2_) - 1 & 0xffff))
                     && (uVar22 = (uVar22 - local_9c38) +
                                  *(int *)((long)local_9c08[2] + 0x1c) *
                                  (uVar7 - (ushort)auStack_9c36),
                        (*(uint *)(local_9c08[2][2] + (long)((int)uVar22 >> 5) * 4) >>
                         (ulong)(uVar22 & 0x1f) & 1) != 0)) {
                    local_9c9c = 0;
                    iVar12 = *(int *)(lVar17 + -0x40);
                    if (iVar12 < -0x32903cb) {
                      if (iVar12 < -0x41a8f72f) {
                        if (iVar12 < -0x5f5fbbed) {
                          if (iVar12 < -0x7697583a) {
                            if (iVar12 != -0x7db2cf54) {
                              iVar18 = -0x7cf21abf;
                              goto LAB_021c4560;
                            }
                          }
                          else {
                            if (iVar12 == -0x7697583a) goto LAB_021c4538;
                            if (iVar12 != -0x6695b9bc) {
                              iVar18 = -0x603ebea3;
                              goto LAB_021c43ac;
                            }
                          }
                        }
                        else {
                          if (-0x5043a2d7 < iVar12) {
                            if (iVar12 == -0x5043a2d6) goto LAB_021c45b4;
                            if (iVar12 == -0x4e3ca045) goto LAB_021c458c;
                            iVar18 = -0x48b12d30;
                            goto LAB_021c45ac;
                          }
                          if (iVar12 != -0x5f5fbbed) {
                            iVar18 = -0x5eff3c32;
LAB_021c4530:
                            if (iVar12 == iVar18) goto LAB_021c4538;
                            goto LAB_021c45c4;
                          }
                        }
                      }
                      else {
                        if (-0x1fc4ff3b < iVar12) {
                          if (iVar12 < -0x12a269b2) {
                            if (iVar12 != -0x1fc4ff3a) {
                              iVar18 = -0x1a4f58de;
LAB_021c4584:
                              if (iVar12 == iVar18) goto LAB_021c458c;
                              goto LAB_021c45c4;
                            }
                          }
                          else {
                            if (iVar12 == -0x12a269b2) {
LAB_021c4538:
                              local_9c9c = 5;
                              goto LAB_021c45c4;
                            }
                            if (iVar12 != -0xb114e92) {
                              iVar18 = -0x815520c;
                              goto LAB_021c4584;
                            }
                          }
                          goto LAB_021c45b4;
                        }
                        if (iVar12 < -0x339cb0dd) {
                          if (iVar12 == -0x41a8f72f) goto LAB_021c458c;
                          iVar18 = -0x3bca6aa4;
                          goto LAB_021c45ac;
                        }
                        if (iVar12 == -0x339cb0dd) goto LAB_021c4538;
                        if (iVar12 != -0x2fe075bd) {
                          iVar18 = -0x2fc850b3;
                          goto LAB_021c4530;
                        }
                      }
LAB_021c4540:
                      local_9c9c = 3;
                    }
                    else if (iVar12 < 0x25e91c5d) {
                      if (iVar12 < 0x6d43333) {
                        if (-0xa4151e < iVar12) {
                          if (iVar12 != -0xa4151d) {
                            if (iVar12 != 0x2d2ee90) {
                              iVar18 = 0x3c7d8fe;
                              goto LAB_021c4584;
                            }
                            goto LAB_021c458c;
                          }
                          goto LAB_021c4540;
                        }
                        if (iVar12 != -0x32903cb) {
                          iVar18 = -0x19a579e;
                          goto LAB_021c4560;
                        }
                      }
                      else if (iVar12 < 0x14bab176) {
                        if (iVar12 != 0x6d43333) {
                          iVar18 = 0xdda8806;
LAB_021c4560:
                          if (iVar12 != iVar18) goto LAB_021c45c4;
                        }
                      }
                      else {
                        if (iVar12 == 0x14bab176) goto LAB_021c4538;
                        if (iVar12 != 0x1bd63718) {
                          iVar18 = 0x1cebca34;
                          goto LAB_021c4530;
                        }
                      }
LAB_021c45bc:
                      local_9c9c = 4;
                    }
                    else {
                      if (iVar12 < 0x3dbdab35) {
                        if (0x30d8d3d3 < iVar12) {
                          if ((iVar12 != 0x30d8d3d4) && (iVar12 != 0x32eb2fc1)) {
                            iVar18 = 0x34cf1ed9;
LAB_021c43ac:
                            if (iVar12 != iVar18) goto LAB_021c45c4;
                            goto LAB_021c4540;
                          }
LAB_021c458c:
                          local_9c9c = 1;
                          goto LAB_021c45c4;
                        }
                        if (iVar12 == 0x25e91c5d) goto LAB_021c45bc;
                        iVar18 = 0x26f16472;
                      }
                      else {
                        if (0x63e13d9f < iVar12) {
                          if (iVar12 == 0x63e13da0) goto LAB_021c45b4;
                          if (iVar12 != 0x68d091e5) {
                            iVar18 = 0x7445a94a;
                            goto LAB_021c4530;
                          }
                          goto LAB_021c4540;
                        }
                        if (iVar12 == 0x3dbdab35) goto LAB_021c45bc;
                        iVar18 = 0x4e0039f2;
                      }
LAB_021c45ac:
                      if (iVar12 == iVar18) {
LAB_021c45b4:
                        local_9c9c = 2;
                      }
                    }
LAB_021c45c4:
                    if ((uVar21 >> (ulong)local_9c9c & 1) != 0) {
                      *param_1 = *param_1 | 1 << (ulong)local_9c9c;
                    }
                  }
                }
              }
            }
          }
        }
        uVar19 = uVar19 + 1;
        uVar22 = uVar2;
      } while (uVar2 != uVar16);
    }
  }
  uVar16 = *param_1;
  *param_1 = uVar16 | 1;
  param_1[1] = param_1[1] | 1;
  if ((uVar16 | 1) != uVar21) {
    param_1[2] = param_1[2] | 2;
  }
  FUN_021c4650(param_1);
  return;
}

