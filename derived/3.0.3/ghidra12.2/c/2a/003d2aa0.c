
uint FUN_003d2aa0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 >> 2 & 1) == 0) {
    return 0;
  }
  return ((uint *)(param_1 + 4))[((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) + 1] >> 8;
}

