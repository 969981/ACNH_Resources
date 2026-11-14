
float FUN_014eda28(long param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = -2.5;
  if (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10)) + 1U & 1) != 0) {
    fVar5 = 0.0;
  }
  fVar6 = *param_3 + fVar5;
  iVar3 = (int)((float)(int)(fVar5 + *param_2) / 5.0) - (uint)(fVar5 + *param_2 < 0.0);
  iVar4 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  uVar1 = iVar4 - iVar3 & 1;
  uVar2 = -uVar1;
  if (iVar3 <= iVar4) {
    uVar2 = uVar1;
  }
  fVar5 = -1.0;
  if (iVar4 - iVar3 == 0 || iVar4 < iVar3) {
    fVar5 = 1.0;
  }
  return *param_3 + (float)(int)uVar2 * 5.0 * fVar5;
}

