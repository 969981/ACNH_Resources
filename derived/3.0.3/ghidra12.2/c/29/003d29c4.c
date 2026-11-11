
uint FUN_003d29c4(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 2 & 1) == 0) {
    return 0x40;
  }
  return param_1[((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) + 1];
}

