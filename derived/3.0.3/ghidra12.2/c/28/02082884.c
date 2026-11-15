
void FUN_02082884(undefined8 *param_1,long param_2)

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
  
  FUN_007021a4();
  fVar3 = *(float *)(param_2 + 0x2e8);
  fVar2 = *(float *)(param_2 + 0x2e4);
  fVar1 = *(float *)(param_2 + 0x2ec);
  fVar5 = (float)*param_1;
  fVar6 = (float)((ulong)*param_1 >> 0x20);
  fVar9 = (float)param_1[2];
  fVar10 = (float)((ulong)param_1[2] >> 0x20);
  fVar12 = (float)param_1[4];
  fVar13 = (float)((ulong)param_1[4] >> 0x20);
  fVar7 = (float)param_1[1];
  fVar11 = (float)param_1[3];
  fVar14 = (float)param_1[5];
  fVar4 = (float)((ulong)param_1[1] >> 0x20) + fVar2 * fVar5 + fVar3 * fVar6 + fVar1 * fVar7;
  fVar8 = (float)((ulong)param_1[3] >> 0x20) + fVar2 * fVar9 + fVar3 * fVar10 + fVar1 * fVar11;
  fVar1 = (float)((ulong)param_1[5] >> 0x20) + fVar2 * fVar12 + fVar3 * fVar13 + fVar1 * fVar14;
  fVar2 = *(float *)(param_2 + 0x300);
  param_1[5] = CONCAT44(fVar1,fVar12 * 0.0 + fVar13 * 0.0 + fVar14 * 1.0 + 0.0);
  param_1[4] = CONCAT44(fVar12 * 0.0 + fVar13 * 1.0 + fVar14 * 0.0 + 0.0,
                        fVar12 * 1.0 + fVar13 * 0.0 + fVar14 * 0.0 + 0.0);
  param_1[1] = CONCAT44(fVar4,fVar5 * 0.0 + fVar6 * 0.0 + fVar7 * 1.0 + 0.0);
  *param_1 = CONCAT44(fVar5 * 0.0 + fVar6 * 1.0 + fVar7 * 0.0 + 0.0,
                      fVar5 * 1.0 + fVar6 * 0.0 + fVar7 * 0.0 + 0.0);
  param_1[3] = CONCAT44(fVar8,fVar9 * 0.0 + fVar10 * 0.0 + fVar11 * 1.0 + 0.0);
  param_1[2] = CONCAT44(fVar9 * 0.0 + fVar10 * 1.0 + fVar11 * 0.0 + 0.0,
                        fVar9 * 1.0 + fVar10 * 0.0 + fVar11 * 0.0 + 0.0);
  *(float *)((long)param_1 + 0xc) = fVar4 + 0.0;
  *(float *)((long)param_1 + 0x1c) = fVar2 + fVar8;
  *(float *)((long)param_1 + 0x2c) = fVar1 + 0.0;
  return;
}

