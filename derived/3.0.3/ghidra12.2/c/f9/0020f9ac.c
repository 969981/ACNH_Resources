
void FUN_0020f9ac(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_35;
  undefined4 local_34;
  
  FUN_0019a2a8(param_1,2,&uStack_35);
  puVar1 = PTR_DAT_04bccd48;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = PTR_DAT_04bc0ec8;
  param_1[0x14] = (long)(puVar1 + 0xb0);
  param_1[0x19] = (long)(param_1 + 0x17);
  param_1[0x1a] = 0x10;
  param_1[0x16] = (long)(puVar2 + 0x10);
  FUN_0018b070(param_1 + 0x16,&DAT_0407ebb1,0xffffffffffffffff);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  puVar1 = PTR_DAT_04bcbc48 + 0x10;
  param_1[0x1c] = 0;
  param_1[0x1d] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1d] = (long)&PTR_FUN_04839418;
  param_1[0x21] = (long)(param_1 + 0x21);
  param_1[0x22] = (long)(param_1 + 0x21);
  local_34 = 0x80010001;
  FUN_0018aa70(param_1 + 0x28,&local_34);
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_001efe2c(param_1 + 0x2f);
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = (long)(param_1 + 0x36);
  param_1[0x39] = 0x10;
  FUN_0018b070(param_1 + 0x35,&DAT_0407ebb1,0xffffffffffffffff);
  param_1[0x3a] = 0;
  return;
}

