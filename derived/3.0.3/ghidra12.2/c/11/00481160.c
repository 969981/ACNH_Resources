
void FUN_00481160(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_0043bce0(param_1 + 0x20,"HavokWorkerThread",0xffffffff);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

