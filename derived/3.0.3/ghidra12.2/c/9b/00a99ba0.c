
byte FUN_00a99ba0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  uint uVar5;
  byte *pbVar6;
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
  undefined4 local_28;
  char local_24;
  
  puVar2 = (undefined1 *)(**(code **)(*param_1 + 0xf0))();
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
    uVar5 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar6 = local_150;
    do {
      pbVar6 = pbVar6 + 1;
      uVar5 = crc32b(uVar5,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar6;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
  }
  FUN_038d1270(&local_190,&DAT_04074ae0,uVar5);
  (**(code **)(local_190 + 0x18))(&local_190);
  local_158 = (undefined **)((ulong)local_158 & 0xffffff0000000000);
  uVar3 = FUN_03ea9450(param_2,&local_158,local_188);
  if (((uVar3 & 1) == 0) || (local_158._4_1_ != -0x2f)) {
    puVar2 = (undefined1 *)(**(code **)(*param_1 + 0xf0))(param_1);
    local_125 = 0;
    local_150 = local_144;
    local_148 = 0x20;
    local_144[0] = 0;
    local_158 = (undefined **)(PTR_DAT_04bb3008 + 0x10);
    pbVar6 = (byte *)param_1[1];
    bVar1 = *pbVar6;
    if (bVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      do {
        pbVar6 = pbVar6 + 1;
        uVar5 = crc32b(uVar5,(uint)bVar1,0x4c11db7);
        bVar1 = *pbVar6;
      } while (bVar1 != 0);
      uVar5 = ~uVar5;
    }
    FUN_038d1270(&local_158,&DAT_04074ae0,uVar5);
    (**(code **)((long)local_158 + 0x18))(&local_158);
    local_28 = 0;
    local_24 = '\0';
    bVar1 = FUN_03ea9450(param_2,&local_28,local_150);
    bVar1 = bVar1 & local_24 == -0x2f;
    if (bVar1 == 0) {
      return 0;
    }
    uVar4 = (undefined1)local_28;
  }
  else {
    uVar4 = SUB81(local_158,0);
    bVar1 = 1;
  }
  *puVar2 = uVar4;
  return bVar1;
}

