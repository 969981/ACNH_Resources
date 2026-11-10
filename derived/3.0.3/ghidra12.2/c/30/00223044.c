
void FUN_00223044(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  FUN_002282f0(param_1 + 2);
  return;
}

