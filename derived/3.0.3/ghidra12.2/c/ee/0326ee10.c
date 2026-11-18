
void FUN_0326ee10(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined *local_518;
  undefined4 local_510;
  undefined8 local_50c;
  undefined4 local_504;
  undefined *local_500;
  undefined8 uStack_4f8;
  undefined4 local_4f0;
  undefined1 local_4ec;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined *local_4d0;
  undefined1 *puStack_4c8;
  undefined4 local_4c0;
  undefined1 local_4bc [63];
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
  undefined8 uStack_328;
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
  undefined4 local_58;
  
  puVar1 = PTR_DAT_04bc4e60;
  uVar10 = *(uint *)(param_1 + 0xaa8e8);
  iVar7 = -1;
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_1 + 0xaa8d0))) {
    lVar9 = param_1 + 0xaa8c0;
    uVar2 = uVar10 + 1 & 3;
    if (2 < uVar10) {
      uVar10 = uVar10 + 1 & 0xfffffffc;
      do {
        uVar10 = uVar10 - 4;
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
      } while (uVar10 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar9 = *(long *)(lVar9 + 8);
    }
    iVar7 = -1;
    if ((lVar9 != 0) && (lVar9 = lVar9 - *(int *)(param_1 + 0xaa8d4), lVar9 != 0)) {
      iVar7 = *(int *)(lVar9 + 0x270);
    }
  }
  puVar11 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar5 = PTR_DAT_04bc4e58;
  uVar8 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc4e58);
  if ((uVar8 & 1) == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  plVar12 = *(long **)puVar11[0x45];
  if ((*(int *)(param_1 + 0x220) == 1) || (iVar7 != 0)) {
    local_518 = PTR_DAT_04bc4e68 + 0x10;
    local_510 = 7;
    (**(code **)(*plVar12 + 0x18))(plVar12,&local_518);
    (**(code **)(plVar12[3] + 0x1c0))(plVar12[1]);
  }
  else {
    local_518 = PTR_DAT_04bc4e68 + 0x10;
    local_510 = 6;
    (**(code **)(*plVar12 + 0x18))(plVar12,&local_518);
    (**(code **)(plVar12[3] + 0x1b8))(plVar12[1]);
    puVar11 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0)) {
      *(undefined **)puVar5 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar8 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc4e58);
    if ((uVar8 & 1) == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    lVar9 = *(long *)(puVar11[0x43] + (ulong)(2 < *(uint *)(puVar11 + 0x42)) * 0x10);
    if (lVar9 != 0) {
      local_14c = 0;
      local_150 = 0x13;
      local_148 = 0xffffffff;
      local_128 = local_11c;
      local_140 = 0xffffffff00000000;
      local_158 = &local_80;
      local_138 = 0xffffffff;
      local_120 = 0x40;
      local_dd = 0;
      local_11c[0] = 0;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      local_d0 = local_c4;
      local_c8 = 0x40;
      local_85 = 0;
      local_c4[0] = 0;
      local_160 = PTR_DAT_04bc0bc0 + 0x10;
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      uStack_60 = 0;
      puVar3 = auStack_5a;
      if (auStack_5a <= (undefined1 *)((long)&local_80 + 2U)) {
        puVar3 = (undefined1 *)((long)&local_80 + 2U);
      }
      uStack_68 = 0;
      local_62 = 0;
      local_130 = puVar1;
      local_d8 = puVar1;
      memset(local_158,0,(ulong)(puVar3 + (-0xe1 - (long)&local_160)) & 0xfffffffffffffffc | 2);
      local_58 = 0;
      uVar4 = *(undefined4 *)(param_1 + 0xaa9fc);
      FUN_01be4af0(&local_160,**(undefined4 **)PTR_DAT_04bb3448,uVar4,10,0,0);
      local_510 = CONCAT22(local_510._2_2_,0x100);
      puStack_4c8 = local_4bc;
      local_50c = 0;
      local_504 = 0;
      local_4f0 = 0;
      local_4ec = 0;
      local_4d8 = 0xffffffff;
      local_4c0 = 0x40;
      local_47d = 0;
      local_4bc[0] = 0;
      local_468 = 0x40;
      local_425 = 0;
      local_464[0] = 0;
      local_4e8 = 0xffffffff;
      uStack_4e0 = 0xffffffff00000000;
      puStack_470 = local_464;
      local_408 = 0;
      local_404 = 0;
      local_3f0 = 0xffffffff;
      local_3d8 = 0x40;
      local_395 = 0;
      local_380 = 0x40;
      local_33d = 0;
      local_420 = 0;
      local_320 = 0;
      local_31c = 0;
      local_318 = 0xffffffff;
      local_310 = 0xffffffff00000000;
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
      local_500 = PTR_DAT_04bb2e00 + 0x10;
      puStack_388 = local_37c;
      local_37c[0] = 0;
      puStack_3e0 = local_3d4;
      local_3d4[0] = 0;
      uStack_4f8 = 0;
      uStack_410 = 0;
      local_2a0 = local_294;
      local_294[0] = 0;
      local_2f8 = local_2ec;
      local_2ec[0] = 0;
      uStack_328 = 0;
      local_230 = local_224;
      local_224[0] = 0;
      local_1d8 = local_1cc;
      local_1cc[0] = 0;
      local_400 = 0xffffffff;
      uStack_3f8 = 0xffffffff00000000;
      local_180 = *(int *)PTR_DAT_04bc0b30;
      local_17c = 0;
      *(int *)PTR_DAT_04bc0b30 = local_180 + 1;
      local_188 = PTR_DAT_04bc0a78 + 0x10;
      local_178 = 0;
      local_170 = 0;
      local_518 = PTR_DAT_04bc0bf0 + 0x10;
      local_168 = 0;
      local_4d0 = puVar1;
      local_478 = puVar1;
      local_418 = local_500;
      local_3e8 = puVar1;
      local_390 = puVar1;
      local_330 = local_500;
      local_300 = puVar1;
      local_2a8 = puVar1;
      local_238 = puVar1;
      local_1e0 = puVar1;
      local_58 = uVar4;
      FUN_01bea4e8(&local_518,lVar9,&local_160);
      FUN_01bea9c8(&local_518);
      FUN_01be9eb8(&local_518);
    }
  }
  return;
}

