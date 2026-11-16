
ulong FUN_029bd4a0(ulong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((int)param_2 < 0) {
    if (uVar1 != 0x27) {
      if (uVar1 == 0x26) {
        return 0x27;
      }
      return param_1;
    }
  }
  else {
    if ((param_2 >> 5 & 1) != 0) {
      return 0x23;
    }
    if ((param_2 >> 6 & 1) != 0) {
      return 0x24;
    }
    if ((param_2 >> 7 & 1) != 0) {
      return 0x25;
    }
    if ((param_2 >> 8 & 1) == 0) {
      if ((param_2 >> 9 & 1) != 0) {
        return 0x27;
      }
      if ((param_2 >> 10 & 1) != 0) {
        return 0x28;
      }
      if ((param_2 >> 0xb & 1) != 0) {
        return 0x29;
      }
      if ((param_2 >> 0xc & 1) != 0) {
        return 0x2a;
      }
      if ((param_2 >> 0xd & 1) != 0) {
        return 0x2b;
      }
      if ((param_2 >> 0xe & 1) != 0) {
        return 0x2c;
      }
      if ((param_2 >> 0xf & 1) != 0) {
        return 0x2d;
      }
      if ((param_2 >> 0x10 & 1) != 0) {
        return 0x2e;
      }
      if ((param_2 >> 0x11 & 1) != 0) {
        return 0x2f;
      }
      if ((param_2 >> 0x12 & 1) != 0) {
        return 0x30;
      }
      if ((param_2 >> 0x13 & 1) != 0) {
        return 0x31;
      }
      if ((param_2 >> 0x14 & 1) != 0) {
        return 0x32;
      }
      if ((param_2 >> 0x15 & 1) != 0) {
        return 0x33;
      }
      if ((param_2 >> 0x16 & 1) != 0) {
        return 0x34;
      }
      if ((param_2 >> 0x17 & 1) != 0) {
        return 0x35;
      }
      if ((param_2 >> 0x18 & 1) != 0) {
        return 0x36;
      }
      if ((param_2 >> 0x19 & 1) != 0) {
        return 0x37;
      }
      if ((param_2 >> 0x1a & 1) != 0) {
        return 0x38;
      }
      if ((param_2 >> 0x1b & 1) != 0) {
        return 0x39;
      }
      if ((param_2 >> 0x1c & 1) != 0) {
        return 0x3a;
      }
      if ((param_2 & 0x20000000) != 0) {
        uVar1 = 0x3b;
      }
      return (ulong)uVar1;
    }
  }
  return 0x26;
}

