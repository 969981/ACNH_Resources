
undefined4 FUN_003d2a40(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return 0x40;
  }
  return *(undefined4 *)(param_1 + 8);
}

