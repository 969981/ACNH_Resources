
byte FUN_00146528(uint param_1)

{
  if (param_1 < 0x80) {
    return (&DAT_041014e8)[param_1] & 8;
  }
  return 0;
}

