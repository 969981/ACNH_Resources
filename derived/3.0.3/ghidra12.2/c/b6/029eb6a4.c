
void FUN_029eb6a4(float *param_1,char *param_2)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*param_2 == '\0') {
    fVar6 = param_1[6];
    if (param_1[4] == fVar6) {
      return;
    }
  }
  else {
    cVar2 = param_2[5];
    fVar6 = *(float *)(param_2 + 0x14);
    fVar3 = *(float *)(param_2 + 0xc);
    fVar9 = *(float *)(param_2 + 0x10);
    pfVar1 = param_1;
    if (param_2[4] != '\0') {
      pfVar1 = (float *)(param_2 + 8);
    }
    fVar5 = *pfVar1;
    param_1[8] = fVar6;
    fVar7 = fVar5;
    if (cVar2 != '\0') {
      fVar7 = 0.0;
    }
    param_1[1] = fVar5;
    fVar5 = 0.0;
    fVar3 = fVar3 - fVar7;
    fVar7 = -fVar3;
    if (0.0 <= fVar3) {
      fVar7 = fVar3;
    }
    param_1[9] = fVar7;
    fVar8 = fVar7;
    if ((fVar6 != 0.0) && (0.0 < fVar7)) {
      fVar6 = param_1[8];
      fVar4 = 1.0;
      if (0.0 / fVar7 <= 1.0) {
        fVar4 = 0.0 / fVar7;
      }
      if (fVar6 == 4.2039e-45) {
        fVar6 = asinf(fVar4);
        fVar8 = param_1[9];
        fVar5 = fVar8 * (fVar6 / 1.5707964);
      }
      else if (fVar6 == 2.8026e-45) {
        fVar5 = fVar7 * fVar4 * fVar4;
      }
      else if (fVar6 == 1.4013e-45) {
        fVar5 = SQRT(fVar4);
        if (NAN(fVar5)) {
          fVar5 = sqrtf(fVar4);
        }
        fVar5 = fVar5 * param_1[9];
        fVar8 = param_1[9];
      }
    }
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = fVar5;
    param_1[5] = fVar5;
    param_1[6] = fVar5;
    param_1[7] = 0.0;
    *param_1 = param_1[1] + 0.0;
    fVar6 = fVar5;
    if (0.0 <= fVar9) {
      param_1[3] = fVar3;
      if ((fVar9 == 0.0) || (fVar3 == 0.0)) {
        fVar6 = fVar3;
        if (0.0 < fVar8 && param_1[8] != 0.0) {
          fVar9 = param_1[8];
          fVar5 = 1.0;
          if (fVar3 < 0.0) {
            fVar5 = -1.0;
          }
          fVar4 = 1.0;
          if (fVar7 / fVar8 <= 1.0) {
            fVar4 = fVar7 / fVar8;
          }
          if (fVar9 == 4.2039e-45) {
            fVar6 = asinf(fVar4);
            fVar6 = param_1[9] * ((fVar5 * fVar6) / 1.5707964);
          }
          else if (fVar9 == 2.8026e-45) {
            fVar6 = fVar8 * fVar4 * fVar5 * fVar4;
          }
          else if (fVar9 == 1.4013e-45) {
            fVar6 = SQRT(fVar4);
            if (NAN(fVar6)) {
              fVar6 = sqrtf(fVar4);
            }
            fVar6 = fVar5 * fVar6 * param_1[9];
          }
        }
        param_1[2] = fVar3;
        param_1[3] = fVar3;
        param_1[4] = fVar6;
        param_1[5] = fVar6;
        param_1[6] = fVar6;
        param_1[7] = 0.0;
        *param_1 = fVar3 + param_1[1];
        return;
      }
      fVar6 = fVar3;
      if (!(fVar8 <= 0.0 || param_1[8] == 0.0)) {
        fVar5 = param_1[8];
        fVar4 = 1.0;
        if (fVar3 < 0.0) {
          fVar4 = -1.0;
        }
        fVar3 = 1.0;
        if (fVar7 / fVar8 <= 1.0) {
          fVar3 = fVar7 / fVar8;
        }
        if (fVar5 == 4.2039e-45) {
          fVar6 = asinf(fVar3);
          fVar6 = param_1[9] * ((fVar4 * fVar6) / 1.5707964);
        }
        else if (fVar5 == 2.8026e-45) {
          fVar6 = fVar8 * fVar3 * fVar4 * fVar3;
        }
        else if (fVar5 == 1.4013e-45) {
          fVar6 = SQRT(fVar3);
          if (NAN(fVar6)) {
            fVar6 = sqrtf(fVar3);
          }
          fVar6 = fVar4 * fVar6 * param_1[9];
        }
      }
      fVar5 = param_1[4];
      param_1[6] = fVar6;
      fVar9 = (fVar6 - fVar5) / fVar9;
      param_1[7] = fVar9;
      fVar3 = fVar5 + fVar9 * 0.033333335;
      if (0.0 <= fVar9) {
        if (fVar6 < fVar3) goto LAB_029eb924;
      }
      else if (fVar3 < fVar6) {
LAB_029eb924:
        fVar3 = fVar6;
      }
      param_1[5] = fVar3;
    }
    if (fVar5 == fVar6) {
      return;
    }
  }
  fVar3 = param_1[5];
  param_1[4] = fVar3;
  if (fVar3 == fVar6) {
    fVar3 = param_1[3];
    param_1[2] = fVar3;
    goto LAB_029eba88;
  }
  if ((param_1[8] != 0.0) && (fVar6 = param_1[9], 0.0 < fVar6)) {
    fVar9 = param_1[8];
    fVar7 = 1.0;
    if (fVar3 < 0.0) {
      fVar7 = -1.0;
    }
    fVar5 = -fVar3;
    if (fVar3 >= 0.0) {
      fVar5 = fVar3;
    }
    fVar8 = 1.0;
    if (fVar5 / fVar6 <= 1.0) {
      fVar8 = fVar5 / fVar6;
    }
    if (fVar9 == 4.2039e-45) {
      fVar6 = sinf(fVar8 * 1.5707964);
    }
    else {
      if (fVar9 != 2.8026e-45) {
        if (fVar9 == 1.4013e-45) {
          fVar3 = fVar6 * fVar8 * fVar7 * fVar8;
        }
        goto LAB_029eba50;
      }
      fVar6 = SQRT(fVar8);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar8);
      }
    }
    fVar3 = fVar7 * fVar6 * param_1[9];
  }
LAB_029eba50:
  param_1[2] = fVar3;
  fVar9 = param_1[6];
  fVar6 = param_1[4] + param_1[7] * 0.033333335;
  if (0.0 <= param_1[7]) {
    if (fVar9 < fVar6) goto LAB_029eba80;
  }
  else if (fVar6 < fVar9) {
LAB_029eba80:
    fVar6 = fVar9;
  }
  param_1[5] = fVar6;
LAB_029eba88:
  *param_1 = fVar3 + param_1[1];
  return;
}

