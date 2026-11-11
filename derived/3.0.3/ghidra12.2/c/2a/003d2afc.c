
undefined * FUN_003d2afc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 >> 9 & 1) == 0) {
    return &DAT_04138aca;
  }
  param_1 = param_1 + (ulong)((uint *)(param_1 + 4))
                             [((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) +
                              ((ulong)(uVar1 >> 2) & 1) + ((ulong)(uVar1 >> 3) & 1) +
                              ((ulong)(uVar1 >> 4) & 1) + ((ulong)(uVar1 >> 5) & 1) +
                              ((ulong)(uVar1 >> 6) & 1) +
                              ((ulong)(uVar1 >> 7) & 1) + ((ulong)(uVar1 >> 8) & 1) + 1];
  return (undefined *)(param_1 + *(int *)(param_1 + 4));
}

