
void FUN_01fa307c(long param_1,long param_2,int *param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  uVar2 = *param_3 + *(int *)(lVar5 + 0x2b4);
  uVar1 = (ulong)(uVar2 >> 0x18);
  fVar6 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
  fVar7 = *(float *)(lVar5 + 0x278) +
          ((float)(&DAT_04199798)[uVar1 * 4] + fVar6 * (float)(&DAT_0419979c)[uVar1 * 4]) * 5.0 *
          (float)param_4 + -2.5;
  fVar6 = *(float *)(lVar5 + 0x280) +
          ((float)(&DAT_041997a0)[uVar1 * 4] + fVar6 * (float)(&DAT_041997a4)[uVar1 * 4]) * 5.0 *
          (float)param_4 + -2.5;
  iVar3 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iVar4 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  *(int *)(param_2 + 0x10) = iVar3;
  *(int *)(param_2 + 0x14) = iVar4;
  *(int *)(param_2 + 0x20) = iVar3 + 1;
  *(int *)(param_2 + 0x24) = iVar4 + 1;
  return;
}

