
float FUN_0166f690(float *param_1,float *param_2,float *param_3,long param_4,uint param_5)

{
  float fVar1;
  bool bVar2;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  bVar2 = (param_5 & 1) == 0;
  param_1[2] = 0.0;
  fVar3 = *param_2;
  param_1[3] = fVar3;
  fVar5 = param_2[1];
  param_1[4] = fVar5;
  fVar7 = param_2[2];
  param_1[5] = fVar7;
  fVar4 = 0.0;
  if (bVar2) {
    fVar4 = *(float *)(param_4 + 0x48);
  }
  fVar18 = 0.0;
  if (bVar2) {
    fVar18 = *(float *)(param_4 + 0x44);
  }
  fVar11 = 0.0;
  if (bVar2) {
    fVar11 = *(float *)(param_4 + 0x4c);
  }
  fVar3 = fVar3 * 0.5;
  fVar5 = fVar5 * 0.5;
  fVar7 = fVar7 * 0.5;
  fVar21 = (fVar18 + *param_3) - fVar3;
  fVar3 = fVar3 + fVar18 + *param_3;
  fVar20 = (fVar4 + param_3[1]) - fVar5;
  fVar22 = (fVar11 + param_3[2]) - fVar7;
  fVar5 = fVar5 + fVar4 + param_3[1];
  fVar7 = fVar7 + fVar11 + param_3[2];
  *param_1 = fVar21;
  param_1[1] = fVar20;
  param_1[2] = fVar22;
  param_1[3] = fVar3;
  param_1[4] = fVar5;
  param_1[5] = fVar7;
  fVar19 = fVar20 + 0.0;
  fVar18 = fVar22 + 0.0;
  fVar13 = fVar21 + 0.0;
  fVar9 = *(float *)(param_4 + 0x40);
  fVar6 = *(float *)(param_4 + 0x38);
  fVar8 = *(float *)(param_4 + 0x3c);
  fVar10 = fVar21 + (fVar3 - fVar21);
  fVar12 = fVar20 + (fVar5 - fVar20);
  fVar11 = fVar22 + (fVar7 - fVar22);
  fVar27 = fVar18 - fVar9;
  fVar26 = fVar10 - fVar6;
  fVar24 = (fVar19 - fVar8) * (fVar19 - fVar8);
  fVar23 = fVar24 + fVar26 * fVar26;
  fVar28 = fVar11 - fVar9;
  fVar4 = fVar18;
  fVar16 = fVar19;
  fVar25 = fVar10;
  if (SQRT((fVar20 - fVar8) * (fVar20 - fVar8) + (fVar21 - fVar6) * (fVar21 - fVar6) +
           (fVar22 - fVar9) * (fVar22 - fVar9)) <= SQRT(fVar23 + fVar27 * fVar27)) {
    fVar4 = fVar22;
    fVar16 = fVar20;
    fVar25 = fVar21;
  }
  fVar14 = fVar13 - fVar6;
  fVar15 = fVar11;
  fVar17 = fVar19;
  fVar1 = fVar10;
  if (SQRT((fVar16 - fVar8) * (fVar16 - fVar8) + (fVar25 - fVar6) * (fVar25 - fVar6) +
           (fVar4 - fVar9) * (fVar4 - fVar9)) <= SQRT(fVar23 + fVar28 * fVar28)) {
    fVar15 = fVar4;
    fVar17 = fVar16;
    fVar1 = fVar25;
  }
  fVar25 = SQRT(fVar24 + fVar14 * fVar14 + fVar28 * fVar28);
  fVar16 = SQRT((fVar17 - fVar8) * (fVar17 - fVar8) + (fVar1 - fVar6) * (fVar1 - fVar6) +
                (fVar15 - fVar9) * (fVar15 - fVar9));
  fVar4 = fVar13;
  if (fVar16 <= fVar25) {
    fVar19 = fVar17;
    fVar4 = fVar1;
  }
  fVar23 = fVar11;
  if (fVar16 <= fVar25) {
    fVar23 = fVar15;
  }
  fVar17 = (fVar12 - fVar8) * (fVar12 - fVar8);
  fVar15 = fVar17 + fVar14 * fVar14;
  fVar17 = fVar17 + fVar26 * fVar26;
  fVar16 = fVar18;
  fVar25 = fVar12;
  fVar24 = fVar13;
  if (SQRT((fVar19 - fVar8) * (fVar19 - fVar8) + (fVar4 - fVar6) * (fVar4 - fVar6) +
           (fVar23 - fVar9) * (fVar23 - fVar9)) <= SQRT(fVar15 + fVar27 * fVar27)) {
    fVar16 = fVar23;
    fVar25 = fVar19;
    fVar24 = fVar4;
  }
  fVar4 = fVar12;
  fVar19 = fVar10;
  if (SQRT((fVar25 - fVar8) * (fVar25 - fVar8) + (fVar24 - fVar6) * (fVar24 - fVar6) +
           (fVar16 - fVar9) * (fVar16 - fVar9)) <= SQRT(fVar17 + fVar27 * fVar27)) {
    fVar18 = fVar16;
    fVar4 = fVar25;
    fVar19 = fVar24;
  }
  fVar16 = fVar11;
  fVar25 = fVar12;
  if (SQRT((fVar4 - fVar8) * (fVar4 - fVar8) + (fVar19 - fVar6) * (fVar19 - fVar6) +
           (fVar18 - fVar9) * (fVar18 - fVar9)) <= SQRT(fVar15 + fVar28 * fVar28)) {
    fVar16 = fVar18;
    fVar25 = fVar4;
    fVar13 = fVar19;
  }
  if (SQRT((fVar25 - fVar8) * (fVar25 - fVar8) + (fVar13 - fVar6) * (fVar13 - fVar6) +
           (fVar16 - fVar9) * (fVar16 - fVar9)) <= SQRT(fVar17 + fVar28 * fVar28)) {
    fVar11 = fVar16;
    fVar12 = fVar25;
    fVar10 = fVar13;
  }
  if ((((fVar6 < fVar21) || (fVar3 < fVar6)) || (fVar8 < fVar20)) ||
     (((fVar5 < fVar8 || (fVar9 < fVar22)) || (fVar7 < fVar9)))) {
    fVar4 = SQRT((fVar12 - fVar8) * (fVar12 - fVar8) + (fVar10 - fVar6) * (fVar10 - fVar6) +
                 (fVar11 - fVar9) * (fVar11 - fVar9));
  }
  else {
    fVar4 = 0.01;
  }
  return fVar4;
}

