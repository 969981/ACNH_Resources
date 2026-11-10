
void FUN_001fa220(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *param_1 = &PTR_FUN_0483dbf0;
  return;
}

