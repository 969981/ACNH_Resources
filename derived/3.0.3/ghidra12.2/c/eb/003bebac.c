
void FUN_003bebac(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *param_1 = 0x40c8000000000000;
  *(undefined2 *)((long)param_1 + 0xc) = 1;
  return;
}

