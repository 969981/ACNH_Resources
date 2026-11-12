
undefined8 FUN_009cb6f0(long param_1,undefined1 *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  float *pfVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar18 = *(long *)(DAT_04d07da8 + 0x48);
  if ((lVar18 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar25 = 0.0;
    iVar19 = 0;
    uVar15 = *(uint *)(param_1 + 0xc);
    do {
      uVar10 = *(uint *)(param_3 + 2);
      uVar6 = uVar15 - 1;
      lVar9 = *param_3;
      lVar12 = lVar9;
      if (uVar6 < uVar10) {
        iVar16 = *(int *)((long)param_3 + 0xc) + uVar6;
        iVar2 = 0;
        if ((int)param_3[1] <= iVar16) {
          iVar2 = (int)param_3[1];
        }
        lVar12 = lVar9 + (long)(iVar16 - iVar2) * 0x1060;
      }
      uVar17 = *(uint *)(param_1 + 0x10);
      uVar11 = (ulong)uVar17;
      lVar4 = lVar12 + uVar11 * 0x830;
      if (1 < uVar17) {
        lVar4 = lVar12;
      }
      uVar5 = *(uint *)(lVar4 + 0x780);
      if (1 < (int)uVar5) {
        lVar12 = lVar9;
        if (uVar6 < uVar10) {
          iVar16 = *(int *)((long)param_3 + 0xc) + uVar6;
          iVar2 = 0;
          if ((int)param_3[1] <= iVar16) {
            iVar2 = (int)param_3[1];
          }
          lVar12 = lVar9 + (long)(iVar16 - iVar2) * 0x1060;
        }
        uVar13 = (ulong)uVar5 - 1;
        lVar4 = lVar12 + (ulong)uVar17 * 0x830;
        if (1 < uVar11) {
          lVar4 = lVar12;
        }
        lVar12 = lVar4 + uVar13 * 0x78;
        if (0x10 < uVar5) {
          lVar12 = lVar4;
        }
        fVar20 = *(float *)(lVar12 + 0x3c);
        fVar21 = -fVar20;
        if (0.0 <= fVar20) {
          fVar21 = fVar20;
        }
        lVar12 = lVar9;
        if (uVar6 < uVar10) {
          iVar16 = *(int *)((long)param_3 + 0xc) + uVar6;
          iVar2 = 0;
          if ((int)param_3[1] <= iVar16) {
            iVar2 = (int)param_3[1];
          }
          lVar12 = lVar9 + (long)(iVar16 - iVar2) * 0x1060;
        }
        lVar4 = lVar12 + uVar11 * 0x830;
        if (1 < uVar11) {
          lVar4 = lVar12;
        }
        lVar12 = lVar4 + uVar13 * 0x78;
        if (0x10 < uVar5) {
          lVar12 = lVar4;
        }
        fVar23 = *(float *)(lVar12 + 0x40);
        fVar20 = -fVar23;
        if (0.0 <= fVar23) {
          fVar20 = fVar23;
        }
        lVar12 = lVar9;
        if (uVar6 < uVar10) {
          iVar16 = *(int *)((long)param_3 + 0xc) + uVar6;
          iVar2 = 0;
          if ((int)param_3[1] <= iVar16) {
            iVar2 = (int)param_3[1];
          }
          lVar12 = lVar9 + (long)(iVar16 - iVar2) * 0x1060;
        }
        lVar4 = lVar12 + (ulong)uVar17 * 0x830;
        if (1 < uVar11) {
          lVar4 = lVar12;
        }
        fVar25 = fVar25 + 0.0 / (float)*(int *)(lVar4 + 0x780);
        if (uVar5 != 2) {
          fVar23 = 0.0;
          uVar17 = 0;
          iVar16 = uVar5 - 2;
          fVar21 = fVar21 + fVar20;
          do {
            lVar12 = lVar9;
            if (uVar6 < uVar10) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar6;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar12 = lVar9 + (long)(iVar2 - iVar3) * 0x1060;
            }
            lVar4 = lVar12 + uVar11 * 0x830;
            if (1 < uVar11) {
              lVar4 = lVar12;
            }
            uVar14 = uVar13 - 1 & 0xffffffff;
            lVar12 = lVar4 + uVar14 * 0x78;
            if (0x10 < uVar13) {
              lVar12 = lVar4;
            }
            fVar22 = *(float *)(lVar12 + 0x3c);
            fVar20 = -fVar22;
            if (0.0 <= fVar22) {
              fVar20 = fVar22;
            }
            if (uVar6 < uVar10) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar6;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar9 = lVar9 + (long)(iVar2 - iVar3) * 0x1060;
            }
            lVar12 = lVar9 + uVar11 * 0x830;
            if (1 < uVar11) {
              lVar12 = lVar9;
            }
            lVar9 = lVar12 + uVar14 * 0x78;
            if (0x10 < uVar13) {
              lVar9 = lVar12;
            }
            fVar24 = *(float *)(lVar9 + 0x40);
            fVar22 = -fVar24;
            if (0.0 <= fVar24) {
              fVar22 = fVar24;
            }
            fVar20 = fVar20 + fVar22;
            piVar7 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar18 + 0x848) + 0xf0))();
            uVar10 = *(uint *)(param_3 + 2);
            lVar9 = *param_3;
            if (fVar21 < fVar20 && iVar19 <= *piVar7) {
              uVar17 = uVar17 + 1;
            }
            lVar12 = lVar9;
            if (uVar6 < uVar10) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar6;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar12 = lVar9 + (long)(iVar2 - iVar3) * 0x1060;
            }
            uVar11 = (ulong)*(uint *)(param_1 + 0x10);
            fVar23 = fVar23 + fVar20;
            iVar16 = iVar16 + -1;
            lVar4 = lVar12 + uVar11 * 0x830;
            if (1 < *(uint *)(param_1 + 0x10)) {
              lVar4 = lVar12;
            }
            fVar25 = fVar25 + fVar23 / (float)*(int *)(lVar4 + 0x780);
            uVar13 = uVar13 - 1;
            fVar21 = fVar20;
          } while (iVar16 != 0);
          if (3 < uVar17) {
            iVar19 = iVar19 + 1;
          }
        }
      }
      piVar7 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar18 + 0x848) + 0xf0))();
      if ((*piVar7 <= iVar19) &&
         (pfVar8 = (float *)(**(code **)(*(long *)(lVar18 + 0x5d8) + 0xf0))
                                      ((long *)(lVar18 + 0x5d8)), *pfVar8 <= fVar25)) {
        *param_2 = (char)uVar6;
        return 1;
      }
      bVar1 = 2 < (int)uVar15;
      uVar15 = uVar6;
    } while (bVar1);
  }
  return 0;
}

