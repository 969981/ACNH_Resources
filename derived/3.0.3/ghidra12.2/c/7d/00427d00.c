
byte FUN_00427d00(byte *param_1)

{
  do {
    if ((*param_1 & 1) != 0) {
      if (param_1 == (byte *)0x0) {
        return 0;
      }
      return param_1[0x11] >> 1 & 1;
    }
    param_1 = *(byte **)(param_1 + 8);
  } while (param_1 != (byte *)0x0);
  return 0;
}

