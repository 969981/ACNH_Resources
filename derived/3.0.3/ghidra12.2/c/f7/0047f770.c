
void FUN_0047f770(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar13 = (float)((ulong)param_3[2] >> 0x20);
  fVar5 = (float)param_2[2];
  fVar6 = (float)((ulong)param_2[2] >> 0x20);
  fVar7 = (float)param_2[3];
  fVar8 = (float)((ulong)param_2[3] >> 0x20);
  fVar9 = (float)*param_3;
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar3 = (float)param_2[1];
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  fVar10 = (float)((ulong)*param_3 >> 0x20);
  fVar12 = (float)param_3[2];
  fVar19 = (float)param_3[4];
  fVar20 = (float)((ulong)param_3[4] >> 0x20);
  fVar11 = (float)param_3[1];
  fVar15 = (float)param_2[4];
  fVar16 = (float)((ulong)param_2[4] >> 0x20);
  fVar17 = (float)param_2[5];
  fVar18 = (float)((ulong)param_2[5] >> 0x20);
  fVar14 = (float)param_3[3];
  fVar21 = (float)param_3[5];
  param_1[1] = CONCAT44(fVar18 * fVar11 + fVar4 * fVar9 + fVar8 * fVar10,
                        fVar17 * fVar11 + fVar3 * fVar9 + fVar7 * fVar10);
  *param_1 = CONCAT44(fVar16 * fVar11 + fVar2 * fVar9 + fVar6 * fVar10,
                      fVar15 * fVar11 + fVar1 * fVar9 + fVar5 * fVar10);
  param_1[3] = CONCAT44(fVar18 * fVar14 + fVar4 * fVar12 + fVar8 * fVar13,
                        fVar17 * fVar14 + fVar3 * fVar12 + fVar7 * fVar13);
  param_1[2] = CONCAT44(fVar16 * fVar14 + fVar2 * fVar12 + fVar6 * fVar13,
                        fVar15 * fVar14 + fVar1 * fVar12 + fVar5 * fVar13);
  param_1[5] = CONCAT44(fVar18 * fVar21 + fVar4 * fVar19 + fVar8 * fVar20,
                        fVar17 * fVar21 + fVar3 * fVar19 + fVar7 * fVar20);
  param_1[4] = CONCAT44(fVar16 * fVar21 + fVar2 * fVar19 + fVar6 * fVar20,
                        fVar15 * fVar21 + fVar1 * fVar19 + fVar5 * fVar20);
  return;
}

