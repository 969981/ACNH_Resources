
void FUN_0294f674(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_9c;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "Actor";
  local_98 = puVar1;
  FUN_00751ec0(param_1,&local_98,param_2,0);
  local_68 = 0;
  *param_1 = (long)&PTR_FUN_04a94be0;
  pcStack_90 = "mPlayerDetectDist";
  local_9c = 0x41f00000;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085e260(param_1 + 0x18,&local_98,&local_9c,param_1);
  local_68 = 0;
  local_9c = 0x41f00000;
  pcStack_90 = "mPlayerDetectDistWithSlowlySwim";
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085e260(param_1 + 0x46,&local_98,&local_9c,param_1);
  param_1[0x76] = 0;
  param_1[0x75] = (long)"mBuoyDetectDist";
  param_1[0x77] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  param_1[0x74] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x74);
  uVar6 = 0x41200000;
  if ((*(uint *)(param_1 + 0x78) & 0x800) != 0) {
    uVar6 = 0x3e32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x74] + 0xf0))(param_1 + 0x74);
  *puVar5 = uVar6;
  uVar3 = *(uint *)(param_1 + 0x78);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x79] = 0;
    uVar6 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x79) = uVar6;
  }
  param_1[0x7c] = 0;
  *(uint *)(param_1 + 0x78) = uVar3 & 0xfeffffff;
  param_1[0x7b] = (long)"mLookOutFrame";
  param_1[0x7d] = 0;
  puVar4 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x7a] = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x7a] + 0xf0))(param_1 + 0x7a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x7e) >> 7 & 1) == 0) {
    param_1[0x7f] = 0;
    *(undefined4 *)(param_1 + 0x7f) = 0;
  }
  param_1[0x82] = 0;
  *(uint *)(param_1 + 0x7e) = *(uint *)(param_1 + 0x7e) & 0xfeffffff;
  param_1[0x81] = (long)"mCorrectLeaveDistMax";
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x80] = (long)(puVar1 + 0x10);
  param_1[0x85] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x80);
  uVar6 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x84) & 0x800) != 0) {
    uVar6 = 0x3f060a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x80] + 0xf0))(param_1 + 0x80);
  *puVar5 = uVar6;
  uVar3 = *(uint *)(param_1 + 0x84);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x85] = 0;
    uVar6 = 0x41f00000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x85) = uVar6;
  }
  param_1[0x88] = 0;
  *(uint *)(param_1 + 0x84) = uVar3 & 0xfeffffff;
  param_1[0x87] = (long)"mCorrectLeaveDistMin";
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x86] = (long)(puVar1 + 0x10);
  param_1[0x8b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x86);
  uVar6 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x8a) & 0x800) != 0) {
    uVar6 = 0x3eb2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x86] + 0xf0))(param_1 + 0x86);
  *puVar5 = uVar6;
  uVar3 = *(uint *)(param_1 + 0x8a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x8b] = 0;
    uVar6 = 0x41a00000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x8b) = uVar6;
  }
  param_1[0x8e] = 0;
  *(uint *)(param_1 + 0x8a) = uVar3 & 0xfeffffff;
  param_1[0x8d] = (long)"mWaterSurfaceDepthOffset";
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x8c] = (long)(puVar1 + 0x10);
  param_1[0x91] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x8c);
  uVar6 = 0x40e00000;
  if ((*(uint *)(param_1 + 0x90) & 0x800) != 0) {
    uVar6 = 0x3dfa35dd;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x8c] + 0xf0))(param_1 + 0x8c);
  *puVar5 = uVar6;
  uVar3 = *(uint *)(param_1 + 0x90);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x91] = 0;
    uVar6 = 0x40e00000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3dfa35dd;
    }
    *(undefined4 *)(param_1 + 0x91) = uVar6;
  }
  local_68 = 0;
  *(uint *)(param_1 + 0x90) = uVar3 & 0xfeffffff;
  local_98 = puVar2 + 0x10;
  local_9c = 0x3e800000;
  pcStack_90 = "mSpeedRatePlayerSlowlySwim";
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_88 = local_98;
  local_78 = local_98;
  FUN_0085e260(param_1 + 0x92,&local_98,&local_9c,param_1);
  param_1[0xc2] = 0;
  param_1[0xc1] = (long)"mLifeShrinkageMiddleRange";
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc0] = (long)(puVar1 + 0x10);
  param_1[0xc5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc0);
  uVar6 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xc4) & 0x800) != 0) {
    uVar6 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xc0] + 0xf0))(param_1 + 0xc0);
  *puVar5 = uVar6;
  uVar3 = *(uint *)(param_1 + 0xc4);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xc5] = 0;
    uVar6 = 0x3f800000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xc5) = uVar6;
  }
  param_1[200] = 0;
  *(uint *)(param_1 + 0xc4) = uVar3 & 0xfeffffff;
  param_1[199] = (long)"mLifeShrinkageLongRange";
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xc6] = (long)(puVar1 + 0x10);
  param_1[0xcb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc6);
  uVar6 = 0x40000000;
  if ((*(uint *)(param_1 + 0xca) & 0x800) != 0) {
    uVar6 = 0x3d0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xc6] + 0xf0))(param_1 + 0xc6);
  *puVar5 = uVar6;
  uVar3 = *(uint *)(param_1 + 0xca);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xcb] = 0;
    uVar6 = 0x40000000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0xcb) = uVar6;
  }
  param_1[0xce] = 0;
  *(uint *)(param_1 + 0xca) = uVar3 & 0xfeffffff;
  param_1[0xcd] = (long)"mWaterSurfaceDepthOffsetWithPlayerDiving";
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xcc] = (long)(puVar1 + 0x10);
  param_1[0xd1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcc);
  uVar6 = 0x41200000;
  if ((*(uint *)(param_1 + 0xd0) & 0x800) != 0) {
    uVar6 = 0x3e32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xcc] + 0xf0))(param_1 + 0xcc);
  *puVar5 = uVar6;
  uVar3 = *(uint *)(param_1 + 0xd0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xd1] = 0;
    uVar6 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0xd1) = uVar6;
  }
  param_1[0xd4] = 0;
  *(uint *)(param_1 + 0xd0) = uVar3 & 0xfeffffff;
  param_1[0xd3] = (long)"mPlayerCatchRad";
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd2] = (long)(puVar1 + 0x10);
  param_1[0xd7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd2);
  uVar6 = 0x40a00000;
  if ((*(uint *)(param_1 + 0xd6) & 0x800) != 0) {
    uVar6 = 0x3db2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xd2] + 0xf0))(param_1 + 0xd2);
  *puVar5 = uVar6;
  uVar3 = *(uint *)(param_1 + 0xd6);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xd7] = 0;
    uVar6 = 0x40a00000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0xd7) = uVar6;
  }
  param_1[0xda] = 0;
  *(uint *)(param_1 + 0xd6) = uVar3 & 0xfeffffff;
  param_1[0xd9] = (long)"mPlayerCatchOffsetTriggerActionButton";
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xd8] = (long)(puVar1 + 0x10);
  param_1[0xdd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd8);
  uVar6 = 0x41200000;
  if ((*(uint *)(param_1 + 0xdc) & 0x800) != 0) {
    uVar6 = 0x3e32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xd8] + 0xf0))(param_1 + 0xd8);
  *puVar5 = uVar6;
  uVar3 = *(uint *)(param_1 + 0xdc);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xdd] = 0;
    uVar6 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0xdd) = uVar6;
  }
  puVar2 = puVar2 + 0x10;
  local_68 = 0;
  *(uint *)(param_1 + 0xdc) = uVar3 & 0xfeffffff;
  pcStack_90 = "mCatchableRad";
  puStack_80 = &DAT_0407ebb1;
  local_9c = 0x40200000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e260(param_1 + 0xde,&local_98,&local_9c,param_1);
  local_68 = 0;
  local_9c = 0x3e800000;
  pcStack_90 = "mAmplitude";
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e260(param_1 + 0x10c,&local_98,&local_9c,param_1);
  local_68 = 0;
  pcStack_90 = "mAccele";
  local_9c = 0x3dcccccd;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e260(param_1 + 0x13a,&local_98,&local_9c,param_1);
  local_68 = 0;
  pcStack_90 = "mMoveSpeedMax";
  puStack_80 = &DAT_0407ebb1;
  local_9c = 0x3f000000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e260(param_1 + 0x168,&local_98,&local_9c,param_1);
  local_68 = 0;
  pcStack_90 = "mFirstVerocity";
  puStack_80 = &DAT_0407ebb1;
  local_9c = 0x3f400000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e260(param_1 + 0x196,&local_98,&local_9c,param_1);
  local_68 = 0;
  pcStack_90 = "mWaitTimeMin";
  puStack_80 = &DAT_0407ebb1;
  local_9c = 0x40a00000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e260(param_1 + 0x1c4,&local_98,&local_9c,param_1);
  local_68 = 0;
  pcStack_90 = "mWaitTimeMax";
  puStack_80 = &DAT_0407ebb1;
  local_9c = 0x41200000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_0085e260(param_1 + 0x1f2,&local_98,&local_9c,param_1);
  return;
}

