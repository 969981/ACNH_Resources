
void FUN_00214804(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bccc18 + 0x10);
  param_1[0x17] = (long)puVar1;
  FUN_0018b1a0();
  param_1[0x11] = (long)puVar1;
  FUN_0018b1a0();
  FUN_0018ac30(param_1 + 6);
  FUN_0019c5fc(param_1 + 2);
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  return;
}

