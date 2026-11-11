
undefined8 FUN_00426d90(byte *param_1)

{
  do {
    if ((*param_1 >> 1 & 1) != 0) {
      return *(undefined8 *)(param_1 + 0x18);
    }
    param_1 = *(byte **)(param_1 + 8);
  } while (param_1 != (byte *)0x0);
  return 0;
}

