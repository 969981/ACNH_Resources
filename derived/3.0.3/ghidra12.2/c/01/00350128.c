
float FUN_00350128(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
  return *(float *)(param_1 + 0x10) * (float)iVar1;
}

