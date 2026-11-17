
void FUN_030fe658(long param_1)

{
  undefined *puVar1;
  undefined *local_430;
  undefined *puStack_428;
  undefined *local_420;
  undefined2 local_418;
  undefined8 local_414;
  undefined4 local_40c;
  undefined *local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined *local_3d8;
  undefined1 *puStack_3d0;
  undefined4 local_3c8;
  undefined1 local_3c4 [63];
  undefined1 local_385;
  undefined *local_380;
  undefined1 *puStack_378;
  undefined4 local_370;
  undefined1 local_36c [63];
  undefined1 local_32d;
  undefined8 local_328;
  undefined *local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  undefined1 local_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined *local_2f0;
  undefined1 *puStack_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc [63];
  undefined1 local_29d;
  undefined *local_298;
  undefined1 *puStack_290;
  undefined4 local_288;
  undefined1 local_284 [63];
  undefined1 local_245;
  undefined8 local_240;
  undefined *local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined *local_208;
  undefined1 *local_200;
  undefined4 local_1f8;
  undefined1 local_1f4 [63];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
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
  undefined *local_90;
  int local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [56];
  
  FUN_006d8678(auStack_68,"Melody");
  local_414 = 0;
  local_418 = 0x100;
  local_40c = 0;
  local_3f8 = 0;
  puStack_3d0 = local_3c4;
  local_3f4 = 0;
  local_3e0 = 0xffffffff;
  local_3c8 = 0x40;
  local_385 = 0;
  local_3c4[0] = 0;
  local_3f0 = 0xffffffff;
  uStack_3e8 = 0xffffffff00000000;
  local_3d8 = PTR_DAT_04bb2bc0 + 0x10;
  local_370 = 0x40;
  local_32d = 0;
  local_36c[0] = 0;
  puStack_378 = local_36c;
  local_2f8 = 0xffffffff;
  local_220 = 0xffffffff;
  local_210 = 0xffffffff;
  local_218 = 0xffffffff00000000;
  local_310 = 0;
  local_30c = 0;
  local_2e0 = 0x40;
  local_29d = 0;
  local_288 = 0x40;
  local_245 = 0;
  local_328 = 0;
  local_228 = 0;
  local_224 = 0;
  local_1f8 = 0x40;
  local_1b5 = 0;
  local_1a0 = 0x40;
  local_15d = 0;
  local_240 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_130 = 0x40;
  local_ed = 0;
  local_d8 = 0x40;
  local_95 = 0;
  local_408 = PTR_DAT_04bb2e00 + 0x10;
  puStack_290 = local_284;
  local_284[0] = 0;
  puStack_2e8 = local_2dc;
  local_2dc[0] = 0;
  local_308 = 0xffffffff;
  uStack_300 = 0xffffffff00000000;
  local_200 = local_1f4;
  local_1f4[0] = 0;
  local_138 = local_12c;
  local_12c[0] = 0;
  local_e0 = local_d4;
  local_1a8 = local_19c;
  local_19c[0] = 0;
  local_d4[0] = 0;
  uStack_400 = 0;
  uStack_318 = 0;
  uStack_230 = 0;
  local_88 = *(int *)PTR_DAT_04bc0b30;
  local_84 = 0;
  *(int *)PTR_DAT_04bc0b30 = local_88 + 1;
  puVar1 = PTR_DAT_04bb2020;
  local_90 = PTR_DAT_04bc0a78 + 0x10;
  local_80 = 0;
  local_420 = PTR_DAT_04bc0bf0 + 0x10;
  local_78 = 0;
  local_70 = 0;
  local_380 = local_3d8;
  local_320 = local_408;
  local_2f0 = local_3d8;
  local_298 = local_3d8;
  local_238 = local_408;
  local_208 = local_3d8;
  local_1b0 = local_3d8;
  local_140 = local_3d8;
  local_e8 = local_3d8;
  if (*(long *)(param_1 + 0x418) != 0) {
    local_430 = PTR_DAT_04bb2020 + 0x10;
    puStack_428 = &DAT_040f3d6d;
    FUN_01bea210(&local_420,*(long *)(param_1 + 0x418),auStack_68,&local_430);
    FUN_01bea9c8(&local_420);
  }
  if (*(long *)(param_1 + 0x420) != 0) {
    local_430 = puVar1 + 0x10;
    puStack_428 = &DAT_040a04a3;
    FUN_01bea210(&local_420,*(long *)(param_1 + 0x420),auStack_68,&local_430);
    FUN_01bea9c8(&local_420);
  }
  if (*(long *)(param_1 + 0x428) != 0) {
    local_430 = puVar1 + 0x10;
    puStack_428 = &DAT_0406e071;
    FUN_01bea210(&local_420,*(long *)(param_1 + 0x428),auStack_68,&local_430);
    FUN_01bea9c8(&local_420);
  }
  if (*(long *)(param_1 + 0x430) != 0) {
    local_430 = puVar1 + 0x10;
    puStack_428 = &DAT_04082e16;
    FUN_01bea210(&local_420,*(long *)(param_1 + 0x430),auStack_68,&local_430);
    FUN_01bea9c8(&local_420);
  }
  if (*(long *)(param_1 + 0x438) != 0) {
    local_430 = puVar1 + 0x10;
    puStack_428 = &DAT_040ac95a;
    FUN_01bea210(&local_420,*(long *)(param_1 + 0x438),auStack_68,&local_430);
    FUN_01bea9c8(&local_420);
  }
  if (*(long *)(param_1 + 0x440) != 0) {
    local_430 = puVar1 + 0x10;
    puStack_428 = &DAT_040eaebb;
    FUN_01bea210(&local_420,*(long *)(param_1 + 0x440),auStack_68,&local_430);
    FUN_01bea9c8(&local_420);
  }
  if (*(long *)(param_1 + 0x448) != 0) {
    local_430 = puVar1 + 0x10;
    puStack_428 = &DAT_040f5f07;
    FUN_01bea210(&local_420,*(long *)(param_1 + 0x448),auStack_68,&local_430);
    FUN_01bea9c8(&local_420);
  }
  if (*(long *)(param_1 + 0x450) != 0) {
    local_430 = puVar1 + 0x10;
    puStack_428 = &DAT_04068e7f;
    FUN_01bea210(&local_420,*(long *)(param_1 + 0x450),auStack_68,&local_430);
    FUN_01bea9c8(&local_420);
  }
  FUN_01be9eb8(&local_420);
  return;
}

