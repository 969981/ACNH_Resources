
void FUN_00167594(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  *(undefined1 *)((long)param_1 + 0xc) = param_3;
  *(undefined1 *)((long)param_1 + 0xd) = param_4;
  *(undefined4 *)(param_1 + 1) = param_5;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  return;
}

