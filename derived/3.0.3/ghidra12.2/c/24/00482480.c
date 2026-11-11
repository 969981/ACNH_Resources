
void FUN_00482480(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
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
  float fVar19;
  float fVar20;
  
  fVar11 = (float)((ulong)param_3[6] >> 0x20);
  fVar6 = (float)param_2[2];
  fVar7 = (float)((ulong)param_2[2] >> 0x20);
  fVar8 = (float)param_2[3];
  fVar9 = (float)((ulong)param_2[3] >> 0x20);
  fVar15 = (float)param_3[6];
  fVar1 = (float)*param_2;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar4 = (float)param_2[1];
  fVar5 = (float)((ulong)param_2[1] >> 0x20);
  fVar13 = (float)param_3[7];
  fVar17 = (float)param_2[4];
  fVar18 = (float)((ulong)param_2[4] >> 0x20);
  fVar19 = (float)param_2[5];
  fVar20 = (float)((ulong)param_2[5] >> 0x20);
  fVar10 = fVar17 * fVar13 + fVar1 * fVar15 + fVar6 * fVar11;
  fVar12 = fVar18 * fVar13 + fVar3 * fVar15 + fVar7 * fVar11;
  fVar14 = fVar19 * fVar13 + fVar4 * fVar15 + fVar8 * fVar11;
  fVar15 = fVar20 * fVar13 + fVar5 * fVar15 + fVar9 * fVar11;
  param_1[7] = CONCAT44(fVar15,fVar14);
  param_1[6] = CONCAT44(fVar12,fVar10);
  fVar11 = (float)param_3[4];
  fVar13 = (float)((ulong)param_3[4] >> 0x20);
  fVar16 = (float)param_3[5];
  param_1[5] = CONCAT44(fVar20 * fVar16 + fVar5 * fVar11 + fVar9 * fVar13,
                        fVar19 * fVar16 + fVar4 * fVar11 + fVar8 * fVar13);
  param_1[4] = CONCAT44(fVar18 * fVar16 + fVar3 * fVar11 + fVar7 * fVar13,
                        fVar17 * fVar16 + fVar1 * fVar11 + fVar6 * fVar13);
  fVar11 = (float)param_3[2];
  fVar13 = (float)((ulong)param_3[2] >> 0x20);
  fVar16 = (float)param_3[3];
  param_1[3] = CONCAT44(fVar20 * fVar16 + fVar5 * fVar11 + fVar9 * fVar13,
                        fVar19 * fVar16 + fVar4 * fVar11 + fVar8 * fVar13);
  param_1[2] = CONCAT44(fVar18 * fVar16 + fVar3 * fVar11 + fVar7 * fVar13,
                        fVar17 * fVar16 + fVar1 * fVar11 + fVar6 * fVar13);
  fVar11 = (float)*param_3;
  fVar13 = (float)((ulong)*param_3 >> 0x20);
  fVar16 = (float)param_3[1];
  param_1[1] = CONCAT44(fVar20 * fVar16 + fVar5 * fVar11 + fVar9 * fVar13,
                        fVar19 * fVar16 + fVar4 * fVar11 + fVar8 * fVar13);
  *param_1 = CONCAT44(fVar18 * fVar16 + fVar3 * fVar11 + fVar7 * fVar13,
                      fVar17 * fVar16 + fVar1 * fVar11 + fVar6 * fVar13);
  uVar2 = param_2[6];
  param_1[7] = CONCAT44(fVar15 + (float)((ulong)param_2[7] >> 0x20),fVar14 + (float)param_2[7]);
  param_1[6] = CONCAT44(fVar12 + (float)((ulong)uVar2 >> 0x20),fVar10 + (float)uVar2);
  return;
}

