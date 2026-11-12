
undefined8 FUN_00728720(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *local_190;
  undefined1 *local_188;
  undefined4 local_180;
  undefined1 local_17c [31];
  undefined1 local_15d;
  undefined8 local_158;
  byte *local_150;
  undefined4 local_148;
  byte local_144 [31];
  undefined1 local_125;
  undefined1 local_45;
  int local_28;
  byte local_24;
  
  uVar2 = (**(code **)(*param_1 + 0xf0))();
  local_15d = 0;
  local_17c[0] = 0;
  local_180 = 0x20;
  local_188 = local_17c;
  local_148 = 0x100;
  local_150 = local_144;
  local_45 = 0;
  local_190 = PTR_DAT_04bb3000 + 0x10;
  local_144[0] = 0;
  local_158 = &PTR_LAB_048fda60;
  (**(code **)(*param_1 + 0x58))(param_1,&local_158);
  (*(code *)local_158[3])(&local_158);
  bVar1 = *local_150;
  if (bVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
    pbVar5 = local_150;
    do {
      pbVar5 = pbVar5 + 1;
      uVar4 = crc32b(uVar4,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar5;
    } while (bVar1 != 0);
    uVar4 = ~uVar4;
  }
  FUN_038d1270(&local_190,&DAT_04074ae0,uVar4);
  (**(code **)(local_190 + 0x18))(&local_190);
  local_158 = (undefined **)((ulong)local_158 & 0xffffff0000000000);
  uVar3 = FUN_03ea9450(param_2,&local_158,local_188);
  if (((uVar3 & 1) == 0) || ((local_158._4_1_ & 0xfe) != 0xd0)) {
    uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    local_125 = 0;
    local_150 = local_144;
    local_148 = 0x20;
    local_144[0] = 0;
    local_158 = (undefined **)(PTR_DAT_04bb3008 + 0x10);
    pbVar5 = (byte *)param_1[1];
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
      do {
        pbVar5 = pbVar5 + 1;
        uVar4 = crc32b(uVar4,(uint)bVar1,0x4c11db7);
        bVar1 = *pbVar5;
      } while (bVar1 != 0);
      uVar4 = ~uVar4;
    }
    FUN_038d1270(&local_158,&DAT_04074ae0,uVar4);
    (**(code **)((long)local_158 + 0x18))(&local_158);
    local_28 = 0;
    local_24 = 0;
    uVar3 = FUN_03ea9450(param_2,&local_28,local_150);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if ((local_24 & 0xfe) != 0xd0) {
      return 0;
    }
    local_158._0_4_ = local_28;
  }
  else {
  }
  *(bool *)uVar2 = (int)local_158 != 0;
  return 1;
}

