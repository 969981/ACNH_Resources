
void FUN_00454fb0(undefined8 *param_1)

{
  *param_1 = 0x400000008;
  *(undefined2 *)(param_1 + 1) = 0x101;
  *(undefined1 *)((long)param_1 + 10) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}

