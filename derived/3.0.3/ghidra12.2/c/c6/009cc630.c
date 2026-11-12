
undefined8 FUN_009cc630(long param_1,undefined1 *param_2,long *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  
  lVar19 = *(long *)(*(long *)PTR_DAT_04bb47c0 + 0x48);
  if ((lVar19 != 0) && (1 < (int)*(uint *)(param_1 + 0xc))) {
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar25 = 0.0;
    fVar27 = 0.0;
    iVar20 = 0;
    uVar16 = *(uint *)(param_1 + 0xc);
    do {
      uVar11 = *(uint *)(param_3 + 2);
      uVar7 = uVar16 - 1;
      lVar10 = *param_3;
      lVar13 = lVar10;
      if (uVar7 < uVar11) {
        iVar17 = *(int *)((long)param_3 + 0xc) + uVar7;
        iVar15 = 0;
        if ((int)param_3[1] <= iVar17) {
          iVar15 = (int)param_3[1];
        }
        lVar13 = lVar10 + (long)(iVar17 - iVar15) * 0x1060;
      }
      uVar12 = (ulong)*(uint *)(param_1 + 0x10);
      lVar14 = lVar13 + uVar12 * 0x830;
      if (1 < *(uint *)(param_1 + 0x10)) {
        lVar14 = lVar13;
      }
      uVar3 = *(uint *)(lVar14 + 0x780);
      if (1 < (int)uVar3) {
        iVar17 = 0;
        iVar15 = 0;
        uVar18 = (ulong)uVar3;
        do {
          uVar21 = uVar18 - 1;
          if (iVar17 != 0) {
            lVar13 = lVar10;
            if (uVar7 < uVar11) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar4 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar4 = (int)param_3[1];
              }
              lVar13 = lVar10 + (long)(iVar2 - iVar4) * 0x1060;
            }
            lVar14 = lVar13 + uVar12 * 0x830;
            if (1 < uVar12) {
              lVar14 = lVar13;
            }
            lVar13 = lVar14 + (uVar21 & 0xffffffff) * 0x78;
            if (0x10 < uVar18) {
              lVar13 = lVar14;
            }
            if (uVar7 < uVar11) {
              iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
              iVar4 = 0;
              if ((int)param_3[1] <= iVar2) {
                iVar4 = (int)param_3[1];
              }
              lVar10 = lVar10 + (long)(iVar2 - iVar4) * 0x1060;
            }
            lVar14 = lVar10 + uVar12 * 0x830;
            if (1 < uVar12) {
              lVar14 = lVar10;
            }
            fVar22 = fVar27 - *(float *)(lVar13 + 0x40);
            lVar13 = lVar14 + (uVar21 & 0xffffffff) * 0x78;
            if (0x10 < uVar18) {
              lVar13 = lVar14;
            }
            fVar23 = *(float *)(lVar13 + 0x40);
            bVar1 = fVar27 >= fVar23;
            if (param_4 != 1) {
              bVar1 = fVar27 < fVar23;
            }
            uVar11 = (uint)bVar1;
            fVar27 = -fVar23;
            if (0.0 <= fVar23) {
              fVar27 = fVar23;
            }
            fVar24 = fVar24 + fVar27;
            fVar27 = -fVar22;
            if (0.0 <= fVar22) {
              fVar27 = fVar22;
            }
            if (0.015 < fVar27) {
              piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar19 + 0xc68) + 0xf0))();
              if (*piVar8 < iVar20) {
                piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar19 + 0xc68) + 0xf0))();
                iVar2 = *piVar8;
                piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar19 + 0xc68) + 8) + 0xf0))();
                if (*piVar8 + iVar2 < iVar20) {
                  piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar19 + 0xc68) + 0xf0))()
                  ;
                  iVar2 = *piVar8;
                  piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar19 + 0xc68) + 8) + 0xf0))()
                  ;
                  iVar4 = *piVar8;
                  piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar19 + 0xc68) + 0x10) + 0xf0)
                                  )();
                  if (iVar4 + iVar2 + *piVar8 < iVar20) {
                    piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar19 + 0xc68) + 0xf0))
                                              ();
                    iVar2 = *piVar8;
                    piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar19 + 0xc68) + 8) + 0xf0))
                                              ();
                    iVar4 = *piVar8;
                    piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar19 + 0xc68) + 0x10) +
                                                0xf0))();
                    iVar5 = *piVar8;
                    piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar19 + 0xc68) + 0x18) +
                                                0xf0))();
                    if (iVar4 + iVar2 + iVar5 + *piVar8 < iVar20) goto LAB_009cc9bc;
                  }
                  else {
                    uVar11 = uVar11 ^ 1;
                  }
                }
              }
              else {
                uVar11 = uVar11 ^ 1;
              }
              iVar15 = iVar15 + uVar11;
            }
          }
LAB_009cc9bc:
          uVar11 = *(uint *)(param_3 + 2);
          lVar10 = *param_3;
          lVar13 = lVar10;
          if (uVar7 < uVar11) {
            iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar4 = 0;
            if ((int)param_3[1] <= iVar2) {
              iVar4 = (int)param_3[1];
            }
            lVar13 = lVar10 + (long)(iVar2 - iVar4) * 0x1060;
          }
          uVar6 = *(uint *)(param_1 + 0x10);
          uVar12 = (ulong)uVar6;
          lVar14 = lVar13 + uVar12 * 0x830;
          if (1 < uVar6) {
            lVar14 = lVar13;
          }
          lVar13 = lVar14 + (uVar21 & 0xffffffff) * 0x78;
          if (0x10 < uVar18) {
            lVar13 = lVar14;
          }
          fVar27 = SQRT(*(float *)(lVar13 + 0x40) * *(float *)(lVar13 + 0x40) +
                        *(float *)(lVar13 + 0x3c) * *(float *)(lVar13 + 0x3c) +
                        *(float *)(lVar13 + 0x44) * *(float *)(lVar13 + 0x44));
          fVar22 = fVar27;
          if (fVar27 <= fVar25) {
            fVar22 = fVar25;
          }
          fVar25 = fVar22;
          if (uVar7 < uVar11) {
            iVar2 = *(int *)((long)param_3 + 0xc) + uVar7;
            iVar4 = 0;
            if ((int)param_3[1] <= iVar2) {
              iVar4 = (int)param_3[1];
            }
            lVar14 = lVar10 + (long)(iVar2 - iVar4) * 0x1060;
            lVar13 = lVar14 + uVar12 * 0x830;
            if (1 < uVar12) {
              lVar13 = lVar14;
            }
          }
          else {
            lVar13 = lVar10 + (ulong)uVar6 * 0x830;
            if (1 < uVar12) {
              lVar13 = lVar10;
            }
          }
          lVar14 = lVar13 + (uVar21 & 0xffffffff) * 0x78;
          if (0x10 < uVar18) {
            lVar14 = lVar13;
          }
          if (*(float *)(lVar14 + 0x40) < fVar26) {
            fVar26 = *(float *)(lVar14 + 0x40);
          }
          iVar17 = iVar17 + 1;
          uVar18 = uVar21;
        } while (uVar3 - 1 != iVar17);
        if (0 < iVar15) {
          iVar20 = iVar20 + 1;
        }
      }
      piVar8 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar19 + 0xc68) + 0xf0))();
      iVar17 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar19 + 0xc68) + 8) + 0xf0))();
      iVar15 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar19 + 0xc68) + 0x10) + 0xf0))();
      iVar2 = *piVar8;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(lVar19 + 0xc68) + 0x18) + 0xf0))();
      if ((((iVar15 + iVar17 + iVar2 + *piVar8 != 0) &&
           (pfVar9 = (float *)(**(code **)(*(long *)(lVar19 + 0x998) + 0xf0))(), *pfVar9 <= fVar24))
          && (pfVar9 = (float *)(**(code **)(*(long *)(lVar19 + 0x9f8) + 0xf0))(), *pfVar9 < fVar25)
          ) && (pfVar9 = (float *)(**(code **)(*(long *)(lVar19 + 0x9c8) + 0xf0))(),
               fVar26 < *pfVar9)) {
        local_8d = 0;
        local_110 = 0x80;
        local_10c[0] = 0;
        *param_2 = (char)uVar7;
        puStack_118 = local_10c;
        local_120 = PTR_DAT_04bb2d88 + 0x10;
        FUN_038d1270(&local_120,"RotateGyroLength Success [%d]",uVar7);
        return 1;
      }
      bVar1 = 2 < (int)uVar16;
      uVar16 = uVar7;
    } while (bVar1);
  }
  return 0;
}

