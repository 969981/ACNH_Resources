
void FUN_006a1118(undefined8 *param_1)

{
  FUN_0069c2bc();
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined2 *)((long)param_1 + 0x28c) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *param_1 = &PTR_FUN_048f7030;
  return;
}

