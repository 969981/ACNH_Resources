
undefined4 FUN_003d2844(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return 0x40;
  }
  return *(undefined4 *)(param_1 + 4);
}

