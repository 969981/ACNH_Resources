
void FUN_03b33228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b75710;
  if ((long *)param_1[0x20] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20] + 8))();
    param_1[0x20] = 0;
  }
  FUN_003834dc(param_1);
  return;
}

