
void FUN_001c3bc4(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 **)(param_1 + 0x20) = &DAT_0483c278;
  *(undefined2 *)(param_1 + 0x28) = 1;
  return;
}

