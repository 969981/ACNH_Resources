
void FUN_03ee46bc(float *param_1,float *param_2,float *param_3)

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
  
  fVar2 = param_3[5];
  fVar1 = param_3[6];
  fVar3 = param_3[4];
  fVar6 = *param_2;
  fVar5 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = -(fVar7 * fVar2) + fVar1 * fVar5 + fVar3 * fVar8;
  fVar10 = (fVar7 * fVar3 - fVar1 * fVar6) + fVar2 * fVar8;
  fVar4 = -(fVar5 * fVar3) + fVar2 * fVar6 + fVar1 * fVar8;
  fVar1 = (-(fVar5 * fVar2) - fVar3 * fVar6) - fVar1 * fVar7;
  param_1[4] = param_2[4] + ((-(fVar7 * fVar10) + fVar8 * fVar9 + fVar5 * fVar4) - fVar6 * fVar1);
  param_1[5] = param_2[5] + (((fVar8 * fVar10 + fVar7 * fVar9) - fVar6 * fVar4) - fVar5 * fVar1);
  param_1[6] = param_2[6] + (((fVar6 * fVar10 - fVar5 * fVar9) + fVar8 * fVar4) - fVar7 * fVar1);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar6 = param_3[2];
  fVar5 = param_3[3];
  fVar8 = param_2[2];
  fVar7 = param_2[3];
  *param_1 = (fVar5 * fVar1 + fVar3 * fVar7 + fVar6 * fVar2) - fVar4 * fVar8;
  param_1[1] = -(fVar1 * fVar6) + fVar4 * fVar7 + fVar5 * fVar2 + fVar3 * fVar8;
  param_1[2] = ((fVar1 * fVar4 + fVar6 * fVar7) - fVar3 * fVar2) + fVar5 * fVar8;
  param_1[3] = ((-(fVar1 * fVar3) + fVar5 * fVar7) - fVar4 * fVar2) - fVar6 * fVar8;
  return;
}

