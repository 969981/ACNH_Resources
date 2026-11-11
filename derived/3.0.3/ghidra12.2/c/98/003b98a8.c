
uint FUN_003b98a8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 >> 1 & 1) == 0) {
    return 0x40;
  }
  return ((uint *)(param_1 + 0xc))[((ulong)uVar1 & 1) + 1];
}

