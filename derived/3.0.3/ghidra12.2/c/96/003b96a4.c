
uint FUN_003b96a4(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 2 & 1) == 0) {
    return 0;
  }
  return ((uint *)(param_1 + 0x14))[((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) + 1] >> 8;
}

