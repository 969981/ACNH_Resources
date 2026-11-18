
void FUN_032593b0(undefined8 *param_1)

{
  DAT_05725868 = 0;
  *param_1 = &PTR_LAB_04aacd10;
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

