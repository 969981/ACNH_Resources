
void FUN_00461750(undefined4 *param_1)

{
  *param_1 = 0x1000001;
  *(undefined2 *)(param_1 + 1) = 0x101;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 10);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  return;
}

