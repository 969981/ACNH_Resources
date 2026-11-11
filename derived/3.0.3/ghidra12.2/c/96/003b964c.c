
undefined2 FUN_003b964c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 3 & 1) == 0) {
    return 0xffff;
  }
  return *(undefined2 *)
          (param_1 + 0x14 +
          ((ulong)uVar1 & 4) + (((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1)) * 4 + 6);
}

