
void FUN_00943d50(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float *param_6,float *param_7,float *param_8)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_2 - *param_6;
  fVar6 = param_3 - param_6[2];
  fVar3 = (fVar6 * fVar6 + fVar4 * fVar4) - param_1 * param_1;
  if (fVar3 < 0.0) {
    fVar7 = param_5 * param_5 + param_4 * param_4;
    fVar4 = fVar6 * param_5 + fVar4 * param_4;
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= fVar7) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar7)) {
        bVar1 = fVar7 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= fVar7;
      }
    }
    if (!bVar2 || bVar1) {
      fVar6 = 0.0;
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
      if (!bVar2 || bVar1) goto LAB_00943e60;
      fVar7 = fVar4 + fVar4;
    }
    else {
      fVar3 = -(fVar7 * fVar3) + fVar4 * fVar4;
      bVar1 = false;
      bVar2 = true;
      if (-1.1920929e-07 <= fVar3) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar3)) {
          bVar1 = fVar3 == 1.1920929e-07;
          bVar2 = 1.1920929e-07 <= fVar3;
        }
      }
      if (bVar2 && !bVar1) {
        fVar6 = 0.0;
        if (0.0 <= fVar3) {
          fVar5 = SQRT(fVar3);
          fVar6 = fVar5;
          if (NAN(fVar5)) {
            fVar6 = sqrtf(fVar3);
          }
          fVar6 = (1.0 / fVar7) * (fVar6 - fVar4);
          if (NAN(fVar5)) {
            fVar5 = sqrtf(fVar3);
          }
          fVar3 = (1.0 / fVar7) * (-fVar4 - fVar5);
          if (fVar6 <= fVar3) {
            fVar6 = fVar3;
          }
          if (fVar6 < 0.0) goto LAB_00943e54;
        }
        goto LAB_00943e60;
      }
      fVar7 = fVar7 + fVar7;
      fVar3 = fVar4;
    }
    fVar6 = -fVar3 / fVar7;
    if (0.0 <= fVar6) {
LAB_00943e60:
      *param_7 = param_2 + param_4 * fVar6;
      *param_8 = param_3 + param_5 * fVar6;
      return;
    }
  }
LAB_00943e54:
  *param_7 = param_2;
  *param_8 = param_3;
  return;
}

