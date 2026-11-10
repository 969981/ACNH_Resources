
void FUN_00239150(long *param_1)

{
  FUN_002788f0();
  *param_1 = (long)(PTR_DAT_04bcd3e0 + 0x10);
  FUN_00220ebc(param_1 + 0x23);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if (*(char *)((long)param_1 + 0xc4) == '\0') {
    return;
  }
  memset(param_1 + 0x2c,0,0x40);
  return;
}

