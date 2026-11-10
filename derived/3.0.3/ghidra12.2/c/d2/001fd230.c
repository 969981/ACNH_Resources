
void FUN_001fd230(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcca38 + 0x10;
  param_1[0x12] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  *param_1 = (long)puVar1;
  FUN_0018b1a0();
  FUN_0019cd34(param_1 + 0xb);
  FUN_00196ce0(param_1 + 2);
  return;
}

