
undefined4 FUN_003c96f0(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return 0x3c;
  }
  return *(undefined4 *)(param_1 + 8);
}

