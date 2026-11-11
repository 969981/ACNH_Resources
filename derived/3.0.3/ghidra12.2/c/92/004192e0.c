
void FUN_004192e0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd2c00 + 0x10);
  FUN_001efe40(param_1 + 0x30);
  param_1[0x2b] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0(param_1 + 0x2b);
  FUN_001976b0(param_1 + 0x18);
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    FUN_00187e4c();
  }
  FUN_0019a368(param_1);
  return;
}

