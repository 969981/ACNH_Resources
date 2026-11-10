
void FUN_002568c0(long *param_1,long param_2)

{
  FUN_002788f0();
  *param_1 = (long)(PTR_DAT_04bcd8f8 + 0x10);
  FUN_0021f4e0(param_1 + 0x23);
  FUN_0021f4e0(param_1 + 0x27);
  param_1[0x2b] = param_2;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  FUN_0021fef8(param_1 + 0x23);
  FUN_0021fef8(param_1 + 0x27);
  return;
}

