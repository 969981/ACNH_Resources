
undefined8 FUN_009cb270(long param_1,undefined1 *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_84;
  
  lVar17 = *(long *)(DAT_04d07da8 + 0x48);
  if ((lVar17 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar22 = 0.0;
    iVar16 = 0;
    uVar18 = *(uint *)(param_1 + 0xc);
    do {
      uVar12 = *(uint *)(param_3 + 2);
      uVar7 = uVar18 - 1;
      lVar10 = *param_3;
      lVar13 = lVar10;
      if (uVar7 < uVar12) {
        iVar15 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar5 = 0;
        if ((int)param_3[1] <= iVar15) {
          iVar5 = (int)param_3[1];
        }
        lVar13 = lVar10 + (long)(iVar15 - iVar5) * 0x1060;
      }
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar11 = (ulong)uVar3;
      fVar23 = 0.0;
      lVar14 = lVar13 + uVar11 * 0x830;
      if (1 < uVar3) {
        lVar14 = lVar13;
      }
      uVar4 = *(uint *)(lVar14 + 0x780);
      if ((int)uVar4 < 2) {
LAB_009cb37c:
        local_84 = 0;
      }
      else {
        lVar13 = lVar10;
        if (uVar7 < uVar12) {
          iVar15 = *(int *)((long)param_3 + 0xc) + uVar7;
          iVar5 = 0;
          if ((int)param_3[1] <= iVar15) {
            iVar5 = (int)param_3[1];
          }
          lVar13 = lVar10 + (long)(iVar15 - iVar5) * 0x1060;
        }
        if (uVar4 == 2) goto LAB_009cb37c;
        iVar15 = uVar4 - 2;
        local_84 = 0;
        lVar14 = lVar13 + (ulong)uVar3 * 0x830;
        if (1 < uVar11) {
          lVar14 = lVar13;
        }
        lVar13 = lVar14 + ((ulong)uVar4 - 1) * 0x78;
        if (0x10 < uVar4) {
          lVar13 = lVar14;
        }
        uVar19 = (ulong)uVar4 - 1;
        do {
          lVar14 = lVar10;
          if (uVar7 < uVar12) {
            iVar5 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar6 = 0;
            if ((int)param_3[1] <= iVar5) {
              iVar6 = (int)param_3[1];
            }
            lVar14 = lVar10 + (long)(iVar5 - iVar6) * 0x1060;
          }
          uVar20 = uVar19 - 1 & 0xffffffff;
          lVar2 = lVar14 + uVar11 * 0x830;
          if (1 < uVar11) {
            lVar2 = lVar14;
          }
          lVar14 = lVar2 + uVar20 * 0x78;
          if (0x10 < uVar19) {
            lVar14 = lVar2;
          }
          fVar21 = *(float *)(lVar14 + 0x28);
          fVar24 = -fVar21;
          if (0.0 <= fVar21) {
            fVar24 = fVar21;
          }
          if (uVar7 < uVar12) {
            iVar5 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar6 = 0;
            if ((int)param_3[1] <= iVar5) {
              iVar6 = (int)param_3[1];
            }
            lVar10 = lVar10 + (long)(iVar5 - iVar6) * 0x1060;
          }
          fVar21 = *(float *)(lVar13 + 0x28);
          lVar13 = lVar10 + uVar11 * 0x830;
          if (1 < uVar11) {
            lVar13 = lVar10;
          }
          lVar10 = lVar13 + uVar20 * 0x78;
          if (0x10 < uVar19) {
            lVar10 = lVar13;
          }
          fVar25 = *(float *)(lVar10 + 0x28);
          piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar17 + 0x648) + 0xf0))();
          if (*piVar8 < iVar16) {
            piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar17 + 0x648) + 0xf0))();
            iVar5 = *piVar8;
            piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar17 + 0x648) + 8) + 0xf0))();
            if (*piVar8 + iVar5 < iVar16) {
              piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar17 + 0x648) + 0xf0))();
              iVar5 = *piVar8;
              piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar17 + 0x648) + 8) + 0xf0))();
              iVar6 = *piVar8;
              piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar17 + 0x648) + 0x10) + 0xf0))();
              if (fVar25 < fVar21 && iVar16 <= iVar6 + iVar5 + *piVar8) {
                local_84 = local_84 + 1;
              }
            }
            else if (fVar21 < fVar25) {
              local_84 = local_84 + 1;
            }
          }
          else if (fVar25 < fVar21) {
            local_84 = local_84 + 1;
          }
          uVar12 = *(uint *)(param_3 + 2);
          lVar10 = *param_3;
          lVar13 = lVar10;
          if (uVar7 < uVar12) {
            iVar5 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar6 = 0;
            if ((int)param_3[1] <= iVar5) {
              iVar6 = (int)param_3[1];
            }
            lVar13 = lVar10 + (long)(iVar5 - iVar6) * 0x1060;
          }
          uVar11 = (ulong)*(uint *)(param_1 + 0x10);
          fVar23 = fVar23 + fVar24;
          iVar15 = iVar15 + -1;
          lVar14 = lVar13 + uVar11 * 0x830;
          if (1 < *(uint *)(param_1 + 0x10)) {
            lVar14 = lVar13;
          }
          lVar13 = lVar14 + uVar20 * 0x78;
          if (0x10 < uVar19) {
            lVar13 = lVar14;
          }
          uVar19 = uVar19 - 1;
        } while (iVar15 != 0);
      }
      lVar13 = lVar10;
      if (uVar7 < uVar12) {
        iVar15 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar5 = 0;
        if ((int)param_3[1] <= iVar15) {
          iVar5 = (int)param_3[1];
        }
        lVar13 = lVar10 + (long)(iVar15 - iVar5) * 0x1060;
      }
      lVar14 = lVar13 + uVar11 * 0x830;
      if (1 < uVar11) {
        lVar14 = lVar13;
      }
      if (uVar7 < uVar12) {
        iVar15 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar5 = 0;
        if ((int)param_3[1] <= iVar15) {
          iVar5 = (int)param_3[1];
        }
        lVar10 = lVar10 + (long)(iVar15 - iVar5) * 0x1060;
      }
      lVar13 = lVar10 + uVar11 * 0x830;
      if (1 < uVar11) {
        lVar13 = lVar10;
      }
      iVar15 = *(int *)(lVar13 + 0x780);
      if (iVar15 != 0) {
        if (iVar15 < 0) {
          iVar15 = iVar15 + 1;
        }
        if (iVar15 >> 1 <= local_84) {
          iVar16 = iVar16 + 1;
        }
      }
      fVar22 = fVar22 + fVar23 / (float)*(int *)(lVar14 + 0x780);
      piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar17 + 0x648) + 0xf0))();
      iVar15 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar17 + 0x648) + 8) + 0xf0))();
      iVar5 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar17 + 0x648) + 0x10) + 0xf0))();
      if ((iVar5 + iVar15 + *piVar8 <= iVar16) &&
         (pfVar9 = (float *)(**(code **)(*(long *)(lVar17 + 0x578) + 0xf0))(), *pfVar9 <= fVar22)) {
        *param_2 = (char)uVar7;
        return 1;
      }
      bVar1 = 2 < (int)uVar18;
      uVar18 = uVar7;
    } while (bVar1);
  }
  return 0;
}

