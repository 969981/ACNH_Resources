
void FUN_03b05700(long param_1,float *param_2,long param_3)

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
  float fVar16;
  
  fVar2 = *(float *)(param_3 + 0x28);
  fVar4 = (float)*(undefined8 *)(param_1 + 0x3e0);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20);
  fVar6 = (float)*(undefined8 *)(param_1 + 1000);
  fVar1 = (float)((ulong)*(undefined8 *)(param_1 + 0x400) >> 0x20) +
          fVar2 * fVar5 + (float)((ulong)*(undefined8 *)(param_1 + 0x3d0) >> 0x20) * 0.0 +
          (float)((ulong)*(undefined8 *)(param_1 + 0x3f0) >> 0x20) * 0.0;
  fVar3 = (float)*(undefined8 *)(param_1 + 0x408) +
          fVar2 * fVar6 + (float)*(undefined8 *)(param_1 + 0x3d8) * 0.0 +
          (float)*(undefined8 *)(param_1 + 0x3f8) * 0.0;
  fVar2 = (float)*(undefined8 *)(param_1 + 0x400) +
          fVar2 * fVar4 + (float)*(undefined8 *)(param_1 + 0x3d0) * 0.0 +
          (float)*(undefined8 *)(param_1 + 0x3f0) * 0.0;
  param_2[2] = fVar3;
  *param_2 = fVar2;
  param_2[1] = fVar1;
  if (*(float *)(param_1 + 0x44) == 0.0) {
    fVar11 = param_2[6];
    fVar13 = param_2[7];
    param_2[3] = fVar2;
    param_2[4] = fVar1;
    fVar14 = param_2[8];
    param_2[5] = fVar3;
    fVar15 = fVar3;
    fVar12 = fVar1;
    fVar9 = fVar2;
  }
  else {
    fVar11 = param_2[6];
    fVar9 = param_2[3] + fVar11;
    fVar13 = param_2[7];
    fVar14 = param_2[8];
    fVar12 = param_2[4] + fVar13;
    fVar15 = param_2[5] + fVar14;
    param_2[3] = fVar9;
    param_2[4] = fVar12;
    param_2[5] = fVar15;
  }
  fVar16 = *(float *)(param_3 + 0x20);
  fVar10 = fVar9 - fVar2;
  fVar8 = fVar12 - fVar1;
  fVar7 = fVar15 - fVar3;
  fVar11 = fVar11 + (fVar2 - fVar9) * fVar16;
  fVar13 = fVar13 + (fVar1 - fVar12) * fVar16;
  fVar14 = fVar14 + (fVar3 - fVar15) * fVar16;
  param_2[6] = fVar11;
  param_2[7] = fVar13;
  param_2[8] = fVar14;
  fVar15 = *(float *)(param_3 + 0x24);
  param_2[6] = fVar11 * fVar15;
  param_2[7] = fVar13 * fVar15;
  param_2[8] = fVar14 * fVar15;
  fVar15 = *(float *)(param_3 + 0x2c);
  fVar12 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar7 * fVar7);
  if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6) * fVar15 < fVar12) {
    if (0.0 < fVar12) {
      fVar12 = 1.0 / fVar12;
      fVar10 = fVar10 * fVar12;
      fVar8 = fVar8 * fVar12;
      fVar7 = fVar7 * fVar12;
    }
    param_2[3] = fVar2 + fVar15 * fVar10;
    param_2[4] = fVar1 + fVar15 * fVar8;
    param_2[5] = fVar3 + fVar15 * fVar7;
  }
  return;
}

