
uint FUN_003d2a58(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 >> 1 & 1) == 0) {
    return 0x60;
  }
  return ((uint *)(param_1 + 4))[((ulong)uVar1 & 1) + 1];
}

