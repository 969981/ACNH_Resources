
void FUN_0041cf48(long *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 uStack_25;
  undefined4 local_24;
  
  FUN_0019a2a8(param_1,2,&uStack_25);
  puVar2 = PTR_DAT_04bd2c68;
  *param_1 = (long)(PTR_DAT_04bd2c60 + 0x10);
  param_1[0x14] = param_2;
  param_1[0x15] = (long)(puVar2 + 0x10);
  lVar3 = *(long *)(param_3 + 8);
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  param_1[0x1a] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  *(undefined4 *)(param_1 + 0x17) = uVar1;
  param_1[0x16] = lVar3;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = (long)(param_1 + 0x1b);
  param_1[0x1e] = 0x10;
  param_1[0x18] = (long)(PTR_DAT_04bd2a60 + 0x10);
  param_1[0x19] = 0;
  FUN_0018a58c(param_1 + 0x1a,&DAT_0407ebb1);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  puVar2 = PTR_DAT_04bcbc48;
  param_1[0x18] = (long)(PTR_DAT_04bd2c70 + 0x10);
  param_1[0x20] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  puVar2 = PTR_DAT_04bcc068;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x20] = (long)(puVar2 + 0x10);
  param_1[0x24] = (long)(param_1 + 0x24);
  param_1[0x25] = (long)(param_1 + 0x24);
  local_24 = 0x80010001;
  FUN_0018aa70(param_1 + 0x2b,&local_24);
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return;
}

