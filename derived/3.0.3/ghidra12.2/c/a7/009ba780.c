
undefined8 FUN_009ba780(long param_1,undefined1 *param_2,long *param_3)

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
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_94;
  
  lVar18 = *(long *)(DAT_04d07da8 + 0x48);
  if ((lVar18 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar26 = 0.0;
    fVar27 = 0.0;
    iVar19 = 0;
    uVar15 = *(uint *)(param_1 + 0xc);
    do {
      uVar12 = *(uint *)(param_3 + 2);
      uVar7 = uVar15 - 1;
      lVar10 = *param_3;
      lVar13 = lVar10;
      if (uVar7 < uVar12) {
        iVar14 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar2 = 0;
        if ((int)param_3[1] <= iVar14) {
          iVar2 = (int)param_3[1];
        }
        lVar13 = lVar10 + (long)(iVar14 - iVar2) * 0x1060;
      }
      uVar11 = (ulong)*(uint *)(param_1 + 0x10);
      lVar4 = lVar13 + uVar11 * 0x830;
      if (1 < *(uint *)(param_1 + 0x10)) {
        lVar4 = lVar13;
      }
      uVar5 = *(uint *)(lVar4 + 0x780);
      if (1 < (int)uVar5) {
        fVar28 = 0.0;
        iVar14 = 0;
        local_94 = 0;
        uVar17 = (ulong)uVar5;
        do {
          lVar13 = lVar10;
          if (uVar7 < uVar12) {
            iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar3 = 0;
            if ((int)param_3[1] <= iVar2) {
              iVar3 = (int)param_3[1];
            }
            lVar13 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
          }
          uVar16 = uVar17 - 1 & 0xffffffff;
          lVar4 = lVar13 + uVar11 * 0x830;
          if (1 < uVar11) {
            lVar4 = lVar13;
          }
          lVar13 = lVar4 + uVar16 * 0x78;
          if (0x10 < uVar17) {
            lVar13 = lVar4;
          }
          fVar20 = *(float *)(lVar13 + 0x24);
          fVar23 = -fVar20;
          if (0.0 <= fVar20) {
            fVar23 = fVar20;
          }
          lVar13 = lVar10;
          if (uVar7 < uVar12) {
            iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar3 = 0;
            if ((int)param_3[1] <= iVar2) {
              iVar3 = (int)param_3[1];
            }
            lVar13 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
          }
          lVar4 = lVar13 + uVar11 * 0x830;
          if (1 < uVar11) {
            lVar4 = lVar13;
          }
          lVar13 = lVar4 + uVar16 * 0x78;
          if (0x10 < uVar17) {
            lVar13 = lVar4;
          }
          fVar21 = *(float *)(lVar13 + 0x20);
          fVar20 = -fVar21;
          if (0.0 <= fVar21) {
            fVar20 = fVar21;
          }
          if (iVar14 != 0) {
            lVar13 = lVar10;
            if (uVar7 < uVar12) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar13 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            lVar4 = lVar13 + uVar11 * 0x830;
            if (1 < uVar11) {
              lVar4 = lVar13;
            }
            lVar13 = lVar4 + uVar16 * 0x78;
            if (0x10 < uVar17) {
              lVar13 = lVar4;
            }
            fVar22 = *(float *)(lVar13 + 0x24);
            fVar21 = -fVar22;
            if (0.0 <= fVar22) {
              fVar21 = fVar22;
            }
            lVar13 = lVar10;
            if (uVar7 < uVar12) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar13 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            lVar4 = lVar13 + uVar11 * 0x830;
            if (1 < uVar11) {
              lVar4 = lVar13;
            }
            lVar13 = lVar4 + uVar16 * 0x78;
            if (0x10 < uVar17) {
              lVar13 = lVar4;
            }
            fVar24 = *(float *)(lVar13 + 0x20);
            fVar22 = -fVar24;
            if (0.0 <= fVar24) {
              fVar22 = fVar24;
            }
            lVar13 = lVar10;
            if (uVar7 < uVar12) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar13 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            lVar4 = lVar13 + uVar11 * 0x830;
            if (1 < uVar11) {
              lVar4 = lVar13;
            }
            lVar13 = lVar4 + uVar16 * 0x78;
            if (0x10 < uVar17) {
              lVar13 = lVar4;
            }
            fVar25 = *(float *)(lVar13 + 0x24);
            fVar24 = -fVar25;
            if (0.0 <= fVar25) {
              fVar24 = fVar25;
            }
            if (uVar7 < uVar12) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar3 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar3 = (int)param_3[1];
              }
              lVar10 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
            }
            lVar13 = lVar10 + uVar11 * 0x830;
            if (1 < uVar11) {
              lVar13 = lVar10;
            }
            fVar21 = fVar27 - (fVar21 + fVar22);
            lVar10 = lVar13 + uVar16 * 0x78;
            if (0x10 < uVar17) {
              lVar10 = lVar13;
            }
            fVar25 = *(float *)(lVar10 + 0x20);
            fVar22 = -fVar25;
            if (0.0 <= fVar25) {
              fVar22 = fVar25;
            }
            fVar25 = -fVar21;
            if (0.0 <= fVar21) {
              fVar25 = fVar21;
            }
            if (0.015 < fVar25) {
              piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar18 + 0x1810) + 0xf0))();
              if (*piVar8 < iVar19) {
                piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar18 + 0x1810) + 0xf0))();
                iVar2 = *piVar8;
                piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar18 + 0x1810) + 8) + 0xf0))();
                if (fVar24 + fVar22 <= fVar27 && iVar19 <= *piVar8 + iVar2) {
                  local_94 = local_94 + 1;
                }
              }
              else if (fVar27 < fVar24 + fVar22) {
                local_94 = local_94 + 1;
              }
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
          uVar6 = *(uint *)(param_1 + 0x10);
          uVar11 = (ulong)uVar6;
          lVar4 = lVar13 + uVar11 * 0x830;
          if (1 < uVar6) {
            lVar4 = lVar13;
          }
          lVar13 = lVar4 + uVar16 * 0x78;
          if (0x10 < uVar17) {
            lVar13 = lVar4;
          }
          fVar21 = *(float *)(lVar13 + 0x24);
          fVar27 = -fVar21;
          if (0.0 <= fVar21) {
            fVar27 = fVar21;
          }
          lVar13 = lVar10;
          if (uVar7 < uVar12) {
            iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar3 = 0;
            if ((int)param_3[1] <= iVar2) {
              iVar3 = (int)param_3[1];
            }
            lVar13 = lVar10 + (long)(iVar2 - iVar3) * 0x1060;
          }
          iVar14 = iVar14 + 1;
          lVar4 = lVar13 + uVar11 * 0x830;
          if (1 < uVar11) {
            lVar4 = lVar13;
          }
          fVar28 = fVar28 + fVar23 + fVar20;
          lVar13 = lVar4 + uVar16 * 0x78;
          if (0x10 < uVar17) {
            lVar13 = lVar4;
          }
          fVar20 = *(float *)(lVar13 + 0x20);
          fVar23 = -fVar20;
          if (0.0 <= fVar20) {
            fVar23 = fVar20;
          }
          fVar27 = fVar27 + fVar23;
          uVar17 = uVar17 - 1;
        } while (uVar5 - 1 != iVar14);
        if (fVar28 != 0.0) {
          if (uVar7 < uVar12) {
            iVar14 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar2 = 0;
            if ((int)param_3[1] <= iVar14) {
              iVar2 = (int)param_3[1];
            }
            lVar10 = lVar10 + (long)(iVar14 - iVar2) * 0x1060;
          }
          lVar13 = lVar10 + (ulong)uVar6 * 0x830;
          if (1 < uVar11) {
            lVar13 = lVar10;
          }
          fVar26 = fVar26 + fVar28 / (float)*(int *)(lVar13 + 0x780);
        }
        if (0 < local_94) {
          iVar19 = iVar19 + 1;
        }
      }
      piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar18 + 0x1810) + 0xf0))();
      iVar14 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar18 + 0x1810) + 8) + 0xf0))();
      iVar2 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar18 + 0x1810) + 0x10) + 0xf0))();
      if ((iVar2 + iVar14 + *piVar8 <= iVar19) &&
         (pfVar9 = (float *)(**(code **)(*(long *)(lVar18 + 0x1670) + 0xf0))(), *pfVar9 <= fVar26))
      {
        *param_2 = (char)uVar7;
        return 1;
      }
      bVar1 = 2 < (int)uVar15;
      uVar15 = uVar7;
    } while (bVar1);
  }
  return 0;
}

