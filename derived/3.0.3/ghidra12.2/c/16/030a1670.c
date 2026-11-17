
void FUN_030a1670(long param_1)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  short *psVar14;
  undefined4 uVar15;
  undefined *local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  long local_450;
  undefined *local_448;
  undefined4 local_440;
  undefined **local_438;
  undefined1 *puStack_430;
  undefined4 local_428;
  undefined1 local_424;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined4 local_410;
  undefined *local_408;
  undefined1 *puStack_400;
  undefined4 local_3f8;
  undefined1 local_3f4 [63];
  undefined1 local_3b5;
  undefined *local_3b0;
  undefined1 *puStack_3a8;
  undefined4 local_3a0;
  undefined1 local_39c [63];
  undefined1 local_35d;
  undefined1 local_358 [8];
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
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined **local_258;
  undefined8 *local_250;
  undefined4 local_248;
  undefined1 local_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined *local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined1 local_214 [63];
  undefined1 local_1d5;
  undefined *local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [63];
  undefined1 local_17d;
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
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  byte local_6c [12];
  
  puVar4 = PTR_DAT_04bb43c0;
  local_6c[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0x220) + 0x590);
  if (((lVar13 == 0) || (lVar9 = *(long *)(lVar13 + 0x220), lVar9 == 0)) ||
     (*(int *)(lVar9 + 0x10) == 0 || *(int *)(lVar9 + 0x10) <= *(int *)(lVar13 + 0x440))) {
    psVar14 = &DAT_05586008;
  }
  else {
    psVar14 = *(short **)(*(long *)(lVar9 + 0x18) + (long)*(int *)(lVar13 + 0x440) * 8);
  }
  local_74 = *(undefined4 *)psVar14;
  local_70 = *(undefined4 *)(psVar14 + 2);
  if (*psVar14 == -2) {
LAB_030a1a50:
    FUN_02680a20(local_6c);
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_74);
    if (*(long *)puVar4 == 0) goto LAB_030a1a50;
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_030a1a50;
    local_440 = 0;
    local_424 = 0;
    local_428 = 0x80;
    local_420 = 0xffffffff;
    uStack_418 = 0xffffffff00000000;
    puStack_400 = local_3f4;
    local_448 = PTR_DAT_04bc0ce0 + 0x10;
    local_410 = 0xffffffff;
    puStack_430 = local_358;
    local_3f8 = 0x40;
    local_3b5 = 0;
    local_3f4[0] = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    puStack_3a8 = local_39c;
    local_3a0 = 0x40;
    local_35d = 0;
    local_39c[0] = 0;
    local_268 = 0;
    uStack_260 = 0;
    pppuVar2 = &local_258;
    if (&local_258 <= local_358 + 2) {
      pppuVar2 = (undefined ***)(local_358 + 2);
    }
    local_438 = &PTR_LAB_04938188;
    local_278 = 0;
    uStack_270 = 0;
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
    local_358 = (undefined1  [8])0x0;
    uStack_350 = 0;
    local_408 = puVar1;
    local_3b0 = puVar1;
    memset(puStack_430,0,(long)pppuVar2 + (-0xe0 - (long)&local_438));
    local_248 = 0x80;
    local_220 = local_214;
    local_214[0] = 0;
    local_250 = &local_178;
    local_1c8 = local_1bc;
    local_1bc[0] = 0;
    local_244 = 0;
    puVar3 = auStack_78;
    if (auStack_78 <= (undefined1 *)((long)&local_178 + 2U)) {
      puVar3 = (undefined1 *)((long)&local_178 + 2U);
    }
    local_240 = 0xffffffff;
    local_238 = 0xffffffff00000000;
    local_230 = 0xffffffff;
    local_218 = 0x40;
    local_1d5 = 0;
    local_1c0 = 0x40;
    local_17d = 0;
    local_258 = &PTR_LAB_04938188;
    local_80 = 0;
    local_88 = 0;
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
    local_228 = puVar1;
    local_1d0 = puVar1;
    memset(local_250,0,(size_t)(puVar3 + (-0xe0 - (long)&local_258)));
    FUN_01c0bafc(&local_448,&local_74,PTR_DAT_04bb2df0);
    lVar13 = *(long *)puVar4;
    local_450 = 0;
    local_460 = PTR_DAT_04bc0510 + 0x10;
    local_458 = local_74;
    uStack_454 = local_70;
    uVar6 = FUN_0277d6c4(&local_458);
    if (*(long *)puVar4 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_74);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
          lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar13 != 0) {
            local_450 = lVar13;
          }
        }
      }
    }
    iVar7 = FUN_01aed730(&local_460);
    uVar10 = (ulong)(long)(iVar7 * 0x5a) / 100;
    iVar7 = (int)uVar10;
    if (iVar7 < 1000) {
      uVar8 = (iVar7 / 10) * 10;
      uVar6 = uVar8 + 10;
      if (iVar7 % 10 < 5) {
        uVar6 = uVar8;
      }
    }
    else {
      iVar12 = (int)((uVar10 & 0xffffffff) / 100);
      uVar8 = iVar12 * 100;
      uVar6 = uVar8 + 100;
      if ((uint)(iVar7 + iVar12 * -100) < 0x32) {
        uVar6 = uVar8;
      }
    }
    uVar8 = FUN_02680a20(local_6c);
    if (uVar8 < uVar6) {
      uVar15 = 6;
      goto LAB_030a1b00;
    }
  }
  uVar10 = FUN_01b4b160(local_6c);
  if ((uVar10 & 1) != 0) {
    uVar15 = 5;
    goto LAB_030a1b00;
  }
  if (DAT_05574040 == 0) {
LAB_030a1afc:
    uVar15 = 1;
  }
  else {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar13 == 0) goto LAB_030a1afc;
      lVar13 = lVar13 + 0x70;
    }
    else if (((puVar11 == (undefined8 *)0x0) || ((long *)puVar11[0x26] == (long *)0x0)) ||
            (lVar13 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar13 == 0))
    goto LAB_030a1afc;
    if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar11 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar11)();
      uVar6 = uVar6 ^ 1;
    }
    lVar9 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
    bVar5 = *(long *)(lVar9 + 0x1e33b0) != 0 || *(long *)(lVar9 + 0x1e33b8) != 0;
    if (*(long *)(lVar9 + 0x1e33f8) != 0 || *(long *)(lVar9 + 0x1e3400) != 0) {
      bVar5 = bVar5 + 1;
    }
    if (*(long *)(lVar9 + 0x1e3440) != 0 || *(long *)(lVar9 + 0x1e3448) != 0) {
      bVar5 = bVar5 + 1;
    }
    if (*(long *)(lVar9 + 0x1e3488) != 0 || *(long *)(lVar9 + 0x1e3490) != 0) {
      bVar5 = bVar5 + 1;
    }
    if (*(long *)(lVar9 + 0x1e34d0) != 0 || *(long *)(lVar9 + 0x1e34d8) != 0) {
      bVar5 = bVar5 + 1;
    }
    if (*(long *)(lVar9 + 0x1e3518) != 0 || *(long *)(lVar9 + 0x1e3520) != 0) {
      bVar5 = bVar5 + 1;
    }
    if (*(long *)(lVar9 + 0x1e3560) != 0 || *(long *)(lVar9 + 0x1e3568) != 0) {
      bVar5 = bVar5 + 1;
    }
    if (*(long *)(lVar9 + 0x1e35a8) != 0 || *(long *)(lVar9 + 0x1e35b0) != 0) {
      bVar5 = bVar5 + 1;
    }
    uVar15 = 1;
    if (1 < bVar5) {
      uVar15 = 2;
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
  }
LAB_030a1b00:
  FUN_030a0740(param_1,uVar15);
  return;
}

