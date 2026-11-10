
void FUN_0030f098(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bceb40 + 0x10);
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
    param_1[0x12] = 0;
  }
  FUN_00202110(param_1 + 0x13);
  thunk_FUN_00199388(param_1);
  FUN_00185ac4(param_1);
  return;
}

