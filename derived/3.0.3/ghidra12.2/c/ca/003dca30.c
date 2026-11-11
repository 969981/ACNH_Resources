
void FUN_003dca30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

