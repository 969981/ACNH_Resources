
void FUN_03bb3d90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b7a648;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  return;
}

