
undefined8 FUN_009c9bd0(long param_1,undefined1 *param_2,long *param_3)

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
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_78;
  int local_74;
  
  lVar15 = *(long *)(DAT_04d07da8 + 0x48);
  if ((lVar15 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar17 = 0.0;
    local_78 = 0;
    uVar14 = *(uint *)(param_1 + 0xc);
    do {
      uVar7 = uVar14 - 1;
      lVar11 = *param_3;
      lVar12 = lVar11;
      if (uVar7 < *(uint *)(param_3 + 2)) {
        iVar13 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar2 = 0;
        if ((int)param_3[1] <= iVar13) {
          iVar2 = (int)param_3[1];
        }
        lVar12 = lVar11 + (long)(iVar13 - iVar2) * 0x1060;
      }
      uVar4 = *(uint *)(param_1 + 0x10);
      lVar3 = lVar12 + (ulong)uVar4 * 0x830;
      if (1 < uVar4) {
        lVar3 = lVar12;
      }
      uVar5 = *(uint *)(lVar3 + 0x780);
      if (1 < (int)uVar5) {
        if (uVar7 < *(uint *)(param_3 + 2)) {
          iVar13 = *(int *)((long)param_3 + 0xc) + uVar7;
          iVar2 = 0;
          if ((int)param_3[1] <= iVar13) {
            iVar2 = (int)param_3[1];
          }
          lVar11 = lVar11 + (long)(iVar13 - iVar2) * 0x1060;
        }
        lVar12 = lVar11 + (ulong)uVar4 * 0x830;
        if (1 < uVar4) {
          lVar12 = lVar11;
        }
        lVar11 = lVar12 + ((ulong)uVar5 - 1) * 0x78;
        if (0x10 < uVar5) {
          lVar11 = lVar12;
        }
        fVar19 = *(float *)(lVar11 + 0x28);
        fVar18 = fVar19;
        if (fVar17 <= fVar19) {
          fVar18 = fVar17;
        }
        fVar17 = fVar18;
        if (uVar5 != 2) {
          iVar13 = uVar5 - 2;
          local_74 = 0;
          uVar10 = (ulong)uVar5 - 1;
          fVar18 = fVar17;
          do {
            lVar12 = *param_3;
            if (uVar7 < *(uint *)(param_3 + 2)) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar6 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar6 = (int)param_3[1];
              }
              lVar12 = lVar12 + (long)(iVar2 - iVar6) * 0x1060;
            }
            lVar11 = lVar12 + (ulong)*(uint *)(param_1 + 0x10) * 0x830;
            if (1 < *(uint *)(param_1 + 0x10)) {
              lVar11 = lVar12;
            }
            lVar12 = lVar11 + (uVar10 - 1 & 0xffffffff) * 0x78;
            if (0x10 < uVar10) {
              lVar12 = lVar11;
            }
            fVar20 = *(float *)(lVar12 + 0x28);
            fVar16 = fVar19 - fVar20;
            fVar17 = -fVar16;
            if (0.0 <= fVar16) {
              fVar17 = fVar16;
            }
            if (0.015 < fVar17) {
              piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar15 + 0x1350) + 0xf0))();
              if (*piVar8 < local_78) {
                piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar15 + 0x1350) + 0xf0))();
                iVar2 = *piVar8;
                piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x1350) + 8) + 0xf0))();
                if (*piVar8 + iVar2 < local_78) {
                  piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar15 + 0x1350) + 0xf0))
                                            ();
                  iVar2 = *piVar8;
                  piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x1350) + 8) + 0xf0))
                                            ();
                  iVar6 = *piVar8;
                  piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x1350) + 0x10) + 0xf0
                                              ))();
                  if (fVar20 <= fVar19 && local_78 <= iVar6 + iVar2 + *piVar8) {
                    local_74 = local_74 + 1;
                  }
                }
                else if (fVar19 < fVar20) {
                  local_74 = local_74 + 1;
                }
              }
              else if (fVar20 <= fVar19) {
                local_74 = local_74 + 1;
              }
            }
            iVar13 = iVar13 + -1;
            fVar17 = fVar20;
            if (fVar18 <= fVar20) {
              fVar17 = fVar18;
            }
            uVar10 = uVar10 - 1;
            fVar18 = fVar17;
            fVar19 = fVar20;
          } while (iVar13 != 0);
          if (2 < local_74) {
            local_78 = local_78 + 1;
          }
        }
      }
      piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar15 + 0x1350) + 0xf0))();
      iVar13 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x1350) + 8) + 0xf0))();
      iVar2 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x1350) + 0x10) + 0xf0))();
      if ((iVar2 + iVar13 + *piVar8 <= local_78) &&
         (pfVar9 = (float *)(**(code **)(*(long *)(lVar15 + 0x1280) + 0xf0))
                                      ((long *)(lVar15 + 0x1280)), fVar17 <= *pfVar9)) {
        *param_2 = (char)uVar7;
        return 1;
      }
      bVar1 = 2 < (int)uVar14;
      uVar14 = uVar7;
    } while (bVar1);
  }
  return 0;
}

