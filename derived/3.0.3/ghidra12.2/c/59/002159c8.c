
void FUN_002159c8(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 *puStack_28;
  
  *(undefined4 *)(param_1 + 0x160) = param_2;
  *(undefined4 *)(param_1 + 0x164) = param_3;
  *(undefined8 *)(param_1 + 0x168) = param_4;
  *(undefined4 *)(param_1 + 0x178) = param_7;
  FUN_00187810(&local_40);
  *(undefined8 *)(param_1 + 0x218) = param_5;
  *(undefined **)(param_1 + 0x180) = local_40;
  FUN_0018a58c(param_1 + 0x1f0,param_6);
  local_40 = PTR_DAT_04bcc0c0 + 0x10;
  local_30 = 0;
  puStack_28 = &DAT_0407ebb1;
  puStack_38 = PTR_LAB_04bcce48;
  FUN_0019a704(param_1,&local_40);
  return;
}

