
float FUN_038e7f00(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar5 = param_1[2];
  fVar4 = *param_2;
  fVar3 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar6 = param_2[4];
  fVar10 = param_2[5];
  fVar9 = (fVar2 - fVar3) * fVar6 + (fVar1 - fVar4) * fVar8 + (fVar5 - fVar7) * fVar10;
  if (param_3 != (float *)0x0) {
    *param_3 = fVar9;
  }
  fVar5 = fVar5 - (fVar7 + fVar10 * fVar9);
  fVar1 = fVar1 - (fVar4 + fVar8 * fVar9);
  fVar2 = fVar2 - (fVar3 + fVar6 * fVar9);
  return fVar2 * fVar2 + fVar1 * fVar1 + fVar5 * fVar5;
}

