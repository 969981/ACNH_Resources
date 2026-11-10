
void FUN_003172b0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcec98 + 0x10);
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    FUN_00187e4c();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    FUN_00187e4c();
  }
  param_1[0xd] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0();
  FUN_0031b520(param_1);
  FUN_00185ac4(param_1);
  return;
}

