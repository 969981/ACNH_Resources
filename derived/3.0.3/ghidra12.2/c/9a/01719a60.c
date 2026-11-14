
undefined8 FUN_01719a60(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [31];
  undefined1 local_185;
  undefined8 local_180;
  byte *local_178;
  undefined4 local_170;
  byte local_16c [31];
  undefined1 local_14d;
  undefined1 local_6d;
  
  local_185 = 0;
  local_1a4[0] = 0;
  local_1a8 = 0x20;
  local_1b0 = (undefined8 *)local_1a4;
  local_170 = 0x100;
  local_178 = local_16c;
  local_6d = 0;
  local_1b8 = PTR_DAT_04bb3000 + 0x10;
  local_16c[0] = 0;
  local_180 = &PTR_LAB_048fda60;
  (**(code **)(*param_1 + 0x58))(param_1,&local_180);
  (*(code *)local_180[3])(&local_180);
  bVar1 = *local_178;
  if (bVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0xffffffff;
    pbVar12 = local_178;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar12;
    } while (bVar1 != 0);
    uVar11 = ~uVar11;
  }
  FUN_038d1270(&local_1b8,&DAT_04074ae0,uVar11);
  (**(code **)(local_1b8 + 0x18))(&local_1b8);
  local_180 = (undefined **)((ulong)local_180 & 0xffffff0000000000);
  uVar8 = FUN_03ea9450(param_2,&local_180,local_1b0);
  puVar3 = PTR_DAT_04bb2020;
  if (((uVar8 & 1) == 0) || (local_180._4_1_ != -0x60)) {
    local_14d = 0;
    local_178 = local_16c;
    local_170 = 0x20;
    local_16c[0] = 0;
    local_180 = &PTR_LAB_048fd9d0;
    pbVar12 = (byte *)param_1[1];
    bVar1 = *pbVar12;
    if (bVar1 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0xffffffff;
      do {
        pbVar12 = pbVar12 + 1;
        uVar11 = crc32b(uVar11,(uint)bVar1,0x4c11db7);
        bVar1 = *pbVar12;
      } while (bVar1 != 0);
      uVar11 = ~uVar11;
    }
    FUN_038d1270(&local_180,&DAT_04074ae0,uVar11);
    (*(code *)local_180[3])(&local_180);
    local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffff0000000000);
    uVar8 = FUN_03ea9450(param_2,&local_1b8,local_178);
    puVar3 = PTR_DAT_04bbbba0;
    if (((uVar8 & 1) == 0) || (local_1b8._4_1_ != -0x2f)) {
      return 0;
    }
    iVar7 = (int)local_1b8;
    if (((*PTR_DAT_04bbbba0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05146ec0), iVar6 != 0))
    {
      FUN_011eb5f0(&DAT_05146eb0);
      __cxa_guard_release(&DAT_05146ec0);
    }
    uVar11 = DAT_05146eb0;
    if (DAT_05146eb0 != 0) {
      uVar13 = 0;
      do {
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
          FUN_011eb5f0(&DAT_05146eb0);
          __cxa_guard_release(puVar3);
        }
        uVar14 = uVar13;
        if (DAT_05146eb0 <= uVar13) {
          uVar14 = 0;
        }
        if (iVar7 == *(int *)(DAT_05146eb8 + (long)(int)uVar14 * 4)) {
          puVar9 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1);
          *puVar9 = uVar13;
          return 1;
        }
        uVar14 = 0xd;
        if ((int)uVar13 < 0xe) {
          uVar14 = uVar13 + 1;
        }
        uVar13 = uVar14;
      } while (uVar14 != uVar11);
    }
  }
  else {
    psVar10 = (short *)*param_2;
    uVar13 = *(uint *)(psVar10 + 4);
    uVar11 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    if (*psVar10 != 0x5942) {
      uVar11 = uVar13;
    }
    uVar14 = *(uint *)((long)psVar10 + (long)(int)local_180 * 4 + (ulong)uVar11 + 4);
    uVar13 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    if (*psVar10 != 0x5942) {
      uVar13 = uVar14;
    }
    local_178 = (byte *)((long)psVar10 + (ulong)uVar13 + (ulong)uVar11);
    local_180 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    if (((DAT_05146ec0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_05146ec0), iVar7 != 0)) {
      FUN_011eb5f0(&DAT_05146eb0);
      __cxa_guard_release(&DAT_05146ec0);
    }
    uVar11 = DAT_05146eb0;
    puVar4 = PTR_DAT_04bbdfb8;
    if (DAT_05146eb0 != 0) {
      uVar13 = 0;
      do {
        local_1b0 = &DAT_0407ebb1;
        if (uVar13 < 0xe) {
          local_1b0 = *(undefined8 **)(puVar4 + (ulong)uVar13 * 8 + 0xc0);
        }
        local_1b8 = puVar3 + 0x10;
        (**(code **)((long)local_180 + 0x18))(&local_180);
        (**(code **)((long)local_180 + 0x18))(&local_180);
        pbVar12 = local_178;
        (**(code **)(local_1b8 + 0x18))(&local_1b8);
        if (pbVar12 == (byte *)local_1b0) {
LAB_01719e1c:
          puVar9 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1);
          *puVar9 = uVar13;
          return 1;
        }
        uVar8 = 0;
        bVar5 = true;
        do {
          if (*(char *)((long)local_178 + uVar8) != *(char *)((long)local_1b0 + uVar8)) break;
          if (*(char *)((long)local_178 + uVar8) == '\0') {
            if (bVar5) goto LAB_01719e1c;
            break;
          }
          cVar2 = *(char *)((long)local_178 + uVar8 + 1);
          if (cVar2 != *(char *)((long)local_1b0 + uVar8 + 1)) break;
          if (cVar2 == '\0') goto LAB_01719e1c;
          cVar2 = *(char *)((long)local_178 + uVar8 + 2);
          if (cVar2 != *(char *)((long)local_1b0 + uVar8 + 2)) break;
          if (cVar2 == '\0') goto LAB_01719e1c;
          bVar5 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        uVar14 = 0xd;
        if ((int)uVar13 < 0xe) {
          uVar14 = uVar13 + 1;
        }
        uVar13 = uVar14;
      } while (uVar14 != uVar11);
    }
  }
  return 1;
}

