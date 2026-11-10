
void FUN_00143598(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  nnosDestroyThread();
  if (*(long *)(param_1 + 0x1d0) != 0) {
    FUN_00143398();
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  FUN_00143300(param_1);
  return;
}

