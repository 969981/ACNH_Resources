
/* WARNING: Removing unreachable block (ram,0x016f2cc4) */
/* WARNING: Removing unreachable block (ram,0x016f2d5c) */

float FUN_016f2c30(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  undefined *puVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = (float)FUN_016e026c(0,param_2,0,1);
  fVar7 = (float)FUN_016e026c(0,param_3,0,1);
  puVar1 = PTR_DAT_04bb2200;
  lVar4 = *(long *)PTR_DAT_04bb2200;
  if (lVar4 == 0) {
    fVar10 = -20.0;
    fVar8 = -20.0;
  }
  else {
    fVar8 = -20.0;
    if (*(long *)(lVar4 + 0x50) == 0) {
      fVar10 = -20.0;
    }
    else {
      fVar10 = -20.0;
      lVar5 = *(long *)(*(long *)(lVar4 + 0x50) + 0x118);
      if (lVar5 != 0) {
        lVar4 = *(long *)(lVar5 + 0x280);
        fVar10 = 0.0;
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) {
          pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x488) + 0xf0))(lVar4 + 0x488);
          fVar10 = *pfVar3;
        }
        lVar4 = FUN_0251e98c(1);
        pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x1590) + 0xf0))(lVar4 + 0x1590);
        fVar10 = fVar10 + *pfVar3;
        lVar4 = *(long *)puVar1;
        if (lVar4 == 0) goto LAB_016f2db8;
      }
    }
    if ((*(long *)(lVar4 + 0x50) != 0) &&
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x50) + 0x118), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x280);
      fVar8 = 0.0;
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) {
        pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x488) + 0xf0))(lVar4 + 0x488);
        fVar8 = *pfVar3;
      }
      lVar4 = FUN_0251e98c(1);
      pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x1560) + 0xf0))(lVar4 + 0x1560);
      fVar8 = fVar8 + *pfVar3;
    }
  }
LAB_016f2db8:
  if (*param_4 == 5) {
    fVar6 = fVar8;
    fVar7 = fVar8;
  }
  fVar8 = fVar10;
  if (*param_4 != 6) {
    fVar10 = fVar6;
    fVar8 = fVar7;
  }
  fVar7 = *(float *)(param_1 + 4);
  fVar6 = fVar7 - fVar10;
  if (0.0 <= (fVar8 - fVar10) * fVar6) {
    fVar9 = -fVar6;
    if (0.0 <= fVar6) {
      fVar9 = fVar6;
    }
    bVar2 = false;
    if ((fVar9 < 10.0) && (bVar2 = false, !NAN(*(float *)(param_2 + 4)) && !NAN(fVar10))) {
      bVar2 = *(float *)(param_2 + 4) < fVar10;
    }
    if (!bVar2) {
      if (fVar7 == fVar8) {
        fVar10 = fVar7;
      }
      else {
        fVar9 = fVar8 - fVar7;
        fVar6 = -fVar9;
        if (0.0 <= fVar9) {
          fVar6 = fVar9;
        }
        fVar10 = fVar8;
        if (0.25 < fVar6) {
          fVar10 = 0.25;
          if (fVar9 <= 0.0) {
            fVar10 = -5.0;
          }
          fVar8 = fVar9 * 0.35;
          fVar6 = 5.0;
          if (fVar9 <= 0.0) {
            fVar6 = -0.25;
          }
          if (fVar8 <= fVar6) {
            fVar6 = fVar8;
          }
          if (fVar10 <= fVar8) {
            fVar10 = fVar6;
          }
          fVar10 = fVar7 + fVar10;
        }
      }
    }
  }
  return fVar10;
}

