
void FUN_001944f8(long *param_1,undefined4 param_2)

{
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = param_2;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = (long)&PTR_FUN_04839620;
  *(undefined2 *)(param_1 + 0xc) = 0x100;
  return;
}

