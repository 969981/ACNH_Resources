
void FUN_01fa31fc(long param_1,float *param_2,int *param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  uVar2 = *param_3 + *(int *)(lVar3 + 0x2b4);
  uVar1 = (ulong)(uVar2 >> 0x18);
  fVar4 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
  fVar5 = (float)(&DAT_041997a0)[uVar1 * 4];
  fVar8 = (float)(&DAT_041997a4)[uVar1 * 4];
  fVar6 = (float)param_4;
  fVar9 = *(float *)(lVar3 + 0x27c);
  fVar7 = *(float *)(lVar3 + 0x280);
  *param_2 = *(float *)(lVar3 + 0x278) +
             ((float)(&DAT_04199798)[uVar1 * 4] + fVar4 * (float)(&DAT_0419979c)[uVar1 * 4]) * 5.0 *
             fVar6;
  param_2[1] = fVar6 * 0.0 + fVar9;
  param_2[2] = (fVar5 + fVar4 * fVar8) * 5.0 * fVar6 + fVar7;
  return;
}

