
void FUN_00659030(undefined8 *param_1)

{
  FUN_00651bd0();
  *param_1 = &PTR_LAB_048e4f58;
  FUN_00651c20(param_1 + 3);
  param_1[0x34] = 0;
  param_1[0x35] = 0x8000000000000000;
  FUN_0043cbe0(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x36] = 0;
  *(undefined2 *)((long)param_1 + 0x1e4) = 0x100;
  return;
}

