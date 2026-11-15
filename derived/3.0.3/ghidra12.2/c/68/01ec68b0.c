
void FUN_01ec68b0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_3 + 8) + -2.5;
  fVar4 = *(float *)(param_3 + 0x10) + -2.5;
  iVar1 = (int)((float)(int)fVar3 / 5.0) - (uint)(fVar3 < 0.0);
  iVar2 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  *(int *)(param_2 + 0x10) = iVar1;
  *(int *)(param_2 + 0x14) = iVar2;
  *(int *)(param_2 + 0x20) = iVar1 + 1;
  *(int *)(param_2 + 0x24) = iVar2 + 1;
  return;
}

