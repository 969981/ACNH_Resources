
undefined2 FUN_003c97fc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  return *(undefined2 *)
          (param_1 + 4 +
          (((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) +
          ((ulong)(uVar1 >> 2) & 1) + ((ulong)(uVar1 >> 3) & 1)) * 4 + 6);
}

