
undefined8 FUN_009b7ef0(long param_1,undefined1 *param_2,long *param_3)

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
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_a4;
  
  lVar18 = *(long *)(DAT_04d07da8 + 0x48);
  if ((lVar18 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar25 = 0.0;
    iVar19 = 0;
    uVar16 = *(uint *)(param_1 + 0xc);
    do {
      uVar11 = *(uint *)(param_3 + 2);
      uVar7 = uVar16 - 1;
      lVar10 = *param_3;
      lVar13 = lVar10;
      if (uVar7 < uVar11) {
        iVar17 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar2 = 0;
        if ((int)param_3[1] <= iVar17) {
          iVar2 = (int)param_3[1];
        }
        lVar13 = lVar10 + (long)(iVar17 - iVar2) * 0x1060;
      }
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar12 = (ulong)uVar5;
      lVar4 = lVar13 + uVar12 * 0x830;
      if (1 < uVar5) {
        lVar4 = lVar13;
      }
      uVar6 = *(uint *)(lVar4 + 0x780);
      if (1 < (int)uVar6) {
        lVar13 = lVar10;
        if (uVar7 < uVar11) {
          iVar17 = *(int *)((long)param_3 + 0xc) + uVar7;
          iVar2 = 0;
          if ((int)param_3[1] <= iVar17) {
            iVar2 = (int)param_3[1];
          }
          lVar13 = lVar10 + (long)(iVar17 - iVar2) * 0x1060;
        }
        uVar14 = (ulong)uVar6 - 1;
        lVar4 = lVar13 + (ulong)uVar5 * 0x830;
        if (1 < uVar12) {
          lVar4 = lVar13;
        }
        lVar13 = lVar4 + uVar14 * 0x78;
        if (0x10 < uVar6) {
          lVar13 = lVar4;
        }
        fVar20 = *(float *)(lVar13 + 0x3c);
        fVar21 = -fVar20;
        if (0.0 <= fVar20) {
          fVar21 = fVar20;
        }
        lVar13 = lVar10;
        if (uVar7 < uVar11) {
          iVar17 = *(int *)((long)param_3 + 0xc) + uVar7;
          iVar2 = 0;
          if ((int)param_3[1] <= iVar17) {
            iVar2 = (int)param_3[1];
          }
          lVar13 = lVar10 + (long)(iVar17 - iVar2) * 0x1060;
        }
        lVar4 = lVar13 + uVar12 * 0x830;
        if (1 < uVar12) {
          lVar4 = lVar13;
        }
        lVar13 = lVar4 + uVar14 * 0x78;
        if (0x10 < uVar6) {
          lVar13 = lVar4;
        }
        fVar23 = *(float *)(lVar13 + 0x44);
        fVar20 = -fVar23;
        if (0.0 <= fVar23) {
          fVar20 = fVar23;
        }
        lVar13 = lVar10;
        if (uVar7 < uVar11) {
          iVar17 = *(int *)((long)param_3 + 0xc) + uVar7;
          iVar2 = 0;
          if ((int)param_3[1] <= iVar17) {
            iVar2 = (int)param_3[1];
          }
          lVar13 = lVar10 + (long)(iVar17 - iVar2) * 0x1060;
        }
        lVar4 = lVar13 + (ulong)uVar5 * 0x830;
        if (1 < uVar12) {
          lVar4 = lVar13;
        }
        fVar25 = fVar25 + 0.0 / (float)*(int *)(lVar4 + 0x780);
        if (uVar6 != 2) {
          fVar23 = 0.0;
          local_a4 = 0;
          iVar17 = uVar6 - 2;
          fVar21 = fVar21 + fVar20;
          do {
            lVar13 = lVar10;
            if (uVar7 < uVar11) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar13 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            lVar4 = lVar13 + uVar12 * 0x830;
            if (1 < uVar12) {
              lVar4 = lVar13;
            }
            uVar15 = uVar14 - 1 & 0xffffffff;
            lVar13 = lVar4 + uVar15 * 0x78;
            if (0x10 < uVar14) {
              lVar13 = lVar4;
            }
            fVar22 = *(float *)(lVar13 + 0x3c);
            fVar20 = -fVar22;
            if (0.0 <= fVar22) {
              fVar20 = fVar22;
            }
            if (uVar7 < uVar11) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar10 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            lVar13 = lVar10 + uVar12 * 0x830;
            if (1 < uVar12) {
              lVar13 = lVar10;
            }
            lVar10 = lVar13 + uVar15 * 0x78;
            if (0x10 < uVar14) {
              lVar10 = lVar13;
            }
            fVar24 = *(float *)(lVar10 + 0x44);
            fVar22 = -fVar24;
            if (0.0 <= fVar24) {
              fVar22 = fVar24;
            }
            fVar20 = fVar20 + fVar22;
            fVar24 = fVar21 - fVar20;
            fVar22 = -fVar20;
            if (0.0 <= fVar20) {
              fVar22 = fVar20;
            }
            fVar26 = fVar20;
            if (fVar22 <= 0.015) {
              fVar26 = -0.0;
            }
            fVar22 = -fVar24;
            if (0.0 <= fVar24) {
              fVar22 = fVar24;
            }
            if (0.015 < fVar22) {
              piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar18 + 0x1190) + 0xf0))();
              if (*piVar8 < iVar19) {
                piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar18 + 0x1190) + 0xf0))();
                iVar2 = *piVar8;
                piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar18 + 0x1190) + 8) + 0xf0))();
                if (fVar20 <= fVar21 && iVar19 <= *piVar8 + iVar2) {
                  local_a4 = local_a4 + 1;
                }
              }
              else if (fVar21 < fVar20) {
                local_a4 = local_a4 + 1;
              }
            }
            uVar11 = *(uint *)(param_3 + 2);
            lVar10 = *param_3;
            lVar13 = lVar10;
            if (uVar7 < uVar11) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar13 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            uVar12 = (ulong)*(uint *)(param_1 + 0x10);
            fVar23 = fVar23 + fVar26;
            iVar17 = iVar17 + -1;
            lVar4 = lVar13 + uVar12 * 0x830;
            if (1 < *(uint *)(param_1 + 0x10)) {
              lVar4 = lVar13;
            }
            fVar25 = fVar25 + fVar23 / (float)*(int *)(lVar4 + 0x780);
            uVar14 = uVar14 - 1;
            fVar21 = fVar20;
          } while (iVar17 != 0);
          if (0 < local_a4) {
            iVar19 = iVar19 + 1;
          }
        }
      }
      piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar18 + 0x1190) + 0xf0))();
      iVar17 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar18 + 0x1190) + 8) + 0xf0))();
      if ((*piVar8 + iVar17 <= iVar19) &&
         (pfVar9 = (float *)(**(code **)(*(long *)(lVar18 + 0xe20) + 0xf0))
                                      ((long *)(lVar18 + 0xe20)), *pfVar9 <= fVar25 * 12.0)) {
        *param_2 = (char)uVar7;
        return 1;
      }
      bVar1 = 2 < (int)uVar16;
      uVar16 = uVar7;
    } while (bVar1);
  }
  return 0;
}

