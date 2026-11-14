
void FUN_015cae68(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = *param_5;
  fVar6 = param_1;
  if (param_1 <= param_2) {
    fVar6 = param_2;
  }
  fVar4 = fVar6;
  fVar1 = 0.0;
  if (fVar6 <= 0.0) {
    fVar4 = 0.0;
    fVar1 = fVar6;
  }
  bVar2 = true;
  if ((fVar1 <= fVar5) && (bVar2 = false, !NAN(fVar4) && !NAN(fVar5))) {
    bVar2 = fVar4 < fVar5;
  }
  if (!bVar2) {
    fVar6 = param_5[1];
    bVar2 = true;
    if ((fVar1 <= fVar6) && (bVar2 = false, !NAN(fVar4) && !NAN(fVar6))) {
      bVar2 = fVar4 < fVar6;
    }
    if (!bVar2) {
      return;
    }
  }
  fVar8 = param_1 * param_4;
  fVar6 = -(param_3 * param_1);
  fVar7 = fVar8 + fVar5;
  bVar2 = false;
  bVar3 = true;
  if (fVar1 <= fVar7) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7) && !NAN(fVar4)) {
      bVar2 = fVar7 == fVar4;
      bVar3 = fVar4 <= fVar7;
    }
  }
  if (!bVar3 || bVar2) {
    fVar9 = fVar6 + param_5[1];
    bVar2 = false;
    bVar3 = true;
    if (fVar1 <= fVar9) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9) && !NAN(fVar4)) {
        bVar2 = fVar9 == fVar4;
        bVar3 = fVar4 <= fVar9;
      }
    }
    if (!bVar3 || bVar2) goto LAB_015cb008;
  }
  fVar7 = fVar5 - fVar8;
  bVar2 = false;
  bVar3 = true;
  if (fVar1 <= fVar7) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7) && !NAN(fVar4)) {
      bVar2 = fVar7 == fVar4;
      bVar3 = fVar4 <= fVar7;
    }
  }
  if (!bVar3 || bVar2) {
    fVar9 = param_5[1] - fVar6;
    bVar2 = false;
    bVar3 = true;
    if (fVar1 <= fVar9) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9) && !NAN(fVar4)) {
        bVar2 = fVar9 == fVar4;
        bVar3 = fVar4 <= fVar9;
      }
    }
    if (!bVar3 || bVar2) goto LAB_015cb008;
  }
  param_3 = param_2 * param_3;
  param_2 = param_2 * param_4;
  fVar7 = param_3 + fVar8 + fVar5;
  bVar2 = false;
  bVar3 = true;
  if (fVar1 <= fVar7) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7) && !NAN(fVar4)) {
      bVar2 = fVar7 == fVar4;
      bVar3 = fVar4 <= fVar7;
    }
  }
  if (!bVar3 || bVar2) {
    fVar9 = fVar6 + param_2 + param_5[1];
    bVar2 = false;
    bVar3 = true;
    if (fVar1 <= fVar9) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9) && !NAN(fVar4)) {
        bVar2 = fVar9 == fVar4;
        bVar3 = fVar4 <= fVar9;
      }
    }
    if (!bVar3 || bVar2) goto LAB_015cb008;
  }
  fVar7 = param_3 + fVar5;
  bVar2 = false;
  bVar3 = true;
  if (fVar1 <= fVar7) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7) && !NAN(fVar4)) {
      bVar2 = fVar7 == fVar4;
      bVar3 = fVar4 <= fVar7;
    }
  }
  if (!bVar3 || bVar2) {
    fVar9 = param_2 + param_5[1];
    bVar2 = false;
    bVar3 = true;
    if (fVar1 <= fVar9) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9) && !NAN(fVar4)) {
        bVar2 = fVar9 == fVar4;
        bVar3 = fVar4 <= fVar9;
      }
    }
    if (!bVar3 || bVar2) goto LAB_015cb008;
  }
  fVar7 = (param_3 - fVar8) + fVar5;
  bVar2 = false;
  bVar3 = true;
  if (fVar1 <= fVar7) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7) && !NAN(fVar4)) {
      bVar2 = fVar7 == fVar4;
      bVar3 = fVar4 <= fVar7;
    }
  }
  if (!bVar3 || bVar2) {
    fVar9 = (param_2 - fVar6) + param_5[1];
    bVar2 = false;
    bVar3 = true;
    if (fVar1 <= fVar9) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9) && !NAN(fVar4)) {
        bVar2 = fVar9 == fVar4;
        bVar3 = fVar4 <= fVar9;
      }
    }
    if (!bVar3 || bVar2) goto LAB_015cb008;
  }
  fVar7 = (fVar8 - param_3) + fVar5;
  bVar2 = false;
  bVar3 = true;
  if (fVar1 <= fVar7) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7) && !NAN(fVar4)) {
      bVar2 = fVar7 == fVar4;
      bVar3 = fVar4 <= fVar7;
    }
  }
  if ((((bVar3 && !bVar2) || (fVar9 = (fVar6 - param_2) + param_5[1], fVar9 < fVar1)) ||
      (fVar4 < fVar9)) &&
     (((fVar7 = fVar5 - param_3, fVar7 < fVar1 || (fVar4 < fVar7)) ||
      ((fVar9 = param_5[1] - param_2, fVar9 < fVar1 || (fVar4 < fVar9)))))) {
    fVar7 = (-fVar8 - param_3) + fVar5;
    bVar2 = false;
    bVar3 = true;
    if (fVar1 <= fVar7) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar7) && !NAN(fVar4)) {
        bVar2 = fVar7 == fVar4;
        bVar3 = fVar4 <= fVar7;
      }
    }
    if (bVar3 && !bVar2) {
      return;
    }
    fVar9 = (-fVar6 - param_2) + param_5[1];
    if (fVar9 < fVar1) {
      return;
    }
    if (fVar4 < fVar9) {
      return;
    }
  }
LAB_015cb008:
  *param_5 = fVar7;
  param_5[1] = fVar9;
  return;
}

