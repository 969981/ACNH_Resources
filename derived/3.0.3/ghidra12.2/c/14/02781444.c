
void FUN_02781444(undefined8 *param_1)

{
  *param_1 = 0x134b;
  FUN_0277d4ac();
  param_1[1] = 0x139b;
  FUN_0277d4ac();
  param_1[2] = 0xfffe;
  FUN_0277d4ac(param_1 + 2);
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}

