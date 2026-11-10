
void FUN_00187b30(undefined8 *param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_04838a90;
  return;
}

