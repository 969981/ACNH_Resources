
uint FUN_003d29ec(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 2 & 1) == 0) {
    return 0;
  }
  return param_1[((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) + 1] >> 8;
}

