
void FUN_03c96794(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd1cc8 + 0x10);
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 8))();
    param_1[0x26] = 0;
  }
  FUN_00398f80(param_1);
  return;
}

