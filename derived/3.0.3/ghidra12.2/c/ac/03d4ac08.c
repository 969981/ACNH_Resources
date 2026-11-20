
void FUN_03d4ac08(float param_1,float param_2,float *param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = (**(code **)(**(long **)PTR_DAT_04bb2158 + 0x40))();
  fVar7 = *(float *)(lVar1 + 4) * 0.5;
  fVar3 = param_4[1] - param_3[0xb];
  fVar4 = *param_4 / fVar7;
  fVar2 = *param_4 - param_3[10];
  fVar5 = param_4[1] / fVar7;
  fVar11 = fVar4 - param_3[0xc];
  fVar9 = fVar5 - param_3[0xd];
  fVar8 = -fVar11;
  if (0.0 <= fVar11) {
    fVar8 = fVar11;
  }
  fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  fVar10 = fVar6 * param_1 + param_3[0x12] * param_2;
  fVar12 = -fVar9;
  if (0.0 <= fVar9) {
    fVar12 = fVar9;
  }
  param_3[4] = param_3[4] + fVar8;
  param_3[5] = param_3[5] + fVar12;
  fVar8 = 360.0;
  if (fVar10 <= 360.0) {
    fVar8 = fVar10;
  }
  fVar11 = SQRT(fVar9 * fVar9 + fVar11 * fVar11) * param_1 + param_3[0x13] * param_2;
  fVar12 = param_4[1];
  fVar9 = 0.0;
  if (0.0 <= fVar10) {
    fVar9 = fVar8;
  }
  param_3[6] = *param_4 - *param_3;
  param_3[7] = fVar12 - param_3[1];
  fVar8 = 360.0 / fVar7;
  if (fVar11 <= 360.0 / fVar7) {
    fVar8 = fVar11;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar11) {
    fVar7 = fVar8;
  }
  param_3[0x12] = fVar9;
  param_3[0x13] = fVar7;
  param_3[8] = fVar4 - param_3[2];
  param_3[9] = fVar5 - param_3[3];
  param_3[10] = *param_4;
  fVar8 = param_4[1];
  param_3[0xd] = fVar5;
  param_3[0xb] = fVar8;
  param_3[0xc] = fVar4;
  if (1.0 < fVar6) {
    if (0.0 < fVar6) {
      fVar2 = fVar2 * (1.0 / fVar6);
      fVar3 = fVar3 * (1.0 / fVar6);
    }
    param_3[0x10] = fVar2;
    param_3[0x11] = fVar3;
  }
  param_3[0x14] = (float)((int)param_3[0x14] + 1);
  return;
}

