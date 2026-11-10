
void FUN_00378348(float *param_1,float *param_2)

{
  float *pfVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
  fVar5 = param_2[3];
  uVar2 = (ulong)(param_2[2] * (fVar3 / *(float *)PTR_FloatDegree180_04bcedf8));
  pfVar1 = (float *)(PTR_SinCosSampleTable_04bcef98 + (uVar2 >> 0x18 & 0xff) * 0x10);
  fVar3 = (float)((uint)uVar2 & 0xffffff) * 5.9604645e-08;
  fVar4 = pfVar1[1] + fVar3 * pfVar1[3];
  fVar3 = *pfVar1 + fVar3 * pfVar1[2];
  fVar6 = param_2[4];
  *param_1 = fVar5 * fVar3;
  param_1[1] = -(fVar4 * fVar6);
  param_1[2] = *param_2 + 0.5 + fVar5 * fVar3 * -0.5 + -(fVar4 * fVar6) * -0.5;
  fVar5 = param_2[3];
  fVar6 = param_2[4];
  fVar8 = fVar3 * fVar6;
  fVar7 = fVar4 * fVar5;
  param_1[3] = fVar7;
  param_1[4] = fVar8;
  fVar9 = param_2[1];
  param_1[3] = -(fVar4 * fVar5);
  param_1[4] = -(fVar3 * fVar6);
  param_1[5] = 1.0 - (fVar9 + 0.5 + fVar7 * -0.5 + fVar8 * -0.5);
  return;
}

