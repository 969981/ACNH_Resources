
undefined8
FUN_03efbd10(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float *param_7,uint param_8)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_8 & 1) == 0) {
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= param_1) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= param_1;
      }
    }
    if (bVar2 && !bVar1) {
      fVar3 = param_5;
      if ((param_5 < param_2) && (fVar3 = param_6, param_2 < param_6)) {
        return 0;
      }
      fVar4 = 1.0;
      if (param_1 < 0.0) {
        fVar4 = -1.0;
      }
      fVar5 = (param_1 * param_1 + param_2 * param_2 + param_2 * fVar3 * -2.0 + -1.0) /
              (param_1 + param_1);
      fVar5 = fVar5 + SQRT(fVar3 * fVar3 + fVar5 * fVar5 + 1.0) * fVar4;
      bVar1 = false;
      bVar2 = true;
      if (param_3 <= fVar5) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar5) && !NAN(param_4)) {
          bVar1 = fVar5 == param_4;
          bVar2 = param_4 <= fVar5;
        }
      }
      if (bVar2 && !bVar1) {
        return 0;
      }
      goto LAB_03efbe1c;
    }
    if ((param_5 < param_2) || (1.0 < (param_2 + param_5 * -2.0) * param_2)) {
      if (param_2 < param_6) {
        return 0;
      }
      if (1.0 < (param_2 + param_6 * -2.0) * param_2) {
        return 0;
      }
      *param_7 = 0.0;
      param_5 = param_6;
    }
    else {
      *param_7 = 0.0;
    }
  }
  else {
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= param_2) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_2)) {
        bVar1 = param_2 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= param_2;
      }
    }
    if (!bVar2 || bVar1) {
      if ((param_3 < param_1) || (1.0 < (param_1 + param_3 * -2.0) * param_1)) {
        if (param_1 < param_4) {
          return 0;
        }
        if (1.0 < (param_1 + param_4 * -2.0) * param_1) {
          return 0;
        }
        param_3 = param_4;
      }
      fVar3 = atanf(param_3);
      *param_7 = fVar3 + fVar3;
      fVar3 = 0.0;
      goto LAB_03efbef4;
    }
    fVar5 = param_3;
    if ((param_3 < param_1) && (fVar5 = param_4, param_1 < param_4)) {
      return 0;
    }
    fVar4 = 1.0;
    if (param_2 < 0.0) {
      fVar4 = -1.0;
    }
    fVar3 = (param_1 * param_1 + param_2 * param_2 + param_1 * fVar5 * -2.0 + -1.0) /
            (param_2 + param_2);
    fVar3 = fVar3 + SQRT(fVar3 * fVar3 + fVar5 * fVar5 + 1.0) * fVar4;
    bVar1 = false;
    bVar2 = true;
    if (param_5 <= fVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3) && !NAN(param_6)) {
        bVar1 = fVar3 == param_6;
        bVar2 = param_6 <= fVar3;
      }
    }
    if (bVar2 && !bVar1) {
      return 0;
    }
LAB_03efbe1c:
    fVar4 = atanf(fVar5);
    *param_7 = fVar4 + fVar4;
    param_5 = fVar3;
  }
  fVar3 = atanf(param_5);
  fVar3 = fVar3 + fVar3;
LAB_03efbef4:
  param_7[1] = fVar3;
  return 1;
}

