
void FUN_0085bec0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  puVar6 = PTR_DAT_04bb2020;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "Actor";
  local_a0 = param_2;
  local_98 = local_a8;
  FUN_00751ec0(param_1,&local_98,&local_a8,0);
  *(undefined1 *)(param_1 + 0x18) = 0;
  puVar3 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x1d) = 8;
  *param_1 = (long)&PTR_FUN_0491c280;
  param_1[0x1a] = (long)"mWherearenRecreateDistance";
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = (long)(puVar3 + 0x10);
  plVar9 = param_1 + 5;
  lVar11 = *plVar9;
  if (*plVar9 != 0) {
    do {
      lVar10 = lVar11;
      lVar11 = *(long *)(lVar10 + 0x10);
    } while (lVar11 != 0);
    plVar9 = (long *)(lVar10 + 0x10);
  }
  *plVar9 = (long)(param_1 + 0x19);
  param_1[0x1c] = (long)param_1;
  puVar8 = (undefined4 *)(**(code **)(param_1[0x19] + 0xf0))();
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x1d) >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfeffffff;
  param_1[0x20] = (long)"mWherearenDayFlySpeed";
  param_1[0x21] = 0;
  plVar9 = param_1 + 0x1f;
  *plVar9 = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x23) = 8;
  param_1[0x24] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  puVar8 = (undefined4 *)(**(code **)(*plVar9 + 0xf0))(plVar9);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x23) >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x29) = 8;
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xfeffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = (long)(puVar3 + 0x10);
  param_1[0x26] = (long)"mWherearenDayDownScale";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x25] + 0xf0))(param_1 + 0x25);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x29) >> 7 & 1) == 0) {
    param_1[0x2a] = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) & 0xfeffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 8;
  param_1[0x2b] = (long)(puVar3 + 0x10);
  param_1[0x2c] = (long)"mWherearenDayFlyTargetDistXZ";
  param_1[0x30] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x35) = 8;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x31] = (long)(puVar3 + 0x10);
  param_1[0x32] = (long)"mWherearenDayFlyTargetHeightY";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x35) >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  *(uint *)(param_1 + 0x35) = *(uint *)(param_1 + 0x35) & 0xfeffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 8;
  puVar2 = PTR_DAT_04bb3380;
  param_1[0x3c] = 0;
  param_1[0x37] = (long)(puVar2 + 0x10);
  param_1[0x38] = (long)"mWherearenNightHoldFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x37);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x37] + 0xf0))(param_1 + 0x37);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x3b) >> 7 & 1) == 0) {
    param_1[0x3c] = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x41) = 8;
  *(uint *)(param_1 + 0x3b) = *(uint *)(param_1 + 0x3b) & 0xfeffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = (long)(puVar3 + 0x10);
  param_1[0x3e] = (long)"mWherearenNightFlySpeed";
  param_1[0x42] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x3d] + 0xf0))(param_1 + 0x3d);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x41) >> 7 & 1) == 0) {
    param_1[0x42] = 0;
    *(undefined4 *)(param_1 + 0x42) = 0;
  }
  param_1[0x45] = 0;
  *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) & 0xfeffffff;
  param_1[0x44] = (long)"mWherearenNightDownScale";
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 8;
  param_1[0x43] = (long)(puVar3 + 0x10);
  param_1[0x48] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x43);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x43] + 0xf0))(param_1 + 0x43);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x47) >> 7 & 1) == 0) {
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  param_1[0x4b] = 0;
  *(uint *)(param_1 + 0x47) = *(uint *)(param_1 + 0x47) & 0xfeffffff;
  param_1[0x4a] = (long)"mWherearenNightFlyTargetDistXZ";
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 8;
  param_1[0x49] = (long)(puVar3 + 0x10);
  param_1[0x4e] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x49);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x49] + 0xf0))(param_1 + 0x49);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x4d) >> 7 & 1) == 0) {
    param_1[0x4e] = 0;
    *(undefined4 *)(param_1 + 0x4e) = 0;
  }
  param_1[0x51] = 0;
  *(uint *)(param_1 + 0x4d) = *(uint *)(param_1 + 0x4d) & 0xfeffffff;
  param_1[0x50] = (long)"mWherearenNightFlyTargetHeightY";
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 8;
  param_1[0x4f] = (long)(puVar3 + 0x10);
  param_1[0x54] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4f);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x4f] + 0xf0))(param_1 + 0x4f);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x53) >> 7 & 1) == 0) {
    param_1[0x54] = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  puVar1 = puVar6 + 0x10;
  local_68 = 8;
  *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) & 0xfeffffff;
  pcStack_90 = "mWherearenNightScale";
  local_a8._0_4_ = 0x3f800000;
  pcStack_80 = "";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_008403b0(param_1 + 0x55,&local_98,&local_a8,param_1);
  local_68 = 8;
  pcStack_90 = "mWherearenDayArea1";
  pcStack_80 = "DayArea1";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085d078(param_1 + 0x75,&local_98,param_1);
  local_68 = 8;
  pcStack_90 = "mWherearenDayArea2";
  pcStack_80 = "DayArea2";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085d3e0(param_1 + 0x16b,&local_98,param_1);
  pcStack_90 = "mWherearenDayArea3";
  local_68 = 8;
  pcStack_80 = "DayArea3";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085d750(param_1 + 0x241,&local_98,param_1);
  plVar9 = param_1 + 0x327;
  param_1[0x328] = (long)"mWherearenDayArea4";
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  puVar7 = PTR_DAT_04bb60a0;
  *(undefined4 *)(param_1 + 0x32b) = 8;
  param_1[0x32c] = 0;
  param_1[0x327] = (long)(puVar7 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  pcStack_80 = "";
  pcStack_90 = "mCreatePos";
  puStack_70 = &DAT_0407ebb1;
  local_68 = 8;
  param_1[0x327] = (long)(PTR_DAT_04bb55d0 + 0x10);
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_00840c00(param_1 + 0x32d,&local_98,PTR_DAT_04bb2150,plVar9);
  pcStack_90 = "mTransRatio";
  local_68 = 8;
  pcStack_80 = "";
  local_a8 = (undefined *)((ulong)local_a8._4_4_ << 0x20);
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085e260(param_1 + 0x348,&local_98,&local_a8,plVar9);
  pcStack_90 = "mDirection";
  local_68 = 8;
  local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
  pcStack_80 = "";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085e480(param_1 + 0x376,&local_98,&local_a8,plVar9);
  param_1[0x3c9] = 0;
  param_1[0x3c8] = (long)"mRunDistance";
  param_1[0x3ca] = 0;
  param_1[0x3c7] = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x3cb) = 8;
  param_1[0x3cc] = 0;
  (**(code **)(param_1[0x327] + 0x140))(plVar9,param_1 + 0x3c7);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x3c7] + 0xf0))(param_1 + 0x3c7);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x3cb) >> 7 & 1) == 0) {
    param_1[0x3cc] = 0;
    *(undefined4 *)(param_1 + 0x3cc) = 0;
  }
  param_1[0x3cf] = 0;
  *(uint *)(param_1 + 0x3cb) = *(uint *)(param_1 + 0x3cb) & 0xfeffffff;
  param_1[0x3ce] = (long)"mNumGenMinDay";
  param_1[0x3d0] = 0;
  *(undefined4 *)(param_1 + 0x3d1) = 8;
  param_1[0x3cd] = (long)(puVar2 + 0x10);
  param_1[0x3d2] = 0;
  (**(code **)(param_1[0x327] + 0x140))(plVar9,param_1 + 0x3cd);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x3cd] + 0xf0))(param_1 + 0x3cd);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x3d1) >> 7 & 1) == 0) {
    param_1[0x3d2] = 0;
    *(undefined4 *)(param_1 + 0x3d2) = 0;
  }
  *(uint *)(param_1 + 0x3d1) = *(uint *)(param_1 + 0x3d1) & 0xfeffffff;
  param_1[0x3d4] = (long)"mNumGenMaxDay";
  param_1[0x3d5] = 0;
  param_1[0x3d6] = 0;
  *(undefined4 *)(param_1 + 0x3d7) = 8;
  param_1[0x3d3] = (long)(puVar2 + 0x10);
  param_1[0x3d8] = 0;
  (**(code **)(param_1[0x327] + 0x140))(plVar9,param_1 + 0x3d3);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x3d3] + 0xf0))(param_1 + 0x3d3);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x3d7) >> 7 & 1) == 0) {
    param_1[0x3d8] = 0;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
  }
  param_1[0x3db] = 0;
  *(uint *)(param_1 + 0x3d7) = *(uint *)(param_1 + 0x3d7) & 0xfeffffff;
  param_1[0x3da] = (long)"mNumGenMinAfternoon";
  param_1[0x3dc] = 0;
  *(undefined4 *)(param_1 + 0x3dd) = 8;
  param_1[0x3d9] = (long)(puVar2 + 0x10);
  param_1[0x3de] = 0;
  (**(code **)(param_1[0x327] + 0x140))(plVar9,param_1 + 0x3d9);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x3d9] + 0xf0))(param_1 + 0x3d9);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x3dd) >> 7 & 1) == 0) {
    param_1[0x3de] = 0;
    *(undefined4 *)(param_1 + 0x3de) = 0;
  }
  *(uint *)(param_1 + 0x3dd) = *(uint *)(param_1 + 0x3dd) & 0xfeffffff;
  param_1[0x3e0] = (long)"mNumGenMaxAfternoon";
  param_1[0x3e1] = 0;
  param_1[0x3e2] = 0;
  *(undefined4 *)(param_1 + 0x3e3) = 8;
  param_1[0x3df] = (long)(puVar2 + 0x10);
  param_1[0x3e4] = 0;
  (**(code **)(param_1[0x327] + 0x140))(plVar9,param_1 + 0x3df);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x3df] + 0xf0))(param_1 + 0x3df);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x3e3) >> 7 & 1) == 0) {
    param_1[0x3e4] = 0;
    *(undefined4 *)(param_1 + 0x3e4) = 0;
  }
  *(uint *)(param_1 + 0x3e3) = *(uint *)(param_1 + 0x3e3) & 0xfeffffff;
  puVar2 = puVar6 + 0x10;
  pcStack_90 = "mWherearenDayArea5";
  pcStack_80 = "DayArea5";
  puStack_70 = &DAT_0407ebb1;
  local_68 = 8;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085dee4(param_1 + 0x3e5,&local_98,param_1);
  pcStack_90 = "mWherearenDayArea6";
  local_68 = 8;
  pcStack_80 = "DayArea6";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085dee4(param_1 + 0x4ab,&local_98,param_1);
  pcStack_90 = "mWherearenDayArea7";
  local_68 = 8;
  pcStack_80 = "DayArea7";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085d3e0(param_1 + 0x571,&local_98,param_1);
  pcStack_90 = "mWherearenDayArea8";
  local_68 = 8;
  pcStack_80 = "DayArea8";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085d078(param_1 + 0x647,&local_98,param_1);
  pcStack_90 = "mWherearenDayArea9";
  local_68 = 8;
  pcStack_80 = "DayArea9";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085d750(param_1 + 0x73d,&local_98,param_1);
  param_1[0x825] = 0;
  plVar9 = param_1 + 0x823;
  param_1[0x824] = (long)"mWherearenNightArea1";
  param_1[0x826] = 0;
  *(undefined4 *)(param_1 + 0x827) = 8;
  puVar1 = PTR_DAT_04bb60a0;
  param_1[0x828] = 0;
  param_1[0x823] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  pcStack_90 = "mCreatePos";
  pcStack_80 = "";
  puStack_70 = &DAT_0407ebb1;
  local_68 = 8;
  param_1[0x823] = (long)(PTR_DAT_04bb5540 + 0x10);
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0083fdf0(param_1 + 0x829,&local_98,PTR_DAT_04bb2150,plVar9);
  param_1[0x856] = 0;
  param_1[0x855] = (long)"mRunDistance";
  param_1[0x857] = 0;
  param_1[0x854] = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x858) = 8;
  param_1[0x859] = 0;
  (**(code **)(param_1[0x823] + 0x140))(plVar9,param_1 + 0x854);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x854] + 0xf0))(param_1 + 0x854);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x858) >> 7 & 1) == 0) {
    param_1[0x859] = 0;
    *(undefined4 *)(param_1 + 0x859) = 0;
  }
  param_1[0x85c] = 0;
  *(uint *)(param_1 + 0x858) = *(uint *)(param_1 + 0x858) & 0xfeffffff;
  param_1[0x85b] = (long)"mNumGenMin";
  param_1[0x85d] = 0;
  *(undefined4 *)(param_1 + 0x85e) = 8;
  puVar3 = PTR_DAT_04bb3380;
  param_1[0x85f] = 0;
  param_1[0x85a] = (long)(puVar3 + 0x10);
  (**(code **)(param_1[0x823] + 0x140))(plVar9,param_1 + 0x85a);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x85a] + 0xf0))(param_1 + 0x85a);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x85e) >> 7 & 1) == 0) {
    param_1[0x85f] = 0;
    *(undefined4 *)(param_1 + 0x85f) = 0;
  }
  *(uint *)(param_1 + 0x85e) = *(uint *)(param_1 + 0x85e) & 0xfeffffff;
  param_1[0x861] = (long)"mNumGenMax";
  param_1[0x862] = 0;
  param_1[0x863] = 0;
  *(undefined4 *)(param_1 + 0x864) = 8;
  param_1[0x860] = (long)(puVar3 + 0x10);
  param_1[0x865] = 0;
  (**(code **)(param_1[0x823] + 0x140))(plVar9,param_1 + 0x860);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x860] + 0xf0))(param_1 + 0x860);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x864) >> 7 & 1) == 0) {
    param_1[0x865] = 0;
    *(undefined4 *)(param_1 + 0x865) = 0;
  }
  param_1[0x868] = 0;
  *(uint *)(param_1 + 0x864) = *(uint *)(param_1 + 0x864) & 0xfeffffff;
  plVar9 = param_1 + 0x873;
  plVar4 = param_1 + 0x866;
  param_1[0x867] = (long)"mWherearenNightArea7";
  param_1[0x869] = 0;
  *(undefined4 *)(param_1 + 0x86a) = 8;
  puVar2 = PTR_DAT_04bb60a0;
  param_1[0x86b] = 0;
  param_1[0x866] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar4);
  local_98 = puVar6 + 0x10;
  plVar5 = param_1 + 0x86c;
  pcStack_90 = "mCreatePos";
  pcStack_80 = "";
  puVar3 = PTR_DAT_04bb5510 + 0x10;
  puStack_70 = &DAT_0407ebb1;
  local_68 = 8;
  param_1[0x86d] = (long)"mCreatePos";
  param_1[0x86e] = 0;
  param_1[0x86f] = 0;
  param_1[0x866] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x870) = 8;
  param_1[0x86c] = (long)(puVar2 + 0x10);
  param_1[0x871] = 0;
  lVar11 = param_1[0x86b];
  if (param_1[0x86b] == 0) {
    plVar12 = param_1 + 0x86b;
  }
  else {
    do {
      lVar10 = lVar11;
      lVar11 = *(long *)(lVar10 + 0x10);
    } while (lVar11 != 0);
    plVar12 = (long *)(lVar10 + 0x10);
  }
  *plVar12 = (long)plVar5;
  plVar12 = param_1 + 0x877;
  param_1[0x86f] = (long)plVar4;
  param_1[0x872] = 0;
  param_1[0x873] = 0;
  param_1[0x874] = 0;
  param_1[0x875] = (long)plVar12;
  param_1[0x877] = 0;
  param_1[0x876] = (long)plVar12;
  puVar3 = PTR_DAT_04bb3380;
  local_88 = local_98;
  local_78 = local_98;
  if (param_1 + 0x87e == (long *)0x0) {
    *plVar5 = (long)&PTR_LAB_0491cc78;
    plVar12 = (long *)0x0;
  }
  else {
    param_1[0x874] = (long)(param_1 + 0x87e);
    *(undefined4 *)((long)param_1 + 0x439c) = 1;
    param_1[0x86c] = (long)&PTR_LAB_0491cc78;
    param_1[0x875] = 0;
    FUN_006fdfc0(plVar12,&local_98,PTR_DAT_04bb2150,0);
    param_1[0x877] = (long)&PTR_FUN_0491cdf8;
    if ((int)*plVar9 < *(int *)((long)param_1 + 0x439c)) {
      *(long **)(param_1[0x874] + (long)(int)*plVar9 * 8) = plVar12;
      *(int *)plVar9 = (int)*plVar9 + 1;
    }
  }
  (**(code **)(*plVar12 + 0x38))(plVar12,plVar5);
  *(uint *)(plVar12 + 4) = *(uint *)(plVar12 + 4) & 0xfffffffc;
  param_1[0x881] = 0;
  param_1[0x882] = 0;
  *(undefined4 *)(param_1 + 0x883) = 8;
  param_1[0x880] = (long)"mRunDistance";
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x884] = 0;
  param_1[0x87f] = (long)(puVar2 + 0x10);
  (**(code **)(param_1[0x866] + 0x140))(plVar4,param_1 + 0x87f);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x87f] + 0xf0))(param_1 + 0x87f);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x883) >> 7 & 1) == 0) {
    param_1[0x884] = 0;
    *(undefined4 *)(param_1 + 0x884) = 0;
  }
  param_1[0x887] = 0;
  *(uint *)(param_1 + 0x883) = *(uint *)(param_1 + 0x883) & 0xfeffffff;
  param_1[0x886] = (long)"mNumGenMin";
  param_1[0x888] = 0;
  *(undefined4 *)(param_1 + 0x889) = 8;
  param_1[0x885] = (long)(puVar3 + 0x10);
  param_1[0x88a] = 0;
  (**(code **)(param_1[0x866] + 0x140))(plVar4,param_1 + 0x885);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x885] + 0xf0))(param_1 + 0x885);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x889) >> 7 & 1) == 0) {
    param_1[0x88a] = 0;
    *(undefined4 *)(param_1 + 0x88a) = 0;
  }
  param_1[0x88c] = (long)"mNumGenMax";
  *(uint *)(param_1 + 0x889) = *(uint *)(param_1 + 0x889) & 0xfeffffff;
  param_1[0x88d] = 0;
  param_1[0x88e] = 0;
  *(undefined4 *)(param_1 + 0x88f) = 8;
  param_1[0x88b] = (long)(puVar3 + 0x10);
  param_1[0x890] = 0;
  (**(code **)(param_1[0x866] + 0x140))(plVar4,param_1 + 0x88b);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x88b] + 0xf0))(param_1 + 0x88b);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x88f) >> 7 & 1) == 0) {
    param_1[0x890] = 0;
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  puVar2 = puVar6 + 0x10;
  local_68 = 8;
  *(uint *)(param_1 + 0x88f) = *(uint *)(param_1 + 0x88f) & 0xfeffffff;
  local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
  pcStack_90 = "mGardenDayTransRatio";
  pcStack_80 = "";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e260(param_1 + 0x891,&local_98,&local_a8,param_1);
  pcStack_90 = "mGardenDayDirection";
  local_68 = 8;
  local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
  pcStack_80 = "";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e480(param_1 + 0x8bf,&local_98,&local_a8,param_1);
  pcStack_90 = "mGardenDay1";
  local_68 = 8;
  pcStack_80 = "GardenDay1";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e688(param_1 + 0x910,&local_98,param_1);
  pcStack_90 = "mGardenDay11";
  local_68 = 8;
  pcStack_80 = "GardenDay11";
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e688(param_1 + 0x96d,&local_98,param_1);
  param_1[0x9cc] = 0;
  plVar9 = param_1 + 0x9ca;
  param_1[0x9cb] = (long)"mGardenDay13";
  param_1[0x9cd] = 0;
  *(undefined4 *)(param_1 + 0x9ce) = 8;
  puVar1 = PTR_DAT_04bb60a0;
  param_1[0x9cf] = 0;
  param_1[0x9ca] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  local_68 = 8;
  pcStack_90 = "mCreatePos";
  pcStack_80 = "";
  param_1[0x9ca] = (long)(PTR_DAT_04bb5480 + 0x10);
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085ea20(param_1 + 0x9d0,&local_98,plVar9);
  param_1[0xa25] = 0;
  param_1[0xa24] = (long)"mNumGenMin";
  param_1[0xa26] = 0;
  *(undefined4 *)(param_1 + 0xa27) = 8;
  param_1[0xa23] = (long)(puVar3 + 0x10);
  param_1[0xa28] = 0;
  (**(code **)(param_1[0x9ca] + 0x140))(plVar9,param_1 + 0xa23);
  puVar8 = (undefined4 *)(**(code **)(param_1[0xa23] + 0xf0))(param_1 + 0xa23);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0xa27) >> 7 & 1) == 0) {
    param_1[0xa28] = 0;
    *(undefined4 *)(param_1 + 0xa28) = 0;
  }
  param_1[0xa2a] = (long)"mNumGenMax";
  *(uint *)(param_1 + 0xa27) = *(uint *)(param_1 + 0xa27) & 0xfeffffff;
  param_1[0xa2b] = 0;
  param_1[0xa2c] = 0;
  *(undefined4 *)(param_1 + 0xa2d) = 8;
  param_1[0xa29] = (long)(puVar3 + 0x10);
  param_1[0xa2e] = 0;
  (**(code **)(param_1[0x9ca] + 0x140))(plVar9,param_1 + 0xa29);
  puVar8 = (undefined4 *)(**(code **)(param_1[0xa29] + 0xf0))(param_1 + 0xa29);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0xa2d) >> 7 & 1) == 0) {
    param_1[0xa2e] = 0;
    *(undefined4 *)(param_1 + 0xa2e) = 0;
  }
  param_1[0xa31] = 0;
  *(uint *)(param_1 + 0xa2d) = *(uint *)(param_1 + 0xa2d) & 0xfeffffff;
  plVar9 = param_1 + 0xa2f;
  param_1[0xa32] = 0;
  param_1[0xa30] = (long)"mGardenNight46";
  *(undefined4 *)(param_1 + 0xa33) = 8;
  puVar2 = PTR_DAT_04bb60a0;
  param_1[0xa34] = 0;
  param_1[0xa2f] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  local_98 = puVar6 + 0x10;
  local_68 = 8;
  pcStack_90 = "mCreatePos";
  pcStack_80 = "";
  puStack_70 = &DAT_0407ebb1;
  param_1[0xa2f] = (long)(PTR_DAT_04bb5450 + 0x10);
  local_88 = local_98;
  local_78 = local_98;
  FUN_0085f9e4(param_1 + 0xa35,&local_98,plVar9);
  *(undefined4 *)(param_1 + 0xa6c) = 8;
  param_1[0xa69] = (long)"mNumGenMin";
  param_1[0xa6a] = 0;
  param_1[0xa6b] = 0;
  param_1[0xa68] = (long)(puVar3 + 0x10);
  param_1[0xa6d] = 0;
  (**(code **)(param_1[0xa2f] + 0x140))(plVar9,param_1 + 0xa68);
  puVar8 = (undefined4 *)(**(code **)(param_1[0xa68] + 0xf0))(param_1 + 0xa68);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0xa6c) >> 7 & 1) == 0) {
    param_1[0xa6d] = 0;
    *(undefined4 *)(param_1 + 0xa6d) = 0;
  }
  param_1[0xa6f] = (long)"mNumGenMax";
  *(uint *)(param_1 + 0xa6c) = *(uint *)(param_1 + 0xa6c) & 0xfeffffff;
  param_1[0xa70] = 0;
  *(undefined4 *)(param_1 + 0xa72) = 8;
  param_1[0xa71] = 0;
  param_1[0xa6e] = (long)(puVar3 + 0x10);
  param_1[0xa73] = 0;
  (**(code **)(param_1[0xa2f] + 0x140))(plVar9,param_1 + 0xa6e);
  puVar8 = (undefined4 *)(**(code **)(param_1[0xa6e] + 0xf0))(param_1 + 0xa6e);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0xa72) >> 7 & 1) == 0) {
    param_1[0xa73] = 0;
    *(undefined4 *)(param_1 + 0xa73) = 0;
  }
  *(uint *)(param_1 + 0xa72) = *(uint *)(param_1 + 0xa72) & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

