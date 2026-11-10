
void FUN_001e0e3c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bcbef0 + 0x10);
  param_1[0x4c] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x4c);
  param_1[0x46] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x46);
  FUN_001f1c98(param_1 + 2);
  return;
}

