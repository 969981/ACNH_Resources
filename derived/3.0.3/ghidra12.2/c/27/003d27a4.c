
long FUN_003d27a4(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
  if ((param_2 < *puVar1) && ((short)puVar1[(ulong)param_2 * 2 + 1] == 0x4900)) {
    return (long)puVar1 + (long)(int)puVar1[(ulong)param_2 * 2 + 2];
  }
  return 0;
}

