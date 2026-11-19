
undefined8 FUN_038e7f70(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = param_1[4] - param_1[1];
  fVar4 = param_1[3] - *param_1;
  fVar5 = param_1[5] - param_1[2];
  fVar6 = SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5);
  if (0.0 < fVar6) {
    fVar8 = 1.0 / fVar6;
    fVar4 = fVar4 * fVar8;
    fVar7 = fVar7 * fVar8;
    fVar5 = fVar5 * fVar8;
  }
  fVar10 = param_1[1] - param_2[1];
  fVar9 = *param_1 - *param_2;
  fVar8 = param_1[2] - param_2[2];
  if (fVar6 <= 0.0) {
    fVar4 = (fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) - param_2[3] * param_2[3];
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= fVar4) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= fVar4;
      }
    }
    if (bVar2 && !bVar1) {
      return 0;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = 0.0;
    }
    if (param_4 == (float *)0x0) {
      return 2;
    }
    *param_4 = 1.0;
    return 2;
  }
  fVar4 = fVar7 * fVar10 + fVar9 * fVar4 + fVar8 * fVar5;
  fVar4 = fVar4 + fVar4;
  fVar5 = ((fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) - param_2[3] * param_2[3]) * -4.0 +
          fVar4 * fVar4;
  if (fVar5 <= 0.0) {
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= fVar5) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= fVar5;
      }
    }
    if (bVar2 && !bVar1) {
      return 0;
    }
    fVar7 = fVar4 * fVar4;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (0.0 < fVar4) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar7) && !NAN(fVar5)) {
        bVar1 = fVar7 < fVar5;
        bVar2 = fVar7 == fVar5;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      return 0;
    }
    fVar7 = fVar6 + fVar6 + fVar4;
    bVar1 = false;
    if ((fVar7 < 0.0) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar7 * fVar7))) {
      bVar1 = fVar5 < fVar7 * fVar7;
    }
    if (bVar1) {
      return 0;
    }
    if (param_3 == (float *)0x0) {
      return 1;
    }
    fVar7 = fVar4 * -0.5;
  }
  else {
    fVar7 = fVar4 * fVar4;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (0.0 < fVar4) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar7) && !NAN(fVar5)) {
        bVar1 = fVar7 < fVar5;
        bVar2 = fVar7 == fVar5;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      return 0;
    }
    bVar1 = true;
    if ((fVar4 <= 0.0) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar5))) {
      bVar1 = fVar7 < fVar5;
    }
    fVar7 = fVar6 + fVar6 + fVar4;
    if (bVar1) {
      bVar1 = true;
      bVar2 = false;
      if (0.0 <= fVar7) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar7 * fVar7) && !NAN(fVar5)) {
          bVar1 = fVar7 * fVar7 < fVar5;
          bVar2 = false;
        }
      }
      if (bVar1 != bVar2) {
        return 0;
      }
      if (param_3 == (float *)0x0) {
        return 1;
      }
      fVar7 = SQRT(fVar5);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar5);
      }
      fVar7 = fVar7 - fVar4;
    }
    else {
      fVar8 = fVar7 * fVar7;
      bVar1 = true;
      bVar2 = false;
      if (0.0 <= fVar7) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar8) && !NAN(fVar5)) {
          bVar1 = fVar8 < fVar5;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        if (param_3 == (float *)0x0 && param_4 == (float *)0x0) {
          return 2;
        }
        fVar7 = SQRT(fVar5);
        if (NAN(fVar7)) {
          fVar7 = sqrtf(fVar5);
        }
        if (param_3 != (float *)0x0) {
          *param_3 = ((-fVar4 - fVar7) * 0.5) / fVar6;
        }
        if (param_4 == (float *)0x0) {
          return 2;
        }
        *param_4 = ((fVar7 - fVar4) * 0.5) / fVar6;
        return 2;
      }
      bVar1 = false;
      bVar2 = false;
      if (fVar7 < 0.0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar5) && !NAN(fVar8)) {
          bVar1 = fVar5 < fVar8;
          bVar2 = false;
        }
      }
      if (bVar1 != bVar2) {
        return 0;
      }
      if (param_3 == (float *)0x0) {
        return 1;
      }
      fVar7 = SQRT(fVar5);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar5);
      }
      fVar7 = -fVar4 - fVar7;
    }
    fVar7 = fVar7 * 0.5;
  }
  *param_3 = fVar7 / fVar6;
  return 1;
}

