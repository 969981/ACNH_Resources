
undefined8 FUN_00168900(byte *param_1,long param_2)

{
  if (param_2 != 0) {
    if (*param_1 == 0x3a) {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
    }
    while (*(int *)(&DAT_041035c4 + (ulong)*param_1 * 4) != 0) {
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

