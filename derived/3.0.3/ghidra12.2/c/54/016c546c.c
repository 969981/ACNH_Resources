
void FUN_016c546c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  
  FUN_00751ec0();
  puVar1 = PTR_DAT_04bbdde0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = (long)"mAddPointPerTradeDifficultyLow";
  puVar4 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  param_1[0x1d] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  plVar6 = param_1 + 0x18;
  *plVar6 = (long)(puVar4 + 0x10);
  FUN_03c28900(param_1,plVar6);
  puVar5 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar5 = 3;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 3;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mAddPointPerTradeDifficultyMiddle";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 8;
  param_1[0x23] = 0;
  plVar6 = param_1 + 0x1e;
  *plVar6 = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  puVar5 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar5 = 6;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x23) = 6;
  }
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 8;
  param_1[0x24] = (long)(puVar4 + 0x10);
  param_1[0x25] = (long)"mAddPointPerTradeDifficultyHigh";
  param_1[0x29] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar5 = 0xc;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0xc;
  }
  *(undefined4 *)(param_1 + 0x2e) = 8;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = (long)(puVar4 + 0x10);
  param_1[0x2b] = (long)"mAddPointPerTradeDifficultyHighest";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar5 = 0x14;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0x14;
  }
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 8;
  param_1[0x30] = (long)(puVar4 + 0x10);
  param_1[0x31] = (long)"mAddPointPerEditComplete";
  param_1[0x35] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar5 = 0x1e;
  if ((*(uint *)(param_1 + 0x34) >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0x1e;
  }
  *(undefined4 *)(param_1 + 0x3a) = 8;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = (long)(puVar4 + 0x10);
  param_1[0x37] = (long)"mHotelRoomEditGetTicketNum";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar5 = 200;
  if ((*(uint *)(param_1 + 0x3a) >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 200;
  }
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 8;
  param_1[0x3c] = (long)(puVar4 + 0x10);
  param_1[0x3d] = (long)"mWanderingInviteBonusPerNormal";
  param_1[0x41] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar5 = 0x32;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0x32;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  param_1[0x43] = (long)"mWanderingInviteBonusPerVIP";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 8;
  param_1[0x42] = (long)(puVar4 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar5 = 100;
  if ((*(uint *)(param_1 + 0x46) >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x47) = 100;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xfeffffff;
  param_1[0x49] = (long)"mBonusBalloonDist";
  param_1[0x4b] = 0;
  puVar4 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x4c) = 8;
  param_1[0x4d] = 0;
  param_1[0x48] = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  uVar7 = 0x42960000;
  if ((*(uint *)(param_1 + 0x4c) & 0x800) != 0) {
    uVar7 = 0x3fa78d36;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar5 = uVar7;
  uVar3 = *(uint *)(param_1 + 0x4c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    uVar7 = 0x42960000;
    if ((uVar3 & 0x800) != 0) {
      uVar7 = 0x3fa78d36;
    }
    *(undefined4 *)(param_1 + 0x4d) = uVar7;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = uVar3 & 0xfeffffff;
  param_1[0x4f] = (long)"mBonusBalloonDegree";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 8;
  param_1[0x4e] = (long)(puVar4 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  uVar7 = 0x42aa0000;
  if ((*(uint *)(param_1 + 0x52) & 0x800) != 0) {
    uVar7 = 0x3fbde44e;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar5 = uVar7;
  uVar3 = *(uint *)(param_1 + 0x52);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    uVar7 = 0x42aa0000;
    if ((uVar3 & 0x800) != 0) {
      uVar7 = 0x3fbde44e;
    }
    *(undefined4 *)(param_1 + 0x53) = uVar7;
  }
  *(uint *)(param_1 + 0x52) = uVar3 & 0xfeffffff;
  puVar2 = PTR_DAT_04bb2020;
  local_78 = 8;
  local_ac = 0x43200000;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_a0 = "mHotelReturnPlayerPos";
  puStack_90 = &DAT_0407ebb1;
  local_b4 = 0x42dc0000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x54,&local_a8,&local_b4,param_1);
  local_78 = 8;
  pcStack_a0 = "mHotelGuestDemoPlayerPos";
  local_b4 = 0x42c80000;
  puStack_90 = &DAT_0407ebb1;
  local_ac = 0x431b0000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x5b,&local_a8,&local_b4,param_1);
  param_1[100] = 0;
  param_1[99] = (long)"mHotelGuestDemoPlayerAngle";
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 8;
  param_1[0x62] = (long)(puVar4 + 0x10);
  param_1[0x67] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x62);
  uVar7 = 0x42340000;
  if ((*(uint *)(param_1 + 0x66) & 0x800) != 0) {
    uVar7 = 0x3f490fdb;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x62] + 0xf0))(param_1 + 0x62);
  *puVar5 = uVar7;
  uVar3 = *(uint *)(param_1 + 0x66);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x67] = 0;
    uVar7 = 0x42340000;
    if ((uVar3 & 0x800) != 0) {
      uVar7 = 0x3f490fdb;
    }
    *(undefined4 *)(param_1 + 0x67) = uVar7;
  }
  local_78 = 8;
  *(uint *)(param_1 + 0x66) = uVar3 & 0xfeffffff;
  pcStack_a0 = "mHotelGuestDemoGuestPos";
  puStack_90 = &DAT_0407ebb1;
  local_b4 = 0x42f00000;
  local_ac = 0x431b0000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x68,&local_a8,&local_b4,param_1);
  param_1[0x71] = 0;
  param_1[0x70] = (long)"mHotelGuestDemoGuestAngle";
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 8;
  param_1[0x6f] = (long)(puVar4 + 0x10);
  param_1[0x74] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6f);
  uVar7 = 0x43870000;
  if ((*(uint *)(param_1 + 0x73) & 0x800) != 0) {
    uVar7 = 0x4096cbe4;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x6f] + 0xf0))(param_1 + 0x6f);
  *puVar5 = uVar7;
  uVar3 = *(uint *)(param_1 + 0x73);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x74] = 0;
    uVar7 = 0x43870000;
    if ((uVar3 & 0x800) != 0) {
      uVar7 = 0x4096cbe4;
    }
    *(undefined4 *)(param_1 + 0x74) = uVar7;
  }
  puVar1 = puVar2 + 0x10;
  local_78 = 8;
  *(uint *)(param_1 + 0x73) = uVar3 & 0xfeffffff;
  pcStack_a0 = "mHotelIntroductionRcoPos";
  puStack_90 = &DAT_0407ebb1;
  local_b4 = 0x43020000;
  local_ac = 0x43200000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x75,&local_a8,&local_b4,param_1);
  local_78 = 8;
  pcStack_a0 = "mHotelIntroductionKppPos";
  local_b4 = 0x43160000;
  puStack_90 = &DAT_0407ebb1;
  local_ac = 0x432f0000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x7c,&local_a8,&local_b4,param_1);
  local_78 = 8;
  pcStack_a0 = "mHotelIntroductionKpmPos";
  puStack_90 = &DAT_0407ebb1;
  local_b4 = 0x43110000;
  local_ac = 0x43160000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x83,&local_a8,&local_b4,param_1);
  local_78 = 8;
  pcStack_a0 = "mDIYTradeTutorialNpcOffsetLeft";
  local_b4 = 0xc0e00000;
  puStack_90 = &DAT_0407ebb1;
  local_ac = 0x41200000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x8a,&local_a8,&local_b4,param_1);
  local_78 = 8;
  pcStack_a0 = "mDIYTradeTutorialNpcOffsetRight";
  puStack_90 = &DAT_0407ebb1;
  local_b4 = 0x40e00000;
  local_ac = 0x41200000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_006fdfc0(param_1 + 0x91,&local_a8,&local_b4,param_1);
  param_1[0x9a] = 0;
  param_1[0x99] = (long)"mDIYTradeTutorialPlayerOffsetX";
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 8;
  param_1[0x98] = (long)(puVar4 + 0x10);
  param_1[0x9d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x98);
  uVar7 = 0x41900000;
  if ((*(uint *)(param_1 + 0x9c) & 0x800) != 0) {
    uVar7 = 0x3ea0d97c;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x98] + 0xf0))(param_1 + 0x98);
  *puVar5 = uVar7;
  uVar3 = *(uint *)(param_1 + 0x9c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x9d] = 0;
    uVar7 = 0x41900000;
    if ((uVar3 & 0x800) != 0) {
      uVar7 = 0x3ea0d97c;
    }
    *(undefined4 *)(param_1 + 0x9d) = uVar7;
  }
  param_1[0xa0] = 0;
  *(uint *)(param_1 + 0x9c) = uVar3 & 0xfeffffff;
  param_1[0x9f] = (long)"mDIYTradeTutorialPlayerOffsetZ";
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 8;
  param_1[0x9e] = (long)(puVar4 + 0x10);
  param_1[0xa3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9e);
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0xa2) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x9e] + 0xf0))(param_1 + 0x9e);
  *puVar5 = uVar7;
  uVar3 = *(uint *)(param_1 + 0xa2);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xa3] = 0;
    uVar7 = 0x41a00000;
    if ((uVar3 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0xa3) = uVar7;
  }
  puVar2 = puVar2 + 0x10;
  *(uint *)(param_1 + 0xa2) = uVar3 & 0xfeffffff;
  pcStack_a0 = "mHotelMannequinKpmPos";
  local_b4 = 0x43220000;
  local_78 = 8;
  puStack_90 = &DAT_0407ebb1;
  local_ac = 0x433e0000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar2;
  local_98 = puVar2;
  local_88 = puVar2;
  FUN_006fdfc0(param_1 + 0xa4,&local_a8,&local_b4,param_1);
  local_78 = 8;
  pcStack_a0 = "mHotelFinishVipEditPlayerOffset";
  puStack_90 = &DAT_0407ebb1;
  local_b4 = 0x40a00000;
  local_ac = 0x40a00000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar2;
  local_98 = puVar2;
  local_88 = puVar2;
  FUN_006fdfc0(param_1 + 0xab,&local_a8,&local_b4,param_1);
  local_78 = 8;
  pcStack_a0 = "mVIPGstRadioGymnasticsOffset";
  local_b4 = 0x42340000;
  puStack_90 = &DAT_0407ebb1;
  local_ac = 0xc1c80000;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar2;
  local_98 = puVar2;
  local_88 = puVar2;
  FUN_006fdfc0(param_1 + 0xb2,&local_a8,&local_b4,param_1);
  return;
}

