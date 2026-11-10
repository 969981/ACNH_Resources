
void FUN_0026a5c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_b8;
  ErrorResultVariant aEStack_b4 [12];
  undefined *local_a8;
  undefined8 *puStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined1 local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_14;
  
  local_8c = 0;
  local_84 = 0;
  local_98 = 0x50;
  puStack_a0 = &local_8c;
  local_7c = 0;
  local_74 = 0;
  local_a8 = PTR_DAT_04bcb818 + 0x10;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_94 = 0;
  local_38 = 0xff;
  local_30 = 0;
  uStack_28 = 0;
  iVar1 = FUN_00227cb0(param_3);
  if (((((iVar1 == 0) && (iVar1 = FUN_00227d94(param_3), iVar1 == 0)) &&
       (*(char *)(param_3 + 0x70) == -1)) || (uVar2 = FUN_00227cb0(param_3), 0x14 < uVar2)) ||
     ((iVar1 = FUN_00227cb0(param_3), iVar1 != 0 &&
      ((iVar1 = FUN_00227d94(param_3), iVar1 != 1 || (*(char *)(param_3 + 0x70) == -1)))))) {
    local_b8 = 0x10c07;
  }
  else {
    local_b8 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_b4,(Result *)&local_14);
  FUN_002296c4(param_1,&local_b8);
  return;
}

