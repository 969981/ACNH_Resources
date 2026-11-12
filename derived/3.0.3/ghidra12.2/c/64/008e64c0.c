
void FUN_008e64c0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  char *pcStack_80;
  undefined4 local_78;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04bb60a0;
  lVar9 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar9;
  lVar9 = param_2[6];
  plVar10 = param_1 + 5;
  *plVar10 = 0;
  *param_1 = (long)(puVar4 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar9;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[9] = 0;
  *param_1 = (long)&PTR_FUN_049210e8;
  puVar4 = PTR_DAT_04bb33a8;
  param_1[7] = (long)"__dummy_param_st_basic";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0x65;
  param_1[0xb] = 0;
  param_1[6] = (long)(puVar4 + 0x10);
  lVar9 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar8 = lVar9;
      lVar9 = *(long *)(lVar8 + 0x10);
    } while (lVar9 != 0);
    plVar10 = (long *)(lVar8 + 0x10);
  }
  *plVar10 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  puVar5 = (undefined1 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  plVar10 = param_1 + 0xc;
  *plVar10 = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0x65;
  param_1[0xd] = (long)"__dummy_param_st_basic_misc";
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  puVar5 = (undefined1 *)(**(code **)(*plVar10 + 0xf0))(plVar10);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfeffffff;
  param_1[0x13] = (long)"mFovy";
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar3 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  plVar10 = param_1 + 0x12;
  *plVar10 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  uVar11 = 0x41b00000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar11 = 0x3ec49809;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar10 + 0xf0))(plVar10);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x16);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar11 = 0x41b00000;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x3ec49809;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar11;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar2 & 0xfeffffff;
  param_1[0x19] = (long)"mDistance";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  plVar10 = param_1 + 0x18;
  *plVar10 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  uVar11 = 0x42f00000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar11 = 0x40060a92;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar10 + 0xf0))(plVar10);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar11 = 0x42f00000;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x40060a92;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar11;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar2 & 0xfeffffff;
  plVar10 = param_1 + 0x1e;
  *plVar10 = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = (long)"mDrumAngle";
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  uVar11 = 0x420c0000;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar11 = 0x3f1c61aa;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar10 + 0xf0))(plVar10);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x22);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar11 = 0x420c0000;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x3f1c61aa;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar11;
  }
  *(uint *)(param_1 + 0x22) = uVar2 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x66;
  param_1[0x24] = (long)(puVar4 + 0x10);
  param_1[0x25] = (long)"__dummy_param_ed_basic_misc";
  param_1[0x29] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  *(undefined4 *)(param_1 + 0x2e) = 0x65;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = (long)(puVar4 + 0x10);
  param_1[0x2b] = (long)"__dummy_param_st_basic_angle";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  local_78 = 0;
  local_ac = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puStack_90 = &DAT_04080eb9;
  pcStack_a0 = "mAngle";
  pcStack_80 = "Min=-89.9f, Max=89.9f";
  local_b4 = 0x41c80000;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x30,&local_a8,&local_b4,param_1);
  local_78 = 0;
  pcStack_a0 = "mOffset";
  puStack_90 = &DAT_040d98d2;
  pcStack_80 = "Min=-160.f, Max=160.f";
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x37,&local_a8,PTR_DAT_04bb2150,param_1);
  param_1[0x41] = 0;
  param_1[0x3f] = (long)"__dummy_param_ed_basic_angle";
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0x66;
  param_1[0x3e] = (long)(puVar4 + 0x10);
  param_1[0x43] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3e);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x3e] + 0xf0))(param_1 + 0x3e);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x42) >> 7 & 1) == 0) {
    param_1[0x43] = 0;
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  param_1[0x46] = 0;
  *(uint *)(param_1 + 0x42) = *(uint *)(param_1 + 0x42) & 0xfeffffff;
  param_1[0x45] = (long)"__dummy_param_ed_basic";
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x66;
  param_1[0x44] = (long)(puVar4 + 0x10);
  param_1[0x49] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x44);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x44] + 0xf0))(param_1 + 0x44);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x48) >> 7 & 1) == 0) {
    param_1[0x49] = 0;
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  param_1[0x4c] = 0;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfeffffff;
  param_1[0x4b] = (long)"__dummy_param_st_dof";
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x65;
  param_1[0x4a] = (long)(puVar4 + 0x10);
  param_1[0x4f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4a);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x4a] + 0xf0))(param_1 + 0x4a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4e) >> 7 & 1) == 0) {
    param_1[0x4f] = 0;
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  param_1[0x52] = 0;
  *(uint *)(param_1 + 0x4e) = *(uint *)(param_1 + 0x4e) & 0xfeffffff;
  param_1[0x51] = (long)"__dummy_param_st_dof_misc";
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x65;
  param_1[0x50] = (long)(puVar4 + 0x10);
  param_1[0x55] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x50);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x50] + 0xf0))(param_1 + 0x50);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x54) >> 7 & 1) == 0) {
    param_1[0x55] = 0;
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  param_1[0x58] = 0;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfeffffff;
  param_1[0x57] = (long)"mDOFRange";
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 100;
  param_1[0x56] = (long)&PTR_LAB_049262b8;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  param_1[0x5c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x56);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x56] + 0xf0))(param_1 + 0x56);
  *puVar6 = 0x45974000;
  puVar6[1] = 0x460ca000;
  if ((*(uint *)(param_1 + 0x5a) >> 7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0x45974000;
    *(undefined4 *)((long)param_1 + 0x2e4) = 0x460ca000;
  }
  param_1[0x5f] = 0;
  *(uint *)(param_1 + 0x5a) = *(uint *)(param_1 + 0x5a) & 0xfeffffff;
  param_1[0x5e] = (long)"mDOFStart";
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x5d] = (long)(puVar3 + 0x10);
  param_1[0x62] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5d);
  uVar11 = 0x45974000;
  if ((*(uint *)(param_1 + 0x61) & 0x800) != 0) {
    uVar11 = 0x42a8f2a8;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x5d] + 0xf0))(param_1 + 0x5d);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x61);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x62] = 0;
    uVar11 = 0x45974000;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x42a8f2a8;
    }
    *(undefined4 *)(param_1 + 0x62) = uVar11;
  }
  param_1[0x65] = 0;
  *(uint *)(param_1 + 0x61) = uVar2 & 0xfeffffff;
  param_1[100] = (long)"mDOFEnd";
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[99] = (long)(puVar3 + 0x10);
  param_1[0x68] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 99);
  uVar11 = 0x460ca000;
  if ((*(uint *)(param_1 + 0x67) & 0x800) != 0) {
    uVar11 = 0x431d1463;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[99] + 0xf0))(param_1 + 99);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x67);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x68] = 0;
    uVar11 = 0x460ca000;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x431d1463;
    }
    *(undefined4 *)(param_1 + 0x68) = uVar11;
  }
  param_1[0x6b] = 0;
  *(uint *)(param_1 + 0x67) = uVar2 & 0xfeffffff;
  param_1[0x6a] = (long)"mDOFIntensity";
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x69] = (long)(puVar3 + 0x10);
  param_1[0x6e] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x69);
  uVar11 = 0x3fa66666;
  if ((*(uint *)(param_1 + 0x6d) & 0x800) != 0) {
    uVar11 = 0x3cb9dede;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x69] + 0xf0))(param_1 + 0x69);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x6d);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x6e] = 0;
    uVar11 = 0x3fa66666;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x3cb9dede;
    }
    *(undefined4 *)(param_1 + 0x6e) = uVar11;
  }
  param_1[0x71] = 0;
  *(uint *)(param_1 + 0x6d) = uVar2 & 0xfeffffff;
  param_1[0x70] = (long)"__dummy_param_ed_dof_misc";
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0x66;
  param_1[0x6f] = (long)(puVar4 + 0x10);
  param_1[0x74] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6f);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x6f] + 0xf0))(param_1 + 0x6f);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x73) >> 7 & 1) == 0) {
    param_1[0x74] = 0;
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  param_1[0x77] = 0;
  *(uint *)(param_1 + 0x73) = *(uint *)(param_1 + 0x73) & 0xfeffffff;
  param_1[0x76] = (long)"__dummy_param_st_dof_near";
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x65;
  param_1[0x75] = (long)(puVar4 + 0x10);
  param_1[0x7a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x75);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x75] + 0xf0))(param_1 + 0x75);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x79) >> 7 & 1) == 0) {
    param_1[0x7a] = 0;
    *(undefined1 *)(param_1 + 0x7a) = 0;
  }
  param_1[0x7d] = 0;
  *(uint *)(param_1 + 0x79) = *(uint *)(param_1 + 0x79) & 0xfeffffff;
  param_1[0x7c] = (long)"mDOFNearRange";
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 100;
  param_1[0x7b] = (long)&PTR_LAB_049262b8;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  param_1[0x81] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7b);
  puVar7 = (undefined8 *)(**(code **)(param_1[0x7b] + 0xf0))(param_1 + 0x7b);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0x7f) >> 7 & 1) == 0) {
    param_1[0x81] = 0;
  }
  param_1[0x84] = 0;
  *(uint *)(param_1 + 0x7f) = *(uint *)(param_1 + 0x7f) & 0xfeffffff;
  param_1[0x83] = (long)"mDOFNearStart";
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x82] = (long)(puVar3 + 0x10);
  param_1[0x87] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x82);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x82] + 0xf0))(param_1 + 0x82);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x86) >> 7 & 1) == 0) {
    param_1[0x87] = 0;
    *(undefined4 *)(param_1 + 0x87) = 0;
  }
  param_1[0x8a] = 0;
  *(uint *)(param_1 + 0x86) = *(uint *)(param_1 + 0x86) & 0xfeffffff;
  param_1[0x89] = (long)"mDOFNearEnd";
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x88] = (long)(puVar3 + 0x10);
  param_1[0x8d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x88);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x88] + 0xf0))(param_1 + 0x88);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x8c) >> 7 & 1) == 0) {
    param_1[0x8d] = 0;
    *(undefined4 *)(param_1 + 0x8d) = 0;
  }
  param_1[0x90] = 0;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfeffffff;
  param_1[0x8f] = (long)"__dummy_param_ed_dof_near";
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0x66;
  param_1[0x8e] = (long)(puVar4 + 0x10);
  param_1[0x93] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x8e);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x8e] + 0xf0))(param_1 + 0x8e);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x92) >> 7 & 1) == 0) {
    param_1[0x93] = 0;
    *(undefined1 *)(param_1 + 0x93) = 0;
  }
  param_1[0x96] = 0;
  *(uint *)(param_1 + 0x92) = *(uint *)(param_1 + 0x92) & 0xfeffffff;
  param_1[0x95] = (long)"__dummy_param_st_dof_vignetting";
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x65;
  param_1[0x94] = (long)(puVar4 + 0x10);
  param_1[0x99] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x94);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x94] + 0xf0))(param_1 + 0x94);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x98) >> 7 & 1) == 0) {
    param_1[0x99] = 0;
    *(undefined1 *)(param_1 + 0x99) = 0;
  }
  param_1[0x9c] = 0;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfeffffff;
  param_1[0x9b] = (long)"mDOFVignettingBlurIntensity";
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0x9a] = (long)(puVar3 + 0x10);
  param_1[0x9f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9a);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x9a] + 0xf0))(param_1 + 0x9a);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x9e) >> 7 & 1) == 0) {
    param_1[0x9f] = 0;
    *(undefined4 *)(param_1 + 0x9f) = 0;
  }
  param_1[0xa2] = 0;
  *(uint *)(param_1 + 0x9e) = *(uint *)(param_1 + 0x9e) & 0xfeffffff;
  param_1[0xa1] = (long)"mDOFVignettingColorIntensity";
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa0] = (long)(puVar3 + 0x10);
  param_1[0xa5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa0);
  puVar6 = (undefined4 *)(**(code **)(param_1[0xa0] + 0xf0))(param_1 + 0xa0);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xa4) >> 7 & 1) == 0) {
    param_1[0xa5] = 0;
    *(undefined4 *)(param_1 + 0xa5) = 0;
  }
  param_1[0xa8] = 0;
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfeffffff;
  param_1[0xa7] = (long)"__dummy_param_ed_dof_vignetting";
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0x66;
  param_1[0xa6] = (long)(puVar4 + 0x10);
  param_1[0xab] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa6);
  puVar5 = (undefined1 *)(**(code **)(param_1[0xa6] + 0xf0))(param_1 + 0xa6);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0xaa) >> 7 & 1) == 0) {
    param_1[0xab] = 0;
    *(undefined1 *)(param_1 + 0xab) = 0;
  }
  param_1[0xae] = 0;
  *(uint *)(param_1 + 0xaa) = *(uint *)(param_1 + 0xaa) & 0xfeffffff;
  param_1[0xad] = (long)"__dummy_param_ed_dof";
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0x66;
  param_1[0xac] = (long)(puVar4 + 0x10);
  param_1[0xb1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xac);
  puVar5 = (undefined1 *)(**(code **)(param_1[0xac] + 0xf0))(param_1 + 0xac);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0xb0) >> 7 & 1) == 0) {
    param_1[0xb1] = 0;
    *(undefined1 *)(param_1 + 0xb1) = 0;
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfeffffff;
  return;
}

