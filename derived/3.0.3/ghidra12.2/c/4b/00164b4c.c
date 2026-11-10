
void FUN_00164b4c(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_00143300(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_00143300(param_1);
  return;
}

