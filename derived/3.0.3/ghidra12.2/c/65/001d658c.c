
void FUN_001d658c(long param_1,undefined2 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x30) = 1;
  *(undefined2 *)(param_1 + 0x40) = 1;
  *(undefined2 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 **)(param_1 + 0x28) = &DAT_0483c278;
  *(undefined8 **)(param_1 + 0x38) = &DAT_0483c278;
  *(undefined8 **)(param_1 + 0x48) = &DAT_0483c278;
  return;
}

