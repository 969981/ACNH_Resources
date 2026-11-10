
undefined8 FUN_00149f24(long *param_1)

{
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((char)param_1[0x3c] == '\0') {
    FUN_001484c0();
    return 0;
  }
  return 8;
}

