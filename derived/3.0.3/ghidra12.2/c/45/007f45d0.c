
void FUN_007f45d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_1c14 [2];
  undefined1 auStack_1c12 [2];
  undefined *local_1c10;
  char *pcStack_1c08;
  undefined8 local_1c00;
  undefined4 local_1bf8;
  undefined *local_1bd8;
  char *pcStack_1bd0;
  undefined *local_1bc8;
  char *local_1bc0;
  undefined8 local_1bb8;
  undefined4 local_1bb0;
  undefined8 local_1bac;
  undefined8 uStack_1ba4;
  ulong local_1b9c;
  uint local_1b94;
  undefined1 auStack_1b8a [2];
  short local_1b88 [4];
  long local_1b80;
  long lStack_1b78;
  ushort local_4e4 [2];
  undefined *local_4e0;
  undefined1 auStack_4d8 [16];
  undefined *local_4c8;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined *local_498;
  undefined8 local_478;
  undefined8 local_470;
  undefined *local_468;
  undefined8 local_448;
  undefined8 local_440;
  undefined *local_438;
  undefined8 local_418;
  undefined8 local_410;
  undefined *local_408;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined *local_3d8;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined *local_3a8;
  undefined8 local_388;
  undefined8 local_380;
  undefined *local_378;
  undefined8 local_358;
  undefined8 local_350;
  undefined *local_348;
  undefined8 local_328;
  undefined8 local_320;
  undefined *local_318;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined2 local_2dc;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined4 local_2ac;
  undefined **local_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  undefined1 local_294;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  undefined1 local_264 [63];
  undefined1 local_225;
  undefined *local_220;
  undefined1 *local_218;
  undefined4 local_210;
  undefined1 local_20c [63];
  undefined1 local_1cd;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 != 0) {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar11 == 0) goto LAB_007f46a4;
      lVar11 = lVar11 + 0x70;
    }
    else if (((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0)) ||
            (lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar11 == 0))
    goto LAB_007f46a4;
    if (*(long **)(lVar11 + 0xe7290) == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar12 = (undefined8 *)**(long **)(lVar11 + 0xe7290);
      uVar9 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar9 = (**(code **)*puVar12)();
      }
    }
    sVar4 = *(short *)(*(long *)(lVar11 + 0xe7278) + *(long *)(lVar11 + 0xe7270) + 4);
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar11 + 0xe7290) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xe7290) + 8), puVar12 != (undefined8 *)0x0))
    {
      (**(code **)*puVar12)();
    }
    if (sVar4 == 0) {
      return;
    }
  }
LAB_007f46a4:
  local_160 = 0xffffffff;
  local_180 = &local_a8;
  local_174 = 0;
  local_170 = 0xffffffff;
  local_150 = local_144;
  local_168 = 0xffffffff00000000;
  local_178 = 0x20;
  local_105 = 0;
  local_144[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_f8 = local_ec;
  puVar3 = auStack_68;
  if (auStack_68 <= (undefined1 *)((long)&local_a8 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_a8 + 2U);
  }
  local_148 = 0x40;
  local_f0 = 0x40;
  local_ad = 0;
  local_ec[0] = 0;
  local_188 = &PTR_LAB_049173e0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_158 = puVar1;
  local_100 = puVar1;
  memset(local_180,0,(size_t)(puVar3 + (-0xe0 - (long)&local_188)));
  local_294 = 0;
  local_290 = 0xffffffff;
  local_270 = local_264;
  local_2a0 = local_1c8;
  local_288 = 0xffffffff00000000;
  local_218 = local_20c;
  pppuVar10 = &local_188;
  if (&local_188 <= local_1c8 + 2) {
    pppuVar10 = (undefined ***)(local_1c8 + 2);
  }
  local_298 = 0x20;
  local_280 = 0xffffffff;
  local_225 = 0;
  local_264[0] = 0;
  local_268 = 0x40;
  local_210 = 0x40;
  local_1cd = 0;
  local_20c[0] = 0;
  local_2a8 = &PTR_LAB_049173e0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = (undefined1  [8])0x0;
  local_278 = puVar1;
  local_220 = puVar1;
  memset(local_2a0,0,(size_t)((long)pppuVar10 + (-0xe0 - (long)&local_2a8)));
  memset(auStack_4d8,0,0x1e0);
  puVar7 = PTR_DAT_04bb3170;
  puVar6 = PTR_DAT_04bb3128;
  puVar5 = PTR_DAT_04bb3120;
  local_4a8 = 0;
  local_4a0 = 0;
  local_478 = 0;
  local_470 = 0;
  iVar13 = 0;
  local_448 = 0;
  local_4c8 = PTR_DAT_04bb2d80 + 0x10;
  local_440 = 0;
  local_418 = 0;
  local_410 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3b0 = 0;
  local_3b8 = 0;
  local_388 = 0;
  local_380 = 0;
  local_358 = 0;
  local_350 = 0;
  local_328 = 0;
  local_320 = 0;
  local_4e0 = PTR_DAT_04bb2d58 + 0x10;
  local_2f8 = 0xffffffff;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2d8 = PTR_DAT_04bb2e08 + 0x10;
  local_2e0 = 0;
  local_2dc = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 1;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_2ac = 0;
  local_498 = local_4c8;
  local_468 = local_4c8;
  local_438 = local_4c8;
  local_408 = local_4c8;
  local_3d8 = local_4c8;
  local_3a8 = local_4c8;
  local_378 = local_4c8;
  local_348 = local_4c8;
  local_318 = local_4c8;
  do {
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      FUN_00706e58(puVar5);
      __cxa_guard_release(puVar6);
    }
    if (0 < (int)*(uint *)puVar5) {
      uVar9 = 0;
      do {
        if (*(int *)(*(long *)(puVar5 + 8) + uVar9 * 4) == 0) goto LAB_007f4a98;
        uVar9 = uVar9 + 1;
      } while (*(uint *)puVar5 != uVar9);
    }
    uVar9 = 0;
LAB_007f4a98:
    local_4e4[0] = 0;
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      FUN_00706e58(puVar5);
      __cxa_guard_release(puVar6);
    }
    uVar14 = (uint)uVar9;
    if (*(uint *)puVar5 <= uVar14) {
      uVar14 = 0;
    }
    local_4e4[0] = (ushort)iVar13 |
                   (ushort)(*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar14 * 4) << 0xb);
    FUN_007ef010(auStack_1b8a,local_4e4);
    FUN_007e4920(local_1b88,auStack_1b8a);
    if ((((local_1b88[0] != *(short *)puVar7) && (lStack_1b78 != 0 || local_1b80 != 0)) &&
        (uVar9 = FUN_007e87a0(local_1b88), (uVar9 & 1) != 0)) &&
       (iVar8 = FUN_007e4d10(local_1b88), iVar8 == -1)) {
      uVar9 = FUN_007e8990(local_1b88);
      if ((uVar9 & 1) == 0) {
        local_1b9c = local_1b9c & 0xffffffffffffff;
        local_1bb8 = CONCAT35(local_1bb8._5_3_,0x20);
        local_1bc8 = puVar1;
        local_1bc0 = (char *)((long)&local_1bb8 + 4);
        FUN_038d1270(&local_1bc8,&DAT_0405bf91,iVar13 + 1);
        pcStack_1c08 = "STR_MydesignDefaultName";
        local_1c10 = puVar2;
        (**(code **)(local_1bc8 + 0x18))(&local_1bc8);
        pcStack_1bd0 = local_1bc0;
        local_1bd8 = puVar2;
        FUN_006f50a0(&local_188,&local_1c10,&local_1bd8,0);
        FUN_006f2100(&local_4e0,&local_2a8,&local_188);
        pppuVar10 = &local_2a8;
      }
      else {
        pppuVar10 = (undefined ***)&DAT_04ccad10;
      }
      FUN_007e5fd0(local_1b88,pppuVar10);
      local_1bc8 = DAT_04ccaca0;
      local_1bc0 = (char *)DAT_04ccaca8;
      local_1bb8 = DAT_04ccacb0;
      local_1bac = DAT_04ccacbc;
      uStack_1ba4 = DAT_04ccacc4;
      local_1b9c = DAT_04ccaccc;
      local_1bb0 = DAT_04ccacb8;
      local_1b94 = DAT_04ccacd4;
      if (1 < DAT_04ccacd4) {
        local_1b94 = 0;
      }
      FUN_007e6230(&local_1c10,local_1b88);
      local_1bb8 = local_1c00;
      local_1bc8 = local_1c10;
      local_1bc0 = pcStack_1c08;
      local_1bb0 = local_1bf8;
      FUN_007e64e0(local_1b88,&local_1bc8);
      FUN_007e7b10(local_1b88);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 100);
  iVar13 = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      FUN_00706e58(puVar5);
      __cxa_guard_release(puVar6);
    }
    if (0 < (int)*(uint *)puVar5) {
      uVar9 = 0;
      do {
        if (*(int *)(*(long *)(puVar5 + 8) + uVar9 * 4) == 1) goto LAB_007f4cfc;
        uVar9 = uVar9 + 1;
      } while (*(uint *)puVar5 != uVar9);
    }
    uVar9 = 0;
LAB_007f4cfc:
    local_4e4[0] = 0;
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      FUN_00706e58(puVar5);
      __cxa_guard_release(puVar6);
    }
    uVar14 = (uint)uVar9;
    if (*(uint *)puVar5 <= uVar14) {
      uVar14 = 0;
    }
    local_4e4[0] = (ushort)iVar13 |
                   (ushort)(*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar14 * 4) << 0xb);
    FUN_007ef010(auStack_1c12,local_4e4);
    FUN_007e4920(local_1b88,auStack_1c12);
    if ((((local_1b88[0] != *(short *)puVar7) && (lStack_1b78 != 0 || local_1b80 != 0)) &&
        (uVar9 = FUN_007e87a0(local_1b88), (uVar9 & 1) != 0)) &&
       (iVar8 = FUN_007e4d10(local_1b88), iVar8 == -1)) {
      uVar9 = FUN_007e8990(local_1b88);
      if ((uVar9 & 1) == 0) {
        local_1b9c = local_1b9c & 0xffffffffffffff;
        local_1bb8 = CONCAT35(local_1bb8._5_3_,0x20);
        local_1bc8 = puVar1;
        local_1bc0 = (char *)((long)&local_1bb8 + 4);
        FUN_038d1270(&local_1bc8,&DAT_0405bf91,iVar13 + 0x65);
        pcStack_1c08 = "STR_MydesignDefaultName";
        local_1c10 = puVar2;
        (**(code **)(local_1bc8 + 0x18))(&local_1bc8);
        pcStack_1bd0 = local_1bc0;
        local_1bd8 = puVar2;
        FUN_006f50a0(&local_188,&local_1c10,&local_1bd8,0);
        FUN_006f2100(&local_4e0,&local_2a8,&local_188);
        pppuVar10 = &local_2a8;
      }
      else {
        pppuVar10 = (undefined ***)&DAT_04ccad10;
      }
      FUN_007e5fd0(local_1b88,pppuVar10);
      local_1bc8 = DAT_04ccaca0;
      local_1bc0 = (char *)DAT_04ccaca8;
      local_1bb8 = DAT_04ccacb0;
      local_1bac = DAT_04ccacbc;
      uStack_1ba4 = DAT_04ccacc4;
      local_1b9c = DAT_04ccaccc;
      local_1bb0 = DAT_04ccacb8;
      local_1b94 = DAT_04ccacd4;
      if (1 < DAT_04ccacd4) {
        local_1b94 = 0;
      }
      FUN_007e6230(&local_1c10,local_1b88);
      local_1bb8 = local_1c00;
      local_1bc8 = local_1c10;
      local_1bc0 = pcStack_1c08;
      local_1bb0 = local_1bf8;
      FUN_007e64e0(local_1b88,&local_1bc8);
      FUN_007e7b10(local_1b88);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 100);
  iVar13 = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      FUN_00706e58(puVar5);
      __cxa_guard_release(puVar6);
    }
    if (0 < (int)*(uint *)puVar5) {
      uVar9 = 0;
      do {
        if (*(int *)(*(long *)(puVar5 + 8) + uVar9 * 4) == 3) goto LAB_007f4e4c;
        uVar9 = uVar9 + 1;
      } while (*(uint *)puVar5 != uVar9);
    }
    uVar9 = 0;
LAB_007f4e4c:
    local_4e4[0] = 0;
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      FUN_00706e58(puVar5);
      __cxa_guard_release(puVar6);
    }
    uVar14 = (uint)uVar9;
    if (*(uint *)puVar5 <= uVar14) {
      uVar14 = 0;
    }
    local_4e4[0] = (ushort)iVar13 |
                   (ushort)(*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar14 * 4) << 0xb);
    FUN_007ef010(auStack_1c14,local_4e4);
    FUN_007e4920(local_1b88,auStack_1c14);
    if ((((local_1b88[0] != *(short *)puVar7) && (lStack_1b78 != 0 || local_1b80 != 0)) &&
        (uVar9 = FUN_007e87a0(local_1b88), (uVar9 & 1) != 0)) &&
       (iVar8 = FUN_007e4d10(local_1b88), iVar8 == -1)) {
      local_1b9c = local_1b9c & 0xffffffffffffff;
      local_1bb8 = CONCAT35(local_1bb8._5_3_,0x20);
      local_1bc8 = puVar1;
      local_1bc0 = (char *)((long)&local_1bb8 + 4);
      FUN_038d1270(&local_1bc8,&DAT_0405bf91,iVar13 + 0xc9);
      pcStack_1c08 = "STR_MydesignDefaultName";
      local_1c10 = puVar2;
      (**(code **)(local_1bc8 + 0x18))(&local_1bc8);
      pcStack_1bd0 = local_1bc0;
      local_1bd8 = puVar2;
      FUN_006f50a0(&local_188,&local_1c10,&local_1bd8,0);
      FUN_006f2100(&local_4e0,&local_2a8,&local_188);
      FUN_007e5fd0(local_1b88,&local_2a8);
      FUN_007e64e0(local_1b88,&DAT_04ccacd8);
      FUN_007e7b10(local_1b88);
    }
    iVar13 = iVar13 + 1;
    if (iVar13 == 8) {
      return;
    }
  } while( true );
}

