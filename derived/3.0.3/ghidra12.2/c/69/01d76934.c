
void FUN_01d76934(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_04bc13a0 + 0x10);
  FUN_0019d9e8(param_1 + 0x15);
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bc13b0 + 0x10);
  param_1[0xb] = (long)puVar1;
  FUN_0018b1a0();
  param_1[6] = (long)puVar1;
  FUN_0018b1a0();
  FUN_002021d8(param_1);
  FUN_00185ac4(param_1);
  return;
}

