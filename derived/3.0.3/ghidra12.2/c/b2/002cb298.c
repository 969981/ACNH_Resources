
void FUN_002cb298(long *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 long param_5)

{
  *param_1 = (long)(PTR_DAT_04bce278 + 0x10);
  FUN_002b4018(param_1 + 1);
  *(undefined1 *)(param_1 + 0x11) = param_3;
  *(undefined1 *)((long)param_1 + 0x89) = param_4;
  param_1[0x12] = 0;
  param_1[0x13] = param_5;
  return;
}

