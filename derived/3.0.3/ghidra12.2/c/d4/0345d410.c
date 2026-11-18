
void FUN_0345d410(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  byte local_444 [4];
  undefined *local_440;
  undefined *local_438;
  undefined *local_430;
  char *local_428;
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
  
  uVar7 = *(uint *)(param_1 + 0x110);
  if (-1 < (int)uVar7) {
    lVar12 = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    puVar2 = PTR_DAT_04bb2e00 + 0x10;
    puVar3 = PTR_DAT_04bc0a78 + 0x10;
    puVar4 = PTR_DAT_04bc0bf0 + 0x10;
    puVar5 = PTR_DAT_04bb2020 + 0x10;
    while( true ) {
      if (-1 < (int)uVar7) {
        lVar10 = *(long *)(param_1 + 0x20 + lVar12);
        if (*(uint *)(lVar10 + 0x218) <= uVar7) {
          uVar7 = 0;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0x220) + (ulong)uVar7 * 8);
        if (lVar10 != 0) {
          local_414 = 0;
          local_418 = 0x100;
          local_40c = 0;
          local_3f8 = 0;
          local_3f4 = 0;
          local_3e0 = 0xffffffff;
          local_3c8 = 0x40;
          local_385 = 0;
          local_3c4[0] = 0;
          local_370 = 0x40;
          local_32d = 0;
          local_36c[0] = 0;
          local_310 = 0;
          local_30c = 0;
          local_2f8 = 0xffffffff;
          local_2e0 = 0x40;
          local_29d = 0;
          local_2dc[0] = 0;
          local_288 = 0x40;
          local_245 = 0;
          local_284[0] = 0;
          local_328 = 0;
          local_228 = 0;
          local_224 = 0;
          local_220 = 0xffffffff;
          local_218 = 0xffffffff00000000;
          local_210 = 0xffffffff;
          local_1f8 = 0x40;
          local_1b5 = 0;
          local_1f4[0] = 0;
          local_1a0 = 0x40;
          local_15d = 0;
          local_19c[0] = 0;
          local_240 = 0;
          local_158 = 0;
          local_130 = 0x40;
          local_ed = 0;
          local_12c[0] = 0;
          local_d8 = 0x40;
          local_95 = 0;
          local_d4[0] = 0;
          local_3f0 = 0xffffffff;
          uStack_3e8 = 0xffffffff00000000;
          uStack_400 = 0;
          uStack_318 = 0;
          local_308 = 0xffffffff;
          uStack_300 = 0xffffffff00000000;
          uStack_230 = 0;
          local_150 = 0;
          local_148 = 0;
          local_88 = *(int *)PTR_DAT_04bc0b30;
          local_84 = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          *(int *)PTR_DAT_04bc0b30 = local_88 + 1;
          local_428 = "STR_KeyIcon";
          local_438 = &DAT_0405cd65;
          local_440 = puVar5;
          local_430 = puVar5;
          local_420 = puVar4;
          local_408 = puVar2;
          local_3d8 = puVar1;
          puStack_3d0 = local_3c4;
          local_380 = puVar1;
          puStack_378 = local_36c;
          local_320 = puVar2;
          local_2f0 = puVar1;
          puStack_2e8 = local_2dc;
          local_298 = puVar1;
          puStack_290 = local_284;
          local_238 = puVar2;
          local_208 = puVar1;
          local_200 = local_1f4;
          local_1b0 = puVar1;
          local_1a8 = local_19c;
          local_140 = puVar1;
          local_138 = local_12c;
          local_e8 = puVar1;
          local_e0 = local_d4;
          local_90 = puVar3;
          FUN_01bea210(&local_420,lVar10,&local_430,&local_440);
          FUN_01bea9c8(&local_420);
          FUN_01be9eb8(&local_420);
        }
      }
      if (lVar12 == 0xe8) break;
      uVar7 = *(uint *)(param_1 + 0x110);
      lVar12 = lVar12 + 8;
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  local_414 = 0;
  local_418 = 0x100;
  local_40c = 0;
  puStack_3d0 = local_3c4;
  local_3f8 = 0;
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
  local_408 = PTR_DAT_04bb2e00 + 0x10;
  puStack_290 = local_284;
  local_284[0] = 0;
  local_218 = 0xffffffff00000000;
  local_310 = 0;
  local_30c = 0;
  puStack_2e8 = local_2dc;
  local_2dc[0] = 0;
  local_2f8 = 0xffffffff;
  local_2e0 = 0x40;
  local_29d = 0;
  local_288 = 0x40;
  local_245 = 0;
  local_328 = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0xffffffff;
  local_210 = 0xffffffff;
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
  local_308 = 0xffffffff;
  uStack_300 = 0xffffffff00000000;
  local_200 = local_1f4;
  local_1f4[0] = 0;
  local_1a8 = local_19c;
  local_19c[0] = 0;
  local_12c[0] = 0;
  local_d4[0] = 0;
  uStack_400 = 0;
  uStack_318 = 0;
  uStack_230 = 0;
  local_138 = local_12c;
  local_e0 = local_d4;
  local_88 = *(int *)PTR_DAT_04bc0b30;
  local_84 = 0;
  *(int *)PTR_DAT_04bc0b30 = local_88 + 1;
  local_90 = PTR_DAT_04bc0a78 + 0x10;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_420 = PTR_DAT_04bc0bf0 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_0345d87c:
    if (7 < *pbVar9) {
LAB_0345d888:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar12 = **(long **)PTR_DAT_04bb27d0;
        bVar8 = *(byte *)(lVar12 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar6 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar6 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar6 & 8) != 0) {
            pbVar9 = (byte *)(lVar12 + 0x471);
          }
        }
        local_444[0] = *pbVar9;
        if (local_444[0] < 8) goto LAB_0345d908;
      }
      pbVar9 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0345d87c;
      }
      goto LAB_0345d888;
    }
  }
  local_444[0] = *pbVar9;
  if (7 < local_444[0]) {
    local_444[0] = 0xff;
  }
LAB_0345d908:
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  local_430 = PTR_DAT_04bb2020 + 0x10;
  local_428 = "STR_KeyIcon";
  local_380 = local_3d8;
  local_320 = local_408;
  local_2f0 = local_3d8;
  local_298 = local_3d8;
  local_238 = local_408;
  local_208 = local_3d8;
  local_1b0 = local_3d8;
  local_140 = local_3d8;
  local_e8 = local_3d8;
  FUN_033fbef0(&local_440,0xd,local_444);
  FUN_01bea210(&local_420,uVar11,&local_430,&local_440);
  FUN_01bea9c8(&local_420);
  FUN_01be9eb8(&local_420);
  return;
}

