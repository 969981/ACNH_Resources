
uint FUN_003b9910(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 >> 1 & 1) == 0) {
    return 0;
  }
  return ((uint *)(param_1 + 8))[((ulong)uVar1 & 1) + 1];
}

