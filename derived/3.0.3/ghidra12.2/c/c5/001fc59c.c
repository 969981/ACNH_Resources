
void FUN_001fc59c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcca18 + 0x10);
  FUN_001fc600();
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  param_1[5] = 0;
  FUN_001a5cb0();
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    FUN_00187e4c();
  }
  *param_1 = (long)&PTR_LAB_04838fe8;
  return;
}

