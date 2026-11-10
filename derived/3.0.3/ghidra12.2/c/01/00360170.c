
byte FUN_00360170(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x10) + 0x1c) & 1;
}

