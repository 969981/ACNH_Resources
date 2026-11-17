
void FUN_02ee06c8(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *local_538;
  undefined1 *puStack_530;
  undefined *local_528;
  char *pcStack_520;
  undefined *local_518;
  undefined2 local_510;
  undefined2 uStack_50e;
  undefined4 local_50c;
  undefined4 uStack_508;
  uint local_504;
  undefined *local_500;
  undefined8 uStack_4f8;
  undefined4 local_4f0;
  undefined1 local_4ec;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined *local_4d0;
  long lStack_4c8;
  undefined8 local_4c0;
  undefined1 local_47d;
  undefined *local_478;
  undefined1 *puStack_470;
  undefined4 local_468;
  undefined1 local_464 [63];
  undefined1 local_425;
  undefined8 local_420;
  undefined *local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined1 local_404;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined4 local_3f0;
  undefined *local_3e8;
  undefined1 *puStack_3e0;
  undefined4 local_3d8;
  undefined1 local_3d4 [63];
  undefined1 local_395;
  undefined *local_390;
  undefined1 *puStack_388;
  undefined4 local_380;
  undefined1 local_37c [63];
  undefined1 local_33d;
  undefined8 local_338;
  undefined *local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined1 local_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined *local_300;
  undefined1 *local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec [63];
  undefined1 local_2ad;
  undefined *local_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  undefined1 local_294 [63];
  undefined1 local_255;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
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
  undefined *local_188;
  int local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined2 local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 *local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined1 *local_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined6 uStack_60;
  undefined1 auStack_5a [2];
  int local_58;
  
  puVar4 = PTR_DAT_04bb2bc0;
  local_14c = 0;
  local_140 = 0xffffffff00000000;
  local_150 = 0x13;
  lVar8 = *(long *)(param_1 + 0x228);
  local_148 = 0xffffffff;
  local_128 = local_11c;
  local_138 = 0xffffffff;
  local_158 = &local_80;
  local_120 = 0x40;
  local_dd = 0;
  local_11c[0] = 0;
  local_130 = PTR_DAT_04bb2bc0 + 0x10;
  local_d0 = local_c4;
  local_c8 = 0x40;
  local_85 = 0;
  local_c4[0] = 0;
  local_160 = PTR_DAT_04bc0bc0 + 0x10;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_60 = 0;
  puVar1 = auStack_5a;
  if (auStack_5a <= (undefined1 *)((long)&local_80 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_80 + 2U);
  }
  uStack_68 = 0;
  local_62 = 0;
  local_d8 = local_130;
  memset(local_158,0,(ulong)(puVar1 + (-0xe1 - (long)&local_160)) & 0xfffffffffffffffc | 2);
  local_58 = 0;
  if (param_2 != 0) {
    uVar2 = 3;
    if (**(int **)PTR_DAT_04bb3448 != 8) {
      uVar2 = 0;
    }
    FUN_01be4af0(&local_160,**(int **)PTR_DAT_04bb3448,param_2,10,uVar2,0);
    local_58 = param_2;
  }
  puVar5 = PTR_DAT_04bc4e60;
  puVar9 = (undefined8 *)**(undefined8 **)(lVar8 + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar9 != (undefined8 *)0x0) &&
     (uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58), (uVar7 & 1) != 0)) {
    local_50c = 0;
    uStack_508 = 0;
    local_510 = 0x100;
    lStack_4c8 = (long)&local_4c0 + 4;
    local_4d0 = puVar4 + 0x10;
    local_504 = 0;
    puStack_470 = local_464;
    local_4f0 = 0;
    local_4ec = 0;
    local_4d8 = 0xffffffff;
    local_47d = 0;
    local_4c0 = CONCAT35(local_4c0._5_3_,0x40);
    local_468 = 0x40;
    local_425 = 0;
    local_464[0] = 0;
    local_4e8 = 0xffffffff;
    uStack_4e0 = 0xffffffff00000000;
    local_500 = PTR_DAT_04bb2e00 + 0x10;
    local_310 = 0xffffffff00000000;
    puStack_388 = local_37c;
    local_37c[0] = 0;
    puStack_3e0 = local_3d4;
    local_3d4[0] = 0;
    local_408 = 0;
    local_404 = 0;
    local_3f0 = 0xffffffff;
    local_3d8 = 0x40;
    local_395 = 0;
    local_380 = 0x40;
    local_33d = 0;
    local_420 = 0;
    local_328 = 0;
    local_320 = 0;
    local_31c = 0;
    local_318 = 0xffffffff;
    local_308 = 0xffffffff;
    local_2f0 = 0x40;
    local_2ad = 0;
    local_298 = 0x40;
    local_255 = 0;
    local_338 = 0;
    local_240 = 0;
    local_248 = 0;
    local_250 = 0;
    local_228 = 0x40;
    local_1e5 = 0;
    local_1d0 = 0x40;
    local_18d = 0;
    local_400 = 0xffffffff;
    uStack_3f8 = 0xffffffff00000000;
    local_224[0] = 0;
    local_1cc[0] = 0;
    local_2f8 = local_2ec;
    local_2ec[0] = 0;
    local_2a0 = local_294;
    local_294[0] = 0;
    uStack_4f8 = 0;
    uStack_410 = 0;
    local_230 = local_224;
    local_1d8 = local_1cc;
    local_180 = *(int *)PTR_DAT_04bc0b30;
    local_17c = 0;
    local_188 = PTR_DAT_04bc0a78 + 0x10;
    local_178 = 0;
    local_518 = PTR_DAT_04bc0bf0 + 0x10;
    local_170 = 0;
    local_168 = 0;
    uVar3 = *(uint *)(puVar9 + 0x42);
    lVar8 = puVar9[0x43];
    *(int *)PTR_DAT_04bc0b30 = local_180 + 1;
    local_478 = local_4d0;
    local_418 = local_500;
    local_3e8 = local_4d0;
    local_390 = local_4d0;
    local_330 = local_500;
    local_300 = local_4d0;
    local_2a8 = local_4d0;
    local_238 = local_4d0;
    local_1e0 = local_4d0;
    FUN_01bea4e8(&local_518,*(undefined8 *)(lVar8 + (ulong)(2 < uVar3) * 0x10),&local_160);
    FUN_01bea9c8(&local_518);
    FUN_01be9eb8(&local_518);
  }
  puVar9 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
    if ((uVar7 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
  }
  local_518 = puVar4 + 0x10;
  lStack_4c8._0_4_ = (uint)(uint3)lStack_4c8;
  uStack_508 = 0x40;
  local_504 = local_504 & 0xffffff00;
  local_4c0 = 0;
  local_510 = SUB82(&local_504,0);
  uStack_50e = (undefined2)((ulong)&local_504 >> 0x10);
  local_50c = (undefined4)((ulong)&local_504 >> 0x20);
  if (puVar9 != (undefined8 *)0x0) {
    lVar8 = 0x38;
    if (*(uint *)(puVar9 + 0x42) < 8) {
      lVar8 = 0;
    }
    local_4c0 = *(undefined8 *)(puVar9[0x43] + lVar8);
  }
  local_538 = PTR_DAT_04bb2020 + 0x10;
  pcStack_520 = "SwkbdTextAreaKaburiba";
  puStack_530 = &DAT_040a04a3;
  if (param_2 != 0) {
    puStack_530 = &DAT_040f8ff3;
  }
  local_160 = PTR_DAT_04bc5058 + 0x10;
  local_528 = local_538;
  FUN_03462c84(&local_518,&local_528,&local_538,&local_160);
  return;
}

