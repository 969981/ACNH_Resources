
void FUN_003ad80c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  float fVar17;
  float fVar18;
  
  fVar1 = (float)*param_3;
  fVar2 = (float)((ulong)*param_3 >> 0x20);
  fVar4 = *(float *)(param_2 + 1);
  fVar5 = (float)param_3[2];
  fVar12 = (float)param_3[4];
  fVar7 = (float)((ulong)param_3[2] >> 0x20);
  fVar13 = (float)((ulong)param_3[4] >> 0x20);
  fVar3 = (float)param_3[1];
  fVar9 = (float)param_3[3];
  fVar17 = (float)*param_2;
  fVar18 = (float)((ulong)*param_2 >> 0x20);
  fVar14 = (float)param_3[5];
  fVar11 = (float)*(undefined8 *)((long)param_2 + 0xc);
  fVar15 = (float)param_2[2];
  fVar16 = (float)((ulong)param_2[2] >> 0x20);
  fVar6 = ABS(fVar1) * fVar11 + ABS(fVar5) * fVar15 + ABS(fVar12) * fVar16;
  fVar8 = ABS(fVar2) * fVar11 + ABS(fVar7) * fVar15 + ABS(fVar13) * fVar16;
  fVar10 = ABS(fVar3) * fVar11 + ABS(fVar9) * fVar15 + ABS(fVar14) * fVar16;
  fVar11 = fVar11 * 0.0 + fVar15 * 0.0 + fVar16 * 0.0;
  fVar1 = (float)param_3[6] + fVar1 * fVar17 + fVar5 * fVar18 + fVar12 * fVar4;
  fVar2 = (float)((ulong)param_3[6] >> 0x20) + fVar2 * fVar17 + fVar7 * fVar18 + fVar13 * fVar4;
  fVar3 = (float)param_3[7] + fVar3 * fVar17 + fVar9 * fVar18 + fVar14 * fVar4;
  fVar4 = (float)((ulong)param_3[7] >> 0x20) +
          (float)((ulong)param_3[1] >> 0x20) * fVar17 + (float)((ulong)param_3[3] >> 0x20) * fVar18
          + (float)((ulong)param_3[5] >> 0x20) * fVar4;
  param_1[1] = CONCAT44(fVar4 - fVar11,fVar3 - fVar10);
  *param_1 = CONCAT44(fVar2 - fVar8,fVar1 - fVar6);
  param_1[3] = CONCAT44(fVar4 + fVar11,fVar3 + fVar10);
  param_1[2] = CONCAT44(fVar2 + fVar8,fVar1 + fVar6);
  return;
}

