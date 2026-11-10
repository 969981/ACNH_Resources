
void FUN_001fa61c(undefined1 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff00000000;
  param_1[0x30] = 1;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

