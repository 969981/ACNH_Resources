
uint FUN_003c9728(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 >> 2 & 1) == 0) {
    return 0x40;
  }
  return ((uint *)(param_1 + 4))[((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) + 1];
}

