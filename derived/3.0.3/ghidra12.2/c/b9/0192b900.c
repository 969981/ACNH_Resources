
undefined8 FUN_0192b900(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  uint *puVar8;
  short *psVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [31];
  undefined1 local_17d;
  undefined8 local_178;
  byte *local_170;
  undefined4 local_168;
  byte local_164 [31];
  undefined1 local_145;
  undefined1 local_65;
  
  local_17d = 0;
  local_19c[0] = 0;
  local_1a0 = 0x20;
  local_1a8 = (undefined8 *)local_19c;
  local_168 = 0x100;
  local_170 = local_164;
  local_65 = 0;
  local_1b0 = PTR_DAT_04bb3000 + 0x10;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb3020 + 0x10;
  (**(code **)(*param_1 + 0x58))(param_1,&local_178);
  (**(code **)(local_178 + 0x18))(&local_178);
  bVar2 = *local_170;
  if (bVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0xffffffff;
    pbVar11 = local_170;
    do {
      pbVar11 = pbVar11 + 1;
      uVar10 = crc32b(uVar10,(uint)bVar2,0x4c11db7);
      bVar2 = *pbVar11;
    } while (bVar2 != 0);
    uVar10 = ~uVar10;
  }
  FUN_038d1270(&local_1b0,&DAT_04074ae0,uVar10);
  (**(code **)(local_1b0 + 0x18))(&local_1b0);
  local_178 = (undefined *)((ulong)local_178 & 0xffffff0000000000);
  uVar7 = FUN_03ea9450(param_2,&local_178,local_1a8);
  puVar5 = PTR_DAT_04bbf960;
  puVar4 = PTR_DAT_04bb2020;
  if (((uVar7 & 1) == 0) || (local_178._4_1_ != -0x60)) {
    local_145 = 0;
    local_170 = local_164;
    local_168 = 0x20;
    local_164[0] = 0;
    local_178 = PTR_DAT_04bb3008 + 0x10;
    pbVar11 = (byte *)param_1[1];
    bVar2 = *pbVar11;
    if (bVar2 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0xffffffff;
      do {
        pbVar11 = pbVar11 + 1;
        uVar10 = crc32b(uVar10,(uint)bVar2,0x4c11db7);
        bVar2 = *pbVar11;
      } while (bVar2 != 0);
      uVar10 = ~uVar10;
    }
    FUN_038d1270(&local_178,&DAT_04074ae0,uVar10);
    (**(code **)(local_178 + 0x18))(&local_178);
    local_1b0 = (undefined *)((ulong)local_1b0 & 0xffffff0000000000);
    uVar7 = FUN_03ea9450(param_2,&local_1b0,local_170);
    if (((uVar7 & 1) == 0) || (local_1b0._4_1_ != -0x2f)) {
      return 0;
    }
    uVar10 = (uint)local_1b0;
    if ((uint)local_1b0 < 0x12) {
      puVar8 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1);
      *puVar8 = uVar10;
    }
  }
  else {
    psVar9 = (short *)*param_2;
    uVar12 = *(uint *)(psVar9 + 4);
    uVar10 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    if (*psVar9 != 0x5942) {
      uVar10 = uVar12;
    }
    uVar1 = *(uint *)((long)psVar9 + (long)(int)local_178 * 4 + (ulong)uVar10 + 4);
    uVar12 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    if (*psVar9 != 0x5942) {
      uVar12 = uVar1;
    }
    local_170 = (byte *)((long)psVar9 + (ulong)uVar12 + (ulong)uVar10);
    local_178 = PTR_DAT_04bb2020 + 0x10;
    uVar10 = 0;
    do {
      local_1a8 = &DAT_0407ebb1;
      if (uVar10 < 0x12) {
        local_1a8 = *(undefined8 **)(puVar5 + (ulong)uVar10 * 8 + 0x198);
      }
      local_1b0 = puVar4 + 0x10;
      (**(code **)(local_178 + 0x18))(&local_178);
      (**(code **)(local_178 + 0x18))(&local_178);
      pbVar11 = local_170;
      (**(code **)(local_1b0 + 0x18))(&local_1b0);
      if (pbVar11 == (byte *)local_1a8) {
LAB_0192bbbc:
        puVar8 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1);
        *puVar8 = uVar10;
        return 1;
      }
      uVar7 = 0;
      bVar6 = true;
      do {
        if (*(char *)((long)local_170 + uVar7) != *(char *)((long)local_1a8 + uVar7)) break;
        if (*(char *)((long)local_170 + uVar7) == '\0') {
          if (bVar6) goto LAB_0192bbbc;
          break;
        }
        cVar3 = *(char *)((long)local_170 + uVar7 + 1);
        if (cVar3 != *(char *)((long)local_1a8 + uVar7 + 1)) break;
        if (cVar3 == '\0') goto LAB_0192bbbc;
        cVar3 = *(char *)((long)local_170 + uVar7 + 2);
        if (cVar3 != *(char *)((long)local_1a8 + uVar7 + 2)) break;
        if (cVar3 == '\0') goto LAB_0192bbbc;
        bVar6 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
      uVar12 = 0x12;
      if ((int)uVar10 < 0x12) {
        uVar12 = uVar10 + 1;
      }
      uVar10 = uVar12;
    } while (uVar12 != 0x12);
  }
  return 1;
}

