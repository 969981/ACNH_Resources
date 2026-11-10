
void FUN_00210e74(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bccd68 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  FUN_0019c210();
  FUN_002148d8(param_1 + 8,param_1[9]);
  FUN_0019c5fc(param_1 + 3);
  *param_1 = (long)&PTR_LAB_04838fe8;
  return;
}

