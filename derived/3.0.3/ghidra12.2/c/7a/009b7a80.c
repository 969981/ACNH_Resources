
undefined8 FUN_009b7a80(long param_1,undefined1 *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  lVar20 = *(long *)(DAT_04d07da8 + 0x48);
  if ((lVar20 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar25 = 0.0;
    fVar24 = 0.0;
    iVar17 = 0;
    uVar15 = *(uint *)(param_1 + 0xc);
    do {
      uVar9 = *(uint *)(param_3 + 2);
      uVar5 = uVar15 - 1;
      lVar8 = *param_3;
      lVar11 = lVar8;
      if (uVar5 < uVar9) {
        iVar14 = *(int *)((long)param_3 + 0xc) + uVar5;
        iVar19 = 0;
        if ((int)param_3[1] <= iVar14) {
          iVar19 = (int)param_3[1];
        }
        lVar11 = lVar8 + (long)(iVar14 - iVar19) * 0x1060;
      }
      uVar10 = (ulong)*(uint *)(param_1 + 0x10);
      lVar13 = lVar11 + uVar10 * 0x830;
      if (1 < *(uint *)(param_1 + 0x10)) {
        lVar13 = lVar11;
      }
      uVar3 = *(uint *)(lVar13 + 0x780);
      if (1 < (int)uVar3) {
        fVar26 = 0.0;
        iVar14 = 0;
        iVar19 = 0;
        uVar18 = (ulong)uVar3;
        do {
          uVar16 = uVar18 - 1;
          if (iVar14 != 0) {
            lVar11 = lVar8;
            if (uVar5 < uVar9) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar5;
              iVar4 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar4 = (int)param_3[1];
              }
              lVar11 = lVar8 + (long)(iVar2 - iVar4) * 0x1060;
            }
            lVar13 = lVar11 + uVar10 * 0x830;
            if (1 < uVar10) {
              lVar13 = lVar11;
            }
            uVar12 = uVar16 & 0xffffffff;
            lVar11 = lVar13 + uVar12 * 0x78;
            if (0x10 < uVar18) {
              lVar11 = lVar13;
            }
            lVar13 = lVar8;
            if (uVar5 < uVar9) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar5;
              iVar4 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar4 = (int)param_3[1];
              }
              lVar13 = lVar8 + (long)(iVar2 - iVar4) * 0x1060;
            }
            fVar21 = fVar25 - *(float *)(lVar11 + 0x40);
            lVar11 = lVar13 + uVar10 * 0x830;
            if (1 < uVar10) {
              lVar11 = lVar13;
            }
            lVar13 = lVar11 + uVar12 * 0x78;
            if (0x10 < uVar18) {
              lVar13 = lVar11;
            }
            fVar23 = -fVar21;
            if (0.0 <= fVar21) {
              fVar23 = fVar21;
            }
            if (0.015 < fVar23) {
              if (uVar5 < uVar9) {
                iVar2 = *(int *)((long)param_3 + 0xc) + uVar5;
                iVar4 = 0;
                if ((int)param_3[1] <= iVar2) {
                  iVar4 = (int)param_3[1];
                }
                lVar8 = lVar8 + (long)(iVar2 - iVar4) * 0x1060;
              }
              fVar21 = *(float *)(lVar13 + 0x40);
              lVar11 = lVar8 + uVar10 * 0x830;
              if (1 < uVar10) {
                lVar11 = lVar8;
              }
              lVar8 = lVar11 + uVar12 * 0x78;
              if (0x10 < uVar18) {
                lVar8 = lVar11;
              }
              fVar22 = *(float *)(lVar8 + 0x40);
              fVar23 = -fVar22;
              if (0.0 <= fVar22) {
                fVar23 = fVar22;
              }
              fVar26 = fVar26 + fVar23;
              piVar6 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar20 + 0x1090) + 0xf0))();
              if (*piVar6 < iVar17) {
                piVar6 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar20 + 0x1090) + 0xf0))();
                iVar2 = *piVar6;
                piVar6 = (int *)(**(code **)(**(long **)(*(long *)(lVar20 + 0x1090) + 8) + 0xf0))();
                if (*piVar6 + iVar2 < iVar17) {
                  piVar6 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar20 + 0x1090) + 0xf0))
                                            ();
                  iVar2 = *piVar6;
                  piVar6 = (int *)(**(code **)(**(long **)(*(long *)(lVar20 + 0x1090) + 8) + 0xf0))
                                            ();
                  iVar4 = *piVar6;
                  piVar6 = (int *)(**(code **)(**(long **)(*(long *)(lVar20 + 0x1090) + 0x10) + 0xf0
                                              ))();
                  if (fVar21 <= fVar25 && iVar17 <= iVar4 + iVar2 + *piVar6) {
                    iVar19 = iVar19 + 1;
                  }
                }
                else if (fVar25 < fVar21) {
                  iVar19 = iVar19 + 1;
                }
              }
              else if (fVar21 <= fVar25) {
                iVar19 = iVar19 + 1;
              }
            }
          }
          uVar9 = *(uint *)(param_3 + 2);
          lVar8 = *param_3;
          lVar11 = lVar8;
          if (uVar5 < uVar9) {
            iVar2 = *(int *)((long)param_3 + 0xc) + uVar5;
            iVar4 = 0;
            if ((int)param_3[1] <= iVar2) {
              iVar4 = (int)param_3[1];
            }
            lVar11 = lVar8 + (long)(iVar2 - iVar4) * 0x1060;
          }
          uVar10 = (ulong)*(uint *)(param_1 + 0x10);
          lVar13 = lVar11 + uVar10 * 0x830;
          if (1 < *(uint *)(param_1 + 0x10)) {
            lVar13 = lVar11;
          }
          lVar11 = lVar13 + (uVar16 & 0xffffffff) * 0x78;
          if (0x10 < uVar18) {
            lVar11 = lVar13;
          }
          fVar25 = *(float *)(lVar11 + 0x40);
          lVar11 = lVar8;
          if (uVar5 < uVar9) {
            iVar2 = *(int *)((long)param_3 + 0xc) + uVar5;
            iVar4 = 0;
            if ((int)param_3[1] <= iVar2) {
              iVar4 = (int)param_3[1];
            }
            lVar11 = lVar8 + (long)(iVar2 - iVar4) * 0x1060;
          }
          iVar14 = iVar14 + 1;
          lVar13 = lVar11 + uVar10 * 0x830;
          if (1 < uVar10) {
            lVar13 = lVar11;
          }
          fVar24 = fVar24 + fVar26 / (float)*(int *)(lVar13 + 0x780);
          uVar18 = uVar16;
        } while (uVar3 - 1 != iVar14);
        if (0 < iVar19) {
          iVar17 = iVar17 + 1;
        }
      }
      piVar6 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar20 + 0x1090) + 0xf0))();
      iVar14 = *piVar6;
      piVar6 = (int *)(**(code **)(**(long **)(*(long *)(lVar20 + 0x1090) + 8) + 0xf0))();
      iVar19 = *piVar6;
      piVar6 = (int *)(**(code **)(**(long **)(*(long *)(lVar20 + 0x1090) + 0x10) + 0xf0))();
      if ((iVar19 + iVar14 + *piVar6 <= iVar17) &&
         (pfVar7 = (float *)(**(code **)(*(long *)(lVar20 + 0xdf0) + 0xf0))(),
         *pfVar7 <= fVar24 * 12.0)) {
        *param_2 = (char)uVar5;
        return 1;
      }
      bVar1 = 2 < (int)uVar15;
      uVar15 = uVar5;
    } while (bVar1);
  }
  return 0;
}

