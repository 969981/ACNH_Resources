
void FUN_0025eb10(long *param_1)

{
  *param_1 = DAT_04bcd708 + 0x10;
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)param_1[0x12] + 0x1a0))();
    param_1[0x11] = 0;
  }
  param_1[0x12] = 0;
  FUN_00220f6c(param_1 + 0xb);
  thunk_FUN_00221120(param_1);
  return;
}

