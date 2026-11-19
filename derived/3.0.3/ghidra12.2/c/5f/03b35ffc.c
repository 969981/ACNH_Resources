
void FUN_03b35ffc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b75c08;
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 8))();
    param_1[0x26] = 0;
  }
  FUN_00398f80(param_1);
  return;
}

