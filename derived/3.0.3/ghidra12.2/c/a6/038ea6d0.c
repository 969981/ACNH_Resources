
void FUN_038ea6d0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04b658a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  return;
}

