
void FUN_03365fe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b20688;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  FUN_03368b04();
  return;
}

