
uint FUN_0023e128(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_198 [136];
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  uint local_60;
  undefined1 auStack_5c [16];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  lVar1 = param_1 + 0x50;
  uVar2 = FUN_0021f720(lVar1);
  if ((uVar2 & 1) == 0) {
    local_f0 = (undefined **)((ulong)local_f0._4_4_ << 0x20);
    FUN_0021f618(auStack_198,lVar1,&local_f0);
    return (uint)*(ushort *)(param_1 + 0x94) | (int)local_f0 << 0x10;
  }
  local_64 = *(undefined4 *)(param_1 + 0x90);
  local_60 = (uint)*(ushort *)(param_1 + 0x94);
  local_74 = 0;
  uStack_6c = 0;
  FUN_0021f764(auStack_198,lVar1,&local_74);
  memcpy(auStack_5c,&local_74,0x10);
  param_1 = param_1 + 0x13c0;
  local_4c = FUN_0022bed8(param_1);
  local_48 = FUN_0022bed8(param_1);
  local_44 = FUN_0022bed8(param_1);
  local_40 = FUN_0022bed8(param_1);
  local_3c = FUN_0022bed8(param_1);
  local_38 = FUN_0022bed8(param_1);
  local_34 = FUN_0022bed8(param_1);
  local_30 = FUN_0022bed8(param_1);
  local_2c = FUN_0022bed8(param_1);
  local_28 = FUN_0022bed8(param_1);
  local_f0 = &PTR_LAB_048407f8;
  FUN_0022c538(auStack_198);
  FUN_0022c540(auStack_198,&local_f0,&local_74,0x10);
  FUN_0022c710(auStack_198,auStack_110,&local_64,0x40);
  memcpy(&local_24,auStack_110,4);
  return local_24;
}

