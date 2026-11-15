
void FUN_01ee18a4(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0xfffe;
  FUN_0277d4ac();
  param_1[1] = 0xfffe;
  FUN_0277d4ac();
  param_1[2] = 0xfffe;
  FUN_0277d4ac(param_1 + 2);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}

