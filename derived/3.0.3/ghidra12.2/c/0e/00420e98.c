
void FUN_00420e98(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bd2a68 + 0x10);
  param_1[7] = (long)puVar1;
  FUN_0018b1a0();
  puVar2 = PTR_DAT_04bd2a60;
  param_1[2] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_0018b1a0();
  FUN_00185ac4(param_1);
  return;
}

