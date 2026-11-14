
undefined8 FUN_01604720(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  short *psVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [31];
  undefined1 local_14d;
  undefined8 local_148;
  byte *local_140;
  undefined4 local_138;
  byte local_134 [31];
  undefined1 local_115;
  undefined1 local_35;
  
  local_14d = 0;
  local_16c[0] = 0;
  local_170 = 0x20;
  local_178 = local_16c;
  local_138 = 0x100;
  local_140 = local_134;
  local_35 = 0;
  local_180 = PTR_DAT_04bb3000 + 0x10;
  local_134[0] = 0;
  local_148 = &PTR_LAB_048fda60;
  (**(code **)(*param_1 + 0x58))(param_1,&local_148);
  (*(code *)local_148[3])(&local_148);
  bVar2 = *local_140;
  if (bVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0xffffffff;
    pbVar9 = local_140;
    do {
      pbVar9 = pbVar9 + 1;
      uVar7 = crc32b(uVar7,(uint)bVar2,0x4c11db7);
      bVar2 = *pbVar9;
    } while (bVar2 != 0);
    uVar7 = ~uVar7;
  }
  FUN_038d1270(&local_180,&DAT_04074ae0,uVar7);
  (**(code **)(local_180 + 0x18))(&local_180);
  local_148 = (undefined **)((ulong)local_148 & 0xffffff0000000000);
  uVar5 = FUN_03ea9450(param_2,&local_148,local_178);
  if (((uVar5 & 1) == 0) || (local_148._4_1_ != -0x60)) {
    local_115 = 0;
    local_140 = local_134;
    local_138 = 0x20;
    local_134[0] = 0;
    local_148 = &PTR_LAB_048fd9d0;
    pbVar9 = (byte *)param_1[1];
    bVar2 = *pbVar9;
    if (bVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0xffffffff;
      do {
        pbVar9 = pbVar9 + 1;
        uVar7 = crc32b(uVar7,(uint)bVar2,0x4c11db7);
        bVar2 = *pbVar9;
      } while (bVar2 != 0);
      uVar7 = ~uVar7;
    }
    FUN_038d1270(&local_148,&DAT_04074ae0,uVar7);
    (*(code *)local_148[3])(&local_148);
    local_180 = (undefined *)((ulong)local_180 & 0xffffff0000000000);
    uVar5 = FUN_03ea9450(param_2,&local_180,local_140);
    if (((uVar5 & 1) == 0) || (local_180._4_1_ != -0x2f)) {
      return 0;
    }
    if ((int)local_180 != 0) {
      return 1;
    }
  }
  else {
    psVar8 = (short *)*param_2;
    uVar1 = *(uint *)(psVar8 + 4);
    uVar7 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    if (*psVar8 != 0x5942) {
      uVar7 = uVar1;
    }
    uVar5 = (ulong)uVar7;
    uVar1 = *(uint *)((long)psVar8 + (long)(int)local_148 * 4 + uVar5 + 4);
    uVar7 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    if (*psVar8 != 0x5942) {
      uVar7 = uVar1;
    }
    if ((undefined1 *)((long)psVar8 + uVar7 + uVar5) != &DAT_049b1d08) {
      uVar10 = 0;
      bVar4 = true;
      while( true ) {
        cVar3 = *(char *)((long)psVar8 + uVar10 + uVar5 + uVar7);
        if (cVar3 != (&DAT_049b1d08)[uVar10]) {
          return 1;
        }
        if (cVar3 == '\0') break;
        bVar4 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
        if (uVar10 == 0x80001) {
          return 1;
        }
      }
      if (!bVar4) {
        return 1;
      }
    }
  }
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(param_1);
  *puVar6 = 0;
  return 1;
}

