
void FUN_012e1d60(long param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_2 - ((float)param_3 * 0.5 * 5.0 + -2.5);
  fVar4 = param_2[2] - ((float)param_4 * 0.5 * 5.0 + -2.5);
  iVar1 = (int)((float)(int)fVar3 / 5.0) - (uint)(fVar3 < 0.0);
  iVar2 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x20) = param_3 + iVar1 + -1;
  *(int *)(param_1 + 0x24) = param_4 + iVar2 + -1;
  return;
}

