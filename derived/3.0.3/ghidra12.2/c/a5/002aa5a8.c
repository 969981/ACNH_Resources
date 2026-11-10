
undefined4 FUN_002aa5a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 local_190;
  undefined8 local_188;
  undefined **local_170 [15];
  undefined1 auStack_f8 [136];
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_14;
  
  puVar1 = &local_190;
  FUN_0028d4cc(auStack_70);
  local_60 = FUN_0028d5d8(auStack_70);
  local_58 = FUN_0028d5d8(auStack_70);
  local_50 = FUN_0028d5d8(auStack_70);
  local_48 = FUN_0028d5d8(auStack_70);
  local_40 = FUN_0028d5d8(auStack_70);
  local_38 = FUN_0028d5d8(auStack_70);
  local_30 = FUN_0028d5d8(auStack_70);
  local_28 = FUN_0028d5d8(auStack_70);
  FUN_0022c538(auStack_f8);
  local_170[0] = &PTR_LAB_048407f8;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_190 = FUN_0028d5d8(auStack_70);
    local_188 = FUN_0028d5d8(auStack_70);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x10);
  }
  FUN_0022c540(auStack_f8,local_170,puVar1,0x10);
  FUN_0022c710(auStack_f8,&local_190,&local_60,0x40);
  memcpy(&local_14,&local_190,4);
  return local_14;
}

