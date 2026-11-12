
undefined8 FUN_009bbdf0(long param_1,undefined1 *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_a4;
  
  lVar16 = *(long *)(DAT_04d07da8 + 0x48);
  if ((lVar16 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar19 = 0.0;
    fVar23 = 0.0;
    iVar18 = 0;
    uVar17 = *(uint *)(param_1 + 0xc);
    do {
      uVar11 = *(uint *)(param_3 + 2);
      uVar7 = uVar17 - 1;
      lVar10 = *param_3;
      lVar13 = lVar10;
      if (uVar7 < uVar11) {
        iVar15 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar2 = 0;
        if ((int)param_3[1] <= iVar15) {
          iVar2 = (int)param_3[1];
        }
        lVar13 = lVar10 + (long)(iVar15 - iVar2) * 0x1060;
      }
      uVar4 = *(uint *)(param_1 + 0x10);
      uVar12 = (ulong)uVar4;
      lVar3 = lVar13 + uVar12 * 0x830;
      if (1 < uVar4) {
        lVar3 = lVar13;
      }
      uVar5 = *(uint *)(lVar3 + 0x780);
      if (1 < (int)uVar5) {
        lVar13 = lVar10;
        if (uVar7 < uVar11) {
          iVar15 = *(int *)((long)param_3 + 0xc) + uVar7;
          iVar2 = 0;
          if ((int)param_3[1] <= iVar15) {
            iVar2 = (int)param_3[1];
          }
          lVar13 = lVar10 + (long)(iVar15 - iVar2) * 0x1060;
        }
        lVar3 = lVar13 + (ulong)uVar4 * 0x830;
        if (1 < uVar12) {
          lVar3 = lVar13;
        }
        lVar13 = lVar3 + ((ulong)uVar5 - 1) * 0x78;
        if (0x10 < uVar5) {
          lVar13 = lVar3;
        }
        fVar25 = *(float *)(lVar13 + 0x28);
        fVar22 = fVar25;
        if (fVar19 <= fVar25) {
          fVar22 = fVar19;
        }
        fVar19 = fVar22;
        lVar13 = lVar10;
        if (uVar7 < uVar11) {
          iVar15 = *(int *)((long)param_3 + 0xc) + uVar7;
          iVar2 = 0;
          if ((int)param_3[1] <= iVar15) {
            iVar2 = (int)param_3[1];
          }
          lVar13 = lVar10 + (long)(iVar15 - iVar2) * 0x1060;
        }
        lVar3 = lVar13 + uVar12 * 0x830;
        if (1 < uVar12) {
          lVar3 = lVar13;
        }
        fVar23 = fVar23 + 0.0 / (float)*(int *)(lVar3 + 0x780);
        if (uVar5 != 2) {
          fVar24 = 0.0;
          iVar15 = uVar5 - 2;
          local_a4 = 0;
          uVar14 = (ulong)uVar5 - 1;
          fVar22 = fVar19;
          do {
            if (uVar7 < uVar11) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar6 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar6 = (int)param_3[1];
              }
              lVar10 = lVar10 + (long)(iVar2 - iVar6) * 0x1060;
            }
            lVar13 = lVar10 + uVar12 * 0x830;
            if (1 < uVar12) {
              lVar13 = lVar10;
            }
            lVar10 = lVar13 + (uVar14 - 1 & 0xffffffff) * 0x78;
            if (0x10 < uVar14) {
              lVar10 = lVar13;
            }
            fVar26 = *(float *)(lVar10 + 0x28);
            fVar19 = fVar25 - fVar26;
            fVar21 = -fVar26;
            if (0.0 <= fVar26) {
              fVar21 = fVar26;
            }
            if (fVar21 <= 0.001) {
              fVar21 = -0.0;
            }
            fVar20 = -fVar19;
            if (0.0 <= fVar19) {
              fVar20 = fVar19;
            }
            if (0.015 < fVar20) {
              piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar16 + 0x3c8) + 0xf0))();
              if (*piVar8 < iVar18) {
                piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar16 + 0x3c8) + 0xf0))();
                iVar2 = *piVar8;
                piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar16 + 0x3c8) + 8) + 0xf0))();
                if (*piVar8 + iVar2 < iVar18) {
                  piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar16 + 0x3c8) + 0xf0))()
                  ;
                  iVar2 = *piVar8;
                  piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar16 + 0x3c8) + 8) + 0xf0))()
                  ;
                  iVar6 = *piVar8;
                  piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar16 + 0x3c8) + 0x10) + 0xf0)
                                  )();
                  if (fVar26 <= fVar25 && iVar18 <= iVar6 + iVar2 + *piVar8) {
                    local_a4 = local_a4 + 1;
                  }
                }
                else if (fVar25 < fVar26) {
                  local_a4 = local_a4 + 1;
                }
              }
              else if (fVar26 <= fVar25) {
                local_a4 = local_a4 + 1;
              }
            }
            uVar11 = *(uint *)(param_3 + 2);
            fVar19 = fVar26;
            if (fVar22 <= fVar26) {
              fVar19 = fVar22;
            }
            lVar10 = *param_3;
            lVar13 = lVar10;
            if (uVar7 < uVar11) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar6 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar6 = (int)param_3[1];
              }
              lVar13 = lVar10 + (long)(iVar2 - iVar6) * 0x1060;
            }
            uVar12 = (ulong)*(uint *)(param_1 + 0x10);
            fVar24 = fVar24 + fVar21;
            iVar15 = iVar15 + -1;
            lVar3 = lVar13 + uVar12 * 0x830;
            if (1 < *(uint *)(param_1 + 0x10)) {
              lVar3 = lVar13;
            }
            fVar23 = fVar23 + fVar24 / (float)*(int *)(lVar3 + 0x780);
            uVar14 = uVar14 - 1;
            fVar22 = fVar19;
            fVar25 = fVar26;
          } while (iVar15 != 0);
          if (2 < local_a4) {
            iVar18 = iVar18 + 1;
          }
        }
      }
      piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar16 + 0x3c8) + 0xf0))();
      iVar15 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar16 + 0x3c8) + 8) + 0xf0))();
      iVar2 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar16 + 0x3c8) + 0x10) + 0xf0))();
      if (((iVar2 + iVar15 + *piVar8 <= iVar18) &&
          (pfVar9 = (float *)(**(code **)(*(long *)(lVar16 + 0x328) + 0xf0))
                                       ((long *)(lVar16 + 0x328)), fVar19 <= *pfVar9)) &&
         (pfVar9 = (float *)(**(code **)(*(long *)(lVar16 + 0x358) + 0xf0))(), *pfVar9 <= fVar23)) {
        *param_2 = (char)uVar7;
        return 1;
      }
      bVar1 = 2 < (int)uVar17;
      uVar17 = uVar7;
    } while (bVar1);
  }
  return 0;
}

