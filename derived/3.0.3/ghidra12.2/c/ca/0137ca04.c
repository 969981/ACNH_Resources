
void FUN_0137ca04(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  FUN_0137c6ec();
  fVar4 = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0 + -10.0;
  fVar3 = (float)*(int *)(param_2 + 8) * 10.0 + 5.0 + -10.0;
  iVar1 = (int)((float)(int)fVar3 / 10.0) - (uint)(fVar3 < 0.0);
  *(int *)(param_1 + 0x160) = iVar1;
  iVar2 = (int)((float)(int)fVar4 / 10.0) - (uint)(fVar4 < 0.0);
  *(int *)(param_1 + 0x170) = iVar1 + 2;
  *(int *)(param_1 + 0x164) = iVar2;
  *(int *)(param_1 + 0x28) = iVar1;
  *(int *)(param_1 + 0x2c) = iVar2;
  *(int *)(param_1 + 0x174) = iVar2 + 2;
  FUN_0137cab0(param_1);
  return;
}

