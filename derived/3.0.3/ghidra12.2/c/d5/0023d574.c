
ulong FUN_0023d574(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_198 [136];
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulong local_28;
  
  lVar1 = param_1 + 0x50;
  uVar2 = FUN_0021f720(lVar1);
  if ((uVar2 & 1) == 0) {
    local_f0 = (undefined **)((ulong)local_f0._4_4_ << 0x20);
    FUN_0021f618(auStack_198,lVar1,&local_f0);
    return (ulong)*(ushort *)(param_1 + 0x94) | (long)local_f0 << 0x20;
  }
  local_68 = *(undefined4 *)(param_1 + 0x90);
  local_78 = 0;
  uStack_70 = 0;
  local_64 = (uint)*(ushort *)(param_1 + 0x68);
  FUN_0021f764(auStack_198,lVar1,&local_78);
  memcpy(auStack_60,&local_78,0x10);
  param_1 = param_1 + 0x13c0;
  local_50 = FUN_0022bed8(param_1);
  local_4c = FUN_0022bed8(param_1);
  local_48 = FUN_0022bed8(param_1);
  local_44 = FUN_0022bed8(param_1);
  local_40 = FUN_0022bed8(param_1);
  local_3c = FUN_0022bed8(param_1);
  local_38 = FUN_0022bed8(param_1);
  local_34 = FUN_0022bed8(param_1);
  local_30 = FUN_0022bed8(param_1);
  local_2c = FUN_0022bed8(param_1);
  local_f0 = &PTR_LAB_048407f8;
  FUN_0022c538(auStack_198);
  FUN_0022c540(auStack_198,&local_f0,&local_78,0x10);
  FUN_0022c710(auStack_198,auStack_110,&local_68,0x40);
  memcpy(&local_28,auStack_110,8);
  return local_28;
}

