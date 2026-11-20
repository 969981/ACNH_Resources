
void FUN_03ee49d4(float *param_1,float *param_2,float *param_3)

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
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar1 = param_1[3];
  fVar5 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4;
  if (1.1920929e-07 < fVar5) {
    fVar5 = 1.0 / fVar5;
    fVar1 = fVar1 * fVar5;
    fVar2 = fVar2 * fVar5;
    fVar3 = fVar3 * fVar5;
    fVar4 = fVar4 * fVar5;
  }
  fVar4 = -fVar4;
  fVar3 = -fVar3;
  fVar2 = -fVar2;
  fVar6 = param_1[5];
  fVar5 = param_1[6];
  fVar8 = param_1[4];
  fVar11 = param_3[1];
  fVar10 = param_3[2];
  fVar12 = *param_3;
  fVar14 = -(fVar4 * fVar6) + fVar5 * fVar3 + fVar8 * fVar1;
  fVar7 = (fVar4 * fVar8 - fVar5 * fVar2) + fVar6 * fVar1;
  fVar15 = -(fVar4 * fVar11) + fVar10 * fVar3 + fVar12 * fVar1;
  fVar16 = (fVar4 * fVar12 - fVar10 * fVar2) + fVar11 * fVar1;
  fVar9 = -(fVar3 * fVar8) + fVar6 * fVar2 + fVar5 * fVar1;
  fVar13 = -(fVar3 * fVar12) + fVar11 * fVar2 + fVar10 * fVar1;
  fVar5 = (-(fVar3 * fVar6) - fVar8 * fVar2) - fVar5 * fVar4;
  fVar6 = (-(fVar3 * fVar11) - fVar12 * fVar2) - fVar10 * fVar4;
  *param_2 = ((-(fVar4 * fVar16) + fVar1 * fVar15 + fVar3 * fVar13) - fVar2 * fVar6) -
             ((-(fVar4 * fVar7) + fVar1 * fVar14 + fVar3 * fVar9) - fVar2 * fVar5);
  param_2[1] = (((fVar1 * fVar16 + fVar4 * fVar15) - fVar2 * fVar13) - fVar3 * fVar6) -
               (((fVar1 * fVar7 + fVar4 * fVar14) - fVar2 * fVar9) - fVar3 * fVar5);
  param_2[2] = (((fVar2 * fVar16 - fVar3 * fVar15) + fVar1 * fVar13) - fVar4 * fVar6) -
               (((fVar2 * fVar7 - fVar3 * fVar14) + fVar1 * fVar9) - fVar4 * fVar5);
  return;
}

