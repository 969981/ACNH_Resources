
void FUN_00215950(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 *puStack_28;
  
  *(undefined4 *)(param_1 + 0x160) = param_2;
  *(undefined4 *)(param_1 + 0x164) = param_3;
  *(undefined8 *)(param_1 + 0x168) = param_4;
  *(undefined4 *)(param_1 + 0x178) = param_6;
  FUN_00187810(&local_40);
  puVar1 = PTR_DAT_04bcc0c0;
  *(undefined8 *)(param_1 + 0x230) = param_5;
  puStack_38 = PTR_FUN_04bcce40;
  local_30 = 0;
  puStack_28 = &DAT_0407ebb1;
  *(undefined **)(param_1 + 0x180) = local_40;
  local_40 = puVar1 + 0x10;
  FUN_0019a704(param_1,&local_40);
  return;
}

