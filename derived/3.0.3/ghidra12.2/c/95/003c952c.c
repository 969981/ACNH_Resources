
long FUN_003c952c(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
  if (((short)puVar1[(long)(int)param_2 * 2 + 1] == 0x5900) && (param_2 < *puVar1)) {
    return (long)puVar1 + (long)(int)puVar1[(ulong)param_2 * 2 + 2];
  }
  return 0;
}

