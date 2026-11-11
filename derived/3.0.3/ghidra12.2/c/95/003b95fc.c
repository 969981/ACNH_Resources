
undefined1 FUN_003b95fc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 1 & 1) == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x14 + ((ulong)uVar1 & 1) * 4 + 5);
}

