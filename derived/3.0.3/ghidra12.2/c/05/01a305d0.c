
void FUN_01a305d0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  undefined4 uVar11;
  undefined *local_e0;
  char *local_d8;
  undefined *local_d0;
  undefined8 *puStack_c8;
  undefined *local_c0;
  undefined8 *puStack_b8;
  undefined4 local_b0;
  undefined *local_a8;
  char *local_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  uint local_78;
  
  puVar5 = (uint *)(param_1 + 0x829);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = "Actor";
  local_e0 = puVar1;
  local_d8 = (char *)param_2;
  local_a8 = puVar1;
  FUN_00751ec0(param_1,&local_a8,&local_e0,0);
  *param_1 = (long)&PTR_FUN_049fb7a0;
  local_a0 = "mRemakeFtrScaleArray";
  local_78 = 8;
  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0x3f800000);
  puStack_90 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_009c2c80(param_1 + 0x18,&local_a8,&local_e0,param_1);
  param_1[0x5d] = 0;
  local_d8 = "mRemakeFtrArray";
  param_1[0x5c] = (long)"mRemakeFtrArray";
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 8;
  puStack_c8 = &DAT_0407ebb1;
  puStack_b8 = &DAT_0407ebb1;
  puVar2 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x60] = 0;
  local_b0 = 8;
  param_1[0x5b] = (long)puVar2;
  local_e0 = puVar1;
  local_d0 = puVar1;
  local_c0 = puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5b);
  param_1[99] = 0;
  param_1[0x66] = (long)(param_1 + 0xcb);
  param_1[0x62] = 0;
  param_1[0xcb] = (long)(param_1 + 0x130);
  param_1[0x61] = 0;
  param_1[0x130] = (long)(param_1 + 0x195);
  param_1[100] = (long)(param_1 + 0x66);
  param_1[0x195] = (long)(param_1 + 0x1fa);
  param_1[0x329] = 0;
  param_1[0x65] = (long)(param_1 + 0x66);
  param_1[0x1fa] = (long)(param_1 + 0x25f);
  param_1[0x25f] = (long)(param_1 + 0x2c4);
  param_1[0x2c4] = (long)(param_1 + 0x329);
  if (param_1 + 0x38e != (long *)0x0) {
    param_1[99] = (long)(param_1 + 0x38e);
    *(undefined4 *)((long)param_1 + 0x314) = 8;
  }
  puVar3 = PTR_DAT_04bbfd10;
  puVar2 = PTR_DAT_04bb3050;
  param_1[0x5b] = (long)&PTR_LAB_049fbd90;
  iVar10 = 8;
  do {
    if ((int)param_1[0x62] < *(int *)((long)param_1 + 0x314)) {
      plVar8 = (long *)param_1[100];
      if (plVar8 != (long *)0x0) {
        param_1[100] = *plVar8;
      }
      *plVar8 = (long)(puVar2 + 0x10);
      (**(code **)(local_e0 + 0x18))(&local_e0);
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[1] = (long)local_d8;
      plVar8[5] = 0;
      *plVar8 = (long)(puVar3 + 0x10);
      puStack_90 = &DAT_0407ebb1;
      *(undefined4 *)(plVar8 + 4) = local_b0;
      puStack_80 = &DAT_0407ebb1;
      local_78 = 8;
      local_a0 = "mRemakeItemInfoArray";
      local_a8 = puVar1;
      local_98 = puVar1;
      local_88 = puVar1;
      FUN_01a30278(plVar8 + 6,&local_a8,plVar8);
      *plVar8 = (long)&PTR_FUN_049fbf10;
      if ((int)param_1[0x62] < *(int *)((long)param_1 + 0x314)) {
        *(long **)(param_1[99] + (long)(int)param_1[0x62] * 8) = plVar8;
        *(int *)(param_1 + 0x62) = (int)param_1[0x62] + 1;
      }
    }
    else {
      plVar8 = (long *)0x0;
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,param_1 + 0x5b);
    iVar10 = iVar10 + -1;
    *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
    puVar4 = PTR_DAT_04bb2020;
  } while (iVar10 != 0);
  param_1[0x397] = (long)"mRemakeUpperScaleArray";
  param_1[0x398] = 0;
  param_1[0x399] = 0;
  plVar8 = param_1 + 0x396;
  local_a8 = puVar4 + 0x10;
  local_a0 = "mRemakeUpperScaleArray";
  puStack_90 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  *(undefined4 *)(param_1 + 0x39a) = 8;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x39b] = 0;
  local_78 = 8;
  param_1[0x396] = (long)puVar1;
  local_98 = local_a8;
  local_88 = local_a8;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  plVar9 = param_1 + 0x3a1;
  param_1[0x39e] = 0;
  param_1[0x39d] = 0;
  param_1[0x39c] = 0;
  param_1[0x39f] = (long)plVar9;
  param_1[0x3a1] = (long)(param_1 + 0x3a7);
  param_1[0x3a7] = 0;
  param_1[0x3a0] = (long)plVar9;
  if (param_1 + 0x3ad == (long *)0x0) {
    plVar9 = (long *)0x0;
    param_1[0x396] = (long)&PTR_LAB_049fc0a0;
  }
  else {
    param_1[0x39e] = (long)(param_1 + 0x3ad);
    *(undefined4 *)((long)param_1 + 0x1cec) = 2;
    param_1[0x396] = (long)&PTR_LAB_049fc0a0;
    param_1[0x39f] = (long)(param_1 + 0x3a7);
    param_1[0x3a1] = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    param_1[0x3a3] = 0;
    param_1[0x3a4] = 0;
    param_1[0x3a6] = 0;
    param_1[0x3a2] = (long)local_a0;
    uVar11 = 0x3f800000;
    if ((local_78 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)((long)param_1 + 0x1d2c) = uVar11;
    if ((local_78 >> 7 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x3a6) = uVar11;
    }
    *(uint *)(param_1 + 0x3a5) = local_78 & 0xfeffffff;
    param_1[0x3a1] = (long)&DAT_049fc220;
    if ((int)param_1[0x39d] < *(int *)((long)param_1 + 0x1cec)) {
      *(long **)(param_1[0x39e] + (long)(int)param_1[0x39d] * 8) = plVar9;
      *(int *)(param_1 + 0x39d) = (int)param_1[0x39d] + 1;
    }
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
  *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
  if ((int)param_1[0x39d] < *(int *)((long)param_1 + 0x1cec)) {
    plVar9 = (long *)param_1[0x39f];
    if (plVar9 != (long *)0x0) {
      param_1[0x39f] = *plVar9;
    }
    *plVar9 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    plVar9[3] = 0;
    plVar9[1] = (long)local_a0;
    plVar9[2] = 0;
    plVar9[5] = 0;
    uVar11 = 0x3f800000;
    if ((local_78 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)((long)plVar9 + 0x24) = uVar11;
    if ((local_78 >> 7 & 1) == 0) {
      *(undefined4 *)(plVar9 + 5) = uVar11;
    }
    *plVar9 = (long)&DAT_049fc220;
    *(uint *)(plVar9 + 4) = local_78 & 0xfeffffff;
    if ((int)param_1[0x39d] < *(int *)((long)param_1 + 0x1cec)) {
      *(long **)(param_1[0x39e] + (long)(int)param_1[0x39d] * 8) = plVar9;
      *(int *)(param_1 + 0x39d) = (int)param_1[0x39d] + 1;
    }
  }
  else {
    plVar9 = (long *)0x0;
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
  puVar1 = puVar4 + 0x10;
  puStack_c8 = &DAT_0407ebb1;
  plVar8 = param_1 + 0x3af;
  *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
  puStack_b8 = &DAT_0407ebb1;
  param_1[0x3b1] = 0;
  param_1[0x3b2] = 0;
  *(undefined4 *)(param_1 + 0x3b3) = 8;
  param_1[0x3b0] = (long)"mRemakeUpperArray";
  local_d8 = "mRemakeUpperArray";
  puVar2 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x3b4] = 0;
  local_b0 = 8;
  param_1[0x3af] = (long)puVar2;
  local_e0 = puVar1;
  local_d0 = puVar1;
  local_c0 = puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  param_1[0x3b7] = 0;
  plVar9 = param_1 + 0x3ba;
  param_1[0x3b6] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3b8] = (long)plVar9;
  param_1[0x3ba] = (long)(param_1 + 0x41f);
  param_1[0x41f] = 0;
  param_1[0x3b9] = (long)plVar9;
  if (param_1 + 0x484 == (long *)0x0) {
    plVar9 = (long *)0x0;
    param_1[0x3af] = (long)&PTR_LAB_049fc378;
  }
  else {
    param_1[0x3b7] = (long)(param_1 + 0x484);
    *(undefined4 *)((long)param_1 + 0x1db4) = 2;
    param_1[0x3af] = (long)&PTR_LAB_049fc378;
    param_1[0x3b8] = (long)(param_1 + 0x41f);
    param_1[0x3ba] = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    param_1[0x3bc] = 0;
    param_1[0x3bd] = 0;
    param_1[0x3bf] = 0;
    param_1[0x3bb] = (long)local_d8;
    *(undefined4 *)(param_1 + 0x3be) = local_b0;
    local_78 = 8;
    local_a0 = "mRemakeItemInfoArray";
    puStack_90 = &DAT_0407ebb1;
    param_1[0x3ba] = (long)(PTR_DAT_04bbfd10 + 0x10);
    puStack_80 = &DAT_0407ebb1;
    local_a8 = puVar1;
    local_98 = puVar1;
    local_88 = puVar1;
    FUN_01a30278(param_1 + 0x3c0,&local_a8,plVar9);
    param_1[0x3ba] = (long)&PTR_FUN_049fc4f8;
    if ((int)param_1[0x3b6] < *(int *)((long)param_1 + 0x1db4)) {
      *(long **)(param_1[0x3b7] + (long)(int)param_1[0x3b6] * 8) = plVar9;
      *(int *)(param_1 + 0x3b6) = (int)param_1[0x3b6] + 1;
    }
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
  *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
  if ((int)param_1[0x3b6] < *(int *)((long)param_1 + 0x1db4)) {
    plVar9 = (long *)param_1[0x3b8];
    if (plVar9 != (long *)0x0) {
      param_1[0x3b8] = *plVar9;
    }
    *plVar9 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[1] = (long)local_d8;
    puVar1 = PTR_DAT_04bbfd10;
    plVar9[5] = 0;
    *(undefined4 *)(plVar9 + 4) = local_b0;
    *plVar9 = (long)(puVar1 + 0x10);
    local_a8 = puVar4 + 0x10;
    local_a0 = "mRemakeItemInfoArray";
    puStack_90 = &DAT_0407ebb1;
    puStack_80 = &DAT_0407ebb1;
    local_78 = 8;
    local_98 = local_a8;
    local_88 = local_a8;
    FUN_01a30278(plVar9 + 6,&local_a8,plVar9);
    *plVar9 = (long)&PTR_FUN_049fc4f8;
    if ((int)param_1[0x3b6] < *(int *)((long)param_1 + 0x1db4)) {
      *(long **)(param_1[0x3b7] + (long)(int)param_1[0x3b6] * 8) = plVar9;
      *(int *)(param_1 + 0x3b6) = (int)param_1[0x3b6] + 1;
    }
  }
  else {
    plVar9 = (long *)0x0;
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
  puVar1 = puVar4 + 0x10;
  puStack_90 = &DAT_0407ebb1;
  local_a0 = "mRemakeBucketBathVirtualCameraAngleArray";
  *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
  puStack_80 = &DAT_0407ebb1;
  local_78 = 8;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_0083fdf0(param_1 + 0x486,&local_a8,PTR_DAT_04bb2150,param_1);
  local_a0 = "mRemakeFtrWallScaleArray";
  local_78 = 8;
  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0x3f800000);
  puStack_90 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_008403b0(param_1 + 0x4b1,&local_a8,&local_e0,param_1);
  param_1[0x4d3] = 0;
  local_d8 = "mRemakeFtrWallArray";
  plVar8 = param_1 + 0x4d1;
  puStack_c8 = &DAT_0407ebb1;
  param_1[0x4d2] = (long)"mRemakeFtrWallArray";
  param_1[0x4d4] = 0;
  *(undefined4 *)(param_1 + 0x4d5) = 8;
  puStack_b8 = &DAT_0407ebb1;
  puVar2 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x4d6] = 0;
  local_b0 = 8;
  param_1[0x4d1] = (long)puVar2;
  local_e0 = puVar1;
  local_d0 = puVar1;
  local_c0 = puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  param_1[0x4d9] = 0;
  plVar9 = param_1 + 0x4dc;
  param_1[0x4d8] = 0;
  param_1[0x541] = (long)(param_1 + 0x5a6);
  param_1[0x4d7] = 0;
  param_1[0x4da] = (long)plVar9;
  param_1[0x4dc] = (long)(param_1 + 0x541);
  param_1[0x5a6] = 0;
  param_1[0x4db] = (long)plVar9;
  if (param_1 + 0x60b == (long *)0x0) {
    param_1[0x4d1] = (long)&PTR_LAB_049fc670;
    plVar9 = (long *)0x0;
  }
  else {
    param_1[0x4d9] = (long)(param_1 + 0x60b);
    *(undefined4 *)((long)param_1 + 0x26c4) = 3;
    param_1[0x4d1] = (long)&PTR_LAB_049fc670;
    param_1[0x4da] = (long)(param_1 + 0x541);
    param_1[0x4dd] = (long)"mRemakeFtrWallArray";
    param_1[0x4de] = 0;
    param_1[0x4df] = 0;
    *(undefined4 *)(param_1 + 0x4e0) = 8;
    param_1[0x4e1] = 0;
    local_78 = 8;
    param_1[0x4dc] = (long)(PTR_DAT_04bbfd10 + 0x10);
    puStack_90 = &DAT_0407ebb1;
    puStack_80 = &DAT_0407ebb1;
    local_a0 = "mRemakeItemInfoArray";
    local_a8 = puVar1;
    local_98 = puVar1;
    local_88 = puVar1;
    FUN_01a30278(param_1 + 0x4e2,&local_a8,plVar9);
    param_1[0x4dc] = (long)&PTR_FUN_049fc7f0;
    if ((int)param_1[0x4d8] < *(int *)((long)param_1 + 0x26c4)) {
      *(long **)(param_1[0x4d9] + (long)(int)param_1[0x4d8] * 8) = plVar9;
      *(int *)(param_1 + 0x4d8) = (int)param_1[0x4d8] + 1;
    }
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
  *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
  if ((int)param_1[0x4d8] < *(int *)((long)param_1 + 0x26c4)) {
    plVar9 = (long *)param_1[0x4da];
    if (plVar9 != (long *)0x0) {
      param_1[0x4da] = *plVar9;
    }
    *plVar9 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[1] = (long)local_d8;
    puVar1 = PTR_DAT_04bbfd10;
    plVar9[5] = 0;
    *(undefined4 *)(plVar9 + 4) = local_b0;
    *plVar9 = (long)(puVar1 + 0x10);
    local_a8 = puVar4 + 0x10;
    local_a0 = "mRemakeItemInfoArray";
    puStack_90 = &DAT_0407ebb1;
    puStack_80 = &DAT_0407ebb1;
    local_78 = 8;
    local_98 = local_a8;
    local_88 = local_a8;
    FUN_01a30278(plVar9 + 6,&local_a8,plVar9);
    *plVar9 = (long)&PTR_FUN_049fc7f0;
    if ((int)param_1[0x4d8] < *(int *)((long)param_1 + 0x26c4)) {
      *(long **)(param_1[0x4d9] + (long)(int)param_1[0x4d8] * 8) = plVar9;
      *(int *)(param_1 + 0x4d8) = (int)param_1[0x4d8] + 1;
    }
  }
  else {
    plVar9 = (long *)0x0;
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
  *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
  if ((int)param_1[0x4d8] < *(int *)((long)param_1 + 0x26c4)) {
    plVar9 = (long *)param_1[0x4da];
    if (plVar9 != (long *)0x0) {
      param_1[0x4da] = *plVar9;
    }
    *plVar9 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[1] = (long)local_d8;
    puVar1 = PTR_DAT_04bbfd10;
    plVar9[5] = 0;
    *(undefined4 *)(plVar9 + 4) = local_b0;
    *plVar9 = (long)(puVar1 + 0x10);
    local_a8 = puVar4 + 0x10;
    local_a0 = "mRemakeItemInfoArray";
    puStack_90 = &DAT_0407ebb1;
    puStack_80 = &DAT_0407ebb1;
    local_78 = 8;
    local_98 = local_a8;
    local_88 = local_a8;
    FUN_01a30278(plVar9 + 6,&local_a8,plVar9);
    *plVar9 = (long)&PTR_FUN_049fc7f0;
    if ((int)param_1[0x4d8] < *(int *)((long)param_1 + 0x26c4)) {
      *(long **)(param_1[0x4d9] + (long)(int)param_1[0x4d8] * 8) = plVar9;
      *(int *)(param_1 + 0x4d8) = (int)param_1[0x4d8] + 1;
    }
  }
  else {
    plVar9 = (long *)0x0;
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
  *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
  param_1[0x610] = 0;
  param_1[0x611] = 0;
  param_1[0x60f] = (long)"mRemakeToolScale";
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x612) = 8;
  param_1[0x613] = 0;
  param_1[0x60e] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x60e);
  uVar11 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x612) & 0x800) != 0) {
    uVar11 = 0x3c8efa35;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x60e] + 0xf0))(param_1 + 0x60e);
  *puVar7 = uVar11;
  uVar6 = *(uint *)(param_1 + 0x612);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x613] = 0;
    uVar11 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x613) = uVar11;
  }
  param_1[0x616] = 0;
  *(uint *)(param_1 + 0x612) = uVar6 & 0xfeffffff;
  param_1[0x617] = 0;
  param_1[0x615] = (long)"mRemakeTool";
  *(undefined4 *)(param_1 + 0x618) = 8;
  puVar2 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x619] = 0;
  param_1[0x614] = (long)puVar2;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x614);
  puVar3 = PTR_DAT_04bbfd10 + 0x10;
  param_1[0x614] = (long)puVar3;
  local_78 = 8;
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = "mRemakeItemInfoArray";
  puStack_90 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar4;
  local_98 = puVar4;
  local_88 = puVar4;
  FUN_01a30278(param_1 + 0x61a,&local_a8,param_1 + 0x614);
  param_1[0x67a] = (long)"mRemakeSmartPhoneScale";
  param_1[0x67b] = 0;
  param_1[0x67c] = 0;
  *(undefined4 *)(param_1 + 0x67d) = 8;
  param_1[0x679] = (long)(puVar1 + 0x10);
  param_1[0x67e] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x679);
  uVar11 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x67d) & 0x800) != 0) {
    uVar11 = 0x3c8efa35;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x679] + 0xf0))(param_1 + 0x679);
  *puVar7 = uVar11;
  uVar6 = *(uint *)(param_1 + 0x67d);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x67e] = 0;
    uVar11 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x67e) = uVar11;
  }
  param_1[0x681] = 0;
  *(uint *)(param_1 + 0x67d) = uVar6 & 0xfeffffff;
  param_1[0x682] = 0;
  param_1[0x680] = (long)"mRemakeSmartPhone";
  *(undefined4 *)(param_1 + 0x683) = 8;
  param_1[0x67f] = (long)puVar2;
  param_1[0x684] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x67f);
  param_1[0x67f] = (long)puVar3;
  local_a0 = "mRemakeItemInfoArray";
  puStack_90 = &DAT_0407ebb1;
  local_78 = 8;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar4;
  local_98 = puVar4;
  local_88 = puVar4;
  FUN_01a30278(param_1 + 0x685,&local_a8,param_1 + 0x67f);
  param_1[0x6e6] = 0;
  param_1[0x6e5] = (long)"mRemakeSubToolScale";
  param_1[0x6e7] = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 8;
  param_1[0x6e4] = (long)(puVar1 + 0x10);
  param_1[0x6e9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6e4);
  uVar11 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x6e8) & 0x800) != 0) {
    uVar11 = 0x3c8efa35;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x6e4] + 0xf0))(param_1 + 0x6e4);
  *puVar7 = uVar11;
  uVar6 = *(uint *)(param_1 + 0x6e8);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x6e9] = 0;
    uVar11 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x6e9) = uVar11;
  }
  param_1[0x6ec] = 0;
  *(uint *)(param_1 + 0x6e8) = uVar6 & 0xfeffffff;
  param_1[0x6ed] = 0;
  param_1[0x6eb] = (long)"mRemakeSubTool";
  *(undefined4 *)(param_1 + 0x6ee) = 8;
  puVar2 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x6ef] = 0;
  param_1[0x6ea] = (long)puVar2;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6ea);
  puVar3 = PTR_DAT_04bbfd10 + 0x10;
  param_1[0x6ea] = (long)puVar3;
  local_78 = 8;
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = "mRemakeItemInfoArray";
  puStack_90 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar4;
  local_98 = puVar4;
  local_88 = puVar4;
  FUN_01a30278(param_1 + 0x6f0,&local_a8,param_1 + 0x6ea);
  param_1[0x750] = (long)"mRemakeFenceScale";
  param_1[0x751] = 0;
  param_1[0x752] = 0;
  *(undefined4 *)(param_1 + 0x753) = 8;
  param_1[0x74f] = (long)(puVar1 + 0x10);
  param_1[0x754] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x74f);
  uVar11 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x753) & 0x800) != 0) {
    uVar11 = 0x3c8efa35;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x74f] + 0xf0))(param_1 + 0x74f);
  *puVar7 = uVar11;
  uVar6 = *(uint *)(param_1 + 0x753);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x754] = 0;
    uVar11 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x754) = uVar11;
  }
  param_1[0x757] = 0;
  *(uint *)(param_1 + 0x753) = uVar6 & 0xfeffffff;
  param_1[0x758] = 0;
  param_1[0x756] = (long)"mRemakeFence";
  *(undefined4 *)(param_1 + 0x759) = 8;
  param_1[0x755] = (long)puVar2;
  param_1[0x75a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x755);
  param_1[0x755] = (long)puVar3;
  local_a0 = "mRemakeItemInfoArray";
  puStack_90 = &DAT_0407ebb1;
  local_78 = 8;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar4;
  local_98 = puVar4;
  local_88 = puVar4;
  FUN_01a30278(param_1 + 0x75b,&local_a8,param_1 + 0x755);
  param_1[0x7bc] = 0;
  param_1[0x7bb] = (long)"mRemakeFixLadderScale";
  param_1[0x7bd] = 0;
  *(undefined4 *)(param_1 + 0x7be) = 8;
  param_1[0x7ba] = (long)(puVar1 + 0x10);
  param_1[0x7bf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7ba);
  uVar11 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x7be) & 0x800) != 0) {
    uVar11 = 0x3c8efa35;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x7ba] + 0xf0))(param_1 + 0x7ba);
  *puVar7 = uVar11;
  uVar6 = *(uint *)(param_1 + 0x7be);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x7bf] = 0;
    uVar11 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x7bf) = uVar11;
  }
  param_1[0x7c2] = 0;
  *(uint *)(param_1 + 0x7be) = uVar6 & 0xfeffffff;
  param_1[0x7c3] = 0;
  param_1[0x7c1] = (long)"mRemakeFixLadder";
  *(undefined4 *)(param_1 + 0x7c4) = 8;
  puVar2 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x7c5] = 0;
  param_1[0x7c0] = (long)puVar2;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7c0);
  puVar3 = PTR_DAT_04bbfd10 + 0x10;
  param_1[0x7c0] = (long)puVar3;
  local_78 = 8;
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = "mRemakeItemInfoArray";
  puStack_90 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar4;
  local_98 = puVar4;
  local_88 = puVar4;
  FUN_01a30278(param_1 + 0x7c6,&local_a8,param_1 + 0x7c0);
  param_1[0x826] = (long)"mRemakeHaniwaScale";
  param_1[0x827] = 0;
  param_1[0x828] = 0;
  *puVar5 = 8;
  param_1[0x825] = (long)(puVar1 + 0x10);
  param_1[0x82a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x825);
  uVar11 = 0x3f800000;
  if ((*puVar5 & 0x800) != 0) {
    uVar11 = 0x3c8efa35;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x825] + 0xf0))(param_1 + 0x825);
  *puVar7 = uVar11;
  uVar6 = *puVar5;
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x82a] = 0;
    uVar11 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x82a) = uVar11;
  }
  param_1[0x82d] = 0;
  *puVar5 = uVar6 & 0xfeffffff;
  param_1[0x82c] = (long)"mRemakeHaniwa";
  param_1[0x82e] = 0;
  *(undefined4 *)(param_1 + 0x82f) = 8;
  param_1[0x82b] = (long)puVar2;
  param_1[0x830] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x82b);
  param_1[0x82b] = (long)puVar3;
  local_78 = 8;
  local_a0 = "mRemakeItemInfoArray";
  puStack_90 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar4;
  local_98 = puVar4;
  local_88 = puVar4;
  FUN_01a30278(param_1 + 0x831,&local_a8,param_1 + 0x82b);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

