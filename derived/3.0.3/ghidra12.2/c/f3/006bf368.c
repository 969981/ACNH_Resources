
void FUN_006bf368(undefined8 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x90) = 0x700000;
  *(undefined4 *)(param_2 + 0x7c) = 0x200000;
  *(undefined8 *)(param_2 + 0x2c) = 0x64000000fa0;
  *(undefined8 *)(param_2 + 0x34) = 0x2bc00000400;
  *(undefined8 *)(param_2 + 0x3c) = 0x500000046;
  *(undefined8 *)(param_2 + 0x44) = 0xa00000005;
  *(undefined1 **)(param_2 + 0x4c) = &DAT_100000005;
  *(undefined2 *)(param_2 + 0x80) = 1;
  return;
}

