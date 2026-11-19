
void FUN_03babe80(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04b7a498;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
    param_1[3] = 0;
  }
  return;
}

