
void FUN_004440c0(long *param_1,long param_2)

{
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = -0x7ffffffc00000000;
  *(undefined2 *)((long)param_1 + 0x52) = 1;
  param_1[0xb] = param_2;
  param_1[0xc] = (long)DAT_04c6f430;
  DAT_04c6f430 = param_1;
  return;
}

