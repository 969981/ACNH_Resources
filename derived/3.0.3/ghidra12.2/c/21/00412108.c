
void FUN_00412108(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uStack_25;
  undefined4 local_24;
  
  FUN_0019a2a8(param_1,2,&uStack_25);
  *param_1 = (long)(PTR_DAT_04bd2af0 + 0x10);
  puVar1 = PTR_DAT_04bcbc48 + 0x10;
  param_1[0x14] = 0x1000000000;
  param_1[0x15] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x16) = 1;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  puVar1 = PTR_DAT_04bcc068;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1f] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x15] = (long)(puVar1 + 0x10);
  param_1[0x19] = (long)(param_1 + 0x19);
  param_1[0x1a] = (long)(param_1 + 0x19);
  local_24 = 0x80010001;
  FUN_0018aa70(param_1 + 0x20,&local_24);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = (long)(PTR_DAT_04bd2a48 + 0x10);
  param_1[0x29] = 0;
  FUN_0040e024(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  param_1[0x2e] = (long)(param_1 + 0x2c);
  param_1[0x2f] = 0x10;
  puVar3 = PTR_DAT_04bd2a58;
  puVar1 = puVar1 + 0x10;
  param_1[0x2b] = (long)puVar1;
  puVar2 = PTR_DAT_04bd2a50;
  param_1[0x30] = 0;
  param_1[0x31] = (long)(puVar3 + 0x10);
  param_1[0x34] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = (long)(puVar2 + 0x10);
  param_1[0x37] = (long)(param_1 + 0x35);
  param_1[0x38] = 0x10;
  FUN_0018a58c(param_1 + 0x34,&DAT_0407ebb1);
  puVar2 = PTR_DAT_04bd2a60;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = (long)puVar1;
  param_1[0x3e] = (long)(param_1 + 0x3c);
  param_1[0x3f] = 0x10;
  param_1[0x39] = (long)(puVar2 + 0x10);
  FUN_0018a58c(param_1 + 0x3b,&DAT_0407ebb1);
  param_1[0x40] = (long)puVar1;
  puVar1 = PTR_DAT_04bd2a68;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x44] = 0x10;
  param_1[0x39] = (long)(puVar1 + 0x10);
  param_1[0x43] = (long)(param_1 + 0x41);
  FUN_0018a58c(param_1 + 0x40,&DAT_0407ebb1);
  puVar1 = PTR_DAT_04bd2af8;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x45] = (long)(puVar1 + 0x10);
  return;
}

