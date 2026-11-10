
undefined8 FUN_0016894c(byte *param_1,long param_2)

{
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    if (*(int *)(&DAT_041031c4 + (ulong)*param_1 * 4) == 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return 0;
}

