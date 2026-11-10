
void FUN_001abf78(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bcc2d8 + 0x10);
  param_1[7] = (long)puVar1;
  FUN_0018b1a0();
  param_1[1] = (long)puVar1;
  FUN_0018b1a0(param_1 + 1);
  return;
}

