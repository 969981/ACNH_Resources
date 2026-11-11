
undefined2 FUN_003d2a18(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 2 & 1) == 0) {
    return 0;
  }
  return *(undefined2 *)((long)param_1 + (((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1)) * 4 + 6);
}

