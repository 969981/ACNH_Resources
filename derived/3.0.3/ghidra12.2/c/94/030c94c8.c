
void FUN_030c94c8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  undefined *local_518;
  char *pcStack_510;
  undefined *local_508;
  char *pcStack_500;
  undefined *local_4f8;
  char *local_4f0;
  undefined4 local_4e8;
  char local_4e4 [63];
  undefined1 local_4a5;
  undefined *local_4a0;
  undefined1 *puStack_498;
  undefined4 local_490;
  undefined1 local_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined *local_470;
  undefined1 *puStack_468;
  undefined4 local_460;
  undefined1 local_45c [63];
  undefined1 local_41d;
  undefined *local_418;
  undefined1 *puStack_410;
  undefined4 local_408;
  undefined1 local_404 [63];
  undefined1 local_3c5;
  undefined1 local_3c0 [8];
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined *local_340;
  undefined8 *puStack_338;
  undefined4 local_330;
  undefined1 local_32c;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined *local_310;
  undefined1 *local_308;
  undefined4 local_300;
  undefined1 local_2fc [63];
  undefined1 local_2bd;
  undefined *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4 [63];
  undefined1 local_265;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined6 uStack_248;
  undefined2 local_242;
  undefined6 uStack_240;
  undefined1 auStack_23a [2];
  uint local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined *local_220;
  undefined1 *local_218;
  undefined4 local_210;
  undefined1 local_20c [63];
  undefined1 local_1cd;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4 [63];
  undefined1 local_175;
  undefined *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  undefined *local_88;
  int local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  
  local_88 = PTR_DAT_04bc0a78;
  lVar14 = *(long *)PTR_DAT_04bb32e8;
  uVar6 = *(uint *)(lVar14 + 0x4060);
  cVar10 = *(char *)(lVar14 + 0x4064);
  cVar11 = *(char *)(lVar14 + 0x4065);
  uVar8 = *(undefined1 *)(lVar14 + 0x4066);
  uVar9 = *(undefined1 *)(lVar14 + 0x4067);
  local_228 = 0;
  local_230 = 0;
  local_210 = 0x40;
  local_1cd = 0;
  local_20c[0] = 0;
  local_218 = local_20c;
  local_1b8 = 0x40;
  local_175 = 0;
  local_1b4[0] = 0;
  local_160 = 0;
  local_15c = 0;
  local_158 = 0xffffffff;
  local_150 = 0xffffffff00000000;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_1c0 = local_1b4;
  local_12c[0] = 0;
  local_148 = 0xffffffff;
  local_130 = 0x40;
  local_ed = 0;
  local_d8 = 0x40;
  local_95 = 0;
  local_138 = local_12c;
  local_e0 = local_d4;
  local_d4[0] = 0;
  local_170 = PTR_DAT_04bb2e00 + 0x10;
  local_168 = 0;
  local_80 = *(int *)PTR_DAT_04bc0b30;
  local_7c = 0;
  *(int *)PTR_DAT_04bc0b30 = local_80 + 1;
  local_90 = 0;
  local_88 = local_88 + 0x10;
  local_330 = 0x13;
  local_78 = 0;
  local_32c = 0;
  local_328 = 0xffffffff;
  local_320 = 0xffffffff00000000;
  local_318 = 0xffffffff;
  local_300 = 0x40;
  local_2bd = 0;
  local_2fc[0] = 0;
  local_2a8 = 0x40;
  local_265 = 0;
  local_2a4[0] = 0;
  local_70 = 0x100;
  local_308 = local_2fc;
  puStack_338 = &local_260;
  local_2b0 = local_2a4;
  local_340 = PTR_DAT_04bc0bc0 + 0x10;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  uStack_240 = 0;
  puVar3 = auStack_23a;
  if (auStack_23a <= (undefined1 *)((long)&local_260 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_260 + 2U);
  }
  uStack_248 = 0;
  local_242 = 0;
  local_310 = puVar1;
  local_2b8 = puVar1;
  local_220 = puVar1;
  local_1c8 = puVar1;
  local_140 = puVar1;
  local_e8 = puVar1;
  memset(puStack_338,0,(ulong)(puVar3 + (-0xe1 - (long)&local_340)) & 0xfffffffffffffffc | 2);
  local_238 = 0;
  puStack_468 = local_45c;
  local_490 = 0x40;
  puStack_498 = local_3c0;
  puStack_410 = local_404;
  local_48c = 0;
  local_478 = 0xffffffff;
  local_460 = 0x40;
  local_41d = 0;
  local_45c[0] = 0;
  local_408 = 0x40;
  local_3c5 = 0;
  local_404[0] = 0;
  local_488 = 0xffffffff;
  uStack_480 = 0xffffffff00000000;
  local_4a0 = PTR_DAT_04bb6b18 + 0x10;
  ppuVar4 = &local_340;
  if (&local_340 <= local_3c0 + 2) {
    ppuVar4 = (undefined **)(local_3c0 + 2);
  }
  local_350 = 0;
  uStack_348 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_390 = 0;
  uStack_388 = 0;
  local_3a0 = 0;
  uStack_398 = 0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3c0 = (undefined1  [8])0x0;
  uStack_3b8 = 0;
  local_470 = puVar1;
  local_418 = puVar1;
  memset(puStack_498,0,(size_t)((long)ppuVar4 + (-0xe0 - (long)&local_4a0)));
  if ((((uint)*(ushort *)(param_1 + 0x218) == (uVar6 & 0xffff)) &&
      ((uint)*(byte *)(param_1 + 0x21a) == (uVar6 >> 0x10 & 0xff))) &&
     ((uint)*(byte *)(param_1 + 0x21b) == uVar6 >> 0x18)) {
    if (*(char *)(param_1 + 0x21c) != cVar10) goto LAB_030c9954;
    if (*(char *)(param_1 + 0x21d) == cVar11) goto LAB_030c9c14;
  }
  else {
    local_4e8 = 0x40;
    iVar7 = (int)(uVar6 << 8) >> 0x18;
    uVar15 = (int)uVar6 >> 0x18;
    local_4f0 = local_4e4;
    local_4a5 = 0;
    local_4e4[0] = '\0';
    local_4f8 = puVar1;
    uVar13 = nn::time::GetDayOfWeek((int)(short)uVar6,iVar7,uVar15);
    local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar13);
    if (uVar13 < 7) {
      FUN_038d1270(&local_4f8,&DAT_04183d28 + *(int *)(&DAT_04183d28 + (long)(int)uVar13 * 4));
    }
    uVar13 = *(uint *)(*(long *)(param_1 + 0x210) + 0x218);
    lVar14 = *(long *)(*(long *)(param_1 + 0x210) + 0x220);
    lVar19 = *(long *)(lVar14 + (ulong)(4 < uVar13) * 0x20);
    if (lVar19 != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_500 = "STR_Week";
      local_508 = puVar1;
      (**(code **)(local_4f8 + 0x18))(&local_4f8);
      pcStack_510 = local_4f0;
      local_518 = puVar1;
      FUN_01bea210(param_1 + 0x1100,lVar19,&local_508,&local_518);
      uVar13 = *(uint *)(*(long *)(param_1 + 0x210) + 0x218);
      lVar14 = *(long *)(*(long *)(param_1 + 0x210) + 0x220);
    }
    lVar19 = 0x28;
    if (uVar13 < 6) {
      lVar19 = 0;
    }
    lVar19 = *(long *)(lVar14 + lVar19);
    if (lVar19 != 0) {
      local_518 = PTR_DAT_04bb2020 + 0x10;
      pcStack_500 = "MainScreen";
      pcStack_510 = "0311";
      local_508 = local_518;
      FUN_01bebc30(&local_230,&local_4a0,&local_508,&local_518,lVar19);
      FUN_01bb00d0(&local_88,iVar7,0);
      FUN_01bebe38(&local_230);
      FUN_01bea4e8(param_1 + 0x14b8,lVar19,&local_4a0);
      uVar13 = *(uint *)(*(long *)(param_1 + 0x210) + 0x218);
      lVar14 = *(long *)(*(long *)(param_1 + 0x210) + 0x220);
    }
    lVar19 = 0x18;
    if (uVar13 < 4) {
      lVar19 = 0;
    }
    lVar14 = *(long *)(lVar14 + lVar19);
    if (lVar14 != 0) {
      FUN_01be4af0(&local_340,**(undefined4 **)PTR_DAT_04bb3448,uVar15,10,0,0);
      local_238 = uVar15;
      FUN_01bea4e8(param_1 + 0xd48,lVar14,&local_340);
    }
LAB_030c9954:
    bVar12 = 0;
    uVar16 = *(undefined8 *)
              (*(long *)(*(long *)(param_1 + 0x210) + 0x220) +
              (ulong)(1 < *(uint *)(*(long *)(param_1 + 0x210) + 0x218)) * 8);
    iVar7 = **(int **)PTR_DAT_04bb3448;
    uVar13 = (uint)cVar10;
    uVar15 = uVar13 & ((int)cVar10 >> 0x1f ^ 0xffffffffU);
    if (0x16 < (int)uVar15) {
      uVar15 = 0x17;
    }
    switch(iVar7) {
    case 0:
      uVar17 = uVar15 - 0xc;
      if (uVar15 < 0xc) {
        uVar17 = uVar15;
      }
      break;
    case 1:
    case 5:
      uVar2 = uVar15 - 0xc;
      if (uVar15 < 0xc) {
        uVar2 = uVar15;
      }
      uVar17 = 0xc;
      if (uVar2 != 0) {
        uVar17 = uVar2;
      }
      break;
    case 0xd:
      bVar12 = 1;
    default:
      uVar17 = uVar15 - 0xc;
      if (!(bool)((0xb < uVar15 && uVar15 - 0xc != 0) & bVar12)) {
        uVar17 = uVar15;
      }
    }
    uVar5 = 3;
    if (iVar7 != 0xd) {
      uVar5 = 0;
    }
    iVar18 = 1;
    FUN_01be4af0(&local_340,iVar7,uVar17,2,1,uVar5);
    local_508 = PTR_DAT_04bb2020 + 0x10;
    local_4f0 = "MainScreen";
    pcStack_500 = "0304";
    local_4f8 = local_508;
    local_238 = uVar17;
    FUN_01bebc30(&local_230,&local_4a0,&local_4f8,&local_508,uVar16);
    FUN_01bb05f0(&local_88,uVar13,0);
    (**(code **)(local_88 + 0x10))(&local_88,(int)cVar11,0);
    FUN_01bebe38(&local_230);
    FUN_01bea4e8(param_1 + 0x5d8,uVar16,&local_4a0);
    switch(**(undefined4 **)PTR_DAT_04bb3448) {
    case 0:
      break;
    case 1:
    case 5:
      iVar18 = 2;
      break;
    default:
      iVar18 = 0;
      break;
    case 0xd:
      iVar18 = 3;
    }
    local_518 = (undefined *)CONCAT44(local_518._4_4_,iVar18);
    if (iVar18 != 0) {
      local_508 = PTR_DAT_04bb2020 + 0x10;
      if ((int)uVar13 < 0xc) {
        pcStack_500 = "0302";
      }
      else {
        pcStack_500 = "0303";
      }
      local_4f0 = "MainScreen";
      local_4f8 = local_508;
      FUN_01bea210(param_1 + 0x990,
                   *(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x210) + 0x220) +
                    (ulong)(2 < *(uint *)(*(long *)(param_1 + 0x210) + 0x218)) * 0x10),&local_4f8,
                   &local_508);
    }
  }
  uVar13 = (uint)cVar11;
  uVar16 = **(undefined8 **)(*(long *)(param_1 + 0x210) + 0x220);
  uVar15 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
  if (0x3a < (int)uVar15) {
    uVar15 = 0x3b;
  }
  FUN_01be4af0(&local_340,**(undefined4 **)PTR_DAT_04bb3448,uVar15,2,1,3);
  local_508 = PTR_DAT_04bb2020 + 0x10;
  local_4f0 = "MainScreen";
  pcStack_500 = "0305";
  local_4f8 = local_508;
  local_238 = uVar15;
  FUN_01bebc30(&local_230,&local_4a0,&local_4f8,&local_508,uVar16);
  FUN_01bb05f0(&local_88,(int)cVar10,0);
  (**(code **)(local_88 + 0x10))(&local_88,uVar13,0);
  FUN_01bebe38(&local_230);
  FUN_01bea4e8(param_1 + 0x220,uVar16,&local_4a0);
LAB_030c9c14:
  *(uint *)(param_1 + 0x218) = uVar6;
  *(char *)(param_1 + 0x21c) = cVar10;
  *(char *)(param_1 + 0x21d) = cVar11;
  *(undefined1 *)(param_1 + 0x21e) = uVar8;
  *(undefined1 *)(param_1 + 0x21f) = uVar9;
  FUN_01bebabc(&local_230);
  return;
}

