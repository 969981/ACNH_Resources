
void FUN_0147c834(float *param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
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
  
  uVar1 = (ulong)(param_2 >> 0x18);
  uVar2 = (ulong)(param_3 >> 0x18);
  uVar3 = (ulong)(param_4 >> 0x18);
  fVar4 = (float)(param_2 & 0xffffff) * 5.9604645e-08;
  fVar5 = (float)(param_3 & 0xffffff) * 5.9604645e-08;
  fVar6 = (float)(param_4 & 0xffffff) * 5.9604645e-08;
  fVar12 = (float)(&DAT_04199798)[uVar2 * 4];
  fVar13 = (float)(&DAT_0419979c)[uVar2 * 4];
  fVar8 = (float)(&DAT_04199798)[uVar1 * 4] + fVar4 * (float)(&DAT_0419979c)[uVar1 * 4];
  fVar4 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar4 * (float)(&DAT_041997a4)[uVar1 * 4];
  fVar10 = (float)(&DAT_04199798)[uVar3 * 4] + fVar6 * (float)(&DAT_0419979c)[uVar3 * 4];
  fVar6 = (float)(&DAT_041997a0)[uVar3 * 4] + fVar6 * (float)(&DAT_041997a4)[uVar3 * 4];
  fVar7 = (float)(&DAT_041997a0)[uVar2 * 4];
  fVar11 = (float)(&DAT_041997a4)[uVar2 * 4];
  fVar9 = fVar12 + fVar5 * fVar13;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  fVar7 = fVar7 + fVar5 * fVar11;
  param_1[8] = -(fVar13 * fVar5) - fVar12;
  *param_1 = fVar7 * fVar6;
  param_1[10] = fVar4 * fVar7;
  param_1[9] = fVar8 * fVar7;
  param_1[1] = fVar8 * fVar9 * fVar6 - fVar4 * fVar10;
  param_1[2] = fVar8 * fVar10 + fVar9 * fVar4 * fVar6;
  param_1[4] = fVar7 * fVar10;
  param_1[5] = fVar4 * fVar6 + fVar10 * fVar8 * fVar9;
  param_1[6] = -(fVar8 * fVar6) + fVar9 * fVar4 * fVar10;
  return;
}

