
byte FUN_0132bf00(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  short *psVar6;
  byte *pbVar7;
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
  uint local_28;
  char local_24;
  
  lVar3 = (**(code **)(*param_1 + 0xf0))();
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
  bVar2 = *local_150;
  if (bVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar7 = local_150;
    do {
      pbVar7 = pbVar7 + 1;
      uVar5 = crc32b(uVar5,(uint)bVar2,0x4c11db7);
      bVar2 = *pbVar7;
    } while (bVar2 != 0);
    uVar5 = ~uVar5;
  }
  FUN_038d1270(&local_190,&DAT_04074ae0,uVar5);
  (**(code **)(local_190 + 0x18))(&local_190);
  local_158 = (undefined **)((ulong)local_158 & 0xffffff0000000000);
  uVar4 = FUN_03ea9450(param_2,&local_158,local_188);
  if (((uVar4 & 1) == 0) || (local_158._4_1_ != -0x5f)) {
    lVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
    local_125 = 0;
    local_150 = local_144;
    local_148 = 0x20;
    local_144[0] = 0;
    local_158 = (undefined **)(PTR_DAT_04bb3008 + 0x10);
    pbVar7 = (byte *)param_1[1];
    bVar2 = *pbVar7;
    if (bVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      do {
        pbVar7 = pbVar7 + 1;
        uVar5 = crc32b(uVar5,(uint)bVar2,0x4c11db7);
        bVar2 = *pbVar7;
      } while (bVar2 != 0);
      uVar5 = ~uVar5;
    }
    FUN_038d1270(&local_158,&DAT_04074ae0,uVar5);
    (**(code **)((long)local_158 + 0x18))(&local_158);
    local_28 = 0;
    local_24 = '\0';
    bVar2 = FUN_03ea9450(param_2,&local_28,local_150);
    bVar2 = bVar2 & local_24 == -0x5f;
    if (bVar2 != 0) {
      psVar6 = (short *)*param_2;
      uVar1 = *(uint *)((long)psVar6 + (ulong)local_28);
      uVar5 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (*psVar6 != 0x5942) {
        uVar5 = uVar1;
      }
      if (0xdfff < (int)uVar5) {
        uVar5 = 0xe000;
      }
      memcpy((void *)(lVar3 + 8),(void *)((long)psVar6 + (ulong)(local_28 + 4)),(long)(int)uVar5);
    }
  }
  else {
    psVar6 = (short *)*param_2;
    uVar1 = *(uint *)((long)psVar6 + ((ulong)local_158 & 0xffffffff));
    uVar5 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if (*psVar6 != 0x5942) {
      uVar5 = uVar1;
    }
    if (0xdfff < (int)uVar5) {
      uVar5 = 0xe000;
    }
    memcpy((void *)(lVar3 + 8),(void *)((long)psVar6 + (ulong)((int)local_158 + 4)),(long)(int)uVar5
          );
    bVar2 = 1;
  }
  return bVar2;
}

