
void FUN_032da040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b1bd20;
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 8))();
  }
  FUN_032e25f0(param_1);
  return;
}

