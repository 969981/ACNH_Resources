
undefined8 FUN_009ca360(long param_1,undefined1 *param_2,long *param_3)

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
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar15 = *(long *)(DAT_04d07da8 + 0x48);
  if ((lVar15 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar20 = 0.0;
    iVar16 = 0;
    uVar14 = *(uint *)(param_1 + 0xc);
    do {
      uVar7 = uVar14 - 1;
      lVar11 = *param_3;
      lVar12 = lVar11;
      if (uVar7 < *(uint *)(param_3 + 2)) {
        iVar17 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar13 = 0;
        if ((int)param_3[1] <= iVar17) {
          iVar13 = (int)param_3[1];
        }
        lVar12 = lVar11 + (long)(iVar17 - iVar13) * 0x1060;
      }
      uVar5 = *(uint *)(param_1 + 0x10);
      lVar4 = lVar12 + (ulong)uVar5 * 0x830;
      if (1 < uVar5) {
        lVar4 = lVar12;
      }
      uVar6 = *(uint *)(lVar4 + 0x780);
      if (1 < (int)uVar6) {
        if (uVar7 < *(uint *)(param_3 + 2)) {
          iVar17 = *(int *)((long)param_3 + 0xc) + uVar7;
          iVar13 = 0;
          if ((int)param_3[1] <= iVar17) {
            iVar13 = (int)param_3[1];
          }
          lVar11 = lVar11 + (long)(iVar17 - iVar13) * 0x1060;
        }
        lVar12 = lVar11 + (ulong)uVar5 * 0x830;
        if (1 < uVar5) {
          lVar12 = lVar11;
        }
        lVar11 = lVar12 + ((ulong)uVar6 - 1) * 0x78;
        if (0x10 < uVar6) {
          lVar11 = lVar12;
        }
        fVar21 = SQRT(*(float *)(lVar11 + 0x40) * *(float *)(lVar11 + 0x40) +
                      *(float *)(lVar11 + 0x3c) * *(float *)(lVar11 + 0x3c) +
                      *(float *)(lVar11 + 0x44) * *(float *)(lVar11 + 0x44));
        if (uVar6 == 2) {
          iVar17 = 0;
        }
        else {
          iVar17 = 0;
          iVar13 = uVar6 - 2;
          uVar10 = (ulong)uVar6 - 1;
          fVar22 = fVar21;
          do {
            lVar12 = *param_3;
            if (uVar7 < *(uint *)(param_3 + 2)) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar12 = lVar12 + (long)(iVar2 - iVar3) * 0x1060;
            }
            lVar11 = lVar12 + (ulong)*(uint *)(param_1 + 0x10) * 0x830;
            if (1 < *(uint *)(param_1 + 0x10)) {
              lVar11 = lVar12;
            }
            lVar12 = lVar11 + (uVar10 - 1 & 0xffffffff) * 0x78;
            if (0x10 < uVar10) {
              lVar12 = lVar11;
            }
            fVar23 = SQRT(*(float *)(lVar12 + 0x40) * *(float *)(lVar12 + 0x40) +
                          *(float *)(lVar12 + 0x3c) * *(float *)(lVar12 + 0x3c) +
                          *(float *)(lVar12 + 0x44) * *(float *)(lVar12 + 0x44));
            fVar18 = fVar22 - fVar23;
            fVar19 = -fVar18;
            if (0.0 <= fVar18) {
              fVar19 = fVar18;
            }
            if (0.015 < fVar19) {
              piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar15 + 0x1550) + 0xf0))();
              if (*piVar8 < iVar16) {
                piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar15 + 0x1550) + 0xf0))();
                iVar2 = *piVar8;
                piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x1550) + 8) + 0xf0))();
                if (fVar23 <= fVar22 && iVar16 <= *piVar8 + iVar2) {
                  iVar17 = iVar17 + 1;
                }
              }
              else if (fVar22 < fVar23) {
                iVar17 = iVar17 + 1;
              }
            }
            fVar21 = fVar21 + fVar23;
            iVar13 = iVar13 + -1;
            uVar10 = uVar10 - 1;
            fVar22 = fVar23;
          } while (iVar13 != 0);
        }
        if (fVar21 != 0.0) {
          lVar12 = *param_3;
          if (uVar7 < *(uint *)(param_3 + 2)) {
            iVar13 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar2 = 0;
            if ((int)param_3[1] <= iVar13) {
              iVar2 = (int)param_3[1];
            }
            lVar12 = lVar12 + (long)(iVar13 - iVar2) * 0x1060;
          }
          lVar11 = lVar12 + (ulong)*(uint *)(param_1 + 0x10) * 0x830;
          if (1 < *(uint *)(param_1 + 0x10)) {
            lVar11 = lVar12;
          }
          if (*(int *)(lVar11 + 0x780) != 0) {
            fVar20 = fVar20 + fVar21 / (float)*(int *)(lVar11 + 0x780);
          }
        }
        if (2 < iVar17) {
          iVar16 = iVar16 + 1;
        }
      }
      piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar15 + 0x1550) + 0xf0))();
      iVar17 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x1550) + 8) + 0xf0))();
      if ((*piVar8 + iVar17 <= iVar16) &&
         (pfVar9 = (float *)(**(code **)(*(long *)(lVar15 + 0x12e0) + 0xf0))(), *pfVar9 <= fVar20))
      {
        *param_2 = (char)uVar7;
        return 1;
      }
      bVar1 = 2 < (int)uVar14;
      uVar14 = uVar7;
    } while (bVar1);
  }
  return 0;
}

