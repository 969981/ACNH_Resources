
float FUN_006ed954(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)NEON_ucvtf(*param_1);
  fVar1 = fVar1 * 8.381903e-08;
  fVar2 = (float)NEON_ucvtf(*param_2);
  fVar2 = fVar2 * 8.381903e-08;
  if (fVar1 <= 360.0) {
    if (fVar1 < 0.0) {
      fVar3 = fVar1 / 360.0 + -1.0;
      goto LAB_006ed9a8;
    }
  }
  else {
    fVar3 = fVar1 / 360.0;
LAB_006ed9a8:
    fVar1 = fVar1 - (float)(int)fVar3 * 360.0;
  }
  if (fVar2 <= 360.0) {
    if (fVar2 < 0.0) {
      fVar3 = fVar2 / 360.0 + -1.0;
      goto LAB_006ed9e4;
    }
  }
  else {
    fVar3 = fVar2 / 360.0;
LAB_006ed9e4:
    fVar2 = fVar2 - (float)(int)fVar3 * 360.0;
  }
  fVar3 = 0.0;
  if (fVar1 != fVar2) {
    fVar4 = fVar1 - fVar2;
    fVar3 = fVar2 - fVar1;
    fVar5 = fVar4;
    if (fVar1 <= fVar2) {
      fVar5 = fVar3;
    }
    if (fVar5 <= 180.0) {
      if (fVar2 < fVar1) goto LAB_006eda44;
    }
    else {
      fVar4 = 360.0 - fVar5;
      fVar3 = fVar4;
      if (fVar1 <= fVar2) {
LAB_006eda44:
        return -fVar4;
      }
    }
  }
  return fVar3;
}

