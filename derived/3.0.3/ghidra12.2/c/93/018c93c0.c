
/* WARNING: Removing unreachable block (ram,0x018c9404) */
/* WARNING: Removing unreachable block (ram,0x018c9414) */
/* WARNING: Removing unreachable block (ram,0x018c9420) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_018c93c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  short *psVar11;
  undefined4 *puVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  uint local_84;
  
  iVar13 = 0;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) goto LAB_018c94b8;
  lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
  iVar13 = 0;
  if (lVar14 == 0) goto LAB_018c94b8;
  uVar8 = *(int *)(param_1 + 8) - *(int *)(lVar14 + 0x28);
  uVar5 = *(uint *)(lVar14 + 0x18);
  uVar3 = *(int *)(param_1 + 0xc) - *(int *)(lVar14 + 0x2c);
  if ((uVar8 < uVar5 && uVar3 <= *(uint *)(lVar14 + 0x1c)) &&
      (uVar5 <= uVar8 || *(uint *)(lVar14 + 0x1c) != uVar3)) {
    uVar8 = uVar8 + uVar5 * uVar3;
LAB_018c949c:
    if (*(uint *)(lVar14 + 0x30) <= uVar8) {
      uVar8 = 0;
    }
    puVar10 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar8 * 0x68);
  }
  else {
    if (*(char *)(lVar14 + 0x88) != '\0') {
      uVar5 = *(int *)(param_1 + 8) - *(int *)(lVar14 + 0x98);
      uVar3 = *(int *)(param_1 + 0xc) - *(int *)(lVar14 + 0x9c);
      uVar8 = *(uint *)(lVar14 + 0xa0);
      if ((uVar5 < uVar8 && uVar3 <= *(uint *)(lVar14 + 0xa4)) &&
          (uVar8 <= uVar5 || *(uint *)(lVar14 + 0xa4) != uVar3)) {
        uVar8 = uVar5 + uVar8 * uVar3 + *(int *)(lVar14 + 0x8c);
        goto LAB_018c949c;
      }
    }
    puVar10 = &DAT_051a50f0;
  }
  iVar13 = (int)*(char *)(puVar10 + 2);
LAB_018c94b8:
  local_b0 = (undefined *)CONCAT44((int)((ulong)local_b0 >> 0x20),iVar13);
  if ((iVar13 <= DAT_052ba9b0) && (*(long *)(PTR_DAT_04bbec30 + 8) != 0)) {
    fVar18 = (float)*(int *)(param_1 + 0xc) * 10.0 + 5.0;
    fVar19 = (float)*(int *)(param_1 + 8) * 10.0 + 5.0;
    iVar13 = (int)((float)(int)fVar19 / 10.0) - (uint)(fVar19 < 0.0);
    iVar4 = (int)((float)(int)fVar18 / 10.0) - (uint)(fVar18 < 0.0);
    uVar8 = iVar13 - *(int *)(PTR_DAT_04bbec38 + 0x10);
    if (((*(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar13 && iVar13 <= *(int *)(PTR_DAT_04bbec38 + 0x20)
         ) && *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar4) &&
        iVar4 <= *(int *)(PTR_DAT_04bbec38 + 0x24)) {
      uVar5 = iVar4 - *(int *)(PTR_DAT_04bbec38 + 0x14);
      lVar14 = (long)(int)(uVar8 + *(uint *)PTR_DAT_04bbec30 * uVar5);
      if (*(uint *)(PTR_DAT_04bbec30 + 4) <= uVar5 || *(uint *)PTR_DAT_04bbec30 <= uVar8) {
        lVar14 = 0;
      }
      if ((*(char *)(*(long *)(PTR_DAT_04bbec30 + 8) + lVar14 * 8 + 4) == '\0') &&
         (uVar9 = FUN_00977130(param_1), (uVar9 & 1) != 0)) {
        iVar16 = *(int *)(param_1 + 0xc);
        fVar18 = (float)*(int *)(param_1 + 8) * 10.0;
        fVar19 = fVar18 + 2.5;
        fVar18 = fVar18 + 10.0 + -2.5;
        iVar4 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
        iVar17 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
        iVar13 = iVar4;
        if (iVar17 <= iVar4) {
          iVar13 = iVar17;
        }
        if (iVar4 <= iVar17) {
          iVar4 = iVar17;
        }
        uVar9 = FUN_00977130(param_1);
        puVar6 = PTR_DAT_04bb2720;
        if ((uVar9 & 1) != 0) {
          fVar18 = (float)iVar16 * 10.0;
          fVar19 = fVar18 + 2.5;
          fVar18 = fVar18 + 10.0 + -2.5;
          iVar16 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
          iVar15 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
          iVar17 = iVar16;
          if (iVar16 <= iVar15) {
            iVar17 = iVar15;
          }
          if (iVar15 <= iVar16) {
            iVar16 = iVar15;
          }
          if (iVar17 + 1 != iVar16) {
            puVar1 = PTR_DAT_04bb2010 + 0x10;
            puVar2 = PTR_DAT_04bbfe68 + 0x10;
            iVar15 = iVar13;
            do {
              lVar14 = *(long *)puVar6;
              local_a8 = 0;
              local_b0 = puVar2;
              local_98 = puVar1;
              local_90 = iVar15;
              iStack_8c = iVar16;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
                puVar10 = &DAT_055c04a0;
              }
              else {
                puVar10 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
                iVar7 = FUN_006bd550(*puVar10,0);
                puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar7 != 0x758f7eaf) {
                  puVar10 = &DAT_055c04a0;
                }
              }
              local_a4 = *(undefined4 *)(puVar10 + 7);
              local_a0 = FUN_017baf44();
              local_a0 = local_a0 & 1;
              psVar11 = (short *)FUN_01a5190c(&local_b0,0,&local_98,0);
              if (*psVar11 != -2) {
                return 0;
              }
              if (iVar15 < iVar4) {
                iVar15 = iVar15 + 1;
              }
              else {
                iVar16 = iVar16 + 1;
                iVar15 = iVar13;
              }
            } while ((iVar13 != iVar15) || (iVar17 + 1 != iVar16));
          }
          local_90 = *(int *)(param_1 + 8);
          local_b8 = 0;
          local_c0 = 0;
          iStack_8c = *(int *)(param_1 + 0xc) + 1;
          local_98 = PTR_DAT_04bb2018 + 0x10;
          fVar18 = (float)local_90 * 10.0 + 2.5;
          fVar19 = (float)iStack_8c * 10.0 + 2.5;
          fVar20 = (float)local_90 * 10.0 + 10.0 + -2.5;
          fVar21 = (float)iStack_8c * 10.0 + 10.0 + -2.5;
          iVar4 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
          iVar16 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
          iVar17 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
          iVar13 = iVar4;
          if (iVar17 <= iVar4) {
            iVar13 = iVar17;
          }
          if (iVar4 <= iVar17) {
            iVar4 = iVar17;
          }
          local_b0 = (undefined *)CONCAT44(local_b0._4_4_,8);
          iVar15 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
          iVar17 = iVar16;
          if (iVar15 <= iVar16) {
            iVar17 = iVar15;
          }
          if (iVar16 <= iVar15) {
            iVar16 = iVar15;
          }
          local_c0 = 0x100;
          local_b8 = 0;
          uVar9 = FUN_00978710(&local_98,&local_c0);
          puVar6 = PTR_DAT_04bbbc68;
          if ((uVar9 & 1) == 0) {
            if (iVar16 + 1 != iVar17) {
              puVar1 = PTR_DAT_04bb2010 + 0x10;
              puVar2 = PTR_DAT_04bbfe68 + 0x10;
              iVar15 = iVar13;
              do {
                lVar14 = *(long *)PTR_DAT_04bb2720;
                local_a8 = 0;
                local_d0 = puVar1;
                local_c8 = iVar15;
                iStack_c4 = iVar17;
                local_b0 = puVar2;
                if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
                  puVar10 = &DAT_055c04a0;
                }
                else {
                  puVar10 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
                  iVar7 = FUN_006bd550(*puVar10,0);
                  puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar7 != 0x758f7eaf) {
                    puVar10 = &DAT_055c04a0;
                  }
                }
                local_a4 = *(undefined4 *)(puVar10 + 7);
                local_a0 = FUN_017baf44();
                local_a0 = local_a0 & 1;
                puVar12 = (undefined4 *)FUN_01a5190c(&local_b0,0,&local_d0,0);
                local_d8 = *puVar12;
                uStack_d4 = puVar12[1];
                lVar14 = *(long *)puVar6;
                if (((((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) &&
                     (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)) &&
                    ((*(long *)(lVar14 + 0x488) != 0 &&
                     (*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0)))) &&
                   ((*(long *)(lVar14 + 0x2b0) != 0 &&
                    (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)))) {
                  uVar8 = FUN_0277d6c4(&local_d8);
                  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                  if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                    lVar14 = *(long *)puVar6;
                    uVar8 = FUN_0277d6c4(&local_d8);
                    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                    if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
                       (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8),
                       lVar14 != 0)) {
                      local_84 = 4;
                      lVar14 = FUN_01246470(lVar14,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
                      if (lVar14 != 0) {
                        uVar8 = local_84 + 7;
                        if (-1 < (int)local_84) {
                          uVar8 = local_84;
                        }
                        if ((*(byte *)(lVar14 + (ulong)(uint)((int)uVar8 >> 3)) >>
                             (ulong)(local_84 & 7) & 1) != 0) {
                          return 0;
                        }
                      }
                    }
                  }
                }
                if (iVar15 < iVar4) {
                  iVar15 = iVar15 + 1;
                }
                else {
                  iVar17 = iVar17 + 1;
                  iVar15 = iVar13;
                }
              } while ((iVar13 != iVar15) || (iVar16 + 1 != iVar17));
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

