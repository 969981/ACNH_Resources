
byte FUN_001465b8(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 < 0x80) && (param_1 != 0x20)) {
    bVar1 = (&DAT_041014e8)[param_1] & 0x5f;
  }
  return bVar1;
}

