
undefined4 FUN_003c9750(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 >> 3 & 1) == 0) {
    return 0x3f800000;
  }
  return *(undefined4 *)
          (param_1 + 4 +
          ((ulong)uVar1 & 4) + (((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1)) * 4 + 4);
}

