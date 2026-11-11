
void FUN_0040c130(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bd2988 + 0x10);
  param_1[0x15] = (long)puVar1;
  FUN_0018b1a0();
  puVar2 = PTR_DAT_04bc13b0;
  param_1[0xb] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_0018b1a0();
  param_1[6] = (long)puVar1;
  FUN_0018b1a0();
  FUN_002021d8(param_1);
  FUN_00185ac4(param_1);
  return;
}

