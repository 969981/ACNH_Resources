
void FUN_014a9570(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined *local_f0;
  char *local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined8 *puStack_c8;
  undefined4 local_c0;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  char *pcStack_80;
  undefined4 local_78;
  
  puVar1 = PTR_DAT_04bb2020;
  local_f0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_a0 = "Actor";
  local_e8 = (char *)param_2;
  local_a8 = local_f0;
  FUN_00751ec0(param_1,&local_a8,&local_f0,0);
  puVar4 = PTR_DAT_04bbcdd0;
  puVar2 = PTR_DAT_04bb33a8;
  param_1[0x19] = (long)"__dummy_param_st_leaf";
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x65;
  param_1[0x18] = (long)(puVar2 + 0x10);
  *param_1 = (long)(puVar4 + 0x10);
  plVar9 = param_1 + 5;
  lVar8 = *plVar9;
  if (*plVar9 != 0) {
    do {
      lVar7 = lVar8;
      lVar8 = *(long *)(lVar7 + 0x10);
    } while (lVar8 != 0);
    plVar9 = (long *)(lVar7 + 0x10);
  }
  *plVar9 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar5 = (undefined1 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mLeafFlyFrame";
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar4 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  plVar9 = param_1 + 0x1e;
  *plVar9 = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  uVar10 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar10 = 0x3eb2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar9 + 0xf0))(plVar9);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0x22);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar10 = 0x41a00000;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar10;
  }
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x28) = 8;
  *(uint *)(param_1 + 0x22) = uVar3 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = (long)(puVar4 + 0x10);
  param_1[0x25] = (long)"mLeafWaitFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar4 + 0x10);
  param_1[0x2b] = (long)"mLeafGravity";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  uVar10 = 0x3dcccccd;
  if ((*(uint *)(param_1 + 0x2e) & 0x800) != 0) {
    uVar10 = 0x3ae4c388;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0x2e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    uVar10 = 0x3dcccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3ae4c388;
    }
    *(undefined4 *)(param_1 + 0x2f) = uVar10;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x2e) = uVar3 & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar4 + 0x10);
  param_1[0x31] = (long)"mLeafOffsetPosY";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  uVar10 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    uVar10 = 0x3db2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0x34);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    uVar10 = 0x40a00000;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar10;
  }
  *(uint *)(param_1 + 0x34) = uVar3 & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x66;
  param_1[0x36] = (long)(puVar2 + 0x10);
  param_1[0x37] = (long)"__dummy_param_ed_leaf";
  param_1[0x3b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x3a) >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0x65;
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar2 + 0x10);
  param_1[0x3d] = (long)"__dummy_param_st_create";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  param_1[0x43] = (long)"mFrequency";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar4 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  uVar10 = 0x40400000;
  if ((*(uint *)(param_1 + 0x46) & 0x800) != 0) {
    uVar10 = 0x3d567750;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0x46);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    uVar10 = 0x40400000;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x47) = uVar10;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = uVar3 & 0xfeffffff;
  param_1[0x49] = (long)"mAmplitude";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar4 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  uVar10 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x4c) & 0x800) != 0) {
    uVar10 = 0x3c8efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0x4c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    uVar10 = 0x3f800000;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x4d) = uVar10;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = uVar3 & 0xfeffffff;
  param_1[0x4f] = (long)"mPeriod";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4e] = (long)(puVar4 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  uVar10 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x52) & 0x800) != 0) {
    uVar10 = 0x3c8efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0x52);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    uVar10 = 0x3f800000;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x53) = uVar10;
  }
  param_1[0x56] = 0;
  *(uint *)(param_1 + 0x52) = uVar3 & 0xfeffffff;
  param_1[0x55] = (long)"__dummy_param_ed_create";
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x66;
  param_1[0x54] = (long)(puVar2 + 0x10);
  param_1[0x59] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x58) >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  param_1[0x5c] = 0;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfeffffff;
  param_1[0x5b] = (long)"__dummy_param_st_move";
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x65;
  param_1[0x5a] = (long)(puVar2 + 0x10);
  param_1[0x5f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x5e) >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
  }
  param_1[0x62] = 0;
  *(uint *)(param_1 + 0x5e) = *(uint *)(param_1 + 0x5e) & 0xfeffffff;
  param_1[0x61] = (long)"mMoveFrame";
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x60] = (long)(puVar4 + 0x10);
  param_1[0x65] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x60);
  uVar10 = 0x41200000;
  if ((*(uint *)(param_1 + 100) & 0x800) != 0) {
    uVar10 = 0x3e32b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x60] + 0xf0))(param_1 + 0x60);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 100);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x65] = 0;
    uVar10 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x65) = uVar10;
  }
  param_1[0x68] = 0;
  *(uint *)(param_1 + 100) = uVar3 & 0xfeffffff;
  param_1[0x67] = (long)"__dummy_param_ed_move";
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0x66;
  param_1[0x66] = (long)(puVar2 + 0x10);
  param_1[0x6b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x66);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x66] + 0xf0))(param_1 + 0x66);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x6a) >> 7 & 1) == 0) {
    param_1[0x6b] = 0;
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  param_1[0x6e] = 0;
  *(uint *)(param_1 + 0x6a) = *(uint *)(param_1 + 0x6a) & 0xfeffffff;
  param_1[0x6d] = (long)"__dummy_param_st_rotate";
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x65;
  param_1[0x6c] = (long)(puVar2 + 0x10);
  param_1[0x71] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6c);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x6c] + 0xf0))(param_1 + 0x6c);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x70) >> 7 & 1) == 0) {
    param_1[0x71] = 0;
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  param_1[0x74] = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfeffffff;
  param_1[0x73] = (long)"mRotateFrame";
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x72] = (long)(puVar4 + 0x10);
  param_1[0x77] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x72);
  uVar10 = 0x41200000;
  if ((*(uint *)(param_1 + 0x76) & 0x800) != 0) {
    uVar10 = 0x3e32b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x72] + 0xf0))(param_1 + 0x72);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0x76);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x77] = 0;
    uVar10 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x77) = uVar10;
  }
  param_1[0x7a] = 0;
  *(uint *)(param_1 + 0x76) = uVar3 & 0xfeffffff;
  param_1[0x79] = (long)"__dummy_param_ed_rotate";
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x66;
  param_1[0x78] = (long)(puVar2 + 0x10);
  param_1[0x7d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x78);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x78] + 0xf0))(param_1 + 0x78);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x7c) >> 7 & 1) == 0) {
    param_1[0x7d] = 0;
    *(undefined1 *)(param_1 + 0x7d) = 0;
  }
  param_1[0x80] = 0;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfeffffff;
  param_1[0x7f] = (long)"__dummy_param_st_demise";
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x65;
  param_1[0x7e] = (long)(puVar2 + 0x10);
  param_1[0x83] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7e);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x7e] + 0xf0))(param_1 + 0x7e);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x82) >> 7 & 1) == 0) {
    param_1[0x83] = 0;
    *(undefined1 *)(param_1 + 0x83) = 0;
  }
  param_1[0x86] = 0;
  *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfeffffff;
  param_1[0x85] = (long)"mDemiseScaleDownFrame";
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x84] = (long)(puVar4 + 0x10);
  param_1[0x89] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x84);
  uVar10 = 0x40e00000;
  if ((*(uint *)(param_1 + 0x88) & 0x800) != 0) {
    uVar10 = 0x3dfa35dd;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x84] + 0xf0))(param_1 + 0x84);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0x88);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x89] = 0;
    uVar10 = 0x40e00000;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3dfa35dd;
    }
    *(undefined4 *)(param_1 + 0x89) = uVar10;
  }
  param_1[0x8c] = 0;
  *(uint *)(param_1 + 0x88) = uVar3 & 0xfeffffff;
  param_1[0x8b] = (long)"__dummy_param_ed_demise";
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0x66;
  param_1[0x8a] = (long)(puVar2 + 0x10);
  param_1[0x8f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x8a);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x8a] + 0xf0))(param_1 + 0x8a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x8e) >> 7 & 1) == 0) {
    param_1[0x8f] = 0;
    *(undefined1 *)(param_1 + 0x8f) = 0;
  }
  param_1[0x92] = 0;
  *(uint *)(param_1 + 0x8e) = *(uint *)(param_1 + 0x8e) & 0xfeffffff;
  param_1[0x91] = (long)"__dummy_param_st_localWind";
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x65;
  param_1[0x90] = (long)(puVar2 + 0x10);
  param_1[0x95] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x90);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x90] + 0xf0))(param_1 + 0x90);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x94) >> 7 & 1) == 0) {
    param_1[0x95] = 0;
    *(undefined1 *)(param_1 + 0x95) = 0;
  }
  param_1[0x98] = 0;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfeffffff;
  param_1[0x97] = (long)"mLocalWindAddCalcMaxIncrement";
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x96] = (long)(puVar4 + 0x10);
  param_1[0x9b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x96);
  uVar10 = 0x3dcccccd;
  if ((*(uint *)(param_1 + 0x9a) & 0x800) != 0) {
    uVar10 = 0x3ae4c388;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x96] + 0xf0))(param_1 + 0x96);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0x9a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x9b] = 0;
    uVar10 = 0x3dcccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3ae4c388;
    }
    *(undefined4 *)(param_1 + 0x9b) = uVar10;
  }
  param_1[0x9e] = 0;
  *(uint *)(param_1 + 0x9a) = uVar3 & 0xfeffffff;
  param_1[0x9d] = (long)"mLocalWindAddCalcMaxDecrement";
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9c] = (long)(puVar4 + 0x10);
  param_1[0xa1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9c);
  uVar10 = 0x3dcccccd;
  if ((*(uint *)(param_1 + 0xa0) & 0x800) != 0) {
    uVar10 = 0x3ae4c388;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x9c] + 0xf0))(param_1 + 0x9c);
  *puVar6 = uVar10;
  uVar3 = *(uint *)(param_1 + 0xa0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xa1] = 0;
    uVar10 = 0x3dcccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar10 = 0x3ae4c388;
    }
    *(undefined4 *)(param_1 + 0xa1) = uVar10;
  }
  puVar1 = puVar1 + 0x10;
  *(uint *)(param_1 + 0xa0) = uVar3 & 0xfeffffff;
  puVar4 = PTR_DAT_04bbcec8;
  local_e8 = "mFanParam";
  local_c0 = 0;
  puStack_c8 = &DAT_0407ebb1;
  puStack_d8 = PTR_DAT_04bbcec8 + 7;
  local_f0 = puVar1;
  local_e0 = puVar1;
  local_d0 = puVar1;
  FUN_014aa360(param_1 + 0xa2,&local_f0,param_1);
  pcStack_a0 = "mHalfLen";
  puStack_90 = &DAT_0409ba20;
  local_78 = 0;
  puVar2 = PTR_DAT_04bbcdd8 + 0x10;
  local_b4 = 0x40a0000040a00000;
  pcStack_80 = "Min = 0.1f, Max = 30.f";
  param_1[0xa2] = (long)puVar2;
  local_ac = 0x40a00000;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0xb5,&local_a8,&local_b4,param_1 + 0xa2);
  local_c0 = 0;
  local_e8 = "mFanWallParam";
  puStack_d8 = puVar4 + 0x24;
  puStack_c8 = &DAT_0407ebb1;
  local_f0 = puVar1;
  local_e0 = puVar1;
  local_d0 = puVar1;
  FUN_014aa360(param_1 + 0xbc,&local_f0,param_1);
  param_1[0xbc] = (long)puVar2;
  local_78 = 0;
  pcStack_a0 = "mHalfLen";
  local_b4 = 0x40a0000040a00000;
  local_ac = 0x40a00000;
  puStack_90 = &DAT_0409ba20;
  pcStack_80 = "Min = 0.1f, Max = 30.f";
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0xcf,&local_a8,&local_b4,param_1 + 0xbc);
  local_c0 = 0;
  local_e8 = "mAirconditionerParam";
  puStack_d8 = puVar4 + 0x17;
  puStack_c8 = &DAT_0407ebb1;
  local_f0 = puVar1;
  local_e0 = puVar1;
  local_d0 = puVar1;
  FUN_014aa360(param_1 + 0xd6,&local_f0,param_1);
  param_1[0xd6] = (long)puVar2;
  local_78 = 0;
  pcStack_a0 = "mHalfLen";
  local_b4 = 0x40a0000040a00000;
  local_ac = 0x40a00000;
  puStack_90 = &DAT_0409ba20;
  pcStack_80 = "Min = 0.1f, Max = 30.f";
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0xe9,&local_a8,&local_b4,param_1 + 0xd6);
  param_1[0xf2] = 0;
  param_1[0xf1] = (long)"__dummy_param_ed_localWind";
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x66;
  puVar1 = PTR_DAT_04bb33a8;
  param_1[0xf5] = 0;
  param_1[0xf0] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf0);
  puVar5 = (undefined1 *)(**(code **)(param_1[0xf0] + 0xf0))(param_1 + 0xf0);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0xf4) >> 7 & 1) == 0) {
    param_1[0xf5] = 0;
    *(undefined1 *)(param_1 + 0xf5) = 0;
  }
  *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

