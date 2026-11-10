
undefined8 FUN_00114030(undefined1 *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)CONCAT11(*param_1,param_1[1]);
  if (uVar1 < 0x100) {
    if (uVar1 - 0x30 < 10) {
      return 2;
    }
  }
  else if (0x3e < uVar1 - 0xff61) {
    if (uVar1 - 0xff10 < 10) {
      return 0;
    }
    if ((uVar1 | 2) == 0xff0e) {
      return 1;
    }
    if (uVar1 - 0x3041 < 0x53) {
      return 4;
    }
    if (uVar1 - 0x30a1 < 0x56) {
      return 5;
    }
    if (0xff00 < uVar1) {
      if ((uVar1 - 0xff01 < 0x1f) && ((1 << (ulong)(uVar1 - 0xff01 & 0x1f) & 0x50000021U) != 0)) {
        return 6;
      }
      if (uVar1 == 0xff5e) {
        return 6;
      }
      return 10;
    }
    if (uVar1 - 0x3001 < 2) {
      return 6;
    }
    if (uVar1 - 0x309b < 2) {
      return 6;
    }
    if (uVar1 - 0x30fb < 2) {
      return 6;
    }
    return 10;
  }
  if ((uVar1 | 2) == 0x2e) {
    return 3;
  }
  if ((0xff65 < uVar1) && (uVar1 != 0xff70)) {
    return 7;
  }
  if ((((uVar1 - 0xff61 < 0x3f) &&
       ((1L << ((ulong)(uVar1 - 0xff61) & 0x3f) & 0x6000000000008019U) != 0)) ||
      ((uVar1 < 0x40 && ((1L << ((ulong)uVar1 & 0x3f) & 0xa000004200000000U) != 0)))) ||
     (uVar1 == 0x7e)) {
    return 8;
  }
  return 9;
}

