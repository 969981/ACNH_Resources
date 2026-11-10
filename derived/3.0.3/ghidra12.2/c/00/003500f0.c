
float FUN_003500f0(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  return *(float *)(param_1 + 0xc) * (float)iVar1;
}

