
void FUN_00216500(long *param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 *puStack_28;
  
  FUN_0019a2a8(param_1,2,&local_40);
  puVar1 = PTR_DAT_04bcbc48;
  *param_1 = (long)(PTR_DAT_04bcce70 + 0x10);
  param_1[0x16] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  puVar1 = PTR_DAT_04bcc068;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x16] = (long)(puVar1 + 0x10);
  param_1[0x1a] = (long)(param_1 + 0x1a);
  param_1[0x1b] = (long)(param_1 + 0x1a);
  local_40 = (undefined *)CONCAT44(local_40._4_4_,0x80010001);
  FUN_0018aa70(param_1 + 0x21,&local_40);
  param_1[0x24] = 0;
  puVar1 = PTR_DAT_04bcc0c0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  puStack_38 = PTR_FUN_04bcce78;
  param_1[0x13] = 0x1000;
  param_1[0x14] = param_3;
  *(undefined4 *)(param_1 + 0x15) = param_2;
  local_40 = puVar1 + 0x10;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  local_30 = 0;
  puStack_28 = &DAT_0407ebb1;
  FUN_0019a704(param_1,&local_40);
  return;
}

