
bool FUN_003e04b0(uint param_1)

{
  if (param_1 < 6) {
    return (*(uint *)(&DAT_041390e8 + (long)(int)param_1 * 4) & (DAT_04c11a88 ^ 0xffffffff)) == 0;
  }
  return true;
}

