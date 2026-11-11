
void FUN_0041cef4(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bd2bf8 + 0x10);
  param_1[7] = (long)puVar1;
  FUN_0018b1a0();
  *param_1 = (long)(PTR_DAT_04bd2a60 + 0x10);
  param_1[2] = (long)puVar1;
  FUN_0018b1a0(param_1 + 2);
  return;
}

