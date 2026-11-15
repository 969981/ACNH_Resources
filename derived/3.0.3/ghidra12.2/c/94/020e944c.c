
void FUN_020e944c(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    fVar13 = *(float *)(param_1 + 0xc) + (float)param_3;
    *(float *)(param_1 + 0xc) = fVar13;
    if (100.0 < fVar13) {
      *(undefined4 *)(param_1 + 0xc) = 0x42c80000;
      return;
    }
    if (0.0 <= fVar13) {
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  fVar15 = *(float *)(param_1 + 0xc);
  fVar13 = *(float *)(param_1 + 0x10);
  lVar9 = *(long *)PTR_DAT_04bb3968;
  plVar1 = (long *)(lVar9 + 0x1cc8);
  piVar7 = (int *)(**(code **)(*(long *)(lVar9 + 0x1cc8) + 0xf0))(plVar1);
  if (fVar15 < (float)*piVar7) {
    plVar2 = (long *)(lVar9 + 0x1c68);
    fVar13 = *(float *)(param_1 + 0xc) + (float)param_3;
    *(float *)(param_1 + 0xc) = fVar13;
    piVar7 = (int *)(**(code **)(*(long *)(lVar9 + 0x1c68) + 0xf0))(plVar2);
    if (fVar13 <= (float)*piVar7) {
      fVar13 = *(float *)(param_1 + 0xc);
      fVar15 = 0.0;
      if (0.0 <= fVar13) goto LAB_020e961c;
    }
    else {
      piVar7 = (int *)(**(code **)(*plVar2 + 0xf0))(plVar2);
      fVar15 = (float)*piVar7;
    }
    *(float *)(param_1 + 0xc) = fVar15;
    fVar13 = fVar15;
LAB_020e961c:
    piVar7 = (int *)(**(code **)(*plVar1 + 0xf0))(plVar1);
    if ((float)*piVar7 <= fVar13) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    return;
  }
  plVar2 = (long *)(lVar9 + 0x1c98);
  fVar13 = fVar13 + (float)(param_2 / 0x1e);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x1c98) + 0xf0))(plVar2);
  fVar14 = *pfVar8;
  plVar3 = (long *)(lVar9 + 0x1c68);
  piVar7 = (int *)(**(code **)(*(long *)(lVar9 + 0x1c68) + 0xf0))(plVar3);
  fVar16 = (float)*piVar7;
  piVar7 = (int *)(**(code **)(*(long *)(lVar9 + 0x1cc8) + 0xf0))(plVar1);
  plVar4 = (long *)(lVar9 + 0x1cf8);
  fVar15 = (float)*piVar7;
  piVar7 = (int *)(**(code **)(*(long *)(lVar9 + 0x1cf8) + 0xf0))(plVar4);
  fVar10 = (float)*piVar7;
  if (*piVar7 < 0) {
    fVar12 = fVar15;
    if ((fVar10 < fVar13) && (fVar12 = fVar16, fVar13 < 0.0)) {
LAB_020e9654:
      fVar12 = 0.0 - fVar10;
      bVar5 = false;
      bVar6 = true;
      if (-1.1920929e-07 <= fVar12) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar12)) {
          bVar5 = fVar12 == 1.1920929e-07;
          bVar6 = 1.1920929e-07 <= fVar12;
        }
      }
      fVar12 = fVar16;
      if (bVar6 && !bVar5) {
        fVar13 = fVar13 / fVar10;
        fVar10 = fVar14 + -0.5;
        bVar5 = false;
        bVar6 = true;
        if (-1.1920929e-07 <= fVar10) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar10)) {
            bVar5 = fVar10 == 1.1920929e-07;
            bVar6 = 1.1920929e-07 <= fVar10;
          }
        }
        if (!bVar6 || bVar5) {
          fVar10 = fVar13;
        }
        else {
          fVar12 = -fVar13;
          if (0.0 <= fVar13) {
            fVar12 = fVar13;
          }
          fVar10 = 0.0;
          if (1.1920929e-07 <= fVar12) {
            if (1.1920929e-07 <= fVar14) {
              fVar10 = (float)FUN_038cd848(fVar14);
              fVar14 = (float)FUN_038cd848(fVar12);
              fVar14 = (float)FUN_038cd7d8(fVar14 * fVar10 * -1.442695);
              fVar10 = -fVar14;
              bVar5 = false;
              if (!NAN(fVar13)) {
                bVar5 = fVar13 < 0.0;
              }
            }
            else {
              fVar10 = 0.0;
              bVar5 = fVar12 < 0.9999999;
              fVar14 = 1.0;
            }
            if (!bVar5) {
              fVar10 = fVar14;
            }
          }
        }
        fVar15 = fVar16 + fVar10 * (fVar15 - fVar16);
        *(float *)(param_1 + 0xc) = fVar15;
        goto joined_r0x020e990c;
      }
    }
LAB_020e96dc:
    *(float *)(param_1 + 0xc) = fVar12;
    fVar15 = fVar12;
  }
  else {
    fVar12 = fVar16;
    if (fVar13 <= 0.0) goto LAB_020e96dc;
    if (fVar13 < fVar10) goto LAB_020e9654;
    *(float *)(param_1 + 0xc) = fVar15;
  }
joined_r0x020e990c:
  if (param_3 == 0) {
    return;
  }
  *(float *)(param_1 + 0xc) = fVar15 + (float)param_3;
  piVar7 = (int *)(**(code **)(*plVar3 + 0xf0))(plVar3);
  if ((float)*piVar7 < fVar15 + (float)param_3) {
    piVar7 = (int *)(**(code **)(*plVar3 + 0xf0))(plVar3);
    *(float *)(param_1 + 0xc) = (float)*piVar7;
  }
  pfVar8 = (float *)(**(code **)(*plVar2 + 0xf0))(plVar2);
  fVar10 = *pfVar8;
  piVar7 = (int *)(**(code **)(*plVar3 + 0xf0))(plVar3);
  fVar14 = (float)*piVar7;
  piVar7 = (int *)(**(code **)(*plVar1 + 0xf0))(plVar1);
  fVar16 = (float)*piVar7;
  piVar7 = (int *)(**(code **)(*plVar4 + 0xf0))(plVar4);
  iVar11 = *piVar7;
  fVar13 = 0.0;
  fVar15 = *(float *)(param_1 + 0xc);
  if (fVar14 <= fVar16) {
    if (fVar15 <= fVar14) goto LAB_020e98a4;
    if (fVar16 <= fVar15) goto LAB_020e97a8;
  }
  else {
    if (fVar14 <= fVar15) goto LAB_020e98a4;
    if (fVar15 <= fVar16) {
LAB_020e97a8:
      fVar13 = (float)iVar11;
      goto LAB_020e98a4;
    }
  }
  if ((fVar14 - fVar16 < -1.1920929e-07) || (fVar13 = 0.0, 1.1920929e-07 < fVar14 - fVar16)) {
    fVar13 = (fVar15 - fVar14) / (fVar16 - fVar14);
  }
  if ((fVar10 + -0.5 < -1.1920929e-07) || (1.1920929e-07 < fVar10 + -0.5)) {
    fVar15 = -fVar13;
    if (0.0 <= fVar13) {
      fVar15 = fVar13;
    }
    fVar14 = 0.0;
    if (1.1920929e-07 <= fVar15) {
      if ((fVar10 < 1.1920929e-07) || (0.9999999 < fVar10)) {
        fVar10 = 1.0;
        fVar14 = 0.0;
        bVar5 = false;
        if (!NAN(fVar15)) {
          bVar5 = fVar15 < 1.0;
        }
      }
      else {
        fVar10 = (float)FUN_038cd848(fVar10);
        fVar15 = (float)FUN_038cd848(fVar15);
        fVar10 = (float)FUN_038cd7d8(fVar15 / (fVar10 * -1.442695));
        fVar14 = -fVar10;
        bVar5 = fVar13 < 0.0;
      }
      if (!bVar5) {
        fVar14 = fVar10;
      }
    }
  }
  else {
    fVar14 = fVar13;
  }
  fVar13 = fVar14 * (float)iVar11 + 0.0;
LAB_020e98a4:
  *(float *)(param_1 + 0x10) = fVar13 - (float)(param_2 / 0x1e);
  return;
}

