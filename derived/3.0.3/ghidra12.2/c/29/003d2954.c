
undefined * FUN_003d2954(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 9 & 1) == 0) {
    return &DAT_04138aca;
  }
  return (undefined *)
         ((long)param_1 +
         (long)*(int *)((long)param_1 +
                       (ulong)param_1[((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) +
                                      ((ulong)(uVar1 >> 2) & 1) + ((ulong)(uVar1 >> 3) & 1) +
                                      ((ulong)(uVar1 >> 4) & 1) + ((ulong)(uVar1 >> 5) & 1) +
                                      ((ulong)(uVar1 >> 6) & 1) +
                                      ((ulong)(uVar1 >> 7) & 1) + ((ulong)(uVar1 >> 8) & 1) + 1] + 4
                       ) +
         (ulong)param_1[((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) +
                        ((ulong)(uVar1 >> 2) & 1) + ((ulong)(uVar1 >> 3) & 1) +
                        ((ulong)(uVar1 >> 4) & 1) + ((ulong)(uVar1 >> 5) & 1) +
                        ((ulong)(uVar1 >> 6) & 1) +
                        ((ulong)(uVar1 >> 7) & 1) + ((ulong)(uVar1 >> 8) & 1) + 1]);
}

