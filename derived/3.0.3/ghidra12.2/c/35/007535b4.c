
bool FUN_007535b4(float *param_1,float *param_2)

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
  
  fVar17 = param_2[8];
  fVar11 = param_2[4];
  fVar15 = param_2[2];
  fVar5 = param_2[9];
  fVar13 = param_2[10];
  fVar4 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = -(fVar5 * fVar2) + fVar13 * fVar4;
  fVar6 = *param_2;
  fVar8 = param_2[1];
  fVar10 = -(fVar17 * fVar4) + fVar5 * fVar11;
  fVar1 = fVar8 * (-(fVar11 * fVar13) + fVar17 * fVar2) + fVar3 * fVar6 + fVar10 * fVar15;
  if (fVar1 != 0.0) {
    fVar17 = -fVar17;
    fVar18 = 1.0 / fVar1;
    fVar7 = param_2[3];
    fVar9 = param_2[7];
    fVar16 = -((fVar2 * fVar17 + fVar13 * fVar11) * fVar18);
    fVar14 = (fVar15 * fVar17 + fVar13 * fVar6) * fVar18;
    fVar3 = fVar3 * fVar18;
    fVar12 = -((fVar15 * -fVar5 + fVar13 * fVar8) * fVar18);
    fVar10 = fVar10 * fVar18;
    fVar13 = -((fVar8 * fVar17 + fVar5 * fVar6) * fVar18);
    fVar17 = param_2[0xb];
    fVar5 = -((fVar15 * -fVar11 + fVar2 * fVar6) * fVar18);
    param_1[8] = fVar10;
    param_1[9] = fVar13;
    fVar2 = (-(fVar4 * fVar15) + fVar2 * fVar8) * fVar18;
    fVar18 = (fVar8 * -fVar11 + fVar4 * fVar6) * fVar18;
    *param_1 = fVar3;
    param_1[1] = fVar12;
    param_1[4] = fVar16;
    param_1[5] = fVar14;
    param_1[6] = fVar5;
    param_1[7] = (-(fVar14 * fVar9) - fVar7 * fVar16) - fVar17 * fVar5;
    param_1[2] = fVar2;
    param_1[3] = (-(fVar12 * fVar9) - fVar7 * fVar3) - fVar17 * fVar2;
    param_1[10] = fVar18;
    param_1[0xb] = (-(fVar13 * fVar9) - fVar7 * fVar10) - fVar17 * fVar18;
  }
  return fVar1 != 0.0;
}

