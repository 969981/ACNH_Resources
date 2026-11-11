
void FUN_003bfd5c(undefined8 *param_1)

{
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 1) = 0x477fff00;
  *(undefined8 *)((long)param_1 + 0xc) = 0x477fff00;
  *(undefined1 *)(param_1 + 3) = 0x7f;
  *param_1 = 0xc462000000000000;
  return;
}

