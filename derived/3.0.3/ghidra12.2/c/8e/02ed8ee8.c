
void FUN_02ed8ee8(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined *local_428;
  undefined *puStack_420;
  undefined *local_418;
  char *pcStack_410;
  undefined *local_408;
  undefined4 local_400;
  undefined8 local_3fc;
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
  int local_34;
  
  local_34 = 0;
  if (*(int *)(param_1 + 0x224) == 3) {
    local_34 = FUN_014e5cfc();
  }
  puVar3 = PTR_DAT_04bc4e60;
  if (local_34 == 2) {
    local_408 = (undefined *)CONCAT44(local_408._4_4_,2);
    puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar10 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), puVar4 = PTR_DAT_04bc0a78,
       (uVar6 & 1) != 0)) {
      uVar1 = (uint)local_408;
      if (*(uint *)(puVar10 + 0x42) <= (uint)local_408) {
        uVar1 = 0;
      }
      lVar7 = *(long *)(puVar10[0x43] + (long)(int)uVar1 * 8);
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x48) != 0)) &&
         (*(long *)(*(long *)(lVar7 + 0x48) + 8) != 0)) {
        local_3fc = 0;
        local_400 = CONCAT22(local_400._2_2_,0x100);
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
        local_3f0 = PTR_DAT_04bb2e00 + 0x10;
        puStack_278 = local_26c;
        local_26c[0] = 0;
        local_200 = 0xffffffff00000000;
        local_2e0 = 0xffffffff;
        local_208 = 0xffffffff;
        local_1f8 = 0xffffffff;
        local_2f8 = 0;
        local_2f4 = 0;
        puStack_2d0 = local_2c4;
        local_2c4[0] = 0;
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
        local_2f0 = 0xffffffff;
        uStack_2e8 = 0xffffffff00000000;
        local_1e8 = local_1dc;
        local_1dc[0] = 0;
        local_120 = local_114;
        local_114[0] = 0;
        local_c8 = local_bc;
        local_190 = local_184;
        local_184[0] = 0;
        local_bc[0] = 0;
        uStack_3e8 = 0;
        uStack_300 = 0;
        local_70 = *(int *)PTR_DAT_04bc0b30;
        local_6c = 0;
        *(int *)PTR_DAT_04bc0b30 = local_70 + 1;
        local_78 = puVar4 + 0x10;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_408 = PTR_DAT_04bc0bf0 + 0x10;
        local_428 = PTR_DAT_04bb2020 + 0x10;
        pcStack_410 = "Interior";
        puStack_420 = &DAT_040eb214;
        local_418 = local_428;
        local_368 = local_3c0;
        local_308 = local_3f0;
        local_2d8 = local_3c0;
        local_280 = local_3c0;
        local_220 = local_3f0;
        local_1f0 = local_3c0;
        local_198 = local_3c0;
        local_128 = local_3c0;
        local_d0 = local_3c0;
        FUN_01bea210(&local_408,lVar7,&local_418,&local_428);
        FUN_01bea9c8(&local_408);
        FUN_01be9eb8(&local_408);
      }
    }
    local_408 = (undefined *)CONCAT44(local_408._4_4_,4);
    puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar10 == (undefined8 *)0x0) ||
       (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), puVar4 = PTR_DAT_04bc0a78,
       (uVar6 & 1) == 0)) goto LAB_02ed99dc;
    uVar1 = (uint)local_408;
    if (*(uint *)(puVar10 + 0x42) <= (uint)local_408) {
      uVar1 = 0;
    }
    lVar7 = *(long *)(puVar10[0x43] + (long)(int)uVar1 * 8);
    if (((lVar7 == 0) || (*(long *)(lVar7 + 0x48) == 0)) ||
       (*(long *)(*(long *)(lVar7 + 0x48) + 8) == 0)) goto LAB_02ed99dc;
    local_400 = CONCAT22(local_400._2_2_,0x100);
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_220 = PTR_DAT_04bb2e00 + 0x10;
    local_70 = *(int *)PTR_DAT_04bc0b30;
    *(int *)PTR_DAT_04bc0b30 = local_70 + 1;
    local_78 = puVar4 + 0x10;
    puStack_420 = &DAT_040c6883;
  }
  else if (local_34 == 1) {
    local_408 = (undefined *)CONCAT44(local_408._4_4_,2);
    puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar10 == (undefined8 *)0x0) ||
       (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), puVar4 = PTR_DAT_04bc0a78,
       (uVar6 & 1) == 0)) goto LAB_02ed99dc;
    uVar1 = (uint)local_408;
    if (*(uint *)(puVar10 + 0x42) <= (uint)local_408) {
      uVar1 = 0;
    }
    lVar7 = *(long *)(puVar10[0x43] + (long)(int)uVar1 * 8);
    if (((lVar7 == 0) || (*(long *)(lVar7 + 0x48) == 0)) ||
       (*(long *)(*(long *)(lVar7 + 0x48) + 8) == 0)) goto LAB_02ed99dc;
    local_400 = CONCAT22(local_400._2_2_,0x100);
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_220 = PTR_DAT_04bb2e00 + 0x10;
    local_70 = *(int *)PTR_DAT_04bc0b30;
    *(int *)PTR_DAT_04bc0b30 = local_70 + 1;
    local_78 = puVar4 + 0x10;
    puStack_420 = &DAT_040cb99a;
  }
  else {
    if (local_34 != 0) goto LAB_02ed99dc;
    local_408 = (undefined *)CONCAT44(local_408._4_4_,2);
    puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar10 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), (uVar6 & 1) != 0)) {
      uVar1 = (uint)local_408;
      if (*(uint *)(puVar10 + 0x42) <= (uint)local_408) {
        uVar1 = 0;
      }
      lVar7 = *(long *)(puVar10[0x43] + (long)(int)uVar1 * 8);
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x48) != 0)) &&
         (*(long *)(*(long *)(lVar7 + 0x48) + 8) != 0)) {
        local_3fc = 0;
        local_3f4 = 0;
        local_3e0 = 0;
        local_3dc = 0;
        local_400 = CONCAT22(local_400._2_2_,0x100);
        local_3d8 = 0xffffffff;
        uStack_3d0 = 0xffffffff00000000;
        puStack_420 = &DAT_04100378;
        if (*(int *)(param_1 + 0x22c) != 2) {
          puStack_420 = &DAT_040b1fa1;
        }
        puStack_3b8 = local_3ac;
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
        local_1e8 = local_1dc;
        local_1dc[0] = 0;
        local_120 = local_114;
        local_114[0] = 0;
        local_c8 = local_bc;
        local_190 = local_184;
        local_184[0] = 0;
        local_bc[0] = 0;
        uStack_3e8 = 0;
        uStack_300 = 0;
        local_70 = *(int *)PTR_DAT_04bc0b30;
        local_6c = 0;
        *(int *)PTR_DAT_04bc0b30 = local_70 + 1;
        local_78 = PTR_DAT_04bc0a78 + 0x10;
        local_68 = 0;
        local_60 = 0;
        local_408 = PTR_DAT_04bc0bf0 + 0x10;
        local_58 = 0;
        local_428 = PTR_DAT_04bb2020 + 0x10;
        pcStack_410 = "Interior";
        local_418 = local_428;
        local_368 = local_3c0;
        local_308 = local_3f0;
        local_2d8 = local_3c0;
        local_280 = local_3c0;
        local_220 = local_3f0;
        local_1f0 = local_3c0;
        local_198 = local_3c0;
        local_128 = local_3c0;
        local_d0 = local_3c0;
        FUN_01bea210(&local_408,lVar7,&local_418,&local_428);
        FUN_01bea9c8(&local_408);
        FUN_01be9eb8(&local_408);
      }
    }
    local_408 = (undefined *)CONCAT44(local_408._4_4_,4);
    puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar10 == (undefined8 *)0x0) ||
       (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), puVar4 = PTR_DAT_04bc0a78,
       (uVar6 & 1) == 0)) goto LAB_02ed99dc;
    uVar1 = (uint)local_408;
    if (*(uint *)(puVar10 + 0x42) <= (uint)local_408) {
      uVar1 = 0;
    }
    lVar7 = *(long *)(puVar10[0x43] + (long)(int)uVar1 * 8);
    if (((lVar7 == 0) || (*(long *)(lVar7 + 0x48) == 0)) ||
       (*(long *)(*(long *)(lVar7 + 0x48) + 8) == 0)) goto LAB_02ed99dc;
    local_400 = CONCAT22(local_400._2_2_,0x100);
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_220 = PTR_DAT_04bb2e00 + 0x10;
    local_70 = *(int *)PTR_DAT_04bc0b30;
    *(int *)PTR_DAT_04bc0b30 = local_70 + 1;
    local_78 = puVar4 + 0x10;
    puStack_420 = &DAT_04088810;
  }
  local_6c = 0;
  local_7d = 0;
  local_bc[0] = 0;
  local_c0 = 0x40;
  local_c8 = local_bc;
  local_d5 = 0;
  local_114[0] = 0;
  local_118 = 0x40;
  local_120 = local_114;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_145 = 0;
  local_184[0] = 0;
  local_188 = 0x40;
  local_190 = local_184;
  local_19d = 0;
  local_1dc[0] = 0;
  local_1e0 = 0x40;
  local_1e8 = local_1dc;
  local_1f8 = 0xffffffff;
  local_200 = 0xffffffff00000000;
  local_208 = 0xffffffff;
  local_20c = 0;
  local_210 = 0;
  local_218 = 0;
  local_228 = 0;
  local_22d = 0;
  local_26c[0] = 0;
  local_270 = 0x40;
  puStack_278 = local_26c;
  local_285 = 0;
  local_2c4[0] = 0;
  local_2c8 = 0x40;
  puStack_2d0 = local_2c4;
  local_2e0 = 0xffffffff;
  uStack_2e8 = 0xffffffff00000000;
  local_2f0 = 0xffffffff;
  local_2f4 = 0;
  local_2f8 = 0;
  uStack_300 = 0;
  local_310 = 0;
  local_315 = 0;
  local_354[0] = 0;
  local_358 = 0x40;
  puStack_360 = local_354;
  local_36d = 0;
  local_3ac[0] = 0;
  local_3b0 = 0x40;
  puStack_3b8 = local_3ac;
  local_3c8 = 0xffffffff;
  uStack_3d0 = 0xffffffff00000000;
  local_3d8 = 0xffffffff;
  local_3dc = 0;
  local_3e0 = 0;
  uStack_3e8 = 0;
  local_3f4 = 0;
  local_3fc = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_408 = PTR_DAT_04bc0bf0 + 0x10;
  local_428 = PTR_DAT_04bb2020 + 0x10;
  pcStack_410 = "Interior";
  local_418 = local_428;
  local_3f0 = local_220;
  local_3c0 = local_d0;
  local_368 = local_d0;
  local_308 = local_220;
  local_2d8 = local_d0;
  local_280 = local_d0;
  local_1f0 = local_d0;
  local_198 = local_d0;
  local_128 = local_d0;
  FUN_01bea210(&local_408,lVar7,&local_418,&local_428);
  FUN_01bea9c8(&local_408);
  FUN_01be9eb8(&local_408);
LAB_02ed99dc:
  puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar10 != (undefined8 *)0x0) &&
     (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), puVar3 = PTR_DAT_04bc0878,
     (uVar6 & 1) != 0)) {
    uVar1 = *(uint *)(puVar10 + 0x40);
    lVar8 = puVar10[0x41];
    lVar7 = 0x68;
    if (uVar1 < 0xe) {
      lVar7 = 0;
    }
    plVar13 = *(long **)(lVar8 + lVar7);
    lVar7 = 0x90;
    if (uVar1 < 0x13) {
      lVar7 = 0;
    }
    plVar12 = *(long **)(lVar8 + lVar7);
    lVar7 = 0x78;
    if (uVar1 < 0x10) {
      lVar7 = 0;
    }
    lVar2 = 0x98;
    if (uVar1 < 0x14) {
      lVar2 = 0;
    }
    plVar11 = *(long **)(lVar8 + lVar7);
    plVar9 = *(long **)(lVar8 + lVar2);
    if (plVar13 != (long *)0x0) {
      local_408 = PTR_DAT_04bc0878 + 0x10;
      local_400 = 0x15;
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_408);
      (**(code **)(plVar13[3] + 0x640))(plVar13[1]);
    }
    if (plVar12 != (long *)0x0) {
      local_408 = puVar3 + 0x10;
      local_400 = 0x15;
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_408);
      (**(code **)(plVar12[3] + 0x640))(plVar12[1]);
    }
    if (plVar11 != (long *)0x0) {
      local_408 = puVar3 + 0x10;
      local_400 = 0x15;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_408);
      (**(code **)(plVar11[3] + 0x640))(plVar11[1]);
    }
    if (plVar9 != (long *)0x0) {
      local_408 = puVar3 + 0x10;
      local_400 = 0x15;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_408);
      (**(code **)(plVar9[3] + 0x640))(plVar9[1]);
    }
  }
  return;
}

