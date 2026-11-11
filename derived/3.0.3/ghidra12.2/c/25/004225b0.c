
void FUN_004225b0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = param_1 + 2;
  param_1[1] = 0x8000008000000001;
  return;
}

