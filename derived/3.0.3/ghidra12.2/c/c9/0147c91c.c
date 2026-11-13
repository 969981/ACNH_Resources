
void FUN_0147c91c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
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
  float fVar22;
  float fVar23;
  
  uVar7 = param_2[3];
  uVar11 = param_2[5];
  fVar1 = (float)*param_2;
  fVar12 = (float)*param_3;
  fVar13 = (float)((ulong)*param_3 >> 0x20);
  fVar14 = (float)param_3[1];
  fVar15 = (float)((ulong)param_3[1] >> 0x20);
  fVar4 = (float)param_2[2];
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar16 = (float)param_3[2];
  fVar18 = (float)((ulong)param_3[2] >> 0x20);
  fVar20 = (float)param_3[3];
  fVar22 = (float)((ulong)param_3[3] >> 0x20);
  fVar8 = (float)param_2[4];
  fVar5 = (float)((ulong)param_2[2] >> 0x20);
  fVar9 = (float)((ulong)param_2[4] >> 0x20);
  fVar3 = (float)param_2[1];
  fVar17 = (float)param_3[4];
  fVar19 = (float)((ulong)param_3[4] >> 0x20);
  fVar21 = (float)param_3[5];
  fVar23 = (float)((ulong)param_3[5] >> 0x20);
  fVar6 = (float)uVar7;
  fVar10 = (float)uVar11;
  param_1[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) +
                        fVar15 * fVar1 + fVar22 * fVar2 + fVar23 * fVar3,
                        fVar14 * fVar1 + fVar20 * fVar2 + fVar21 * fVar3 + 0.0);
  *param_1 = CONCAT44(fVar13 * fVar1 + fVar18 * fVar2 + fVar19 * fVar3 + 0.0,
                      fVar12 * fVar1 + fVar16 * fVar2 + fVar17 * fVar3 + 0.0);
  param_1[3] = CONCAT44((float)((ulong)uVar7 >> 0x20) +
                        fVar15 * fVar4 + fVar22 * fVar5 + fVar23 * fVar6,
                        fVar14 * fVar4 + fVar20 * fVar5 + fVar21 * fVar6 + 0.0);
  param_1[2] = CONCAT44(fVar13 * fVar4 + fVar18 * fVar5 + fVar19 * fVar6 + 0.0,
                        fVar12 * fVar4 + fVar16 * fVar5 + fVar17 * fVar6 + 0.0);
  param_1[5] = CONCAT44((float)((ulong)uVar11 >> 0x20) +
                        fVar15 * fVar8 + fVar22 * fVar9 + fVar23 * fVar10,
                        fVar14 * fVar8 + fVar20 * fVar9 + fVar21 * fVar10 + 0.0);
  param_1[4] = CONCAT44(fVar13 * fVar8 + fVar18 * fVar9 + fVar19 * fVar10 + 0.0,
                        fVar12 * fVar8 + fVar16 * fVar9 + fVar17 * fVar10 + 0.0);
  return;
}

