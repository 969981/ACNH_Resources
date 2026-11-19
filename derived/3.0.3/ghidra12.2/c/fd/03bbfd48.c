
float FUN_03bbfd48(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = *(float *)(param_1 + 0x38);
  fVar4 = *(float *)(param_1 + 0x3c);
  fVar1 = 0.0;
  fVar5 = *(float *)(param_1 + 0x40);
  if (((fVar2 != 0.0) || (fVar4 != 0.0)) || (fVar5 != 0.0)) {
    fVar8 = *param_2 - *(float *)(param_1 + 0x14);
    fVar7 = param_2[1] - *(float *)(param_1 + 0x24);
    fVar9 = param_2[2] - *(float *)(param_1 + 0x34);
    if (((fVar8 != 0.0) || (fVar7 != 0.0)) || (fVar9 != 0.0)) {
      fVar1 = -(fVar5 * fVar7) + fVar9 * fVar4;
      fVar6 = -(fVar2 * fVar9) + fVar8 * fVar5;
      fVar3 = -(fVar4 * fVar8) + fVar7 * fVar2;
      fVar1 = atan2f(SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar3 * fVar3),
                     fVar4 * fVar7 + fVar8 * fVar2 + fVar9 * fVar5);
    }
  }
  fVar2 = 0.0;
  if (*(float *)(param_1 + 0x44) < fVar1) {
    if (fVar1 <= *(float *)(param_1 + 0x48)) {
      fVar2 = (fVar1 - *(float *)(param_1 + 0x44)) / *(float *)(param_1 + 0x4c);
    }
    else {
      fVar2 = 1.0;
    }
  }
  return fVar2;
}

