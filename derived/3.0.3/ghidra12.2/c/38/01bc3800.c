
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc3800(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined *local_480;
  long *plStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined **local_458;
  undefined4 local_450;
  undefined **local_448;
  undefined1 *puStack_440;
  undefined4 local_438;
  undefined1 local_434;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined *local_418;
  undefined1 *puStack_410;
  undefined4 local_408;
  undefined1 local_404 [63];
  undefined1 local_3c5;
  undefined *local_3c0;
  undefined1 *puStack_3b8;
  undefined4 local_3b0;
  undefined1 local_3ac [63];
  undefined1 local_36d;
  undefined1 local_368 [8];
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined **local_268;
  undefined8 *local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined *local_238;
  undefined1 *local_230;
  undefined4 local_228;
  undefined1 local_224 [63];
  undefined1 local_1e5;
  undefined *local_1e0;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc [63];
  undefined1 local_18d;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [4];
  uint local_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  undefined4 local_6c;
  
  puVar1 = PTR_DAT_04bb28f8;
  uVar6 = *(ushort *)(param_2 + 0xc);
  uVar7 = *(ushort *)(param_2 + 0xe);
  local_74 = (uint)uVar6;
  uStack_70 = (uint)uVar7;
  lVar15 = *(long *)PTR_DAT_04bb28f8;
  for (lVar17 = **(long **)(lVar15 + 0x29d0); lVar17 != 0; lVar17 = *(long *)(lVar17 + 8)) {
    while( true ) {
      uVar4 = *(uint *)(lVar17 + 0x20);
      uVar16 = (uint)uVar6;
      if ((local_74 <= uVar4 && uVar4 != uVar16) ||
         (((uVar4 == uVar16 &&
           (uVar5 = *(uint *)(lVar17 + 0x24), uStack_70 <= uVar5 && uVar5 != uVar7)) &&
          (uVar5 != 0xffffffff)))) break;
      if ((uVar16 <= uVar4) && ((uint)uVar7 <= *(uint *)(lVar17 + 0x24))) {
        if (*(code **)(lVar17 + 0x58) == (code *)0x0) goto LAB_01bc38a0;
        local_6c = (**(code **)(lVar17 + 0x58))(param_2);
        lVar15 = *(long *)puVar1;
        goto LAB_01bc38a4;
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if (lVar17 == 0) goto LAB_01bc38a0;
    }
  }
LAB_01bc38a0:
  local_6c = 0;
LAB_01bc38a4:
  lVar17 = FUN_01bc1730(lVar15 + 0x2990,param_1[0x41] + 8);
  if ((lVar17 != 0) && (lVar15 = FUN_01bc06e0(lVar17,&local_74,1), lVar15 == 0)) {
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar4 = *puVar11 ^ *puVar11 << 0xb;
    uVar5 = puVar11[3];
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar16 = uVar4 ^ uVar5;
    uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar16;
    puVar11[2] = uVar5;
    puVar11[3] = uVar4;
    uVar4 = (uVar4 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
    uVar16 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    uVar5 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
    uVar8 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
    local_84 = uVar4;
    uStack_80 = uVar16;
    local_7c = uVar5;
    uStack_78 = uVar8;
    lVar12 = (**(code **)(*param_3 + 0x20))(param_3);
    lVar15 = 0;
    iVar10 = 0;
    do {
      puVar11 = (uint *)(lVar12 + lVar15);
      lVar15 = lVar15 + 4;
      uVar14 = *puVar11 - (*puVar11 >> 1 & 0x55555555);
      uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
      uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
      uVar14 = uVar14 + (uVar14 >> 8);
      iVar10 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar10;
    } while (lVar15 != 0x754);
    if (iVar10 == 0) {
      local_460 = _DAT_05586008;
      uStack_45c = DAT_0558600c;
    }
    else {
      lVar12 = (**(code **)(*param_3 + 0x20))(param_3);
      lVar15 = 0;
      uVar14 = 0;
      do {
        puVar11 = (uint *)(lVar12 + lVar15);
        lVar15 = lVar15 + 4;
        uVar9 = *puVar11 - (*puVar11 >> 1 & 0x55555555);
        uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
        uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
        uVar9 = uVar9 + (uVar9 >> 8);
        uVar14 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + uVar14;
      } while (lVar15 != 0x754);
      uVar4 = uVar4 ^ uVar4 * 0x800;
      uStack_78 = uVar4 >> 8 ^ uVar8 >> 0x13 ^ uVar4 ^ uVar8;
      local_84 = uVar16;
      uStack_80 = uVar5;
      local_7c = uVar8;
      FUN_00889f80(&local_460,param_3,(int)((ulong)uStack_78 * (ulong)uVar14 >> 0x20) + 1);
      FUN_01a4c66c(&local_84,&local_460);
    }
    local_450 = 0;
    local_470 = 0x60;
    uStack_468 = 1;
    local_480 = &DAT_04a3cbd0;
    local_438 = 0x80;
    local_434 = 0;
    local_458 = &PTR_LAB_04a3f8b8;
    puStack_410 = local_404;
    local_430 = 0xffffffff;
    uStack_428 = 0xffffffff00000000;
    puStack_440 = local_368;
    local_420 = 0xffffffff;
    local_408 = 0x40;
    local_3c5 = 0;
    local_404[0] = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    local_3b0 = 0x40;
    local_36d = 0;
    local_3ac[0] = 0;
    puStack_3b8 = local_3ac;
    pppuVar2 = &local_268;
    if (&local_268 <= local_368 + 2) {
      pppuVar2 = (undefined ***)(local_368 + 2);
    }
    local_448 = &PTR_LAB_04938188;
    local_270 = 0;
    local_278 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_338 = 0;
    uStack_330 = 0;
    local_348 = 0;
    uStack_340 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_368 = (undefined1  [8])0x0;
    uStack_360 = 0;
    plStack_478 = param_1;
    local_418 = puVar1;
    local_3c0 = puVar1;
    memset(puStack_440,0,(long)pppuVar2 + (-0xe0 - (long)&local_448));
    local_258 = 0x80;
    local_230 = local_224;
    local_224[0] = 0;
    local_260 = &local_188;
    local_1d8 = local_1cc;
    local_1cc[0] = 0;
    local_254 = 0;
    puVar3 = auStack_88;
    if (auStack_88 <= (undefined1 *)((long)&local_188 + 2U)) {
      puVar3 = (undefined1 *)((long)&local_188 + 2U);
    }
    local_250 = 0xffffffff;
    local_248 = 0xffffffff00000000;
    local_240 = 0xffffffff;
    local_228 = 0x40;
    local_1e5 = 0;
    local_1d0 = 0x40;
    local_18d = 0;
    local_268 = &PTR_LAB_04938188;
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    local_130 = 0;
    local_138 = 0;
    local_140 = 0;
    local_148 = 0;
    local_150 = 0;
    local_158 = 0;
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_238 = puVar1;
    local_1e0 = puVar1;
    memset(local_260,0,(size_t)(puVar3 + (-0xe0 - (long)&local_268)));
    FUN_01c0bafc(&local_458,&local_460,&local_480);
    iVar10 = (*(code *)local_458[5])(&local_458);
    lVar15 = 0x48;
    if (iVar10 != 2) {
      lVar15 = 0x38;
    }
    uVar13 = (**(code **)((long)local_458 + lVar15))(&local_458);
    FUN_01bc09d8(lVar17,&local_74,uVar13);
    (**(code **)(*param_1 + 0x48))(param_1,uVar13,param_1[0x41],param_1 + 0x43);
  }
  return;
}

