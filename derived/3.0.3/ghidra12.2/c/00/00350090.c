
void FUN_00350090(float param_1,float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(long **)(param_3 + 0x28) + 0x20))();
  iVar2 = (**(code **)(**(long **)(param_3 + 0x28) + 0x28))();
  *(float *)(param_3 + 0xc) = param_1 / (float)iVar1;
  *(float *)(param_3 + 0x10) = param_2 / (float)iVar2;
  return;
}

