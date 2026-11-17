
void FUN_03111330(long *param_1)

{
  *param_1 = (long)&PTR_LAB_04b01130;
  FUN_01be9eb8(param_1 + 0x45);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

