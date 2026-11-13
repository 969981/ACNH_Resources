
/* WARNING: Removing unreachable block (ram,0x012f7b8c) */

undefined8 FUN_012f7630(long param_1,char *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  uint *puVar16;
  undefined4 uVar17;
  long lVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  undefined **ppuVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined *local_120;
  undefined8 local_118;
  undefined **local_110;
  undefined **local_108;
  undefined *local_100;
  int local_f8;
  int local_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  byte local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  float local_b0 [2];
  float local_a8 [2];
  undefined8 local_a0;
  short local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  
  puVar7 = PTR_DAT_04bb2010;
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  local_f0 = PTR_DAT_04bbfe68 + 0x10;
  puStack_d0 = PTR_DAT_04bb2010 + 0x10;
  ppuVar23 = &local_c0;
  local_e8 = 0;
  fVar26 = (float)*(int *)(param_1 + 0x84) * 10.0 + 2.5;
  fVar25 = (float)*(int *)(param_1 + 0x80) * 10.0 + 2.5;
  fVar28 = (float)*(int *)(param_1 + 0x94) * 10.0 + 10.0 + -2.5;
  fVar27 = (float)*(int *)(param_1 + 0x90) * 10.0 + 10.0 + -2.5;
  local_b8 = (int)((float)(int)fVar25 / 5.0);
  if (0.0 <= fVar25) {
    local_b8 = local_b8 + 1;
  }
  iVar19 = (int)((float)(int)fVar26 / 5.0);
  if (0.0 <= fVar26) {
    iVar19 = iVar19 + 1;
  }
  iVar14 = -2;
  if (0.0 <= fVar27) {
    iVar14 = -1;
  }
  iVar12 = -2;
  if (0.0 <= fVar28) {
    iVar12 = -1;
  }
  iVar14 = iVar14 + (int)((float)(int)fVar27 / 5.0);
  iVar1 = local_b8;
  if (iVar14 <= local_b8) {
    iVar1 = iVar14;
  }
  if (local_b8 <= iVar14) {
    local_b8 = iVar14;
  }
  iVar12 = iVar12 + (int)((float)(int)fVar28 / 5.0);
  iVar14 = iVar19;
  if (iVar12 <= iVar19) {
    iVar14 = iVar12;
  }
  if (iVar19 <= iVar12) {
    iVar19 = iVar12;
  }
  lVar18 = *(long *)PTR_DAT_04bb2720;
  local_c8 = iVar1;
  iStack_c4 = iVar14;
  local_c0 = puStack_d0;
  iStack_b4 = iVar19;
  if (lVar18 == 0) {
    puVar24 = &DAT_055c04a0;
  }
  else {
    puVar24 = &DAT_055c04a0;
    if (*(long *)(lVar18 + 0x330) != 0) {
      puVar24 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar12 = FUN_006bd550(*puVar24,0);
      puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar24 = &DAT_055c04a0;
      }
    }
  }
  local_e4 = *(undefined4 *)(puVar24 + 7);
  local_e0 = FUN_017baf44();
  local_e0 = local_e0 & 1;
  lVar18 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar18 == 0) || (*(long *)(lVar18 + 0xa8) == 0)) || (*(char *)(lVar18 + 0x11c8) != '\0')) {
    fVar25 = -500.0;
  }
  else {
    fVar25 = (float)FUN_0093a950(lVar18 + 0x28,param_1 + 0x18,0);
  }
  puVar9 = PTR_DAT_04bbc2f8;
  puVar8 = PTR_DAT_04bb27a8;
  if (iVar19 + 1 != iVar14) {
    puVar16 = (uint *)PTR_DAT_04bbbe30;
    local_110 = &puStack_d0;
    local_108 = ppuVar23;
    local_100 = puVar7 + 0x10;
    local_f8 = iVar1;
    local_f4 = iVar14;
    do {
      fVar26 = (float)local_f8 * 0.5;
      uVar13 = 0;
      if (fVar26 != (float)(int)fVar26) {
        uVar13 = (uint)(fVar26 < 0.0);
      }
      fVar27 = (float)local_f4 * 0.5;
      uVar21 = 0;
      if (fVar27 != (float)(int)fVar27) {
        uVar21 = (uint)(fVar27 < 0.0);
      }
      if ((int)fVar26 - uVar13 == *(int *)(param_1 + 0x68) ||
          (int)fVar27 - uVar21 == *(int *)(param_1 + 0x6c)) {
        local_b0[0] = *(float *)(param_1 + 0xa0);
        sVar4 = *(short *)(param_1 + 0xd4);
        if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
          sVar4 = *(short *)(param_1 + 0xd8);
        }
        sVar5 = *(short *)(param_1 + 0xd6);
        if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
          sVar5 = *(short *)(param_1 + 0xda);
        }
        uVar13 = ((int)fVar26 - uVar13) - (int)sVar4;
        uVar21 = ((int)fVar27 - uVar21) - (int)sVar5;
        puVar2 = (ushort *)(param_1 + 0xdc + (ulong)(uVar21 * 3 + uVar13) * 0xe);
        if (2 < uVar21 || 2 < uVar13) {
          puVar2 = (ushort *)puVar9;
        }
        puVar3 = puVar2 + (ulong)(uint)local_b0[0] * 3;
        if (1 < (uint)local_b0[0]) {
          puVar3 = puVar2;
        }
        lVar18 = *(long *)puVar8;
        uVar13 = (uint)*puVar3 - (uint)*(ushort *)(lVar18 + 0x408);
        if (uVar13 < *(uint *)(lVar18 + 1000)) {
          puVar20 = *(uint **)(*(long *)(lVar18 + 0x3f0) + (long)(int)uVar13 * 8);
          if (puVar20 != (uint *)0x0) {
            uVar13 = *puVar20;
            if (uVar13 != 0 && puVar20 != (uint *)(ulong)uVar13) {
              puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar13);
              if (*puVar22 != 0) {
                uVar13 = puVar22[1];
                if (uVar13 != 0) {
                  if ((ulong)(ushort)puVar22[2] != 0) {
                    lVar18 = 0xc;
                    if (*(char *)((long)puVar22 + 10) != '\0') {
                      lVar18 = 0x1c;
                    }
                    lVar18 = (long)puVar22 + lVar18 + (ulong)(ushort)puVar22[2] * 8;
                    if (lVar18 != 0) {
                      uVar21 = 0;
                      if ((ulong)uVar13 != 0) {
                        uVar21 = (uint)((ulong)((long)puVar20 - lVar18) / (ulong)uVar13);
                      }
                      if (*puVar22 <= uVar21) {
                        uVar21 = 0xffffffff;
                      }
                      if (uVar21 < *puVar16) {
                        if (*(short *)(*(long *)(puVar16 + 2) + (long)(int)uVar21 * 2) == 2) {
                          local_118 = 0;
                          local_120 = puVar7 + 0x10;
                          psVar15 = (short *)FUN_01a5190c(&local_f0,0,&local_100,&local_120);
                          local_86 = (char)psVar15[1];
                          local_88 = *psVar15;
                          local_85 = *(undefined1 *)((long)psVar15 + 3);
                          local_84 = *(undefined4 *)(psVar15 + 2);
                          if (*psVar15 != -2) {
                            lVar18 = *(long *)PTR_DAT_04bbbc68;
                            if (lVar18 == 0) {
                              bVar11 = false;
                              bVar10 = false;
                            }
                            else {
                              if ((((*(long *)(lVar18 + 0xb0) == 0) ||
                                   (*(long *)(*(long *)(lVar18 + 0xb0) + 8) == 0)) ||
                                  ((*(long *)(lVar18 + 0x488) == 0 ||
                                   ((*(long *)(*(long *)(lVar18 + 0x488) + 8) == 0 ||
                                    (*(long *)(lVar18 + 0x2b0) == 0)))))) ||
                                 (*(long *)(*(long *)(lVar18 + 0x2b0) + 8) == 0)) {
                                bVar10 = false;
                                lVar18 = *(long *)PTR_DAT_04bbbc68;
                                if (lVar18 != 0) goto LAB_012f7b04;
LAB_012f7bb8:
                                bVar11 = false;
                              }
                              else {
                                uVar13 = FUN_0277d6c4(&local_88);
                                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                                if ((uVar13 < *(uint *)(lVar18 + 0x1d8)) &&
                                   (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar13 * 8) !=
                                    0)) {
                                  FUN_0124c030(local_b0,&local_88);
                                  iVar14 = FUN_0123db50(local_a8,local_a0);
                                  bVar10 = iVar14 == 0x21;
                                }
                                else {
                                  bVar10 = false;
                                }
                                lVar18 = *(long *)PTR_DAT_04bbbc68;
                                if (lVar18 == 0) goto LAB_012f7bb8;
LAB_012f7b04:
                                if (((((*(long *)(lVar18 + 0xb0) == 0) ||
                                      (*(long *)(*(long *)(lVar18 + 0xb0) + 8) == 0)) ||
                                     (*(long *)(lVar18 + 0x488) == 0)) ||
                                    ((*(long *)(*(long *)(lVar18 + 0x488) + 8) == 0 ||
                                     (*(long *)(lVar18 + 0x2b0) == 0)))) ||
                                   (*(long *)(*(long *)(lVar18 + 0x2b0) + 8) == 0))
                                goto LAB_012f7bb8;
                                uVar13 = FUN_0277d6c4(&local_88);
                                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                                if (uVar13 < *(uint *)(lVar18 + 0x1d8)) {
                                  bVar11 = false;
                                  if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar13 * 8)
                                      != 0) {
                                    FUN_0124c030(local_b0,&local_88);
                                    iVar14 = FUN_0123db50(local_a8,local_a0);
                                    bVar11 = iVar14 == 0x22;
                                  }
                                }
                                else {
                                  bVar11 = false;
                                }
                              }
                              bVar6 = bVar11;
                              if (bVar10) goto LAB_012f7cb8;
                            }
                            bVar6 = true;
                            if (bVar11) {
LAB_012f7cb8:
                              uVar17 = 2;
                              if (!bVar6) {
                                uVar17 = 0;
                              }
                              if (bVar10) {
                                uVar17 = 1;
                              }
                              *(undefined4 *)(param_2 + 4) = uVar17;
                              return 1;
                            }
                            lVar18 = *(long *)PTR_DAT_04bb27c8;
                            local_a8[0] = (float)local_118._4_4_ * 5.0 + 2.5;
                            local_b0[0] = (float)(int)local_118 * 5.0 + 2.5;
                            if (((lVar18 == 0) || (*(long *)(lVar18 + 0xa8) == 0)) ||
                               (*(char *)(lVar18 + 0x11c8) != '\0')) {
                              fVar26 = -500.0;
                            }
                            else {
                              fVar26 = (float)FUN_0093a950(lVar18 + 0x28,local_b0,0);
                            }
                            if (*param_2 == '\0') {
                              if ((-5.0 <= fVar25 - fVar26) && (fVar25 - fVar26 <= 5.0)) {
                                return 1;
                              }
                            }
                            else if (fVar25 < fVar26) {
                              return 1;
                            }
                          }
                          puVar16 = (uint *)PTR_DAT_04bbbe30;
                          ppuVar23 = local_108;
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
      if (local_f8 < *(int *)(ppuVar23 + 1)) {
        local_f8 = local_f8 + 1;
      }
      else {
        local_f4 = local_f4 + 1;
        local_f8 = *(int *)(local_110 + 1);
      }
    } while ((iVar1 != local_f8) || (iVar19 + 1 != local_f4));
  }
  return 0;
}

