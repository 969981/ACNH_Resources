
void FUN_003f7294(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd2738 + 0x10);
  if ((long *)param_1[0x74] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x74] + 8))();
  }
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  if (param_1[0x6f] != 0) {
    FUN_00187e4c();
  }
  FUN_003f7310(param_1 + 0x5e);
  FUN_01c68d20(param_1 + 0x37);
  FUN_001fbac0(param_1 + 0x1f);
  FUN_0019a368(param_1);
  return;
}

