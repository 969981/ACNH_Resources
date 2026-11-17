
void FUN_02f603c0(long param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined *local_428;
  undefined *local_420;
  undefined *puStack_418;
  char *local_410;
  undefined *local_408;
  undefined2 local_400;
  undefined2 uStack_3fe;
  undefined4 local_3fc;
  undefined4 uStack_3f8;
  undefined4 local_3f4;
  undefined *local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined *local_3c0;
  undefined1 *puStack_3b8;
  undefined4 local_3b0;
  undefined1 local_3ac [63];
  undefined1 local_36d;
  undefined *local_368;
  undefined1 *puStack_360;
  undefined4 local_358;
  undefined1 local_354 [63];
  undefined1 local_315;
  undefined8 local_310;
  undefined *local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined *local_2d8;
  undefined1 *puStack_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4 [63];
  undefined1 local_285;
  undefined *local_280;
  undefined1 *puStack_278;
  undefined4 local_270;
  undefined1 local_26c [63];
  undefined1 local_22d;
  undefined8 local_228;
  undefined *local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc [63];
  undefined1 local_19d;
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [63];
  undefined1 local_145;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  undefined *local_78;
  int local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb2020;
  local_408 = PTR_DAT_04bb2020 + 0x10;
  local_400 = 0x897e;
  uStack_3fe = 0x408;
  local_3fc = 0;
  iVar6 = FUN_0274bce0(param_1 + 0x1f8,&local_408);
  *(bool *)(param_1 + 0x318) = iVar6 != 0;
  uVar7 = FUN_033fa1e0();
  if ((uVar7 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x318) = 0;
  }
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_408 = (undefined *)CONCAT44(local_408._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      bVar5 = false;
      *(undefined1 *)(param_1 + 0x318) = 0;
      goto LAB_02f60484;
    }
  }
  bVar5 = *(char *)(param_1 + 0x318) != '\0';
LAB_02f60484:
  puVar1 = PTR_DAT_04bc4e60;
  puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar4 = PTR_DAT_04bc4e58;
  uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
  if ((uVar7 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  plVar10 = *(long **)(puVar9[0x45] + (ulong)(4 < *(uint *)(puVar9 + 0x44)) * 0x20);
  if (plVar10 != (long *)0x0) {
    local_408 = PTR_DAT_04bc4e68 + 0x10;
    if (bVar5) {
      local_400 = 7;
      uStack_3fe = 0;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_408);
      puVar9 = (undefined8 *)(plVar10[3] + 0x1c0);
    }
    else {
      local_400 = 6;
      uStack_3fe = 0;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_408);
      puVar9 = (undefined8 *)(plVar10[3] + 0x1b8);
    }
    (*(code *)*puVar9)(plVar10[1]);
  }
  if (*(char *)(param_1 + 0x318) != '\0') {
    *(undefined8 *)(param_1 + 0x31a) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((**(uint **)PTR_DAT_04bb3448 < 0xe) &&
       ((1 << (ulong)(**(uint **)PTR_DAT_04bb3448 & 0x1f) & 0x2023U) != 0)) {
      *(undefined4 *)(param_1 + 0x324) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x324) = 0;
      puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
      if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
        *(undefined **)puVar4 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
      if ((uVar7 & 1) == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      lVar8 = 0x28;
      if (*(uint *)(puVar9 + 0x42) < 6) {
        lVar8 = 0;
      }
      lVar8 = *(long *)(puVar9[0x43] + lVar8);
      if ((lVar8 != 0) && (plVar10 = *(long **)(lVar8 + 0x48), plVar10[1] != 0)) {
        local_408 = PTR_DAT_04bc0878 + 0x10;
        local_400 = 9;
        uStack_3fe = 0;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_408);
        (**(code **)(plVar10[3] + 0x5e0))(plVar10[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar8);
      }
    }
    FUN_02f6093c(param_1,*(undefined1 *)(param_1 + 0x31e));
    FUN_02f60e68(param_1,*(undefined1 *)(param_1 + 799));
    puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
      *(undefined **)puVar4 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
    if ((uVar7 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    lVar8 = 0x18;
    if (*(uint *)(puVar9 + 0x42) < 4) {
      lVar8 = 0;
    }
    lVar8 = *(long *)(puVar9[0x43] + lVar8);
    if (lVar8 != 0) {
      local_3fc = 0;
      uStack_3f8 = 0;
      local_400 = 0x100;
      local_3f4 = 0;
      local_3e0 = 0;
      puStack_3b8 = local_3ac;
      local_3dc = 0;
      local_3d8 = 0xffffffff;
      uStack_3d0 = 0xffffffff00000000;
      local_3c8 = 0xffffffff;
      local_3b0 = 0x40;
      local_36d = 0;
      local_3ac[0] = 0;
      local_3c0 = PTR_DAT_04bb2bc0 + 0x10;
      local_358 = 0x40;
      local_315 = 0;
      local_354[0] = 0;
      puStack_360 = local_354;
      local_2e0 = 0xffffffff;
      local_208 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_200 = 0xffffffff00000000;
      local_2f8 = 0;
      local_2f4 = 0;
      local_2c8 = 0x40;
      local_285 = 0;
      local_270 = 0x40;
      local_22d = 0;
      local_310 = 0;
      local_218 = 0;
      local_210 = 0;
      local_20c = 0;
      local_1e0 = 0x40;
      local_19d = 0;
      local_188 = 0x40;
      local_145 = 0;
      local_228 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_118 = 0x40;
      local_d5 = 0;
      local_c0 = 0x40;
      local_7d = 0;
      local_3f0 = PTR_DAT_04bb2e00 + 0x10;
      puStack_278 = local_26c;
      local_26c[0] = 0;
      puStack_2d0 = local_2c4;
      local_2c4[0] = 0;
      local_2f0 = 0xffffffff;
      uStack_2e8 = 0xffffffff00000000;
      uStack_3e8 = 0;
      local_1e8 = local_1dc;
      local_1dc[0] = 0;
      local_120 = local_114;
      local_114[0] = 0;
      local_c8 = local_bc;
      local_190 = local_184;
      local_184[0] = 0;
      local_bc[0] = 0;
      uStack_300 = 0;
      local_70 = *(int *)PTR_DAT_04bc0b30;
      local_6c = 0;
      *(int *)PTR_DAT_04bc0b30 = local_70 + 1;
      local_78 = PTR_DAT_04bc0a78 + 0x10;
      local_68 = 0;
      local_60 = 0;
      local_408 = PTR_DAT_04bc0bf0 + 0x10;
      local_428 = puVar3 + 0x10;
      local_58 = 0;
      local_420 = &DAT_0406e071;
      local_410 = "MenuDevice";
      puStack_418 = local_428;
      local_368 = local_3c0;
      local_308 = local_3f0;
      local_2d8 = local_3c0;
      local_280 = local_3c0;
      local_220 = local_3f0;
      local_1f0 = local_3c0;
      local_198 = local_3c0;
      local_128 = local_3c0;
      local_d0 = local_3c0;
      FUN_01bea210(&local_408,lVar8,&puStack_418,&local_428);
      FUN_01bea9c8(&local_408);
      FUN_01be9eb8(&local_408);
    }
  }
  return;
}

