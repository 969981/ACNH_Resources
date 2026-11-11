
long FUN_003d44f4(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x14);
  if (param_2 < *puVar1) {
    return (long)puVar1 + (long)(int)puVar1[(ulong)param_2 * 2 + 2];
  }
  return 0;
}

