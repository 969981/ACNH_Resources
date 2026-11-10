
void FUN_001f6fd8(undefined8 *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 3) = param_2;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0483d6a8;
  return;
}

