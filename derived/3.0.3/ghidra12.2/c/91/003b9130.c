
long FUN_003b9130(long param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 4) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x2c));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (long)puVar1 + (long)(int)puVar1[(ulong)(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}

