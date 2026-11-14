
float FUN_016e4798(uint *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)*param_1 * 8.381903e-08;
  fVar2 = (float)(*param_1 + 0x20000000 & 0xc0000000) * 8.381903e-08;
  if (fVar2 <= 360.0) {
    if (fVar2 < 0.0) {
      fVar3 = fVar2 / 360.0 + -1.0;
      goto LAB_016e4804;
    }
  }
  else {
    fVar3 = fVar2 / 360.0;
LAB_016e4804:
    fVar2 = fVar2 - (float)(int)fVar3 * 360.0;
  }
  if (fVar1 <= 360.0) {
    if (fVar1 < 0.0) {
      fVar3 = fVar1 / 360.0 + -1.0;
      goto LAB_016e4840;
    }
  }
  else {
    fVar3 = fVar1 / 360.0;
LAB_016e4840:
    fVar1 = fVar1 - (float)(int)fVar3 * 360.0;
  }
  fVar3 = 0.0;
  if (fVar2 != fVar1) {
    fVar4 = fVar2 - fVar1;
    fVar3 = fVar1 - fVar2;
    fVar5 = fVar4;
    if (fVar2 <= fVar1) {
      fVar5 = fVar3;
    }
    if (fVar5 <= 180.0) {
      if (fVar1 < fVar2) goto LAB_016e48a4;
    }
    else {
      fVar4 = 360.0 - fVar5;
      fVar3 = fVar4;
      if (fVar2 <= fVar1) {
LAB_016e48a4:
        return -fVar4;
      }
    }
  }
  return fVar3;
}

