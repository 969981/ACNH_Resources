
byte FUN_00146594(uint param_1)

{
  if (param_1 < 0x80) {
    return (&DAT_041014e8)[param_1] & 0x44;
  }
  return 0;
}

