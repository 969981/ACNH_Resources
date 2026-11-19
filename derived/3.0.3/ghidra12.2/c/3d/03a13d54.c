
void FUN_03a13d54(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **local_b8;
  undefined8 *puStack_b0;
  undefined **local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 local_45;
  
  FUN_0391e860();
  local_45 = 0;
  *param_1 = &PTR_LAB_04b6c660;
  local_88 = 0x40;
  param_1[6] = &PTR_LAB_04b6c748;
  local_84 = 0x64656c7469746e75;
  local_7c = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_a8 = &PTR_LAB_048f9770;
  pcStack_a0 = "ModelName";
  local_b8 = &PTR_LAB_048f9770;
  puStack_b0 = &DAT_0407c4ad;
  local_98 = puVar1;
  puStack_90 = &local_84;
  FUN_039127a0(param_1 + 0x22,&local_98,&local_a8,&local_b8,param_1);
  local_88 = 0x40;
  local_45 = 0;
  local_84 = 0x64656c7469746e75;
  local_7c = 0;
  local_a8 = &PTR_LAB_048f9770;
  pcStack_a0 = "BonePrefix";
  local_b8 = &PTR_LAB_048f9770;
  puStack_b0 = (undefined8 *)&DAT_04098f0f;
  local_98 = puVar1;
  puStack_90 = &local_84;
  FUN_039127a0(param_1 + 0x30,&local_98,&local_a8,&local_b8,param_1);
  local_88 = 0x40;
  local_45 = 0;
  local_84 = 0x64656c7469746e75;
  local_7c = 0;
  local_a8 = &PTR_LAB_048f9770;
  pcStack_a0 = "MaterialPrefix";
  local_b8 = &PTR_LAB_048f9770;
  puStack_b0 = (undefined8 *)&DAT_040e17f4;
  local_98 = puVar1;
  puStack_90 = &local_84;
  FUN_039127a0(param_1 + 0x3e,&local_98,&local_a8,&local_b8,param_1);
  return;
}

