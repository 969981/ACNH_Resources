
byte FUN_00172b3c(long param_1)

{
  if (*(long *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  return *(byte *)(param_1 + 0xe4) >> 2 & 1;
}

