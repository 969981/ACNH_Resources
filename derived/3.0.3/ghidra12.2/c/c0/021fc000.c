
undefined8 FUN_021fc000(float *param_1,float *param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  ushort uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint *local_90;
  uint local_88;
  undefined4 local_84;
  
  local_b0 = 0;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar8 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  local_ac = *(undefined4 *)(puVar17 + 7);
  local_a8 = FUN_017baf44();
  local_a8 = local_a8 & 1;
  fVar20 = *param_1;
  local_b8 = PTR_DAT_04bb3140 + 0x10;
  fVar22 = *param_2;
  fVar21 = param_1[2];
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  iVar8 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  iVar18 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  fVar23 = param_2[2];
  iVar4 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iVar5 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  uVar9 = FUN_006f0400(fVar22 - fVar20,fVar23 - fVar21);
  puVar6 = PTR_DAT_04bb43c0;
  if ((uVar9 & 0x7fffffff) + 0xdfffffff >> 0x1e == 0) {
    fVar20 = param_1[2];
    iVar11 = -1;
    if (iVar18 < iVar5) {
      iVar11 = 1;
    }
    fVar21 = *param_1;
    iVar12 = -1;
    if (iVar8 < iVar4) {
      iVar12 = 1;
    }
    fVar22 = 0.0;
    if (param_2[2] != fVar20) {
      fVar22 = (*param_2 - fVar21) / (param_2[2] - fVar20);
    }
    if (iVar18 != iVar11 + iVar5) {
      bVar1 = iVar18 < iVar5;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      do {
        if (iVar18 == iVar5) {
          fVar23 = *param_2;
        }
        else {
          fVar23 = fVar21 + ((float)(int)(iVar18 + (uint)bVar1) * 5.0 - fVar20) * fVar22;
        }
        for (; iVar8 != iVar12 + (int)((float)(int)fVar23 / 5.0); iVar8 = iVar8 + iVar12) {
          local_c0 = iVar8;
          iStack_bc = iVar18;
          puVar10 = (undefined4 *)FUN_01a5190c(&local_b8,0,&local_c8,0);
          lVar19 = *(long *)puVar6;
          uVar9 = FUN_0277d6c4();
          lVar13 = *(long *)puVar6;
          if (lVar13 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              local_90 = (uint *)0x0;
              local_98 = *puVar10;
              uStack_94 = puVar10[1];
              local_a0 = puVar2;
              uVar9 = FUN_0277d6c4(&local_98);
              if (*(long *)puVar6 == 0) {
LAB_021fc484:
                local_88 = 0xbc;
              }
              else {
                lVar13 = *(long *)(lVar13 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
                   (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                goto LAB_021fc484;
                lVar13 = *(long *)PTR_DAT_04bc0428;
                uVar9 = FUN_0277d6c4(puVar10);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
                   (puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
                   puVar14 == (uint *)0x0)) goto LAB_021fc484;
                uVar15 = 0;
                uVar9 = *puVar14;
                if ((uVar9 != 0) && (puVar14 != (uint *)(ulong)uVar9)) {
                  puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
                  uVar15 = 0;
                  if (*puVar16 != 0) {
                    uVar9 = puVar16[1];
                    if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
                      if (lVar13 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar9 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar9);
                        }
                        if (*puVar16 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar15 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                           uVar15 < 0xbd)) goto LAB_021fc3d8;
                      }
                    }
                    uVar15 = 0;
                  }
                }
LAB_021fc3d8:
                if (uVar15 == 0x15) {
                  return 1;
                }
                local_88 = 0;
                uVar9 = *puVar14;
                local_90 = puVar14;
                if ((uVar9 != 0) && (puVar14 != (uint *)(ulong)uVar9)) {
                  puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
                  local_88 = 0;
                  if (*puVar16 != 0) {
                    uVar9 = puVar16[1];
                    if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
                      if (lVar13 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar9 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar9);
                        }
                        if (*puVar16 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                           (local_88 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar3 * 2), local_88 < 0xbd))
                        goto LAB_021fc4ac;
                      }
                    }
                    local_88 = 0;
                  }
                }
              }
LAB_021fc4ac:
              local_84 = 0x17;
              if (local_88 == 0x17) {
                return 1;
              }
            }
          }
        }
        bVar7 = iVar18 != iVar5;
        iVar18 = iVar18 + iVar11;
        iVar8 = (int)((float)(int)fVar23 / 5.0);
      } while (bVar7);
    }
  }
  else {
    fVar20 = *param_1;
    iVar11 = -1;
    if (iVar8 < iVar4) {
      iVar11 = 1;
    }
    iVar12 = -1;
    if (iVar18 < iVar5) {
      iVar12 = 1;
    }
    if (*param_2 == fVar20) {
      fVar21 = param_1[2];
      fVar22 = 0.0;
    }
    else {
      fVar21 = param_1[2];
      fVar22 = (param_2[2] - fVar21) / (*param_2 - fVar20);
    }
    if (iVar8 != iVar11 + iVar4) {
      bVar1 = iVar8 < iVar4;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      do {
        if (iVar8 == iVar4) {
          fVar23 = param_2[2];
        }
        else {
          fVar23 = fVar21 + ((float)(int)(iVar8 + (uint)bVar1) * 5.0 - fVar20) * fVar22;
        }
        for (; iVar18 != iVar12 + (int)((float)(int)fVar23 / 5.0); iVar18 = iVar18 + iVar12) {
          local_c0 = iVar8;
          iStack_bc = iVar18;
          puVar10 = (undefined4 *)FUN_01a5190c(&local_b8,0,&local_c8,0);
          lVar19 = *(long *)puVar6;
          uVar9 = FUN_0277d6c4();
          lVar13 = *(long *)puVar6;
          if (lVar13 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              local_90 = (uint *)0x0;
              local_98 = *puVar10;
              uStack_94 = puVar10[1];
              local_a0 = puVar2;
              uVar9 = FUN_0277d6c4(&local_98);
              if (*(long *)puVar6 == 0) {
LAB_021fc7e4:
                local_88 = 0xbc;
              }
              else {
                lVar13 = *(long *)(lVar13 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
                   (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                goto LAB_021fc7e4;
                lVar13 = *(long *)PTR_DAT_04bc0428;
                uVar9 = FUN_0277d6c4(puVar10);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
                   (puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
                   puVar14 == (uint *)0x0)) goto LAB_021fc7e4;
                uVar15 = 0;
                uVar9 = *puVar14;
                if ((uVar9 != 0) && (puVar14 != (uint *)(ulong)uVar9)) {
                  puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
                  uVar15 = 0;
                  if (*puVar16 != 0) {
                    uVar9 = puVar16[1];
                    if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
                      if (lVar13 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar9 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar9);
                        }
                        if (*puVar16 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar15 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                           uVar15 < 0xbd)) goto LAB_021fc738;
                      }
                    }
                    uVar15 = 0;
                  }
                }
LAB_021fc738:
                if (uVar15 == 0x15) {
                  return 1;
                }
                local_88 = 0;
                uVar9 = *puVar14;
                local_90 = puVar14;
                if ((uVar9 != 0) && (puVar14 != (uint *)(ulong)uVar9)) {
                  puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
                  local_88 = 0;
                  if (*puVar16 != 0) {
                    uVar9 = puVar16[1];
                    if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
                      if (lVar13 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar9 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar9);
                        }
                        if (*puVar16 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                           (local_88 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar3 * 2), local_88 < 0xbd))
                        goto LAB_021fc80c;
                      }
                    }
                    local_88 = 0;
                  }
                }
              }
LAB_021fc80c:
              local_84 = 0x17;
              if (local_88 == 0x17) {
                return 1;
              }
            }
          }
        }
        bVar7 = iVar8 != iVar4;
        iVar8 = iVar8 + iVar11;
        iVar18 = (int)((float)(int)fVar23 / 5.0);
      } while (bVar7);
    }
  }
  return 0;
}

