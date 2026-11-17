
void FUN_02ef9230(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *local_448;
  undefined1 *puStack_440;
  undefined *local_438;
  undefined2 local_430;
  undefined2 uStack_42e;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 local_424;
  undefined *local_420;
  undefined8 uStack_418;
  undefined4 local_410;
  undefined1 local_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined *local_3f0;
  undefined1 *puStack_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc [63];
  undefined1 local_39d;
  undefined *local_398;
  undefined1 *puStack_390;
  undefined4 local_388;
  undefined1 local_384 [63];
  undefined1 local_345;
  undefined8 local_340;
  undefined *local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined1 local_324;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  undefined *local_308;
  undefined1 *puStack_300;
  undefined4 local_2f8;
  undefined1 local_2f4 [63];
  undefined1 local_2b5;
  undefined *local_2b0;
  undefined1 *puStack_2a8;
  undefined4 local_2a0;
  undefined1 local_29c [63];
  undefined1 local_25d;
  undefined8 local_258;
  undefined *puStack_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
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
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  undefined *local_a8;
  int local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_55;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x260) == 0) {
    return;
  }
  local_438 = PTR_DAT_04bb2020 + 0x10;
  local_430 = 0x17d;
  uStack_42e = 0x40e;
  local_42c = 0;
  iVar4 = FUN_0274bce0(param_2,&local_438);
  if (iVar4 == 0) {
    return;
  }
  local_55 = 0;
  local_60 = 0x39303000000008;
  local_68 = (undefined1 *)((long)&local_60 + 4);
  local_70 = PTR_DAT_04bb3768 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb3960;
  if (((lVar9 == 0) || (uVar5 = FUN_02582d8c(param_2,1), 7 < uVar5)) ||
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0'))
  goto LAB_02ef94c8;
  uVar5 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d8);
  uVar10 = (ulong)uVar5;
  if (uVar5 == 0xffffffff) goto LAB_02ef94c8;
  plVar8 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x260) + 0x2f0);
  lVar7 = (long)*(int *)(*(long *)PTR_DAT_04bc95e0 + 0x184);
  lVar6 = *(long *)(*(long *)PTR_DAT_04bc95e0 + 0x178) - lVar7;
  if (*(int *)(lVar6 + 0x18) != 0xd) {
    do {
      lVar6 = *(long *)(lVar6 + lVar7 + 8) - lVar7;
    } while (*(int *)(lVar6 + 0x18) != 0xd);
  }
  if (*(int *)(lVar6 + 0x2c) == 1) {
    local_438 = (undefined *)CONCAT44(local_438._4_4_,uVar5);
    iVar4 = nn::hid::GetNpadJoyAssignment((uint *)&local_438);
    if (iVar4 != 1) goto LAB_02ef9488;
    if (3 < uVar5) {
      uVar10 = 0;
    }
    if (1 < *(int *)(lVar9 + uVar10 * 4 + 0xf5b40) - 3U) goto LAB_02ef9488;
    lVar6 = FUN_009b56e8(lVar9,uVar5);
    puVar2 = PTR_DAT_04bb4f38;
    if (lVar6 == 0) {
LAB_02ef93e8:
      lVar9 = FUN_009b56e8(lVar9,uVar5);
      if (lVar9 == 0) goto LAB_02ef94c8;
      puVar11 = *(undefined8 **)(lVar9 + 0xc20);
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4f38);
      }
      if (((puVar11 == (undefined8 *)0x0) ||
          (uVar10 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb4f30), (uVar10 & 1) == 0)) ||
         ((*(byte *)((long)puVar11 + 0x17c) >> 2 & 1) == 0)) goto LAB_02ef94c8;
      local_438 = puVar1 + 0x10;
      *local_68 = 0;
      local_430 = 0xf902;
      uStack_42e = 0x40d;
      local_42c = 0;
      FUN_008aa0a0(&local_70,&local_438,0xffffffff);
      local_438 = PTR_DAT_04bc4f00 + 0x10;
      local_430 = 0x14;
      uStack_42e = 0;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_438);
      uVar12 = 0x40000000;
    }
    else {
      puVar11 = *(undefined8 **)(lVar6 + 0xc20);
      if (((*PTR_DAT_04bb4f38 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4f38);
      }
      if (((puVar11 == (undefined8 *)0x0) ||
          (uVar10 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb4f30), puVar3 = local_68,
          (uVar10 & 1) == 0)) || ((*(byte *)((long)puVar11 + 0x17c) >> 1 & 1) == 0))
      goto LAB_02ef93e8;
      *local_68 = 0;
      if (local_68 != &DAT_040e4c47) {
        iVar4 = 3;
        if ((int)local_60 < 4) {
          iVar4 = (int)local_60 + -1;
        }
        memcpy(local_68,&DAT_040e4c47,(long)iVar4);
        puVar3[iVar4] = 0;
      }
      local_438 = PTR_DAT_04bc4f00 + 0x10;
      local_430 = 0x14;
      uStack_42e = 0;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_438);
      uVar12 = 0x3f800000;
    }
  }
  else {
LAB_02ef9488:
    local_438 = PTR_DAT_04bc4f00 + 0x10;
    local_430 = 0x14;
    uStack_42e = 0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_438);
    uVar12 = 0;
  }
  (**(code **)(plVar8[3] + 0x158))(uVar12,plVar8[1]);
LAB_02ef94c8:
  local_a8 = PTR_DAT_04bc0a78;
  puVar1 = puVar1 + 0x10;
  pcStack_78 = "STR_KeyIcon";
  lVar9 = **(long **)(*(long *)(param_1 + 0x260) + 0x2e0);
  if (lVar9 != 0) {
    local_42c = 0;
    uStack_428 = 0;
    local_430 = 0x100;
    local_424 = 0;
    local_410 = 0;
    puStack_3e8 = local_3dc;
    local_40c = 0;
    local_408 = 0xffffffff;
    uStack_400 = 0xffffffff00000000;
    local_3f8 = 0xffffffff;
    local_3e0 = 0x40;
    local_39d = 0;
    local_3dc[0] = 0;
    local_3f0 = PTR_DAT_04bb2bc0 + 0x10;
    local_388 = 0x40;
    local_345 = 0;
    local_384[0] = 0;
    puStack_390 = local_384;
    local_420 = PTR_DAT_04bb2e00 + 0x10;
    local_230 = 0xffffffff00000000;
    puStack_2a8 = local_29c;
    local_29c[0] = 0;
    local_310 = 0xffffffff;
    local_238 = 0xffffffff;
    local_228 = 0xffffffff;
    puStack_300 = local_2f4;
    local_2f4[0] = 0;
    local_328 = 0;
    local_324 = 0;
    local_2f8 = 0x40;
    local_2b5 = 0;
    local_2a0 = 0x40;
    local_25d = 0;
    local_340 = 0;
    local_248 = 0;
    local_240 = 0;
    local_23c = 0;
    local_210 = 0x40;
    local_1cd = 0;
    local_1b8 = 0x40;
    local_175 = 0;
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_148 = 0x40;
    local_105 = 0;
    local_f0 = 0x40;
    local_ad = 0;
    local_320 = 0xffffffff;
    uStack_318 = 0xffffffff00000000;
    local_218 = local_20c;
    local_20c[0] = 0;
    local_150 = local_144;
    local_144[0] = 0;
    local_f8 = local_ec;
    local_1c0 = local_1b4;
    local_1b4[0] = 0;
    local_ec[0] = 0;
    uStack_418 = 0;
    uStack_330 = 0;
    local_258 = 0;
    local_a0 = *(int *)PTR_DAT_04bc0b30;
    local_9c = 0;
    *(int *)PTR_DAT_04bc0b30 = local_a0 + 1;
    local_a8 = local_a8 + 0x10;
    local_98 = 0;
    local_438 = PTR_DAT_04bc0bf0 + 0x10;
    local_90 = 0;
    local_88 = 0;
    local_398 = local_3f0;
    local_338 = local_420;
    local_308 = local_3f0;
    local_2b0 = local_3f0;
    puStack_250 = local_420;
    local_220 = local_3f0;
    local_1c8 = local_3f0;
    local_158 = local_3f0;
    local_100 = local_3f0;
    local_80 = puVar1;
    (**(code **)(local_70 + 0x18))(&local_70);
    puStack_440 = local_68;
    local_448 = puVar1;
    FUN_01bea210(&local_438,lVar9,&local_80,&local_448);
    FUN_01bea9c8(&local_438);
    FUN_01be9eb8(&local_438);
  }
  return;
}

