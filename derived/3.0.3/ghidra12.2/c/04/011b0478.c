
void FUN_011b0478(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = (long)&PTR_LAB_04985640;
  FUN_016101cc(param_1 + 0x7e);
  puVar1 = PTR_DAT_04bbb9b0 + 0x10;
  param_1[0x61] = (long)(PTR_DAT_04bbb868 + 0x10);
  puVar2 = PTR_DAT_04bbc1a0;
  *param_1 = (long)puVar1;
  param_1[0x51] = (long)(puVar2 + 0x10);
  return;
}

