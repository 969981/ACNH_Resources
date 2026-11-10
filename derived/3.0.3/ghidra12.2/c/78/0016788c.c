
void FUN_0016788c(byte *param_1,undefined4 *param_2)

{
  FUN_00168504(param_1,*param_2);
  if (*(char *)(param_2 + 2) != '\0') {
    *param_1 = *param_1 | 0x80;
  }
  param_1[4] = *(char *)(param_2 + 1) - 1;
  return;
}

