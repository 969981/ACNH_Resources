
void FUN_02ff7de0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar2 = fVar3;
  if (fVar3 == fVar4 || fVar4 > fVar3) {
    fVar2 = fVar4;
  }
  fVar1 = fVar3;
  if (fVar4 <= fVar3) {
    fVar1 = fVar4;
  }
  if (fVar2 <= fVar5) {
    fVar2 = fVar5;
  }
  if (fVar5 <= fVar1) {
    fVar1 = fVar5;
  }
  fVar1 = fVar2 - fVar1;
  if (fVar2 == 0.0) {
    fVar3 = -1.0;
  }
  else {
    if (fVar1 == 0.0) {
      fVar3 = -1.0;
    }
    else {
      if (fVar2 == fVar3) {
        fVar4 = ((fVar4 - fVar5) / fVar1) * 60.0;
      }
      else {
        if (fVar2 == fVar4) {
          fVar5 = fVar5 - fVar3;
          fVar4 = 120.0;
        }
        else {
          fVar5 = fVar3 - fVar4;
          fVar4 = 240.0;
        }
        fVar4 = fVar4 + (fVar5 / fVar1) * 60.0;
      }
      fVar3 = fVar4 + 360.0;
      if (0.0 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar3 = fVar3 / 360.0;
    }
    fVar1 = fVar1 / fVar2;
  }
  if (fVar2 <= 0.95857143) {
    fVar5 = (fVar2 + -0.08) / 0.05857143;
  }
  else {
    fVar5 = 15.0;
  }
  fVar4 = 0.0;
  if (0.08 <= fVar2) {
    fVar4 = fVar5;
  }
  fVar2 = 0.5;
  if (fVar4 < 0.0) {
    fVar2 = -0.5;
  }
  fVar5 = (((float)(int)(fVar4 + fVar2) * 0.05857143) / 0.87857145) * 0.87857145 + 0.08;
  fVar2 = 0.95857143;
  if (fVar5 <= 0.95857143) {
    fVar2 = fVar5;
  }
  fVar4 = 0.08;
  if (0.08 <= fVar5) {
    fVar4 = fVar2;
  }
  fVar2 = 1.0;
  if (fVar4 <= 1.0) {
    fVar2 = fVar4;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar2;
  }
  if (param_2 != (float *)0x0) {
    fVar2 = 14.999999;
    if (fVar1 <= 1.0) {
      fVar2 = fVar1 / 0.06666667;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar1) {
      fVar4 = fVar2;
    }
    fVar2 = 0.5;
    if (fVar4 < 0.0) {
      fVar2 = -0.5;
    }
    fVar4 = (float)(int)(fVar4 + fVar2) * 0.06666667 + 0.0;
    fVar2 = 1.0;
    if (fVar4 <= 1.0) {
      fVar2 = fVar4;
    }
    fVar1 = 0.0;
    if (0.0 <= fVar4) {
      fVar1 = fVar2;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
      fVar4 = fVar3;
    }
    if (fVar4 <= 1.0) {
      fVar4 = fVar4 / 0.033333335;
    }
    else {
      fVar4 = 29.999998;
    }
    fVar3 = 0.5;
    if (fVar4 < 0.0) {
      fVar3 = -0.5;
    }
    fVar4 = (float)(int)(fVar4 + fVar3) * 0.033333335 + 0.0;
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
    fVar1 = 0.0;
    if (0.0 <= fVar4) {
      fVar1 = fVar3;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar1) {
      fVar3 = fVar1;
    }
    fVar4 = (fVar3 - (float)(int)fVar3) * 6.0;
    fVar1 = fVar5 * (1.0 - fVar2);
    fVar6 = fVar5 * (1.0 - (fVar4 - (float)(int)fVar4) * fVar2);
    fVar3 = fVar5;
    if ((uint)(int)fVar4 < 5) {
      fVar7 = fVar5 * (1.0 - (1.0 - (fVar4 - (float)(int)fVar4)) * fVar2);
      fVar2 = fVar1;
      switch((int)fVar4) {
      case 1:
        fVar3 = fVar6;
        fVar7 = fVar5;
        break;
      case 2:
        fVar2 = fVar7;
        fVar3 = fVar1;
        fVar7 = fVar5;
        break;
      case 3:
        fVar2 = fVar5;
        fVar3 = fVar1;
        fVar7 = fVar6;
        break;
      case 4:
        fVar2 = fVar5;
        fVar3 = fVar7;
        fVar7 = fVar1;
      }
    }
    else {
      fVar2 = fVar6;
      fVar7 = fVar1;
    }
    *param_2 = fVar3;
    param_2[1] = fVar7;
    param_2[2] = fVar2;
    param_2[3] = 1.0;
  }
  return;
}

