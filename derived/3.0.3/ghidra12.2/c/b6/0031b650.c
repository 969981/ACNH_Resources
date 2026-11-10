
void FUN_0031b650(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bced10 + 0x10);
  param_1[0x14] = (long)puVar1;
  FUN_0018b1a0();
  *param_1 = (long)(PTR_DAT_04bced08 + 0x10);
  FUN_00196ce0(param_1 + 0xd);
  puVar2 = PTR_DAT_04bcecc8;
  param_1[7] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_0018b1a0();
  FUN_00185ac4(param_1);
  return;
}

