
byte FUN_001465e8(uint param_1)

{
  if (param_1 < 0x80) {
    return (&DAT_041014e8)[param_1] & 3;
  }
  return 0;
}

