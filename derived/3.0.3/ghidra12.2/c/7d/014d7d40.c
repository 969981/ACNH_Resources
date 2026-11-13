
void FUN_014d7d40(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined4 uVar13;
  undefined *local_c8;
  char *local_c0;
  undefined *local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 *puStack_a0;
  uint local_98;
  undefined *local_90;
  undefined1 *local_88;
  
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  local_c0 = "Actor";
  local_90 = local_c8;
  local_88 = (undefined1 *)param_2;
  FUN_00751ec0(param_1,&local_c8,&local_90,0);
  puVar3 = PTR_DAT_04bb33a8;
  *param_1 = (long)&PTR_FUN_049a6d20;
  param_1[0x19] = (long)"__dummy_param_st_edit_misc";
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x65;
  param_1[0x18] = (long)(puVar3 + 0x10);
  plVar11 = param_1 + 5;
  lVar10 = *plVar11;
  if (*plVar11 != 0) {
    do {
      lVar9 = lVar10;
      lVar10 = *(long *)(lVar9 + 0x10);
    } while (lVar10 != 0);
    plVar11 = (long *)(lVar9 + 0x10);
  }
  *plVar11 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar6 = (undefined1 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  puVar2 = PTR_DAT_04bb5890;
  param_1[0x1f] = (long)"mStickValidArea";
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  puVar1 = puVar2 + 0x10;
  plVar11 = param_1 + 0x1e;
  *plVar11 = (long)puVar1;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar11);
  puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0xf0))(plVar11);
  *puVar7 = 0x3f7851ec3e4ccccd;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0x3e4ccccd;
    *(undefined4 *)((long)param_1 + 0x124) = 0x3f7851ec;
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x25] = (long)puVar1;
  param_1[0x26] = (long)"mStickFactorValidArea";
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x25] + 0xf0))(param_1 + 0x25);
  *puVar8 = 0x3e4ccccd;
  puVar8[1] = 0x3f800000;
  if ((*(uint *)(param_1 + 0x29) >> 7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x2b) = 0x3e4ccccd;
    *(undefined4 *)((long)param_1 + 0x15c) = 0x3f800000;
  }
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) & 0xfeffffff;
  param_1[0x2c] = (long)puVar2;
  param_1[0x2d] = (long)"mStickFactorRange";
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c);
  puVar7 = (undefined8 *)(**(code **)(param_1[0x2c] + 0xf0))(param_1 + 0x2c);
  *puVar7 = 0x3fe666663f8ccccd;
  if ((*(uint *)(param_1 + 0x30) >> 7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x32) = 0x3f8ccccd;
    *(undefined4 *)((long)param_1 + 0x194) = 0x3fe66666;
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfeffffff;
  param_1[0x33] = (long)puVar2;
  param_1[0x34] = (long)"mStickFactorRangeSpecial";
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x33);
  puVar7 = (undefined8 *)(**(code **)(param_1[0x33] + 0xf0))(param_1 + 0x33);
  *puVar7 = 0x3f8000003f333333;
  if ((*(uint *)(param_1 + 0x37) >> 7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x39) = 0x3f333333;
    *(undefined4 *)((long)param_1 + 0x1cc) = 0x3f800000;
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0x3f] = 0;
  param_1[0x3a] = (long)(puVar1 + 0x10);
  param_1[0x3b] = (long)"mWallToWallChangeWaitFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3a);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x3a] + 0xf0))(param_1 + 0x3a);
  *puVar8 = 0x19;
  if ((*(uint *)(param_1 + 0x3e) >> 7 & 1) == 0) {
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x3f) = 0x19;
  }
  param_1[0x42] = 0;
  *(uint *)(param_1 + 0x3e) = *(uint *)(param_1 + 0x3e) & 0xfeffffff;
  param_1[0x41] = (long)"__dummy_param_ed_edit_misc";
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x66;
  param_1[0x40] = (long)(puVar3 + 0x10);
  param_1[0x45] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x40);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x40] + 0xf0))(param_1 + 0x40);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x44) >> 7 & 1) == 0) {
    param_1[0x45] = 0;
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  param_1[0x48] = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfeffffff;
  param_1[0x47] = (long)"__dummy_param_st_rotate";
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0x65;
  param_1[0x46] = (long)(puVar3 + 0x10);
  param_1[0x4b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x46);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x46] + 0xf0))(param_1 + 0x46);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x4a) >> 7 & 1) == 0) {
    param_1[0x4b] = 0;
    *(undefined1 *)(param_1 + 0x4b) = 0;
  }
  param_1[0x4e] = 0;
  *(uint *)(param_1 + 0x4a) = *(uint *)(param_1 + 0x4a) & 0xfeffffff;
  param_1[0x4d] = (long)"mRotate90Frame";
  param_1[0x4f] = 0;
  puVar2 = PTR_DAT_04bb5a88;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x4c] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4c);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x4c] + 0xf0))(param_1 + 0x4c);
  *puVar6 = 10;
  if ((*(uint *)(param_1 + 0x50) >> 7 & 1) == 0) {
    param_1[0x51] = 0;
    *(undefined1 *)(param_1 + 0x51) = 10;
  }
  param_1[0x54] = 0;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfeffffff;
  param_1[0x53] = (long)"mRotate180Frame";
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x52] = (long)(puVar2 + 0x10);
  param_1[0x57] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x52);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x52] + 0xf0))(param_1 + 0x52);
  *puVar6 = 6;
  if ((*(uint *)(param_1 + 0x56) >> 7 & 1) == 0) {
    param_1[0x57] = 0;
    *(undefined1 *)(param_1 + 0x57) = 6;
  }
  param_1[0x5a] = 0;
  *(uint *)(param_1 + 0x56) = *(uint *)(param_1 + 0x56) & 0xfeffffff;
  param_1[0x59] = (long)"mRotate180UpFrame";
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x58] = (long)(puVar2 + 0x10);
  param_1[0x5d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x58);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x58] + 0xf0))(param_1 + 0x58);
  *puVar6 = 3;
  if ((*(uint *)(param_1 + 0x5c) >> 7 & 1) == 0) {
    param_1[0x5d] = 0;
    *(undefined1 *)(param_1 + 0x5d) = 3;
  }
  param_1[0x60] = 0;
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfeffffff;
  param_1[0x5f] = (long)"mRotate180DownFrame";
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x5e] = (long)(puVar2 + 0x10);
  param_1[99] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5e);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x5e] + 0xf0))(param_1 + 0x5e);
  *puVar6 = 3;
  if ((*(uint *)(param_1 + 0x62) >> 7 & 1) == 0) {
    param_1[99] = 0;
    *(undefined1 *)(param_1 + 99) = 3;
  }
  param_1[0x66] = 0;
  *(uint *)(param_1 + 0x62) = *(uint *)(param_1 + 0x62) & 0xfeffffff;
  param_1[0x65] = (long)"mRotate180Height";
  param_1[0x67] = 0;
  puVar5 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[100] = (long)(puVar5 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 100);
  uVar13 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x68) & 0x800) != 0) {
    uVar13 = 0x3eb2b8c2;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[100] + 0xf0))(param_1 + 100);
  *puVar8 = uVar13;
  uVar4 = *(uint *)(param_1 + 0x68);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x69] = 0;
    uVar13 = 0x41a00000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x69) = uVar13;
  }
  param_1[0x6c] = 0;
  *(uint *)(param_1 + 0x68) = uVar4 & 0xfeffffff;
  param_1[0x6b] = (long)"__dummy_param_ed_rotate";
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0x66;
  param_1[0x6a] = (long)(puVar3 + 0x10);
  param_1[0x6f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6a);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x6a] + 0xf0))(param_1 + 0x6a);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x6e) >> 7 & 1) == 0) {
    param_1[0x6f] = 0;
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  param_1[0x72] = 0;
  *(uint *)(param_1 + 0x6e) = *(uint *)(param_1 + 0x6e) & 0xfeffffff;
  param_1[0x71] = (long)"__dummy_param_st_trans";
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x65;
  param_1[0x70] = (long)(puVar3 + 0x10);
  param_1[0x75] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x70);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x70] + 0xf0))(param_1 + 0x70);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x74) >> 7 & 1) == 0) {
    param_1[0x75] = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
  }
  param_1[0x78] = 0;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfeffffff;
  param_1[0x77] = (long)"mPickFrame";
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x76] = (long)(puVar2 + 0x10);
  param_1[0x7b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x76);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x76] + 0xf0))(param_1 + 0x76);
  *puVar6 = 0xf;
  if ((*(uint *)(param_1 + 0x7a) >> 7 & 1) == 0) {
    param_1[0x7b] = 0;
    *(undefined1 *)(param_1 + 0x7b) = 0xf;
  }
  param_1[0x7e] = 0;
  *(uint *)(param_1 + 0x7a) = *(uint *)(param_1 + 0x7a) & 0xfeffffff;
  param_1[0x7d] = (long)"mDragHeight";
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7c] = (long)(puVar5 + 0x10);
  param_1[0x81] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7c);
  uVar13 = 0x41200000;
  if ((*(uint *)(param_1 + 0x80) & 0x800) != 0) {
    uVar13 = 0x3e32b8c2;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x7c] + 0xf0))(param_1 + 0x7c);
  *puVar8 = uVar13;
  uVar4 = *(uint *)(param_1 + 0x80);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x81] = 0;
    uVar13 = 0x41200000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x81) = uVar13;
  }
  param_1[0x84] = 0;
  *(uint *)(param_1 + 0x80) = uVar4 & 0xfeffffff;
  param_1[0x83] = (long)"mDragHeightRug";
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x82] = (long)(puVar5 + 0x10);
  param_1[0x87] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x82);
  uVar13 = 0x40000000;
  if ((*(uint *)(param_1 + 0x86) & 0x800) != 0) {
    uVar13 = 0x3d0efa35;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x82] + 0xf0))(param_1 + 0x82);
  *puVar8 = uVar13;
  uVar4 = *(uint *)(param_1 + 0x86);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x87] = 0;
    uVar13 = 0x40000000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x87) = uVar13;
  }
  param_1[0x8a] = 0;
  *(uint *)(param_1 + 0x86) = uVar4 & 0xfeffffff;
  param_1[0x89] = (long)"mDragHeightCeiling";
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x88] = (long)(puVar5 + 0x10);
  param_1[0x8d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x88);
  uVar13 = 0xc0a00000;
  if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
    uVar13 = 0xbdb2b8c2;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x88] + 0xf0))(param_1 + 0x88);
  *puVar8 = uVar13;
  uVar4 = *(uint *)(param_1 + 0x8c);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x8d] = 0;
    uVar13 = 0xc0a00000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0xbdb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x8d) = uVar13;
  }
  param_1[0x90] = 0;
  *(uint *)(param_1 + 0x8c) = uVar4 & 0xfeffffff;
  param_1[0x8f] = (long)"mDragOffsetOnWall";
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x8e] = (long)(puVar5 + 0x10);
  param_1[0x93] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x8e);
  uVar13 = 0x40000000;
  if ((*(uint *)(param_1 + 0x92) & 0x800) != 0) {
    uVar13 = 0x3d0efa35;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x8e] + 0xf0))(param_1 + 0x8e);
  *puVar8 = uVar13;
  uVar4 = *(uint *)(param_1 + 0x92);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x93] = 0;
    uVar13 = 0x40000000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x93) = uVar13;
  }
  param_1[0x96] = 0;
  *(uint *)(param_1 + 0x92) = uVar4 & 0xfeffffff;
  param_1[0x95] = (long)"__dummy_param_ed_trans";
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x66;
  param_1[0x94] = (long)(puVar3 + 0x10);
  param_1[0x99] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x94);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x94] + 0xf0))(param_1 + 0x94);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x98) >> 7 & 1) == 0) {
    param_1[0x99] = 0;
    *(undefined1 *)(param_1 + 0x99) = 0;
  }
  param_1[0x9c] = 0;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfeffffff;
  param_1[0x9b] = (long)"__dummy_param_st_cursor";
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0x65;
  param_1[0x9a] = (long)(puVar3 + 0x10);
  param_1[0x9f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9a);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x9a] + 0xf0))(param_1 + 0x9a);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x9e) >> 7 & 1) == 0) {
    param_1[0x9f] = 0;
    *(undefined1 *)(param_1 + 0x9f) = 0;
  }
  param_1[0xa2] = 0;
  *(uint *)(param_1 + 0x9e) = *(uint *)(param_1 + 0x9e) & 0xfeffffff;
  param_1[0xa1] = (long)"mCursorSize";
  param_1[0xa3] = 0;
  puVar5 = PTR_DAT_04bb5a60;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa6] = 0;
  param_1[0xa0] = (long)(puVar5 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa0);
  puVar7 = (undefined8 *)(**(code **)(param_1[0xa0] + 0xf0))(param_1 + 0xa0);
  *puVar7 = 0x100000001;
  if ((*(uint *)(param_1 + 0xa4) >> 7 & 1) == 0) {
    param_1[0xa6] = 0x100000001;
  }
  param_1[0xa9] = 0;
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfeffffff;
  param_1[0xa8] = (long)"mCursorGroundHeightDelayFrame";
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xa7] = (long)(puVar1 + 0x10);
  param_1[0xac] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa7);
  puVar8 = (undefined4 *)(**(code **)(param_1[0xa7] + 0xf0))(param_1 + 0xa7);
  *puVar8 = 10;
  if ((*(uint *)(param_1 + 0xab) >> 7 & 1) == 0) {
    param_1[0xac] = 0;
    *(undefined4 *)(param_1 + 0xac) = 10;
  }
  param_1[0xaf] = 0;
  *(uint *)(param_1 + 0xab) = *(uint *)(param_1 + 0xab) & 0xfeffffff;
  param_1[0xae] = (long)"__dummy_param_ed_cursor";
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0x66;
  param_1[0xad] = (long)(puVar3 + 0x10);
  param_1[0xb2] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xad);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xad] + 0xf0))(param_1 + 0xad);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xb1) >> 7 & 1) == 0) {
    param_1[0xb2] = 0;
    *(undefined1 *)(param_1 + 0xb2) = 0;
  }
  param_1[0xb5] = 0;
  *(uint *)(param_1 + 0xb1) = *(uint *)(param_1 + 0xb1) & 0xfeffffff;
  param_1[0xb4] = (long)"__dummy_param_st_camera";
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0x65;
  param_1[0xb3] = (long)(puVar3 + 0x10);
  param_1[0xb8] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb3);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xb3] + 0xf0))(param_1 + 0xb3);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xb7) >> 7 & 1) == 0) {
    param_1[0xb8] = 0;
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  param_1[0xbb] = 0;
  *(uint *)(param_1 + 0xb7) = *(uint *)(param_1 + 0xb7) & 0xfeffffff;
  param_1[0xba] = (long)"mWallInterpolateFrame";
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  param_1[0xb9] = (long)(puVar2 + 0x10);
  param_1[0xbe] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb9);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xb9] + 0xf0))(param_1 + 0xb9);
  *puVar6 = 0x1e;
  if ((*(uint *)(param_1 + 0xbd) >> 7 & 1) == 0) {
    param_1[0xbe] = 0;
    *(undefined1 *)(param_1 + 0xbe) = 0x1e;
  }
  param_1[0xc1] = 0;
  *(uint *)(param_1 + 0xbd) = *(uint *)(param_1 + 0xbd) & 0xfeffffff;
  param_1[0xc0] = (long)"mWallInterpolateThresholdAngle";
  param_1[0xc2] = 0;
  puVar1 = PTR_DAT_04bb62c0;
  *(undefined4 *)(param_1 + 0xc3) = 0x800;
  param_1[0xc4] = 0;
  param_1[0xbf] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xbf);
  puVar8 = (undefined4 *)(**(code **)(param_1[0xbf] + 0xf0))(param_1 + 0xbf);
  *puVar8 = 100;
  if ((*(uint *)(param_1 + 0xc3) >> 7 & 1) == 0) {
    param_1[0xc4] = 0;
    *(undefined4 *)(param_1 + 0xc4) = 100;
  }
  param_1[199] = 0;
  *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) & 0xfeffffff;
  param_1[0xc6] = (long)"mWallOverideInterpolateFrame";
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  param_1[0xc5] = (long)(puVar2 + 0x10);
  param_1[0xca] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc5);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xc5] + 0xf0))(param_1 + 0xc5);
  *puVar6 = 0x1e;
  if ((*(uint *)(param_1 + 0xc9) >> 7 & 1) == 0) {
    param_1[0xca] = 0;
    *(undefined1 *)(param_1 + 0xca) = 0x1e;
  }
  param_1[0xcd] = 0;
  *(uint *)(param_1 + 0xc9) = *(uint *)(param_1 + 0xc9) & 0xfeffffff;
  param_1[0xcc] = (long)"mWallToChestInterpolateFrame";
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xcb] = (long)(puVar2 + 0x10);
  param_1[0xd0] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcb);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xcb] + 0xf0))(param_1 + 0xcb);
  *puVar6 = 8;
  if ((*(uint *)(param_1 + 0xcf) >> 7 & 1) == 0) {
    param_1[0xd0] = 0;
    *(undefined1 *)(param_1 + 0xd0) = 8;
  }
  param_1[0xd3] = 0;
  *(uint *)(param_1 + 0xcf) = *(uint *)(param_1 + 0xcf) & 0xfeffffff;
  param_1[0xd2] = (long)"mWallFromChestInterpolateFrame";
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd1] = (long)(puVar2 + 0x10);
  param_1[0xd6] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd1);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xd1] + 0xf0))(param_1 + 0xd1);
  *puVar6 = 6;
  if ((*(uint *)(param_1 + 0xd5) >> 7 & 1) == 0) {
    param_1[0xd6] = 0;
    *(undefined1 *)(param_1 + 0xd6) = 6;
  }
  param_1[0xd9] = 0;
  *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) & 0xfeffffff;
  param_1[0xd8] = (long)"__dummy_param_st_camera_interior";
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0x65;
  param_1[0xd7] = (long)(puVar3 + 0x10);
  param_1[0xdc] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd7);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xd7] + 0xf0))(param_1 + 0xd7);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xdb) >> 7 & 1) == 0) {
    param_1[0xdc] = 0;
    *(undefined1 *)(param_1 + 0xdc) = 0;
  }
  param_1[0xdf] = 0;
  *(uint *)(param_1 + 0xdb) = *(uint *)(param_1 + 0xdb) & 0xfeffffff;
  param_1[0xde] = (long)"mInteriorInterpolateFrame";
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xdd] = (long)(puVar2 + 0x10);
  param_1[0xe2] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xdd);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xdd] + 0xf0))(param_1 + 0xdd);
  *puVar6 = 0x1e;
  if ((*(uint *)(param_1 + 0xe1) >> 7 & 1) == 0) {
    param_1[0xe2] = 0;
    *(undefined1 *)(param_1 + 0xe2) = 0x1e;
  }
  param_1[0xe5] = 0;
  *(uint *)(param_1 + 0xe1) = *(uint *)(param_1 + 0xe1) & 0xfeffffff;
  param_1[0xe4] = (long)"__dummy_param_ed_camera_interior";
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0x66;
  param_1[0xe3] = (long)(puVar3 + 0x10);
  param_1[0xe8] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe3);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xe3] + 0xf0))(param_1 + 0xe3);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xe7) >> 7 & 1) == 0) {
    param_1[0xe8] = 0;
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  param_1[0xeb] = 0;
  *(uint *)(param_1 + 0xe7) = *(uint *)(param_1 + 0xe7) & 0xfeffffff;
  param_1[0xea] = (long)"__dummy_param_ed_camera";
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0x66;
  param_1[0xe9] = (long)(puVar3 + 0x10);
  param_1[0xee] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe9);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xe9] + 0xf0))(param_1 + 0xe9);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xed) >> 7 & 1) == 0) {
    param_1[0xee] = 0;
    *(undefined1 *)(param_1 + 0xee) = 0;
  }
  param_1[0xf1] = 0;
  *(uint *)(param_1 + 0xed) = *(uint *)(param_1 + 0xed) & 0xfeffffff;
  param_1[0xf0] = (long)"__dummy_param_st_visible";
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0x65;
  param_1[0xef] = (long)(puVar3 + 0x10);
  param_1[0xf4] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xef);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xef] + 0xf0))(param_1 + 0xef);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xf3) >> 7 & 1) == 0) {
    param_1[0xf4] = 0;
    *(undefined1 *)(param_1 + 0xf4) = 0;
  }
  param_1[0xf7] = 0;
  *(uint *)(param_1 + 0xf3) = *(uint *)(param_1 + 0xf3) & 0xfeffffff;
  param_1[0xf6] = (long)"mChangeVisibleWaitFrameFloorToWall";
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  param_1[0xf5] = (long)(puVar2 + 0x10);
  param_1[0xfa] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf5);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xf5] + 0xf0))(param_1 + 0xf5);
  *puVar6 = 5;
  if ((*(uint *)(param_1 + 0xf9) >> 7 & 1) == 0) {
    param_1[0xfa] = 0;
    *(undefined1 *)(param_1 + 0xfa) = 5;
  }
  *(uint *)(param_1 + 0xf9) = *(uint *)(param_1 + 0xf9) & 0xfeffffff;
  local_98 = 0;
  local_90 = &DAT_3f8000003f800000;
  local_88 = (undefined1 *)0x3f8000003f19999a;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_c0 = "mMaterialFillColor";
  puStack_b0 = (undefined8 *)&DAT_040da00e;
  puStack_a0 = &DAT_0407ebb1;
  local_c8 = puVar1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  FUN_00744b60(param_1 + 0xfb,&local_c8,&local_90,param_1);
  local_98 = 0;
  local_c0 = "mMaterialFillColorPhotoStudio";
  puStack_b0 = (undefined8 *)&DAT_0409bad8;
  puStack_a0 = &DAT_0407ebb1;
  local_90 = (undefined *)0x3f8000003f19999a;
  local_88 = &DAT_3f8000003f800000;
  local_c8 = puVar1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  FUN_00744b60(param_1 + 0x103,&local_c8,&local_90,param_1);
  param_1[0x10d] = 0;
  param_1[0x10c] = (long)"__dummy_param_ed_visible";
  param_1[0x10b] = (long)(puVar3 + 0x10);
  param_1[0x10e] = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0x66;
  param_1[0x110] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x10b);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x10b] + 0xf0))(param_1 + 0x10b);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x10f) >> 7 & 1) == 0) {
    param_1[0x110] = 0;
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  param_1[0x113] = 0;
  *(uint *)(param_1 + 0x10f) = *(uint *)(param_1 + 0x10f) & 0xfeffffff;
  local_c0 = "mPlaceMapWeightPoint";
  param_1[0x112] = (long)"mPlaceMapWeightPoint";
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x115) = 8;
  puStack_b0 = &DAT_0407ebb1;
  puStack_a0 = &DAT_0407ebb1;
  puVar3 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x116] = 0;
  local_98 = 8;
  param_1[0x111] = (long)puVar3;
  local_c8 = puVar1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x111);
  puVar3 = PTR_DAT_04bbce50;
  param_1[0x11c] = (long)(param_1 + 0x122);
  param_1[0x117] = 0;
  param_1[0x122] = (long)(param_1 + 0x128);
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = (long)(param_1 + 0x11c);
  param_1[0x23c] = 0;
  param_1[0x11b] = (long)(param_1 + 0x11c);
  param_1[0x111] = (long)(puVar3 + 0x10);
  param_1[0x128] = (long)(param_1 + 0x12e);
  param_1[0x12e] = (long)(param_1 + 0x134);
  param_1[0x134] = (long)(param_1 + 0x13a);
  param_1[0x13a] = (long)(param_1 + 0x140);
  param_1[0x140] = (long)(param_1 + 0x146);
  param_1[0x146] = (long)(param_1 + 0x14c);
  param_1[0x14c] = (long)(param_1 + 0x152);
  param_1[0x152] = (long)(param_1 + 0x158);
  param_1[0x158] = (long)(param_1 + 0x15e);
  param_1[0x15e] = (long)(param_1 + 0x164);
  param_1[0x164] = (long)(param_1 + 0x16a);
  param_1[0x16a] = (long)(param_1 + 0x170);
  param_1[0x170] = (long)(param_1 + 0x176);
  param_1[0x176] = (long)(param_1 + 0x17c);
  param_1[0x17c] = (long)(param_1 + 0x182);
  param_1[0x182] = (long)(param_1 + 0x188);
  param_1[0x188] = (long)(param_1 + 0x18e);
  param_1[0x18e] = (long)(param_1 + 0x194);
  param_1[0x194] = (long)(param_1 + 0x19a);
  param_1[0x19a] = (long)(param_1 + 0x1a0);
  param_1[0x1a0] = (long)(param_1 + 0x1a6);
  param_1[0x1a6] = (long)(param_1 + 0x1ac);
  param_1[0x1ac] = (long)(param_1 + 0x1b2);
  param_1[0x1b2] = (long)(param_1 + 0x1b8);
  param_1[0x1b8] = (long)(param_1 + 0x1be);
  param_1[0x1be] = (long)(param_1 + 0x1c4);
  param_1[0x1c4] = (long)(param_1 + 0x1ca);
  param_1[0x1ca] = (long)(param_1 + 0x1d0);
  param_1[0x1d0] = (long)(param_1 + 0x1d6);
  param_1[0x1d6] = (long)(param_1 + 0x1dc);
  param_1[0x1dc] = (long)(param_1 + 0x1e2);
  param_1[0x1e2] = (long)(param_1 + 0x1e8);
  param_1[0x1e8] = (long)(param_1 + 0x1ee);
  param_1[0x1ee] = (long)(param_1 + 500);
  param_1[500] = (long)(param_1 + 0x1fa);
  param_1[0x1fa] = (long)(param_1 + 0x200);
  param_1[0x200] = (long)(param_1 + 0x206);
  param_1[0x206] = (long)(param_1 + 0x20c);
  param_1[0x20c] = (long)(param_1 + 0x212);
  param_1[0x212] = (long)(param_1 + 0x218);
  param_1[0x218] = (long)(param_1 + 0x21e);
  param_1[0x21e] = (long)(param_1 + 0x224);
  param_1[0x224] = (long)(param_1 + 0x22a);
  param_1[0x22a] = (long)(param_1 + 0x230);
  param_1[0x230] = (long)(param_1 + 0x236);
  param_1[0x236] = (long)(param_1 + 0x23c);
  if (param_1 + 0x242 != (long *)0x0) {
    param_1[0x119] = (long)(param_1 + 0x242);
    param_1[0x118] = 0x3100000000;
  }
  param_1[0x111] = (long)&PTR_LAB_049a6e90;
  iVar12 = 0x31;
  puVar3 = PTR_DAT_04bb3050 + 0x10;
  do {
    if ((int)param_1[0x118] < *(int *)((long)param_1 + 0x8c4)) {
      plVar11 = (long *)param_1[0x11a];
      if (plVar11 != (long *)0x0) {
        param_1[0x11a] = *plVar11;
      }
      *plVar11 = (long)puVar3;
      (**(code **)(local_c8 + 0x18))(&local_c8);
      plVar11[3] = 0;
      plVar11[1] = (long)local_c0;
      plVar11[2] = 0;
      plVar11[5] = 0;
      *(undefined1 *)((long)plVar11 + 0x24) = 0;
      if ((local_98 >> 7 & 1) == 0) {
        *(undefined1 *)(plVar11 + 5) = 0;
      }
      *plVar11 = (long)&PTR_LAB_049a7010;
      *(uint *)(plVar11 + 4) = local_98 & 0xfeffffff;
      if ((int)param_1[0x118] < *(int *)((long)param_1 + 0x8c4)) {
        *(long **)(param_1[0x119] + (long)(int)param_1[0x118] * 8) = plVar11;
        *(int *)(param_1 + 0x118) = (int)param_1[0x118] + 1;
      }
    }
    else {
      plVar11 = (long *)0x0;
    }
    (**(code **)(*plVar11 + 0x38))(plVar11,param_1 + 0x111);
    iVar12 = iVar12 + -1;
    *(uint *)(plVar11 + 4) = *(uint *)(plVar11 + 4) & 0xfffffffc;
  } while (iVar12 != 0);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

