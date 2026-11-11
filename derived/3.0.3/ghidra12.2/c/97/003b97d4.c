
uint FUN_003b97d4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 0xc) >> 8;
}

