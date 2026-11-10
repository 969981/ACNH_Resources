
void FUN_00167768(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  param_1[2] = 0;
  return;
}

