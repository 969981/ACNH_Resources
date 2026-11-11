
void FUN_003cba00(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x68] = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_003cb9e8(param_1 + 0xe8);
  return;
}

