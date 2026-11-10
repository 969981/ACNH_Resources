
void FUN_00167644(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *param_1 = 4;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined2 *)((long)param_1 + 0xc) = 3;
  return;
}

