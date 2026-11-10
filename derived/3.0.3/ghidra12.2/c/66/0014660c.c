
byte FUN_0014660c(uint param_1)

{
  if (param_1 < 0x80) {
    return (&DAT_041014e8)[param_1] & 1;
  }
  return 0;
}

