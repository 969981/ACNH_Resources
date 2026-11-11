
undefined4 FUN_003b97bc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return 0x40;
  }
  return *(undefined4 *)(param_1 + 0xc);
}

