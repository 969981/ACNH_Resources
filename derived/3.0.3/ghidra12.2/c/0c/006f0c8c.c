
byte FUN_006f0c8c(uint param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = param_1 + 0x5400 >> 2 & 0x3fff;
  if (uVar1 < 0xae9) {
    uVar1 = param_1 + 0x5400 + (uVar1 / 7) * -0x1c & 0xffff;
    return uVar1 != 0 & (uVar1 != 8 | param_2 ^ 1);
  }
  if ((9 < (param_1 - 0x30 & 0xffff)) && (9 < (param_1 + 0xf0 & 0xffff))) {
    return 1;
  }
  if ((param_2 & 1) == 0) {
    bVar2 = 0;
    if ((0x39 < (param_1 & 0xffff)) || ((1L << ((ulong)param_1 & 0x3f) & 0x234000000000000U) == 0))
    {
      uVar1 = (param_1 & 0xffff) - 0xff12;
      if (7 < uVar1) {
        return 1;
      }
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x8dU) == 0) {
        return 1;
      }
    }
  }
  else {
    bVar2 = 1;
    if (((0x36 < (param_1 & 0xffff)) || ((1L << ((ulong)param_1 & 0x3f) & 0x49000000000000U) == 0))
       && ((uVar1 = (param_1 & 0xffff) - 0xff10, 6 < uVar1 ||
           ((1 << (ulong)(uVar1 & 0x1f) & 0x49U) == 0)))) {
      return 0;
    }
  }
  return bVar2;
}

