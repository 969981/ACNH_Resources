
void FUN_013e9f20(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bb2020;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "Actor";
  FUN_00751ec0(param_1,&local_98,param_2,0);
  puVar3 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_FUN_04996978;
  param_1[0x19] = (long)"mMoveAreaRangeFromCreatePos";
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = (long)(puVar3 + 0x10);
  plVar7 = param_1 + 5;
  lVar6 = *plVar7;
  if (*plVar7 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar5 + 0x10);
  }
  *plVar7 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  uVar8 = 0x42200000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar8 = 0x3f32b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar8 = 0x42200000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3f32b8c2;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar8;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar2 & 0xfeffffff;
  param_1[0x1f] = (long)"mMoveAreaRangeFromCreatePosSea";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar7 = param_1 + 0x1e;
  *plVar7 = (long)(puVar3 + 0x10);
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar8 = 0x3f060a92;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x22);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar8 = 0x41f00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = uVar2 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar3 + 0x10);
  param_1[0x25] = (long)"mMoveSpeedMax";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  uVar8 = 0x3e800000;
  if ((*(uint *)(param_1 + 0x28) & 0x800) != 0) {
    uVar8 = 0x3b8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    uVar8 = 0x3e800000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0x29) = uVar8;
  }
  *(uint *)(param_1 + 0x28) = uVar2 & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar3 + 0x10);
  param_1[0x2b] = (long)"mMoveSpeedMin";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  uVar8 = 0x3e000000;
  if ((*(uint *)(param_1 + 0x2e) & 0x800) != 0) {
    uVar8 = 0x3b0efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x2e);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    uVar8 = 0x3e000000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3b0efa35;
    }
    *(undefined4 *)(param_1 + 0x2f) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x2e) = uVar2 & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar3 + 0x10);
  param_1[0x31] = (long)"mMoveDistRange";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  uVar8 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    uVar8 = 0x3eb2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x34);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    uVar8 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar8;
  }
  *(uint *)(param_1 + 0x34) = uVar2 & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x36] = (long)(puVar3 + 0x10);
  param_1[0x37] = (long)"mMoveDistRangeSea";
  param_1[0x3b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  uVar8 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x3a) & 0x800) != 0) {
    uVar8 = 0x3eb2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x3a);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    uVar8 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x3a) = uVar2 & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar3 + 0x10);
  param_1[0x3d] = (long)"mRangeNextGoalAngleY";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  uVar8 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x40) & 0x800) != 0) {
    uVar8 = 0x3f060a92;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    uVar8 = 0x41f00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x41) = uVar8;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = uVar2 & 0xfeffffff;
  param_1[0x43] = (long)"mMoveAnimSpeedMin";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar3 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  uVar8 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x46) & 0x800) != 0) {
    uVar8 = 0x3c0efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x46);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    uVar8 = 0x3f000000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x47) = uVar8;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = uVar2 & 0xfeffffff;
  param_1[0x49] = (long)"mMoveAnimSpeedMax";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar3 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  uVar8 = 0x3fc00000;
  if ((*(uint *)(param_1 + 0x4c) & 0x800) != 0) {
    uVar8 = 0x3cd67750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x4c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    uVar8 = 0x3fc00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3cd67750;
    }
    *(undefined4 *)(param_1 + 0x4d) = uVar8;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = uVar2 & 0xfeffffff;
  param_1[0x4f] = (long)"mMoveAnimSpeedPickMin";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4e] = (long)(puVar3 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  uVar8 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x52) & 0x800) != 0) {
    uVar8 = 0x3c0efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x52);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    uVar8 = 0x3f000000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x53) = uVar8;
  }
  param_1[0x56] = 0;
  *(uint *)(param_1 + 0x52) = uVar2 & 0xfeffffff;
  param_1[0x55] = (long)"mMoveAnimSpeedPickMax";
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x54] = (long)(puVar3 + 0x10);
  param_1[0x59] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54);
  uVar8 = 0x3fc00000;
  if ((*(uint *)(param_1 + 0x58) & 0x800) != 0) {
    uVar8 = 0x3cd67750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x58);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    uVar8 = 0x3fc00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3cd67750;
    }
    *(undefined4 *)(param_1 + 0x59) = uVar8;
  }
  param_1[0x5c] = 0;
  *(uint *)(param_1 + 0x58) = uVar2 & 0xfeffffff;
  param_1[0x5b] = (long)"mMoveAnimSpeedHit";
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5a] = (long)(puVar3 + 0x10);
  param_1[0x5f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  uVar8 = 0x40200000;
  if ((*(uint *)(param_1 + 0x5e) & 0x800) != 0) {
    uVar8 = 0x3d32b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x5e);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    uVar8 = 0x40200000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3d32b8c2;
    }
    *(undefined4 *)(param_1 + 0x5f) = uVar8;
  }
  param_1[0x62] = 0;
  *(uint *)(param_1 + 0x5e) = uVar2 & 0xfeffffff;
  param_1[0x61] = (long)"mMoveAnimSpeedEscape";
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x60] = (long)(puVar3 + 0x10);
  param_1[0x65] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x60);
  uVar8 = 0x40400000;
  if ((*(uint *)(param_1 + 100) & 0x800) != 0) {
    uVar8 = 0x3d567750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x60] + 0xf0))(param_1 + 0x60);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 100);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x65] = 0;
    uVar8 = 0x40400000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x65) = uVar8;
  }
  param_1[0x68] = 0;
  *(uint *)(param_1 + 100) = uVar2 & 0xfeffffff;
  param_1[0x67] = (long)"mWaitFrameMax";
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x66] = (long)(puVar3 + 0x10);
  param_1[0x6b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x66);
  uVar8 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x6a) & 0x800) != 0) {
    uVar8 = 0x3db2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x66] + 0xf0))(param_1 + 0x66);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x6a);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x6b] = 0;
    uVar8 = 0x40a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x6b) = uVar8;
  }
  param_1[0x6e] = 0;
  *(uint *)(param_1 + 0x6a) = uVar2 & 0xfeffffff;
  param_1[0x6d] = (long)"mWaitFrameMin";
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6c] = (long)(puVar3 + 0x10);
  param_1[0x71] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6c);
  uVar8 = 0x40400000;
  if ((*(uint *)(param_1 + 0x70) & 0x800) != 0) {
    uVar8 = 0x3d567750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x6c] + 0xf0))(param_1 + 0x6c);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x70);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x71] = 0;
    uVar8 = 0x40400000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x71) = uVar8;
  }
  param_1[0x74] = 0;
  *(uint *)(param_1 + 0x70) = uVar2 & 0xfeffffff;
  param_1[0x73] = (long)"mDriftFrameMax";
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x72] = (long)(puVar3 + 0x10);
  param_1[0x77] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x72);
  uVar8 = 0x40400000;
  if ((*(uint *)(param_1 + 0x76) & 0x800) != 0) {
    uVar8 = 0x3d567750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x72] + 0xf0))(param_1 + 0x72);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x76);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x77] = 0;
    uVar8 = 0x40400000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x77) = uVar8;
  }
  param_1[0x7a] = 0;
  *(uint *)(param_1 + 0x76) = uVar2 & 0xfeffffff;
  param_1[0x79] = (long)"mDriftFrameMin";
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x78] = (long)(puVar3 + 0x10);
  param_1[0x7d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x78);
  uVar8 = 0x40400000;
  if ((*(uint *)(param_1 + 0x7c) & 0x800) != 0) {
    uVar8 = 0x3d567750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x78] + 0xf0))(param_1 + 0x78);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x7c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x7d] = 0;
    uVar8 = 0x40400000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x7d) = uVar8;
  }
  param_1[0x80] = 0;
  *(uint *)(param_1 + 0x7c) = uVar2 & 0xfeffffff;
  param_1[0x7f] = (long)"mFirstPickWaitFrameMin";
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7e] = (long)(puVar3 + 0x10);
  param_1[0x83] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7e);
  uVar8 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x82) & 0x800) != 0) {
    uVar8 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x7e] + 0xf0))(param_1 + 0x7e);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x82);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x83] = 0;
    uVar8 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x83) = uVar8;
  }
  param_1[0x86] = 0;
  *(uint *)(param_1 + 0x82) = uVar2 & 0xfeffffff;
  param_1[0x85] = (long)"mFirstPickWaitFrameMax";
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x84] = (long)(puVar3 + 0x10);
  param_1[0x89] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x84);
  uVar8 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x88) & 0x800) != 0) {
    uVar8 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x84] + 0xf0))(param_1 + 0x84);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x88);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x89] = 0;
    uVar8 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x89) = uVar8;
  }
  puVar1 = puVar1 + 0x10;
  local_68 = 0;
  *(uint *)(param_1 + 0x88) = uVar2 & 0xfeffffff;
  pcStack_90 = "mHitFrameArray";
  local_24 = 0x40200000;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_013eae10(param_1 + 0x8a,&local_98,&local_24,param_1);
  local_68 = 0;
  pcStack_90 = "mWaterDepthArray";
  puStack_80 = &DAT_0407ebb1;
  local_24 = 0x40000000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_013eae10(param_1 + 0xd4,&local_98,&local_24,param_1);
  local_68 = 0;
  pcStack_90 = "mNormalHitFrameArray";
  puStack_80 = &DAT_0407ebb1;
  local_24 = 0x41500000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085e260(param_1 + 0x11e,&local_98,&local_24,param_1);
  local_68 = 0;
  pcStack_90 = "mNormalLureSearchRadArray";
  puStack_80 = &DAT_0407ebb1;
  local_24 = 0x41400000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085e260(param_1 + 0x14c,&local_98,&local_24,param_1);
  local_68 = 0;
  pcStack_90 = "mNormalLureSearchAngleArray";
  puStack_80 = &DAT_0407ebb1;
  local_24 = 0x42480000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0085e260(param_1 + 0x17a,&local_98,&local_24,param_1);
  param_1[0x1aa] = 0;
  param_1[0x1a9] = (long)"mScaleOutStartLimit";
  param_1[0x1ab] = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  param_1[0x1a8] = (long)(puVar3 + 0x10);
  param_1[0x1ad] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1a8);
  uVar8 = 0x42f00000;
  if ((*(uint *)(param_1 + 0x1ac) & 0x800) != 0) {
    uVar8 = 0x40060a92;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1a8] + 0xf0))(param_1 + 0x1a8);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x1ac);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1ad] = 0;
    uVar8 = 0x42f00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x40060a92;
    }
    *(undefined4 *)(param_1 + 0x1ad) = uVar8;
  }
  param_1[0x1b0] = 0;
  *(uint *)(param_1 + 0x1ac) = uVar2 & 0xfeffffff;
  param_1[0x1af] = (long)"mScaleOutLimit";
  param_1[0x1b1] = 0;
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  param_1[0x1ae] = (long)(puVar3 + 0x10);
  param_1[0x1b3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ae);
  uVar8 = 0x43020000;
  if ((*(uint *)(param_1 + 0x1b2) & 0x800) != 0) {
    uVar8 = 0x4011361e;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1ae] + 0xf0))(param_1 + 0x1ae);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x1b2);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1b3] = 0;
    uVar8 = 0x43020000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x4011361e;
    }
    *(undefined4 *)(param_1 + 0x1b3) = uVar8;
  }
  param_1[0x1b6] = 0;
  *(uint *)(param_1 + 0x1b2) = uVar2 & 0xfeffffff;
  param_1[0x1b5] = (long)"mScaleInFrame";
  param_1[0x1b7] = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  param_1[0x1b4] = (long)(puVar3 + 0x10);
  param_1[0x1b9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1b4);
  uVar8 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x1b8) & 0x800) != 0) {
    uVar8 = 0x3f060a92;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1b4] + 0xf0))(param_1 + 0x1b4);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x1b8);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1b9] = 0;
    uVar8 = 0x41f00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x1b9) = uVar8;
  }
  param_1[0x1bc] = 0;
  *(uint *)(param_1 + 0x1b8) = uVar2 & 0xfeffffff;
  param_1[0x1bb] = (long)"mScaleOutFrame";
  param_1[0x1bd] = 0;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  param_1[0x1ba] = (long)(puVar3 + 0x10);
  param_1[0x1bf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ba);
  uVar8 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x1be) & 0x800) != 0) {
    uVar8 = 0x3f060a92;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1ba] + 0xf0))(param_1 + 0x1ba);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x1be);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1bf] = 0;
    uVar8 = 0x41f00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x1bf) = uVar8;
  }
  *(uint *)(param_1 + 0x1be) = uVar2 & 0xfeffffff;
  return;
}

