
/* WARNING: Removing unreachable block (ram,0x01bb3bb0) */
/* WARNING: Removing unreachable block (ram,0x01bb3c04) */

long FUN_01bb3990(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined *local_490;
  undefined1 auStack_488 [16];
  undefined *local_478;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined *local_448;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined *local_418;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined *local_3e8;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined *local_3b8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined *local_388;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined *local_358;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined *local_328;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined *local_2f8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined *local_2c8;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  undefined1 local_28c;
  undefined2 local_28a;
  undefined *local_288;
  long local_280 [2];
  undefined *local_270;
  undefined8 local_250;
  undefined8 local_248;
  undefined *local_240;
  undefined8 local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined8 local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  long *local_80;
  long local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined1 local_60;
  
  lVar5 = 0;
  if (param_1 != 0) {
    lVar7 = *(long *)PTR_DAT_04bb28f8;
    memset(local_280,0,0x1e0);
    puVar2 = PTR_DAT_04bb2d80;
    local_250 = 0;
    local_248 = 0;
    local_220 = 0;
    puVar1 = PTR_DAT_04bb2d80 + 0x10;
    local_218 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_190 = 0;
    local_188 = 0;
    local_160 = 0;
    local_158 = 0;
    local_130 = 0;
    local_128 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_288 = PTR_DAT_04bc0798 + 0x10;
    local_80 = (long *)0x0;
    local_68 = 0;
    local_60 = 0;
    local_70 = PTR_LAB_04bc08e8;
    local_270 = puVar1;
    local_240 = puVar1;
    local_210 = puVar1;
    local_1e0 = puVar1;
    local_1b0 = puVar1;
    local_180 = puVar1;
    local_150 = puVar1;
    local_120 = puVar1;
    local_f0 = puVar1;
    local_c0 = puVar1;
    local_78 = param_1;
    FUN_006f1750(&local_288);
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    if (param_2 != 0) {
      local_a0 = 0;
      local_280[1] = 0;
      local_280[0] = param_2;
      local_270 = puVar1;
    }
    (**(code **)(local_288 + 0x18))(&local_288);
    FUN_006f1490(&local_288);
    lVar5 = 0;
    if (local_80 != (long *)0x0) {
      uVar4 = (**(code **)(*local_80 + 0x20))();
      memset(auStack_488,0,0x1e0);
      local_478 = puVar2 + 0x10;
      local_458 = 0;
      uStack_450 = 0;
      local_2a8 = 0xffffffff;
      local_428 = 0;
      uStack_420 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_308 = 0;
      uStack_300 = 0;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_490 = PTR_DAT_04bc07f0 + 0x10;
      local_290 = 0;
      local_28c = 0;
      local_28a = 0;
      local_448 = local_478;
      local_418 = local_478;
      local_3e8 = local_478;
      local_3b8 = local_478;
      local_388 = local_478;
      local_358 = local_478;
      local_328 = local_478;
      local_2f8 = local_478;
      local_2c8 = local_478;
      uVar3 = FUN_01ba3a64(&local_490,uVar4);
      if (param_3 == 0) {
        uVar3 = uVar3 & 0xffff;
        uVar6 = 0xd;
        if ((((0x26 < uVar3 - 0xc0) || ((1L << ((ulong)(uVar3 - 0xc0) & 0x3f) & 0x7f0000007fU) == 0)
             ) && (uVar3 != 0x41)) && (uVar3 != 0x61)) {
          return lVar7 + 0x37d8;
        }
      }
      else {
        uVar3 = uVar3 & 0xffff;
        uVar6 = 0xf;
        if (((0x23 < uVar3 - 200) || ((1L << ((ulong)(uVar3 - 200) & 0x3f) & 0xf0000000fU) == 0)) &&
           ((uVar3 != 0x65 && (uVar3 != 0x45)))) {
          return lVar7 + 0x3a28;
        }
      }
      lVar5 = lVar7 + 0x29f8 + (ulong)uVar6 * 0x128;
      if (0x50 < uVar6) {
        lVar5 = lVar7 + 0x29f8;
      }
    }
  }
  return lVar5;
}

