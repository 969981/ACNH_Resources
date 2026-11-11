
void FUN_003f0e1c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_04bd2608 + 0x10);
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    FUN_00187e4c();
  }
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_1[0xc] = (long)puVar1;
  FUN_0018b1a0();
  param_1[7] = (long)puVar1;
  FUN_0018b1a0();
  param_1[2] = (long)puVar1;
  FUN_0018b1a0(param_1 + 2);
  return;
}

