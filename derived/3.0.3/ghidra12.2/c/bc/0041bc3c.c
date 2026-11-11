
void FUN_0041bc3c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd2b88 + 0x10;
  *param_1 = (long)(PTR_DAT_04bd2c48 + 0x10);
  param_1[0x31] = (long)puVar1;
  FUN_001dbfc8(param_1 + 0x35,param_1[0x36]);
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

