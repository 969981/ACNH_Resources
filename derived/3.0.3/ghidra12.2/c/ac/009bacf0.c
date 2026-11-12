
undefined8 FUN_009bacf0(long param_1,undefined1 *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_134;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  
  lVar16 = *(long *)(*(long *)PTR_DAT_04bb47c0 + 0x48);
  if ((lVar16 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar23 = 0.0;
    local_134 = 0;
    uVar18 = *(uint *)(param_1 + 0xc);
    do {
      uVar12 = *(uint *)(param_3 + 2);
      uVar7 = uVar18 - 1;
      lVar10 = *param_3;
      lVar13 = lVar10;
      if (uVar7 < uVar12) {
        iVar15 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar20 = 0;
        if ((int)param_3[1] <= iVar15) {
          iVar20 = (int)param_3[1];
        }
        lVar13 = lVar10 + (long)(iVar15 - iVar20) * 0x1060;
      }
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar11 = (ulong)uVar5;
      lVar14 = lVar13 + uVar11 * 0x830;
      if (1 < uVar5) {
        lVar14 = lVar13;
      }
      uVar6 = *(uint *)(lVar14 + 0x780);
      if (1 < (int)uVar6) {
        lVar13 = lVar10;
        if (uVar7 < uVar12) {
          iVar15 = *(int *)((long)param_3 + 0xc) + uVar7;
          iVar20 = 0;
          if ((int)param_3[1] <= iVar15) {
            iVar20 = (int)param_3[1];
          }
          lVar13 = lVar10 + (long)(iVar15 - iVar20) * 0x1060;
        }
        if (uVar6 != 2) {
          fVar24 = 0.0;
          iVar15 = 0;
          iVar20 = uVar6 - 2;
          lVar14 = lVar13 + (ulong)uVar5 * 0x830;
          if (1 < uVar11) {
            lVar14 = lVar13;
          }
          lVar13 = lVar14 + ((ulong)uVar6 - 1) * 0x78;
          if (0x10 < uVar6) {
            lVar13 = lVar14;
          }
          uVar19 = (ulong)uVar6 - 1;
          do {
            lVar14 = lVar10;
            if (uVar7 < uVar12) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar14 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            uVar17 = uVar19 - 1 & 0xffffffff;
            lVar4 = lVar14 + uVar11 * 0x830;
            if (1 < uVar11) {
              lVar4 = lVar14;
            }
            lVar14 = lVar4 + uVar17 * 0x78;
            if (0x10 < uVar19) {
              lVar14 = lVar4;
            }
            if (uVar7 < uVar12) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar10 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            fVar26 = *(float *)(lVar13 + 0x40);
            lVar13 = lVar10 + uVar11 * 0x830;
            if (1 < uVar11) {
              lVar13 = lVar10;
            }
            fVar21 = fVar26 - *(float *)(lVar14 + 0x40);
            lVar10 = lVar13 + uVar17 * 0x78;
            if (0x10 < uVar19) {
              lVar10 = lVar13;
            }
            fVar27 = *(float *)(lVar10 + 0x40);
            fVar25 = -fVar27;
            if (0.0 <= fVar27) {
              fVar25 = fVar27;
            }
            fVar22 = -fVar21;
            if (0.0 <= fVar21) {
              fVar22 = fVar21;
            }
            if (0.015 < fVar22) {
              piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar16 + 0x1910) + 0xf0))();
              if (*piVar8 < local_134) {
                piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar16 + 0x1910) + 0xf0))();
                iVar2 = *piVar8;
                piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar16 + 0x1910) + 8) + 0xf0))();
                if (fVar26 < fVar27 && local_134 <= *piVar8 + iVar2) {
                  iVar15 = iVar15 + 1;
                }
              }
              else if (fVar27 <= fVar26) {
                iVar15 = iVar15 + 1;
              }
            }
            uVar12 = *(uint *)(param_3 + 2);
            lVar10 = *param_3;
            lVar13 = lVar10;
            if (uVar7 < uVar12) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar13 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            fVar24 = fVar24 + fVar25;
            iVar20 = iVar20 + -1;
            uVar5 = *(uint *)(param_1 + 0x10);
            uVar11 = (ulong)uVar5;
            lVar14 = lVar13 + uVar11 * 0x830;
            if (1 < uVar5) {
              lVar14 = lVar13;
            }
            lVar13 = lVar14 + uVar17 * 0x78;
            if (0x10 < uVar19) {
              lVar13 = lVar14;
            }
            uVar19 = uVar19 - 1;
          } while (iVar20 != 0);
          if (fVar24 != 0.0) {
            if (uVar7 < uVar12) {
              iVar20 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar2 = 0;
              if ((int)param_3[1] <= iVar20) {
                iVar2 = (int)param_3[1];
              }
              lVar10 = lVar10 + (long)(iVar20 - iVar2) * 0x1060;
            }
            lVar13 = lVar10 + (ulong)uVar5 * 0x830;
            if (1 < uVar11) {
              lVar13 = lVar10;
            }
            fVar23 = fVar23 + fVar24 / (float)*(int *)(lVar13 + 0x780);
          }
          if (1 < iVar15) {
            local_134 = local_134 + 1;
          }
        }
      }
      piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar16 + 0x1910) + 0xf0))();
      iVar15 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar16 + 0x1910) + 8) + 0xf0))();
      if ((*piVar8 + iVar15 <= local_134) &&
         (pfVar9 = (float *)(**(code **)(*(long *)(lVar16 + 0x16a0) + 0xf0))
                                      ((long *)(lVar16 + 0x16a0)), *pfVar9 <= fVar23)) {
        local_9d = 0;
        local_120 = 0x80;
        local_11c[0] = 0;
        *param_2 = (char)uVar7;
        puStack_128 = local_11c;
        local_130 = PTR_DAT_04bb2d88 + 0x10;
        FUN_038d1270(&local_130,"RotateGyroLength Success [%d]",uVar7);
        return 1;
      }
      bVar1 = 2 < (int)uVar18;
      uVar18 = uVar7;
    } while (bVar1);
  }
  return 0;
}

