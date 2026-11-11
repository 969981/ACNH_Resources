
void FUN_003f614c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd26e8 + 0x10);
  if ((long *)param_1[0x6e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6e] + 8))();
  }
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  if (param_1[0x69] != 0) {
    FUN_00187e4c();
  }
  FUN_003f61c0(param_1 + 0x59);
  FUN_003f62b0(param_1 + 0x37);
  FUN_001fbac0(param_1 + 0x1f);
  FUN_0019a368(param_1);
  return;
}

