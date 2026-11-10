
void FUN_0030d814(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bceb10 + 0x10);
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[4] = 0;
  }
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  FUN_002045b0(param_1);
  return;
}

