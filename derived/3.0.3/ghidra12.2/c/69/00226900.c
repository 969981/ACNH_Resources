
void FUN_00226900(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  return;
}

