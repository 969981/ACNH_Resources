
void FUN_03c96004(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd1cb0 + 0x10);
  if ((long *)param_1[0x20] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20] + 8))();
    param_1[0x20] = 0;
  }
  FUN_003834dc(param_1);
  return;
}

