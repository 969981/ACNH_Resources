
void FUN_039c3ee0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = (long)&PTR_FUN_04b6ac78;
  FUN_039c3f70();
  FUN_038e31ec(param_1 + 0x82);
  FUN_038e31ec(param_1 + 0x78);
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x6b] = (long)puVar1;
  puVar2 = PTR_DAT_04bd1068;
  param_1[0x66] = (long)puVar1;
  param_1[0x61] = (long)puVar1;
  param_1[0x55] = (long)puVar1;
  param_1[0x51] = (long)puVar1;
  param_1[0x4d] = (long)puVar1;
  param_1[0x49] = (long)puVar1;
  param_1[0x45] = (long)puVar1;
  param_1[0x41] = (long)puVar1;
  param_1[0x5b] = (long)(puVar2 + 0x10);
  puVar1 = PTR_DAT_04bd1070;
  param_1[0x3b] = (long)(puVar2 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

