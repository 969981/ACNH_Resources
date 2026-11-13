
void FUN_0125477c(undefined8 *param_1)

{
  *(undefined2 *)((long)param_1 + 0x45) = 0xff00;
  *param_1 = 0xfffe;
  FUN_0277d4ac();
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0x2400000000;
  *(undefined1 *)((long)param_1 + 0x47) = 2;
  *(undefined1 *)((long)param_1 + 0x44) = 0xff;
  return;
}

