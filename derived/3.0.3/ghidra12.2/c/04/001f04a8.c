
void FUN_001f04a8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcc888 + 0x10);
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 8))();
    DAT_04c5ea30 = DAT_04c5ea30 + -1;
    if (DAT_04c5ea38 != (long *)0x0) {
      (**(code **)(*DAT_04c5ea38 + 0x18))();
    }
    param_1[0x15] = 0;
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    FUN_00187e4c();
  }
  param_1[0x16] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0();
  FUN_0019a368(param_1);
  return;
}

