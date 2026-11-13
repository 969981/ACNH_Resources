
bool FUN_01469e80(long param_1)

{
  if ((*(uint *)(param_1 + 0x3a8) >> 1 & 1) == 0) {
    return (*(uint *)(param_1 + 0x280) & 0xfffffffe) == 2;
  }
  return true;
}

