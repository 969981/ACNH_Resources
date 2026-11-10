
float FUN_00358be4(long param_1)

{
  int iVar1;
  
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    return *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x10) * 0.0;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
  return *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x10) * (float)iVar1;
}

