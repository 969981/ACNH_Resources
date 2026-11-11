
long FUN_003b9208(long param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 5) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x1c));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (long)puVar1 + (long)(int)puVar1[(ulong)(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}

