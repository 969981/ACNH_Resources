
uint FUN_0043a090(int param_1)

{
  if ((param_1 - 9U & 0xff) < 0x18) {
    return 0x800013U >> (ulong)(param_1 - 9U & 0x1f) & 1;
  }
  return 0;
}

