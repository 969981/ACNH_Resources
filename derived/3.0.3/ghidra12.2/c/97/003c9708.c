
uint FUN_003c9708(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 >> 1 & 1) == 0) {
    return 0x7f;
  }
  return ((uint *)(param_1 + 4))[((ulong)uVar1 & 1) + 1];
}

