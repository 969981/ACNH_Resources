
void FUN_038e450c(long param_1,float *param_2,float *param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar8 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar14 = param_3[2];
  fVar5 = *(float *)(param_1 + 0x28);
  fVar6 = *(float *)(param_1 + 0x2c);
  fVar12 = *param_3;
  fVar10 = param_3[1];
  fVar1 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x30);
  fVar9 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 0x10);
  fVar11 = fVar8 * fVar10 + fVar5 * fVar14 + fVar9 * fVar12;
  fVar13 = fVar3 * fVar10 + fVar6 * fVar14 + fVar7 * fVar12;
  fVar10 = fVar1 * fVar10 + fVar2 * fVar14 + fVar4 * fVar12;
  fVar12 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar10 * fVar10);
  if (0.0 < fVar12) {
    fVar12 = 1.0 / fVar12;
    fVar11 = fVar11 * fVar12;
    fVar13 = fVar13 * fVar12;
    fVar10 = fVar10 * fVar12;
  }
  fVar14 = *(float *)(param_1 + 0x14);
  fVar15 = *(float *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x34);
  param_2[4] = fVar13;
  param_2[5] = fVar10;
  *param_2 = (-(fVar8 * fVar15) - fVar14 * fVar9) - fVar12 * fVar5;
  param_2[1] = (-(fVar3 * fVar15) - fVar14 * fVar7) - fVar12 * fVar6;
  param_2[2] = (-(fVar1 * fVar15) - fVar14 * fVar4) - fVar12 * fVar2;
  param_2[3] = fVar11;
  return;
}

