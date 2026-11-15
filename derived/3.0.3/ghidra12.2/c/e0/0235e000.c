
void FUN_0235e000(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *local_140;
  char *pcStack_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  
  local_140 = PTR_DAT_04bb2020 + 0x10;
  pcStack_138 = "Actor";
  FUN_00751ec0(param_1,&local_140,param_2,0);
  puVar1 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_FUN_04a806b8;
  param_1[0x19] = (long)"mStickUseMorphGap";
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  param_1[0x18] = (long)(puVar1 + 0x10);
  plVar10 = param_1 + 5;
  lVar9 = *plVar10;
  if (*plVar10 != 0) {
    do {
      lVar8 = lVar9;
      lVar9 = *(long *)(lVar8 + 0x10);
    } while (lVar9 != 0);
    plVar10 = (long *)(lVar8 + 0x10);
  }
  *plVar10 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  uVar14 = 0x3fc00000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar14 = 0x3cd67750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar14 = 0x3fc00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3cd67750;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar14;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar3 & 0xfeffffff;
  param_1[0x1f] = (long)"mStickMorphSpeed";
  param_1[0x20] = 0;
  plVar10 = param_1 + 0x1e;
  *plVar10 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x22) = 8;
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  uVar14 = 0x40000000;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar14 = 0x3d0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar10 + 0xf0))(plVar10);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x22);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar14 = 0x40000000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar14;
  }
  *(undefined4 *)(param_1 + 0x28) = 8;
  *(uint *)(param_1 + 0x22) = uVar3 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar1 + 0x10);
  param_1[0x25] = (long)"mStickInvalidArea";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 8;
  param_1[0x2a] = (long)(puVar1 + 0x10);
  param_1[0x2b] = (long)"mStickSpeedAddCalcRate";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  uVar14 = 0x3e800000;
  if ((*(uint *)(param_1 + 0x2e) & 0x800) != 0) {
    uVar14 = 0x3b8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    uVar14 = 0x3e800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0x2f) = uVar14;
  }
  *(undefined4 *)(param_1 + 0x34) = 8;
  *(uint *)(param_1 + 0x2e) = uVar3 & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar1 + 0x10);
  param_1[0x31] = (long)"mStickSpeedAddCalcMax";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  uVar14 = 0x3e2e147b;
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    uVar14 = 0x3b427301;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x34);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    uVar14 = 0x3e2e147b;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b427301;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar14;
  }
  *(uint *)(param_1 + 0x34) = uVar3 & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 8;
  param_1[0x36] = (long)(puVar1 + 0x10);
  param_1[0x37] = (long)"mStickSpeedAddCalcMin";
  param_1[0x3b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  uVar14 = 0x3d4ccccd;
  if ((*(uint *)(param_1 + 0x3a) & 0x800) != 0) {
    uVar14 = 0x3a64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x3a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    uVar14 = 0x3d4ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3a64c388;
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar14;
  }
  *(undefined4 *)(param_1 + 0x40) = 8;
  *(uint *)(param_1 + 0x3a) = uVar3 & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar1 + 0x10);
  param_1[0x3d] = (long)"mStickForceByDebugPage";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  uVar14 = 0x3ba3d70a;
  if ((*(uint *)(param_1 + 0x40) & 0x800) != 0) {
    uVar14 = 0x38b702d3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x40);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    uVar14 = 0x3ba3d70a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x38b702d3;
    }
    *(undefined4 *)(param_1 + 0x41) = uVar14;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = uVar3 & 0xfeffffff;
  param_1[0x43] = (long)"mObjCollisionRadius";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 8;
  param_1[0x42] = (long)(puVar1 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  uVar14 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x46) & 0x800) != 0) {
    uVar14 = 0x3db2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x46);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    uVar14 = 0x40a00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x47) = uVar14;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = uVar3 & 0xfeffffff;
  param_1[0x49] = (long)"mInvalidObjCollisionRadius";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 8;
  param_1[0x48] = (long)(puVar1 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  uVar14 = 0x3fc00000;
  if ((*(uint *)(param_1 + 0x4c) & 0x800) != 0) {
    uVar14 = 0x3cd67750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x4c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    uVar14 = 0x3fc00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3cd67750;
    }
    *(undefined4 *)(param_1 + 0x4d) = uVar14;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = uVar3 & 0xfeffffff;
  param_1[0x4f] = (long)"mObjCollisionHeight";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 8;
  param_1[0x4e] = (long)(puVar1 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  uVar14 = 0x41900000;
  if ((*(uint *)(param_1 + 0x52) & 0x800) != 0) {
    uVar14 = 0x3ea0d97c;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x52);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    uVar14 = 0x41900000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3ea0d97c;
    }
    *(undefined4 *)(param_1 + 0x53) = uVar14;
  }
  param_1[0x56] = 0;
  *(uint *)(param_1 + 0x52) = uVar3 & 0xfeffffff;
  param_1[0x55] = (long)"mBgCollisionRadius";
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 8;
  param_1[0x54] = (long)(puVar1 + 0x10);
  param_1[0x59] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54);
  uVar14 = 0x409fae14;
  if ((*(uint *)(param_1 + 0x58) & 0x800) != 0) {
    uVar14 = 0x3db25d40;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x58);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    uVar14 = 0x409fae14;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3db25d40;
    }
    *(undefined4 *)(param_1 + 0x59) = uVar14;
  }
  *(uint *)(param_1 + 0x58) = uVar3 & 0xfeffffff;
  param_1[0x5b] = (long)"mBgCollisionAirRadius";
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 8;
  param_1[0x5a] = (long)(puVar1 + 0x10);
  param_1[0x5f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  uVar14 = 0x40000000;
  if ((*(uint *)(param_1 + 0x5e) & 0x800) != 0) {
    uVar14 = 0x3d0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x5e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    uVar14 = 0x40000000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x5f) = uVar14;
  }
  param_1[0x62] = 0;
  *(uint *)(param_1 + 0x5e) = uVar3 & 0xfeffffff;
  param_1[0x61] = (long)"mEscapeSpeedTimer";
  param_1[99] = 0;
  puVar2 = PTR_DAT_04bb62c0;
  *(undefined4 *)(param_1 + 100) = 8;
  param_1[0x65] = 0;
  param_1[0x60] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x60);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x60] + 0xf0))(param_1 + 0x60);
  *puVar5 = 3;
  if ((*(uint *)(param_1 + 100) >> 7 & 1) == 0) {
    param_1[0x65] = 0;
    *(undefined4 *)(param_1 + 0x65) = 3;
  }
  param_1[0x68] = 0;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfeffffff;
  param_1[0x67] = (long)"mAirportDockHeight";
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 8;
  param_1[0x66] = (long)(puVar1 + 0x10);
  param_1[0x6b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x66);
  uVar14 = 0x409ccccd;
  if ((*(uint *)(param_1 + 0x6a) & 0x800) != 0) {
    uVar14 = 0x3daf25b4;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x66] + 0xf0))(param_1 + 0x66);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x6a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x6b] = 0;
    uVar14 = 0x409ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3daf25b4;
    }
    *(undefined4 *)(param_1 + 0x6b) = uVar14;
  }
  param_1[0x6e] = 0;
  *(uint *)(param_1 + 0x6a) = uVar3 & 0xfeffffff;
  param_1[0x6d] = (long)"mSWalkWaitOffsetZ";
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 8;
  param_1[0x6c] = (long)(puVar1 + 0x10);
  param_1[0x71] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6c);
  uVar14 = 0x3dcccccd;
  if ((*(uint *)(param_1 + 0x70) & 0x800) != 0) {
    uVar14 = 0x3ae4c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x6c] + 0xf0))(param_1 + 0x6c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x70);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x71] = 0;
    uVar14 = 0x3dcccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3ae4c388;
    }
    *(undefined4 *)(param_1 + 0x71) = uVar14;
  }
  param_1[0x74] = 0;
  *(uint *)(param_1 + 0x70) = uVar3 & 0xfeffffff;
  param_1[0x73] = (long)"mToolTowelSetStateFrame";
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 8;
  param_1[0x72] = (long)(puVar2 + 0x10);
  param_1[0x77] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x72);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x72] + 0xf0))(param_1 + 0x72);
  *puVar5 = 8;
  if ((*(uint *)(param_1 + 0x76) >> 7 & 1) == 0) {
    param_1[0x77] = 0;
    *(undefined4 *)(param_1 + 0x77) = 8;
  }
  param_1[0x7a] = 0;
  *(uint *)(param_1 + 0x76) = *(uint *)(param_1 + 0x76) & 0xfeffffff;
  param_1[0x79] = (long)"mToolTowelDeleteStateFrame";
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 8;
  param_1[0x78] = (long)(puVar2 + 0x10);
  param_1[0x7d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x78);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x78] + 0xf0))(param_1 + 0x78);
  *puVar5 = 8;
  if ((*(uint *)(param_1 + 0x7c) >> 7 & 1) == 0) {
    param_1[0x7d] = 0;
    *(undefined4 *)(param_1 + 0x7d) = 8;
  }
  param_1[0x80] = 0;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfeffffff;
  param_1[0x7f] = (long)"mNiceTalkPosWithNpc";
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 8;
  param_1[0x7e] = (long)(puVar1 + 0x10);
  param_1[0x83] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7e);
  uVar14 = 0x41480000;
  if ((*(uint *)(param_1 + 0x82) & 0x800) != 0) {
    uVar14 = 0x3e5f66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x7e] + 0xf0))(param_1 + 0x7e);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x82);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x83] = 0;
    uVar14 = 0x41480000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e5f66f3;
    }
    *(undefined4 *)(param_1 + 0x83) = uVar14;
  }
  param_1[0x86] = 0;
  *(uint *)(param_1 + 0x82) = uVar3 & 0xfeffffff;
  param_1[0x85] = (long)"mHoneySurpriseTimer";
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 8;
  param_1[0x84] = (long)(puVar1 + 0x10);
  param_1[0x89] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x84);
  uVar14 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x88) & 0x800) != 0) {
    uVar14 = 0x3eb2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x84] + 0xf0))(param_1 + 0x84);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x88);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x89] = 0;
    uVar14 = 0x41a00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x89) = uVar14;
  }
  param_1[0x8c] = 0;
  *(uint *)(param_1 + 0x88) = uVar3 & 0xfeffffff;
  param_1[0x8b] = (long)"mFtrHoldChangeSwitchAcceptTimer";
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 8;
  param_1[0x8a] = (long)(puVar2 + 0x10);
  param_1[0x8f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x8a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x8a] + 0xf0))(param_1 + 0x8a);
  *puVar5 = 3;
  if ((*(uint *)(param_1 + 0x8e) >> 7 & 1) == 0) {
    param_1[0x8f] = 0;
    *(undefined4 *)(param_1 + 0x8f) = 3;
  }
  param_1[0x92] = 0;
  *(uint *)(param_1 + 0x8e) = *(uint *)(param_1 + 0x8e) & 0xfeffffff;
  param_1[0x91] = (long)"mFtrCancelTimerToWait";
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 8;
  param_1[0x90] = (long)(puVar2 + 0x10);
  param_1[0x95] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x90);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x90] + 0xf0))(param_1 + 0x90);
  *puVar5 = 1;
  if ((*(uint *)(param_1 + 0x94) >> 7 & 1) == 0) {
    param_1[0x95] = 0;
    *(undefined4 *)(param_1 + 0x95) = 1;
  }
  param_1[0x98] = 0;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfeffffff;
  param_1[0x97] = (long)"mActionWaitFrameByEmotionRingMenu";
  param_1[0x99] = 0;
  puVar4 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x9a) = 8;
  param_1[0x9b] = 0;
  param_1[0x96] = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x96);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x96] + 0xf0))(param_1 + 0x96);
  *puVar5 = 1;
  if ((*(uint *)(param_1 + 0x9a) >> 7 & 1) == 0) {
    param_1[0x9b] = 0;
    *(undefined4 *)(param_1 + 0x9b) = 1;
  }
  param_1[0x9e] = 0;
  *(uint *)(param_1 + 0x9a) = *(uint *)(param_1 + 0x9a) & 0xfeffffff;
  param_1[0x9d] = (long)"mAddDegreeByUI";
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 8;
  param_1[0x9c] = (long)(puVar1 + 0x10);
  param_1[0xa1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9c);
  uVar14 = 0x41700000;
  if ((*(uint *)(param_1 + 0xa0) & 0x800) != 0) {
    uVar14 = 0x3e860a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x9c] + 0xf0))(param_1 + 0x9c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xa0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xa1] = 0;
    uVar14 = 0x41700000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0xa1) = uVar14;
  }
  param_1[0xa4] = 0;
  *(uint *)(param_1 + 0xa0) = uVar3 & 0xfeffffff;
  param_1[0xa3] = (long)"mDetectObjOffset";
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 8;
  param_1[0xa2] = (long)(puVar1 + 0x10);
  param_1[0xa7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa2);
  uVar14 = 0x41700000;
  if ((*(uint *)(param_1 + 0xa6) & 0x800) != 0) {
    uVar14 = 0x3e860a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xa2] + 0xf0))(param_1 + 0xa2);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xa6);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xa7] = 0;
    uVar14 = 0x41700000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0xa7) = uVar14;
  }
  param_1[0xaa] = 0;
  *(uint *)(param_1 + 0xa6) = uVar3 & 0xfeffffff;
  param_1[0xa9] = (long)"mDetectObjRadius";
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 8;
  param_1[0xa8] = (long)(puVar1 + 0x10);
  param_1[0xad] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa8);
  uVar14 = 0x40400000;
  if ((*(uint *)(param_1 + 0xac) & 0x800) != 0) {
    uVar14 = 0x3d567750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xa8] + 0xf0))(param_1 + 0xa8);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xac);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xad] = 0;
    uVar14 = 0x40400000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0xad) = uVar14;
  }
  param_1[0xb0] = 0;
  *(uint *)(param_1 + 0xac) = uVar3 & 0xfeffffff;
  param_1[0xaf] = (long)"mDetectObjHeight";
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 8;
  param_1[0xae] = (long)(puVar1 + 0x10);
  param_1[0xb3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xae);
  uVar14 = 0x41200000;
  if ((*(uint *)(param_1 + 0xb2) & 0x800) != 0) {
    uVar14 = 0x3e32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xae] + 0xf0))(param_1 + 0xae);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xb2);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xb3] = 0;
    uVar14 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0xb3) = uVar14;
  }
  param_1[0xb6] = 0;
  *(uint *)(param_1 + 0xb2) = uVar3 & 0xfeffffff;
  param_1[0xb5] = (long)"mEatIconOffsetX";
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 8;
  param_1[0xb4] = (long)(puVar1 + 0x10);
  param_1[0xb9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb4);
  uVar14 = 0xbfe00000;
  if ((*(uint *)(param_1 + 0xb8) & 0x800) != 0) {
    uVar14 = 0xbcfa35dd;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xb4] + 0xf0))(param_1 + 0xb4);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xb8);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xb9] = 0;
    uVar14 = 0xbfe00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbcfa35dd;
    }
    *(undefined4 *)(param_1 + 0xb9) = uVar14;
  }
  param_1[0xbc] = 0;
  *(uint *)(param_1 + 0xb8) = uVar3 & 0xfeffffff;
  param_1[0xbb] = (long)"mEatIconOffsetY";
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 8;
  param_1[0xba] = (long)(puVar1 + 0x10);
  param_1[0xbf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xba);
  uVar14 = 0xbf800000;
  if ((*(uint *)(param_1 + 0xbe) & 0x800) != 0) {
    uVar14 = 0xbc8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xba] + 0xf0))(param_1 + 0xba);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xbe);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xbf] = 0;
    uVar14 = 0xbf800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbc8efa35;
    }
    *(undefined4 *)(param_1 + 0xbf) = uVar14;
  }
  param_1[0xc2] = 0;
  *(uint *)(param_1 + 0xbe) = uVar3 & 0xfeffffff;
  param_1[0xc1] = (long)"mEatIconOffsetZ";
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 8;
  param_1[0xc0] = (long)(puVar1 + 0x10);
  param_1[0xc5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc0);
  puVar5 = (undefined4 *)(**(code **)(param_1[0xc0] + 0xf0))(param_1 + 0xc0);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0xc4) >> 7 & 1) == 0) {
    param_1[0xc5] = 0;
    *(undefined4 *)(param_1 + 0xc5) = 0;
  }
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfeffffff;
  param_1[199] = (long)"mFoodPowerupTimer";
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 8;
  param_1[0xc6] = (long)(puVar2 + 0x10);
  param_1[0xcb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc6);
  puVar5 = (undefined4 *)(**(code **)(param_1[0xc6] + 0xf0))(param_1 + 0xc6);
  *puVar5 = 0x1518;
  if ((*(uint *)(param_1 + 0xca) >> 7 & 1) == 0) {
    param_1[0xcb] = 0;
    *(undefined4 *)(param_1 + 0xcb) = 0x1518;
  }
  *(undefined4 *)(param_1 + 0xd0) = 8;
  *(uint *)(param_1 + 0xca) = *(uint *)(param_1 + 0xca) & 0xfeffffff;
  param_1[0xcd] = (long)"mFoodPowerupDashAddRate";
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xcc] = (long)(puVar1 + 0x10);
  param_1[0xd1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcc);
  uVar14 = 0x3e800000;
  if ((*(uint *)(param_1 + 0xd0) & 0x800) != 0) {
    uVar14 = 0x3b8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xcc] + 0xf0))(param_1 + 0xcc);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xd0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xd1] = 0;
    uVar14 = 0x3e800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0xd1) = uVar14;
  }
  param_1[0xd4] = 0;
  *(uint *)(param_1 + 0xd0) = uVar3 & 0xfeffffff;
  param_1[0xd3] = (long)"mWalkRunAngleYSpeedMax";
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 8;
  param_1[0xd2] = (long)(puVar1 + 0x10);
  param_1[0xd7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd2);
  uVar14 = 0x40600000;
  if ((*(uint *)(param_1 + 0xd6) & 0x800) != 0) {
    uVar14 = 0x3d7a35dd;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xd2] + 0xf0))(param_1 + 0xd2);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xd6);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xd7] = 0;
    uVar14 = 0x40600000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d7a35dd;
    }
    *(undefined4 *)(param_1 + 0xd7) = uVar14;
  }
  param_1[0xda] = 0;
  *(uint *)(param_1 + 0xd6) = uVar3 & 0xfeffffff;
  param_1[0xd9] = (long)"mDashAngleYSpeedMax";
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 8;
  param_1[0xd8] = (long)(puVar1 + 0x10);
  param_1[0xdd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd8);
  uVar14 = 0x40600000;
  if ((*(uint *)(param_1 + 0xdc) & 0x800) != 0) {
    uVar14 = 0x3d7a35dd;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xd8] + 0xf0))(param_1 + 0xd8);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xdc);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xdd] = 0;
    uVar14 = 0x40600000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d7a35dd;
    }
    *(undefined4 *)(param_1 + 0xdd) = uVar14;
  }
  param_1[0xe0] = 0;
  *(uint *)(param_1 + 0xdc) = uVar3 & 0xfeffffff;
  param_1[0xdf] = (long)"mInputDiffDegreeForMoveSpeedMin";
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 8;
  param_1[0xde] = (long)(puVar1 + 0x10);
  param_1[0xe3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xde);
  uVar14 = 0x41200000;
  if ((*(uint *)(param_1 + 0xe2) & 0x800) != 0) {
    uVar14 = 0x3e32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xde] + 0xf0))(param_1 + 0xde);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xe2);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xe3] = 0;
    uVar14 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0xe3) = uVar14;
  }
  param_1[0xe6] = 0;
  *(uint *)(param_1 + 0xe2) = uVar3 & 0xfeffffff;
  param_1[0xe5] = (long)"mMoveSpeedMin";
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 8;
  param_1[0xe4] = (long)(puVar1 + 0x10);
  param_1[0xe9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe4);
  uVar14 = 0x3e99999a;
  if ((*(uint *)(param_1 + 0xe8) & 0x800) != 0) {
    uVar14 = 0x3bab92a6;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xe4] + 0xf0))(param_1 + 0xe4);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xe8);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xe9] = 0;
    uVar14 = 0x3e99999a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3bab92a6;
    }
    *(undefined4 *)(param_1 + 0xe9) = uVar14;
  }
  param_1[0xec] = 0;
  *(uint *)(param_1 + 0xe8) = uVar3 & 0xfeffffff;
  param_1[0xeb] = (long)"mMoveAnimSpeedMin";
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 8;
  param_1[0xea] = (long)(puVar1 + 0x10);
  param_1[0xef] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xea);
  uVar14 = 0x3f19999a;
  if ((*(uint *)(param_1 + 0xee) & 0x800) != 0) {
    uVar14 = 0x3c2b92a6;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xea] + 0xf0))(param_1 + 0xea);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xee);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xef] = 0;
    uVar14 = 0x3f19999a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3c2b92a6;
    }
    *(undefined4 *)(param_1 + 0xef) = uVar14;
  }
  param_1[0xf2] = 0;
  *(uint *)(param_1 + 0xee) = uVar3 & 0xfeffffff;
  param_1[0xf1] = (long)"mWalkSpeedMax";
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 8;
  param_1[0xf0] = (long)(puVar1 + 0x10);
  param_1[0xf5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf0);
  uVar14 = 0x3f59999a;
  if ((*(uint *)(param_1 + 0xf4) & 0x800) != 0) {
    uVar14 = 0x3c730fc1;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xf0] + 0xf0))(param_1 + 0xf0);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xf4);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xf5] = 0;
    uVar14 = 0x3f59999a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3c730fc1;
    }
    *(undefined4 *)(param_1 + 0xf5) = uVar14;
  }
  param_1[0xf8] = 0;
  *(uint *)(param_1 + 0xf4) = uVar3 & 0xfeffffff;
  param_1[0xf7] = (long)"mRunSpeedMax";
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 8;
  param_1[0xf6] = (long)(puVar1 + 0x10);
  param_1[0xfb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf6);
  uVar14 = 0x3fa00000;
  if ((*(uint *)(param_1 + 0xfa) & 0x800) != 0) {
    uVar14 = 0x3cb2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xf6] + 0xf0))(param_1 + 0xf6);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0xfa);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xfb] = 0;
    uVar14 = 0x3fa00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3cb2b8c2;
    }
    *(undefined4 *)(param_1 + 0xfb) = uVar14;
  }
  param_1[0xfe] = 0;
  *(uint *)(param_1 + 0xfa) = uVar3 & 0xfeffffff;
  param_1[0xfd] = (long)"mMoveSpeedMax";
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 8;
  param_1[0xfc] = (long)(puVar1 + 0x10);
  param_1[0x101] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xfc);
  uVar14 = 0x3fe66666;
  if ((*(uint *)(param_1 + 0x100) & 0x800) != 0) {
    uVar14 = 0x3d00adfc;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xfc] + 0xf0))(param_1 + 0xfc);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x100);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x101] = 0;
    uVar14 = 0x3fe66666;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d00adfc;
    }
    *(undefined4 *)(param_1 + 0x101) = uVar14;
  }
  param_1[0x104] = 0;
  *(uint *)(param_1 + 0x100) = uVar3 & 0xfeffffff;
  param_1[0x103] = (long)"mDefaultGravity";
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 8;
  param_1[0x102] = (long)(puVar1 + 0x10);
  param_1[0x107] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x102);
  uVar14 = 0xbe4ccccd;
  if ((*(uint *)(param_1 + 0x106) & 0x800) != 0) {
    uVar14 = 0xbb64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x102] + 0xf0))(param_1 + 0x102);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x106);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x107] = 0;
    uVar14 = 0xbe4ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbb64c388;
    }
    *(undefined4 *)(param_1 + 0x107) = uVar14;
  }
  param_1[0x10a] = 0;
  *(uint *)(param_1 + 0x106) = uVar3 & 0xfeffffff;
  param_1[0x109] = (long)"mSpeedYMin";
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 8;
  param_1[0x108] = (long)(puVar1 + 0x10);
  param_1[0x10d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x108);
  uVar14 = 0xc0066666;
  if ((*(uint *)(param_1 + 0x10c) & 0x800) != 0) {
    uVar14 = 0xbd162051;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x108] + 0xf0))(param_1 + 0x108);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x10c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x10d] = 0;
    uVar14 = 0xc0066666;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbd162051;
    }
    *(undefined4 *)(param_1 + 0x10d) = uVar14;
  }
  param_1[0x110] = 0;
  *(uint *)(param_1 + 0x10c) = uVar3 & 0xfeffffff;
  param_1[0x10f] = (long)"mAngleXChaseStep";
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 8;
  param_1[0x10e] = (long)(puVar1 + 0x10);
  param_1[0x113] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x10e);
  uVar14 = 0x3e99999a;
  if ((*(uint *)(param_1 + 0x112) & 0x800) != 0) {
    uVar14 = 0x3bab92a6;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x10e] + 0xf0))(param_1 + 0x10e);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x112);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x113] = 0;
    uVar14 = 0x3e99999a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3bab92a6;
    }
    *(undefined4 *)(param_1 + 0x113) = uVar14;
  }
  *(undefined4 *)(param_1 + 0x118) = 8;
  *(uint *)(param_1 + 0x112) = uVar3 & 0xfeffffff;
  param_1[0x115] = (long)"mStickSpeedChangeValue";
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x114] = (long)(puVar1 + 0x10);
  param_1[0x119] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x114);
  uVar14 = 0x3e800000;
  if ((*(uint *)(param_1 + 0x118) & 0x800) != 0) {
    uVar14 = 0x3b8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x114] + 0xf0))(param_1 + 0x114);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x118);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x119] = 0;
    uVar14 = 0x3e800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0x119) = uVar14;
  }
  param_1[0x11c] = 0;
  *(uint *)(param_1 + 0x118) = uVar3 & 0xfeffffff;
  param_1[0x11b] = (long)"mWalkRunSpeedChaseStep";
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 8;
  param_1[0x11a] = (long)(puVar1 + 0x10);
  param_1[0x11f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x11a);
  uVar14 = 0x3f408312;
  if ((*(uint *)(param_1 + 0x11e) & 0x800) != 0) {
    uVar14 = 0x3c5709b8;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x11a] + 0xf0))(param_1 + 0x11a);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x11e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x11f] = 0;
    uVar14 = 0x3f408312;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3c5709b8;
    }
    *(undefined4 *)(param_1 + 0x11f) = uVar14;
  }
  *(undefined4 *)(param_1 + 0x124) = 8;
  *(uint *)(param_1 + 0x11e) = uVar3 & 0xfeffffff;
  param_1[0x121] = (long)"mDashSpeedChaseStep";
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x120] = (long)(puVar1 + 0x10);
  param_1[0x125] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x120);
  uVar14 = 0x3fc0a3d7;
  if ((*(uint *)(param_1 + 0x124) & 0x800) != 0) {
    uVar14 = 0x3cd72e52;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x120] + 0xf0))(param_1 + 0x120);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x124);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x125] = 0;
    uVar14 = 0x3fc0a3d7;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3cd72e52;
    }
    *(undefined4 *)(param_1 + 0x125) = uVar14;
  }
  param_1[0x128] = 0;
  *(uint *)(param_1 + 0x124) = uVar3 & 0xfeffffff;
  param_1[0x127] = (long)"mBrakeSpeedChaseStep";
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x12a) = 8;
  param_1[0x126] = (long)(puVar1 + 0x10);
  param_1[299] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x126);
  uVar14 = 0x3f10624e;
  if ((*(uint *)(param_1 + 0x12a) & 0x800) != 0) {
    uVar14 = 0x3c21474a;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x126] + 0xf0))(param_1 + 0x126);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x12a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[299] = 0;
    uVar14 = 0x3f10624e;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3c21474a;
    }
    *(undefined4 *)(param_1 + 299) = uVar14;
  }
  param_1[0x12e] = 0;
  *(uint *)(param_1 + 0x12a) = uVar3 & 0xfeffffff;
  param_1[0x12d] = (long)"mAngleYChaseDegreeStep";
  param_1[0x12f] = 0;
  *(undefined4 *)(param_1 + 0x130) = 8;
  param_1[300] = (long)(puVar1 + 0x10);
  param_1[0x131] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 300);
  uVar14 = 0x41c15c29;
  if ((*(uint *)(param_1 + 0x130) & 0x800) != 0) {
    uVar14 = 0x3ed7fc36;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[300] + 0xf0))(param_1 + 300);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x130);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x131] = 0;
    uVar14 = 0x41c15c29;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3ed7fc36;
    }
    *(undefined4 *)(param_1 + 0x131) = uVar14;
  }
  param_1[0x134] = 0;
  *(uint *)(param_1 + 0x130) = uVar3 & 0xfeffffff;
  param_1[0x133] = (long)"mAngleYChaseDegreeSpeedUpStep";
  param_1[0x135] = 0;
  *(undefined4 *)(param_1 + 0x136) = 8;
  param_1[0x132] = (long)(puVar1 + 0x10);
  param_1[0x137] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x132);
  uVar14 = 0x41c15c29;
  if ((*(uint *)(param_1 + 0x136) & 0x800) != 0) {
    uVar14 = 0x3ed7fc36;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x132] + 0xf0))(param_1 + 0x132);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x136);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x137] = 0;
    uVar14 = 0x41c15c29;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3ed7fc36;
    }
    *(undefined4 *)(param_1 + 0x137) = uVar14;
  }
  param_1[0x13a] = 0;
  *(uint *)(param_1 + 0x136) = uVar3 & 0xfeffffff;
  param_1[0x139] = (long)"mStickSpeedEmbranceDegreeMin";
  param_1[0x13b] = 0;
  *(undefined4 *)(param_1 + 0x13c) = 8;
  param_1[0x138] = (long)(puVar1 + 0x10);
  param_1[0x13d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x138);
  uVar14 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x13c) & 0x800) != 0) {
    uVar14 = 0x3f060a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x138] + 0xf0))(param_1 + 0x138);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x13c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x13d] = 0;
    uVar14 = 0x41f00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x13d) = uVar14;
  }
  param_1[0x140] = 0;
  *(uint *)(param_1 + 0x13c) = uVar3 & 0xfeffffff;
  param_1[0x13f] = (long)"mStickSpeedEmbranceDegreeMax";
  param_1[0x141] = 0;
  *(undefined4 *)(param_1 + 0x142) = 8;
  param_1[0x13e] = (long)(puVar1 + 0x10);
  param_1[0x143] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x13e);
  uVar14 = 0x432a0000;
  if ((*(uint *)(param_1 + 0x142) & 0x800) != 0) {
    uVar14 = 0x403de44e;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x13e] + 0xf0))(param_1 + 0x13e);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x142);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x143] = 0;
    uVar14 = 0x432a0000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x403de44e;
    }
    *(undefined4 *)(param_1 + 0x143) = uVar14;
  }
  *(undefined4 *)(param_1 + 0x148) = 8;
  *(uint *)(param_1 + 0x142) = uVar3 & 0xfeffffff;
  param_1[0x145] = (long)"mStickSpeedEmbranceDegreeMin_RunMax";
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x144] = (long)(puVar1 + 0x10);
  param_1[0x149] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x144);
  uVar14 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x148) & 0x800) != 0) {
    uVar14 = 0x3f060a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x144] + 0xf0))(param_1 + 0x144);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x148);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x149] = 0;
    uVar14 = 0x41f00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x149) = uVar14;
  }
  param_1[0x14c] = 0;
  *(uint *)(param_1 + 0x148) = uVar3 & 0xfeffffff;
  param_1[0x14b] = (long)"mStickSpeedEmbranceDegreeMax_RunMax";
  param_1[0x14d] = 0;
  *(undefined4 *)(param_1 + 0x14e) = 8;
  param_1[0x14a] = (long)(puVar1 + 0x10);
  param_1[0x14f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x14a);
  uVar14 = 0x43340000;
  if ((*(uint *)(param_1 + 0x14e) & 0x800) != 0) {
    uVar14 = 0x40490fdb;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x14a] + 0xf0))(param_1 + 0x14a);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x14e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x14f] = 0;
    uVar14 = 0x43340000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x40490fdb;
    }
    *(undefined4 *)(param_1 + 0x14f) = uVar14;
  }
  *(undefined4 *)(param_1 + 0x154) = 8;
  *(uint *)(param_1 + 0x14e) = uVar3 & 0xfeffffff;
  param_1[0x151] = (long)"mTurnStickSpeedMin";
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x150] = (long)(puVar1 + 0x10);
  param_1[0x155] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x150);
  uVar14 = 0x3c23d70a;
  if ((*(uint *)(param_1 + 0x154) & 0x800) != 0) {
    uVar14 = 0x393702d3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x150] + 0xf0))(param_1 + 0x150);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x154);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x155] = 0;
    uVar14 = 0x3c23d70a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x393702d3;
    }
    *(undefined4 *)(param_1 + 0x155) = uVar14;
  }
  param_1[0x158] = 0;
  *(uint *)(param_1 + 0x154) = uVar3 & 0xfeffffff;
  param_1[0x157] = (long)"mTurnMoveSpeedMin";
  param_1[0x159] = 0;
  *(undefined4 *)(param_1 + 0x15a) = 8;
  param_1[0x156] = (long)(puVar1 + 0x10);
  param_1[0x15b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x156);
  uVar14 = 0x3ecccccd;
  if ((*(uint *)(param_1 + 0x15a) & 0x800) != 0) {
    uVar14 = 0x3be4c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x156] + 0xf0))(param_1 + 0x156);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x15a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x15b] = 0;
    uVar14 = 0x3ecccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3be4c388;
    }
    *(undefined4 *)(param_1 + 0x15b) = uVar14;
  }
  param_1[0x15e] = 0;
  *(uint *)(param_1 + 0x15a) = uVar3 & 0xfeffffff;
  param_1[0x15d] = (long)"mTurnStartDegreeGap";
  param_1[0x15f] = 0;
  *(undefined4 *)(param_1 + 0x160) = 8;
  param_1[0x15c] = (long)(puVar1 + 0x10);
  param_1[0x161] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x15c);
  uVar14 = 0x41b40000;
  if ((*(uint *)(param_1 + 0x160) & 0x800) != 0) {
    uVar14 = 0x3ec90fdb;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x15c] + 0xf0))(param_1 + 0x15c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x160);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x161] = 0;
    uVar14 = 0x41b40000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3ec90fdb;
    }
    *(undefined4 *)(param_1 + 0x161) = uVar14;
  }
  param_1[0x164] = 0;
  *(uint *)(param_1 + 0x160) = uVar3 & 0xfeffffff;
  param_1[0x163] = (long)"mIsTurnSpeedDegreeY";
  param_1[0x165] = 0;
  *(undefined4 *)(param_1 + 0x166) = 8;
  param_1[0x162] = (long)(puVar1 + 0x10);
  param_1[0x167] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x162);
  uVar14 = 0x41200000;
  if ((*(uint *)(param_1 + 0x166) & 0x800) != 0) {
    uVar14 = 0x3e32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x162] + 0xf0))(param_1 + 0x162);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x166);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x167] = 0;
    uVar14 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x167) = uVar14;
  }
  param_1[0x16a] = 0;
  *(uint *)(param_1 + 0x166) = uVar3 & 0xfeffffff;
  param_1[0x169] = (long)"mTurnStartDegreeGap_Prog";
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 8;
  param_1[0x168] = (long)(puVar1 + 0x10);
  param_1[0x16d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x168);
  uVar14 = 0x42700000;
  if ((*(uint *)(param_1 + 0x16c) & 0x800) != 0) {
    uVar14 = 0x3f860a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x168] + 0xf0))(param_1 + 0x168);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x16c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x16d] = 0;
    uVar14 = 0x42700000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3f860a92;
    }
    *(undefined4 *)(param_1 + 0x16d) = uVar14;
  }
  param_1[0x170] = 0;
  *(uint *)(param_1 + 0x16c) = uVar3 & 0xfeffffff;
  param_1[0x16f] = (long)"mPickupFlowerForceOffsetY";
  param_1[0x171] = 0;
  *(undefined4 *)(param_1 + 0x172) = 8;
  param_1[0x16e] = (long)(puVar1 + 0x10);
  param_1[0x173] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x16e);
  uVar14 = 0x40a66666;
  if ((*(uint *)(param_1 + 0x172) & 0x800) != 0) {
    uVar14 = 0x3db9dede;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x16e] + 0xf0))(param_1 + 0x16e);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x172);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x173] = 0;
    uVar14 = 0x40a66666;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3db9dede;
    }
    *(undefined4 *)(param_1 + 0x173) = uVar14;
  }
  param_1[0x176] = 0;
  *(uint *)(param_1 + 0x172) = uVar3 & 0xfeffffff;
  param_1[0x175] = (long)"mPickupTargetOffset";
  param_1[0x177] = 0;
  *(undefined4 *)(param_1 + 0x178) = 8;
  param_1[0x174] = (long)(puVar1 + 0x10);
  param_1[0x179] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x174);
  uVar14 = 0xc04ccccd;
  if ((*(uint *)(param_1 + 0x178) & 0x800) != 0) {
    uVar14 = 0xbd64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x174] + 0xf0))(param_1 + 0x174);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x178);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x179] = 0;
    uVar14 = 0xc04ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbd64c388;
    }
    *(undefined4 *)(param_1 + 0x179) = uVar14;
  }
  param_1[0x17c] = 0;
  *(uint *)(param_1 + 0x178) = uVar3 & 0xfeffffff;
  param_1[0x17b] = (long)"mPickupTargetOffsetZ";
  param_1[0x17d] = 0;
  *(undefined4 *)(param_1 + 0x17e) = 8;
  param_1[0x17a] = (long)(puVar1 + 0x10);
  param_1[0x17f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x17a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x17a] + 0xf0))(param_1 + 0x17a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x17e) >> 7 & 1) == 0) {
    param_1[0x17f] = 0;
    *(undefined4 *)(param_1 + 0x17f) = 0;
  }
  *(undefined4 *)(param_1 + 0x184) = 8;
  *(uint *)(param_1 + 0x17e) = *(uint *)(param_1 + 0x17e) & 0xfeffffff;
  param_1[0x181] = (long)"mPickupGetDemoOffsetX";
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x180] = (long)(puVar1 + 0x10);
  param_1[0x185] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x180);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x180] + 0xf0))(param_1 + 0x180);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x184) >> 7 & 1) == 0) {
    param_1[0x185] = 0;
    *(undefined4 *)(param_1 + 0x185) = 0;
  }
  param_1[0x188] = 0;
  *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x184) & 0xfeffffff;
  param_1[0x187] = (long)"mPickupGetDemoOffsetY";
  param_1[0x189] = 0;
  *(undefined4 *)(param_1 + 0x18a) = 8;
  param_1[0x186] = (long)(puVar1 + 0x10);
  param_1[0x18b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x186);
  uVar14 = 0xbf800000;
  if ((*(uint *)(param_1 + 0x18a) & 0x800) != 0) {
    uVar14 = 0xbc8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x186] + 0xf0))(param_1 + 0x186);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x18a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x18b] = 0;
    uVar14 = 0xbf800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbc8efa35;
    }
    *(undefined4 *)(param_1 + 0x18b) = uVar14;
  }
  param_1[0x18e] = 0;
  *(uint *)(param_1 + 0x18a) = uVar3 & 0xfeffffff;
  param_1[0x18d] = (long)"mPickupGetDemoOffsetZ";
  param_1[399] = 0;
  *(undefined4 *)(param_1 + 400) = 8;
  param_1[0x18c] = (long)(puVar1 + 0x10);
  param_1[0x191] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x18c);
  uVar14 = 0x3fc00000;
  if ((*(uint *)(param_1 + 400) & 0x800) != 0) {
    uVar14 = 0x3cd67750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x18c] + 0xf0))(param_1 + 0x18c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 400);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x191] = 0;
    uVar14 = 0x3fc00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3cd67750;
    }
    *(undefined4 *)(param_1 + 0x191) = uVar14;
  }
  param_1[0x194] = 0;
  *(uint *)(param_1 + 400) = uVar3 & 0xfeffffff;
  param_1[0x193] = (long)"mPickupTurnAddCalcRate";
  param_1[0x195] = 0;
  *(undefined4 *)(param_1 + 0x196) = 8;
  param_1[0x192] = (long)(puVar1 + 0x10);
  param_1[0x197] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x192);
  uVar14 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x196) & 0x800) != 0) {
    uVar14 = 0x3c0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x192] + 0xf0))(param_1 + 0x192);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x196);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x197] = 0;
    uVar14 = 0x3f000000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x197) = uVar14;
  }
  param_1[0x19a] = 0;
  *(uint *)(param_1 + 0x196) = uVar3 & 0xfeffffff;
  param_1[0x199] = (long)"mScoopChaseTimer";
  param_1[0x19b] = 0;
  *(undefined4 *)(param_1 + 0x19c) = 8;
  param_1[0x198] = (long)(puVar2 + 0x10);
  param_1[0x19d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x198);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x198] + 0xf0))(param_1 + 0x198);
  *puVar5 = 8;
  if ((*(uint *)(param_1 + 0x19c) >> 7 & 1) == 0) {
    param_1[0x19d] = 0;
    *(undefined4 *)(param_1 + 0x19d) = 8;
  }
  param_1[0x1a0] = 0;
  *(uint *)(param_1 + 0x19c) = *(uint *)(param_1 + 0x19c) & 0xfeffffff;
  param_1[0x19f] = (long)"mScoopTopOffsetX";
  param_1[0x1a1] = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 8;
  param_1[0x19e] = (long)(puVar1 + 0x10);
  param_1[0x1a3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x19e);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x19e] + 0xf0))(param_1 + 0x19e);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x1a2) >> 7 & 1) == 0) {
    param_1[0x1a3] = 0;
    *(undefined4 *)(param_1 + 0x1a3) = 0;
  }
  param_1[0x1a6] = 0;
  *(uint *)(param_1 + 0x1a2) = *(uint *)(param_1 + 0x1a2) & 0xfeffffff;
  param_1[0x1a5] = (long)"mScoopTopOffsetY";
  param_1[0x1a7] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 8;
  param_1[0x1a4] = (long)(puVar1 + 0x10);
  param_1[0x1a9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1a4);
  uVar14 = 0xc0b66666;
  if ((*(uint *)(param_1 + 0x1a8) & 0x800) != 0) {
    uVar14 = 0xbdcbbe25;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1a4] + 0xf0))(param_1 + 0x1a4);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1a8);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1a9] = 0;
    uVar14 = 0xc0b66666;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbdcbbe25;
    }
    *(undefined4 *)(param_1 + 0x1a9) = uVar14;
  }
  param_1[0x1ac] = 0;
  *(uint *)(param_1 + 0x1a8) = uVar3 & 0xfeffffff;
  param_1[0x1ab] = (long)"mScoopTopOffsetZ";
  param_1[0x1ad] = 0;
  *(undefined4 *)(param_1 + 0x1ae) = 8;
  param_1[0x1aa] = (long)(puVar1 + 0x10);
  param_1[0x1af] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1aa);
  uVar14 = 0xbf400000;
  if ((*(uint *)(param_1 + 0x1ae) & 0x800) != 0) {
    uVar14 = 0xbc567750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1aa] + 0xf0))(param_1 + 0x1aa);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1ae);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1af] = 0;
    uVar14 = 0xbf400000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbc567750;
    }
    *(undefined4 *)(param_1 + 0x1af) = uVar14;
  }
  param_1[0x1b2] = 0;
  *(uint *)(param_1 + 0x1ae) = uVar3 & 0xfeffffff;
  param_1[0x1b1] = (long)"mScoopDigBushScale";
  param_1[0x1b3] = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 8;
  param_1[0x1b0] = (long)(puVar1 + 0x10);
  param_1[0x1b5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1b0);
  uVar14 = 0x3e800000;
  if ((*(uint *)(param_1 + 0x1b4) & 0x800) != 0) {
    uVar14 = 0x3b8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1b0] + 0xf0))(param_1 + 0x1b0);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1b4);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1b5] = 0;
    uVar14 = 0x3e800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0x1b5) = uVar14;
  }
  param_1[0x1b8] = 0;
  *(uint *)(param_1 + 0x1b4) = uVar3 & 0xfeffffff;
  param_1[0x1b7] = (long)"mJumpValleyAnimRate";
  param_1[0x1b9] = 0;
  *(undefined4 *)(param_1 + 0x1ba) = 8;
  param_1[0x1b6] = (long)(puVar1 + 0x10);
  param_1[0x1bb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1b6);
  uVar14 = 0x3fc00000;
  if ((*(uint *)(param_1 + 0x1ba) & 0x800) != 0) {
    uVar14 = 0x3cd67750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1b6] + 0xf0))(param_1 + 0x1b6);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1ba);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1bb] = 0;
    uVar14 = 0x3fc00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3cd67750;
    }
    *(undefined4 *)(param_1 + 0x1bb) = uVar14;
  }
  param_1[0x1be] = 0;
  *(uint *)(param_1 + 0x1ba) = uVar3 & 0xfeffffff;
  param_1[0x1bd] = (long)"mJumpValleyMaxDist_Water";
  param_1[0x1bf] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 8;
  param_1[0x1bc] = (long)(puVar1 + 0x10);
  param_1[0x1c1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1bc);
  uVar14 = 0x420c0000;
  if ((*(uint *)(param_1 + 0x1c0) & 0x800) != 0) {
    uVar14 = 0x3f1c61aa;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1bc] + 0xf0))(param_1 + 0x1bc);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1c0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1c1] = 0;
    uVar14 = 0x420c0000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3f1c61aa;
    }
    *(undefined4 *)(param_1 + 0x1c1) = uVar14;
  }
  param_1[0x1c4] = 0;
  *(uint *)(param_1 + 0x1c0) = uVar3 & 0xfeffffff;
  param_1[0x1c3] = (long)"mJumpValleyMaxDist_Cliff";
  param_1[0x1c5] = 0;
  *(undefined4 *)(param_1 + 0x1c6) = 8;
  param_1[0x1c2] = (long)(puVar1 + 0x10);
  param_1[0x1c7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1c2);
  uVar14 = 0x41a40000;
  if ((*(uint *)(param_1 + 0x1c6) & 0x800) != 0) {
    uVar14 = 0x3eb73094;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1c2] + 0xf0))(param_1 + 0x1c2);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1c6);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1c7] = 0;
    uVar14 = 0x41a40000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3eb73094;
    }
    *(undefined4 *)(param_1 + 0x1c7) = uVar14;
  }
  param_1[0x1ca] = 0;
  *(uint *)(param_1 + 0x1c6) = uVar3 & 0xfeffffff;
  param_1[0x1c9] = (long)"mJumpValleyMaxDist_Hole";
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 8;
  param_1[0x1c8] = (long)(puVar1 + 0x10);
  param_1[0x1cd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1c8);
  uVar14 = 0x41a40000;
  if ((*(uint *)(param_1 + 0x1cc) & 0x800) != 0) {
    uVar14 = 0x3eb73094;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1c8] + 0xf0))(param_1 + 0x1c8);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1cc);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1cd] = 0;
    uVar14 = 0x41a40000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3eb73094;
    }
    *(undefined4 *)(param_1 + 0x1cd) = uVar14;
  }
  param_1[0x1d0] = 0;
  *(uint *)(param_1 + 0x1cc) = uVar3 & 0xfeffffff;
  param_1[0x1cf] = (long)"mJumpValleyJudgeGapDegree";
  param_1[0x1d1] = 0;
  *(undefined4 *)(param_1 + 0x1d2) = 8;
  param_1[0x1ce] = (long)(puVar1 + 0x10);
  param_1[0x1d3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ce);
  uVar14 = 0x41b3eb85;
  if ((*(uint *)(param_1 + 0x1d2) & 0x800) != 0) {
    uVar14 = 0x3ec8f8fa;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1ce] + 0xf0))(param_1 + 0x1ce);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1d2);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1d3] = 0;
    uVar14 = 0x41b3eb85;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3ec8f8fa;
    }
    *(undefined4 *)(param_1 + 0x1d3) = uVar14;
  }
  param_1[0x1d6] = 0;
  *(uint *)(param_1 + 0x1d2) = uVar3 & 0xfeffffff;
  param_1[0x1d5] = (long)"mJumpValleyShapeSpeedDegreeMax";
  param_1[0x1d7] = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 8;
  param_1[0x1d4] = (long)(puVar1 + 0x10);
  param_1[0x1d9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1d4);
  uVar14 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x1d8) & 0x800) != 0) {
    uVar14 = 0x3db2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1d4] + 0xf0))(param_1 + 0x1d4);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1d8);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1d9] = 0;
    uVar14 = 0x40a00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x1d9) = uVar14;
  }
  *(uint *)(param_1 + 0x1d8) = uVar3 & 0xfeffffff;
  param_1[0x1db] = (long)"mJumpValleyJudgeTimer";
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  *(undefined4 *)(param_1 + 0x1de) = 8;
  param_1[0x1da] = (long)(puVar2 + 0x10);
  param_1[0x1df] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1da);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1da] + 0xf0))(param_1 + 0x1da);
  *puVar5 = 0x1e;
  if ((*(uint *)(param_1 + 0x1de) >> 7 & 1) == 0) {
    param_1[0x1df] = 0;
    *(undefined4 *)(param_1 + 0x1df) = 0x1e;
  }
  *(undefined4 *)(param_1 + 0x1e4) = 8;
  *(uint *)(param_1 + 0x1de) = *(uint *)(param_1 + 0x1de) & 0xfeffffff;
  param_1[0x1e1] = (long)"mShowIconOffsetX";
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e0] = (long)(puVar1 + 0x10);
  param_1[0x1e5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1e0);
  uVar14 = 0x3e800000;
  if ((*(uint *)(param_1 + 0x1e4) & 0x800) != 0) {
    uVar14 = 0x3b8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1e0] + 0xf0))(param_1 + 0x1e0);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1e4);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1e5] = 0;
    uVar14 = 0x3e800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0x1e5) = uVar14;
  }
  param_1[0x1e8] = 0;
  *(uint *)(param_1 + 0x1e4) = uVar3 & 0xfeffffff;
  param_1[0x1e7] = (long)"mShowIconOffsetY";
  param_1[0x1e9] = 0;
  *(undefined4 *)(param_1 + 0x1ea) = 8;
  param_1[0x1e6] = (long)(puVar1 + 0x10);
  param_1[0x1eb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1e6);
  uVar14 = 0xbf800000;
  if ((*(uint *)(param_1 + 0x1ea) & 0x800) != 0) {
    uVar14 = 0xbc8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1e6] + 0xf0))(param_1 + 0x1e6);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1ea);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1eb] = 0;
    uVar14 = 0xbf800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbc8efa35;
    }
    *(undefined4 *)(param_1 + 0x1eb) = uVar14;
  }
  param_1[0x1ee] = 0;
  *(uint *)(param_1 + 0x1ea) = uVar3 & 0xfeffffff;
  param_1[0x1ed] = (long)"mShowIconOffsetZ";
  param_1[0x1ef] = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 8;
  param_1[0x1ec] = (long)(puVar1 + 0x10);
  param_1[0x1f1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ec);
  uVar14 = 0x3fc00000;
  if ((*(uint *)(param_1 + 0x1f0) & 0x800) != 0) {
    uVar14 = 0x3cd67750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1ec] + 0xf0))(param_1 + 0x1ec);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x1f0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1f1] = 0;
    uVar14 = 0x3fc00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3cd67750;
    }
    *(undefined4 *)(param_1 + 0x1f1) = uVar14;
  }
  param_1[500] = 0;
  *(uint *)(param_1 + 0x1f0) = uVar3 & 0xfeffffff;
  param_1[499] = (long)"mShowDIYRecipeDegreeX";
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1f6) = 8;
  param_1[0x1f2] = (long)(puVar1 + 0x10);
  param_1[0x1f7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1f2);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1f2] + 0xf0))(param_1 + 0x1f2);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x1f6) >> 7 & 1) == 0) {
    param_1[0x1f7] = 0;
    *(undefined4 *)(param_1 + 0x1f7) = 0;
  }
  param_1[0x1fa] = 0;
  *(uint *)(param_1 + 0x1f6) = *(uint *)(param_1 + 0x1f6) & 0xfeffffff;
  param_1[0x1f9] = (long)"mShowDIYRecipeDegreeY";
  param_1[0x1fb] = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 8;
  param_1[0x1f8] = (long)(puVar1 + 0x10);
  param_1[0x1fd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1f8);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1f8] + 0xf0))(param_1 + 0x1f8);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x1fc) >> 7 & 1) == 0) {
    param_1[0x1fd] = 0;
    *(undefined4 *)(param_1 + 0x1fd) = 0;
  }
  param_1[0x200] = 0;
  *(uint *)(param_1 + 0x1fc) = *(uint *)(param_1 + 0x1fc) & 0xfeffffff;
  param_1[0x1ff] = (long)"mShowDIYRecipeDegreeZ";
  param_1[0x201] = 0;
  *(undefined4 *)(param_1 + 0x202) = 8;
  param_1[0x1fe] = (long)(puVar1 + 0x10);
  param_1[0x203] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1fe);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x1fe] + 0xf0))(param_1 + 0x1fe);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x202) >> 7 & 1) == 0) {
    param_1[0x203] = 0;
    *(undefined4 *)(param_1 + 0x203) = 0;
  }
  param_1[0x206] = 0;
  *(uint *)(param_1 + 0x202) = *(uint *)(param_1 + 0x202) & 0xfeffffff;
  param_1[0x205] = (long)"mShowDIYRecipeTransX";
  param_1[0x207] = 0;
  *(undefined4 *)(param_1 + 0x208) = 8;
  param_1[0x204] = (long)(puVar1 + 0x10);
  param_1[0x209] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x204);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x204] + 0xf0))(param_1 + 0x204);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x208) >> 7 & 1) == 0) {
    param_1[0x209] = 0;
    *(undefined4 *)(param_1 + 0x209) = 0;
  }
  param_1[0x20c] = 0;
  *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x208) & 0xfeffffff;
  param_1[0x20d] = 0;
  param_1[0x20b] = (long)"mShowDIYRecipeTransY";
  *(undefined4 *)(param_1 + 0x20e) = 8;
  param_1[0x20a] = (long)(puVar1 + 0x10);
  param_1[0x20f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x20a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x20a] + 0xf0))(param_1 + 0x20a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x20e) >> 7 & 1) == 0) {
    param_1[0x20f] = 0;
    *(undefined4 *)(param_1 + 0x20f) = 0;
  }
  param_1[0x212] = 0;
  *(uint *)(param_1 + 0x20e) = *(uint *)(param_1 + 0x20e) & 0xfeffffff;
  param_1[0x211] = (long)"mShowDIYRecipeTransZ";
  param_1[0x213] = 0;
  *(undefined4 *)(param_1 + 0x214) = 8;
  param_1[0x210] = (long)(puVar1 + 0x10);
  param_1[0x215] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x210);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x210] + 0xf0))(param_1 + 0x210);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x214) >> 7 & 1) == 0) {
    param_1[0x215] = 0;
    *(undefined4 *)(param_1 + 0x215) = 0;
  }
  param_1[0x218] = 0;
  *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) & 0xfeffffff;
  param_1[0x219] = 0;
  param_1[0x217] = (long)"mWateringActionLocalOffsetX";
  *(undefined4 *)(param_1 + 0x21a) = 8;
  param_1[0x216] = (long)(puVar1 + 0x10);
  param_1[0x21b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x216);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x216] + 0xf0))(param_1 + 0x216);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x21a) >> 7 & 1) == 0) {
    param_1[0x21b] = 0;
    *(undefined4 *)(param_1 + 0x21b) = 0;
  }
  param_1[0x21e] = 0;
  *(uint *)(param_1 + 0x21a) = *(uint *)(param_1 + 0x21a) & 0xfeffffff;
  param_1[0x21d] = (long)"mWateringActionLocalOffsetZ";
  param_1[0x21f] = 0;
  *(undefined4 *)(param_1 + 0x220) = 8;
  param_1[0x21c] = (long)(puVar1 + 0x10);
  param_1[0x221] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x21c);
  uVar14 = 0x41300000;
  if ((*(uint *)(param_1 + 0x220) & 0x800) != 0) {
    uVar14 = 0x3e449809;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x21c] + 0xf0))(param_1 + 0x21c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x220);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x221] = 0;
    uVar14 = 0x41300000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e449809;
    }
    *(undefined4 *)(param_1 + 0x221) = uVar14;
  }
  param_1[0x224] = 0;
  *(uint *)(param_1 + 0x220) = uVar3 & 0xfeffffff;
  param_1[0x225] = 0;
  param_1[0x223] = (long)"mWateringTopOffsetX";
  *(undefined4 *)(param_1 + 0x226) = 8;
  param_1[0x222] = (long)(puVar1 + 0x10);
  param_1[0x227] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x222);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x222] + 0xf0))(param_1 + 0x222);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x226) >> 7 & 1) == 0) {
    param_1[0x227] = 0;
    *(undefined4 *)(param_1 + 0x227) = 0;
  }
  param_1[0x22a] = 0;
  *(uint *)(param_1 + 0x226) = *(uint *)(param_1 + 0x226) & 0xfeffffff;
  param_1[0x229] = (long)"mWateringTopOffsetY";
  param_1[0x22b] = 0;
  *(undefined4 *)(param_1 + 0x22c) = 8;
  param_1[0x228] = (long)(puVar1 + 0x10);
  param_1[0x22d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x228);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x228] + 0xf0))(param_1 + 0x228);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x22c) >> 7 & 1) == 0) {
    param_1[0x22d] = 0;
    *(undefined4 *)(param_1 + 0x22d) = 0;
  }
  param_1[0x230] = 0;
  *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xfeffffff;
  param_1[0x231] = 0;
  param_1[0x22f] = (long)"mWateringTopOffsetZ";
  *(undefined4 *)(param_1 + 0x232) = 8;
  param_1[0x22e] = (long)(puVar1 + 0x10);
  param_1[0x233] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x22e);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x22e] + 0xf0))(param_1 + 0x22e);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x232) >> 7 & 1) == 0) {
    param_1[0x233] = 0;
    *(undefined4 *)(param_1 + 0x233) = 0;
  }
  param_1[0x236] = 0;
  *(uint *)(param_1 + 0x232) = *(uint *)(param_1 + 0x232) & 0xfeffffff;
  param_1[0x235] = (long)"mWateringUpperLevelOffsetZ";
  param_1[0x237] = 0;
  *(undefined4 *)(param_1 + 0x238) = 8;
  param_1[0x234] = (long)(puVar1 + 0x10);
  param_1[0x239] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x234);
  uVar14 = 0x41700000;
  if ((*(uint *)(param_1 + 0x238) & 0x800) != 0) {
    uVar14 = 0x3e860a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x234] + 0xf0))(param_1 + 0x234);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x238);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x239] = 0;
    uVar14 = 0x41700000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0x239) = uVar14;
  }
  param_1[0x23c] = 0;
  *(uint *)(param_1 + 0x238) = uVar3 & 0xfeffffff;
  param_1[0x23d] = 0;
  param_1[0x23b] = (long)"mWateringUpperLevelOffsetDegY";
  *(undefined4 *)(param_1 + 0x23e) = 8;
  param_1[0x23a] = (long)(puVar1 + 0x10);
  param_1[0x23f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x23a);
  uVar14 = 0x41700000;
  if ((*(uint *)(param_1 + 0x23e) & 0x800) != 0) {
    uVar14 = 0x3e860a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x23a] + 0xf0))(param_1 + 0x23a);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x23e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x23f] = 0;
    uVar14 = 0x41700000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0x23f) = uVar14;
  }
  param_1[0x242] = 0;
  *(uint *)(param_1 + 0x23e) = uVar3 & 0xfeffffff;
  param_1[0x241] = (long)"mLongStickJumpGravity";
  param_1[0x243] = 0;
  *(undefined4 *)(param_1 + 0x244) = 8;
  param_1[0x240] = (long)(puVar1 + 0x10);
  param_1[0x245] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x240);
  uVar14 = 0xbe4ccccd;
  if ((*(uint *)(param_1 + 0x244) & 0x800) != 0) {
    uVar14 = 0xbb64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x240] + 0xf0))(param_1 + 0x240);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x244);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x245] = 0;
    uVar14 = 0xbe4ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbb64c388;
    }
    *(undefined4 *)(param_1 + 0x245) = uVar14;
  }
  param_1[0x248] = 0;
  *(uint *)(param_1 + 0x244) = uVar3 & 0xfeffffff;
  param_1[0x249] = 0;
  param_1[0x247] = (long)"mLongStickCameraOffsetZ";
  *(undefined4 *)(param_1 + 0x24a) = 8;
  param_1[0x246] = (long)(puVar1 + 0x10);
  param_1[0x24b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x246);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x246] + 0xf0))(param_1 + 0x246);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x24a) >> 7 & 1) == 0) {
    param_1[0x24b] = 0;
    *(undefined4 *)(param_1 + 0x24b) = 0;
  }
  param_1[0x24e] = 0;
  *(uint *)(param_1 + 0x24a) = *(uint *)(param_1 + 0x24a) & 0xfeffffff;
  param_1[0x24d] = (long)"mToolBreakLookWaitTimer";
  param_1[0x24f] = 0;
  *(undefined4 *)(param_1 + 0x250) = 8;
  param_1[0x24c] = (long)(puVar2 + 0x10);
  param_1[0x251] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24c);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x24c] + 0xf0))(param_1 + 0x24c);
  *puVar5 = 6;
  if ((*(uint *)(param_1 + 0x250) >> 7 & 1) == 0) {
    param_1[0x251] = 0;
    *(undefined4 *)(param_1 + 0x251) = 6;
  }
  param_1[0x254] = 0;
  *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) & 0xfeffffff;
  param_1[0x255] = 0;
  param_1[0x253] = (long)"mToolBreakStartWaitTimer";
  *(undefined4 *)(param_1 + 0x256) = 8;
  param_1[0x252] = (long)(puVar2 + 0x10);
  param_1[599] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x252);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x252] + 0xf0))(param_1 + 0x252);
  *puVar5 = 0x28;
  if ((*(uint *)(param_1 + 0x256) >> 7 & 1) == 0) {
    param_1[599] = 0;
    *(undefined4 *)(param_1 + 599) = 0x28;
  }
  param_1[0x25a] = 0;
  *(uint *)(param_1 + 0x256) = *(uint *)(param_1 + 0x256) & 0xfeffffff;
  param_1[0x259] = (long)"mPassOverTimer";
  param_1[0x25b] = 0;
  *(undefined4 *)(param_1 + 0x25c) = 8;
  param_1[600] = (long)(puVar2 + 0x10);
  param_1[0x25d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 600);
  puVar5 = (undefined4 *)(**(code **)(param_1[600] + 0xf0))(param_1 + 600);
  *puVar5 = 0x20;
  if ((*(uint *)(param_1 + 0x25c) >> 7 & 1) == 0) {
    param_1[0x25d] = 0;
    *(undefined4 *)(param_1 + 0x25d) = 0x20;
  }
  param_1[0x260] = 0;
  *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfeffffff;
  param_1[0x25f] = (long)"mPassOverTrunRate";
  param_1[0x261] = 0;
  *(undefined4 *)(param_1 + 0x262) = 8;
  param_1[0x25e] = (long)(puVar1 + 0x10);
  param_1[0x263] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25e);
  uVar14 = 0x3e23d70a;
  if ((*(uint *)(param_1 + 0x262) & 0x800) != 0) {
    uVar14 = 0x3b3702d3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x25e] + 0xf0))(param_1 + 0x25e);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x262);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x263] = 0;
    uVar14 = 0x3e23d70a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b3702d3;
    }
    *(undefined4 *)(param_1 + 0x263) = uVar14;
  }
  *(uint *)(param_1 + 0x262) = uVar3 & 0xfeffffff;
  param_1[0x265] = (long)"mFittingRoomGoInOffsetZ";
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  *(undefined4 *)(param_1 + 0x268) = 8;
  param_1[0x264] = (long)(puVar1 + 0x10);
  param_1[0x269] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x264);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x264] + 0xf0))(param_1 + 0x264);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x268) >> 7 & 1) == 0) {
    param_1[0x269] = 0;
    *(undefined4 *)(param_1 + 0x269) = 0;
  }
  param_1[0x26c] = 0;
  *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfeffffff;
  param_1[0x26b] = (long)"mFittingRoomGoOutOffsetZ";
  param_1[0x26d] = 0;
  *(undefined4 *)(param_1 + 0x26e) = 8;
  param_1[0x26a] = (long)(puVar1 + 0x10);
  param_1[0x26f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x26a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x26a] + 0xf0))(param_1 + 0x26a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x26e) >> 7 & 1) == 0) {
    param_1[0x26f] = 0;
    *(undefined4 *)(param_1 + 0x26f) = 0;
  }
  *(uint *)(param_1 + 0x26e) = *(uint *)(param_1 + 0x26e) & 0xfeffffff;
  param_1[0x271] = (long)"mAddCalcPosRate";
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  *(undefined4 *)(param_1 + 0x274) = 8;
  param_1[0x270] = (long)(puVar1 + 0x10);
  param_1[0x275] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x270);
  uVar14 = 0x3e6b851f;
  if ((*(uint *)(param_1 + 0x274) & 0x800) != 0) {
    uVar14 = 0x3b838a08;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x270] + 0xf0))(param_1 + 0x270);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x274);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x275] = 0;
    uVar14 = 0x3e6b851f;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b838a08;
    }
    *(undefined4 *)(param_1 + 0x275) = uVar14;
  }
  param_1[0x278] = 0;
  *(uint *)(param_1 + 0x274) = uVar3 & 0xfeffffff;
  param_1[0x277] = (long)"mAddCalcAngleRate";
  param_1[0x279] = 0;
  *(undefined4 *)(param_1 + 0x27a) = 8;
  param_1[0x276] = (long)(puVar1 + 0x10);
  param_1[0x27b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x276);
  uVar14 = 0x3e2e147b;
  if ((*(uint *)(param_1 + 0x27a) & 0x800) != 0) {
    uVar14 = 0x3b427301;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x276] + 0xf0))(param_1 + 0x276);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x27a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x27b] = 0;
    uVar14 = 0x3e2e147b;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b427301;
    }
    *(undefined4 *)(param_1 + 0x27b) = uVar14;
  }
  *(uint *)(param_1 + 0x27a) = uVar3 & 0xfeffffff;
  param_1[0x27d] = (long)"mAddCalcAngleRate_ShowTurn";
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  *(undefined4 *)(param_1 + 0x280) = 8;
  param_1[0x27c] = (long)(puVar1 + 0x10);
  param_1[0x281] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x27c);
  uVar14 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0x280) & 0x800) != 0) {
    uVar14 = 0x3b64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x27c] + 0xf0))(param_1 + 0x27c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x280);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x281] = 0;
    uVar14 = 0x3e4ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0x281) = uVar14;
  }
  param_1[0x284] = 0;
  *(uint *)(param_1 + 0x280) = uVar3 & 0xfeffffff;
  param_1[0x283] = (long)"mAddCalcPosRate_Door";
  param_1[0x285] = 0;
  *(undefined4 *)(param_1 + 0x286) = 8;
  param_1[0x282] = (long)(puVar1 + 0x10);
  param_1[0x287] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x282);
  uVar14 = 0x3e6b851f;
  if ((*(uint *)(param_1 + 0x286) & 0x800) != 0) {
    uVar14 = 0x3b838a08;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x282] + 0xf0))(param_1 + 0x282);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x286);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x287] = 0;
    uVar14 = 0x3e6b851f;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b838a08;
    }
    *(undefined4 *)(param_1 + 0x287) = uVar14;
  }
  *(uint *)(param_1 + 0x286) = uVar3 & 0xfeffffff;
  param_1[0x289] = (long)"mAddCalcPosRate_ChestOperate";
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  *(undefined4 *)(param_1 + 0x28c) = 8;
  param_1[0x288] = (long)(puVar1 + 0x10);
  param_1[0x28d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x288);
  uVar14 = 0x3e19999a;
  if ((*(uint *)(param_1 + 0x28c) & 0x800) != 0) {
    uVar14 = 0x3b2b92a6;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x288] + 0xf0))(param_1 + 0x288);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x28c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x28d] = 0;
    uVar14 = 0x3e19999a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b2b92a6;
    }
    *(undefined4 *)(param_1 + 0x28d) = uVar14;
  }
  param_1[0x290] = 0;
  *(uint *)(param_1 + 0x28c) = uVar3 & 0xfeffffff;
  param_1[0x28f] = (long)"mBreathTimer";
  param_1[0x291] = 0;
  *(undefined4 *)(param_1 + 0x292) = 8;
  param_1[0x28e] = (long)(puVar2 + 0x10);
  param_1[0x293] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x28e);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x28e] + 0xf0))(param_1 + 0x28e);
  *puVar5 = 0xd2;
  if ((*(uint *)(param_1 + 0x292) >> 7 & 1) == 0) {
    param_1[0x293] = 0;
    *(undefined4 *)(param_1 + 0x293) = 0xd2;
  }
  *(uint *)(param_1 + 0x292) = *(uint *)(param_1 + 0x292) & 0xfeffffff;
  param_1[0x295] = (long)"mBreathEndTimer";
  param_1[0x296] = 0;
  param_1[0x297] = 0;
  *(undefined4 *)(param_1 + 0x298) = 8;
  param_1[0x294] = (long)(puVar2 + 0x10);
  param_1[0x299] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x294);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x294] + 0xf0))(param_1 + 0x294);
  *puVar5 = 0x3c;
  if ((*(uint *)(param_1 + 0x298) >> 7 & 1) == 0) {
    param_1[0x299] = 0;
    *(undefined4 *)(param_1 + 0x299) = 0x3c;
  }
  param_1[0x29c] = 0;
  *(uint *)(param_1 + 0x298) = *(uint *)(param_1 + 0x298) & 0xfeffffff;
  param_1[0x29b] = (long)"mDiveCameraStartFrame";
  param_1[0x29d] = 0;
  *(undefined4 *)(param_1 + 0x29e) = 8;
  param_1[0x29a] = (long)(puVar2 + 0x10);
  param_1[0x29f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x29a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x29a] + 0xf0))(param_1 + 0x29a);
  *puVar5 = 1;
  if ((*(uint *)(param_1 + 0x29e) >> 7 & 1) == 0) {
    param_1[0x29f] = 0;
    *(undefined4 *)(param_1 + 0x29f) = 1;
  }
  *(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) & 0xfeffffff;
  param_1[0x2a1] = (long)"mDiveCameraEndFrame";
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 8;
  param_1[0x2a0] = (long)(puVar2 + 0x10);
  param_1[0x2a5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a0);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2a0] + 0xf0))(param_1 + 0x2a0);
  *puVar5 = 1;
  if ((*(uint *)(param_1 + 0x2a4) >> 7 & 1) == 0) {
    param_1[0x2a5] = 0;
    *(undefined4 *)(param_1 + 0x2a5) = 1;
  }
  *(uint *)(param_1 + 0x2a4) = *(uint *)(param_1 + 0x2a4) & 0xfeffffff;
  param_1[0x2a8] = 0;
  param_1[0x2a7] = (long)"mDiveActionUseBreathTimer";
  param_1[0x2a9] = 0;
  *(undefined4 *)(param_1 + 0x2aa) = 8;
  param_1[0x2a6] = (long)(puVar2 + 0x10);
  param_1[0x2ab] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a6);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2a6] + 0xf0))(param_1 + 0x2a6);
  *puVar5 = 3;
  if ((*(uint *)(param_1 + 0x2aa) >> 7 & 1) == 0) {
    param_1[0x2ab] = 0;
    *(undefined4 *)(param_1 + 0x2ab) = 3;
  }
  *(undefined4 *)(param_1 + 0x2b0) = 8;
  *(uint *)(param_1 + 0x2aa) = *(uint *)(param_1 + 0x2aa) & 0xfeffffff;
  param_1[0x2ad] = (long)"mSeaSwimWaitOffset";
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2ac] = (long)(puVar1 + 0x10);
  param_1[0x2b1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ac);
  uVar14 = 0xc1200000;
  if ((*(uint *)(param_1 + 0x2b0) & 0x800) != 0) {
    uVar14 = 0xbe32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2ac] + 0xf0))(param_1 + 0x2ac);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2b0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2b1] = 0;
    uVar14 = 0xc1200000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbe32b8c2;
    }
    *(undefined4 *)(param_1 + 0x2b1) = uVar14;
  }
  param_1[0x2b4] = 0;
  *(uint *)(param_1 + 0x2b0) = uVar3 & 0xfeffffff;
  param_1[0x2b5] = 0;
  param_1[0x2b3] = (long)"mSeaGroundBottomOffset";
  *(undefined4 *)(param_1 + 0x2b6) = 8;
  param_1[0x2b2] = (long)(puVar1 + 0x10);
  param_1[0x2b7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b2);
  uVar14 = 0xc1c00000;
  if ((*(uint *)(param_1 + 0x2b6) & 0x800) != 0) {
    uVar14 = 0xbed67750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2b2] + 0xf0))(param_1 + 0x2b2);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2b6);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2b7] = 0;
    uVar14 = 0xc1c00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbed67750;
    }
    *(undefined4 *)(param_1 + 0x2b7) = uVar14;
  }
  param_1[0x2ba] = 0;
  *(uint *)(param_1 + 0x2b6) = uVar3 & 0xfeffffff;
  param_1[0x2b9] = (long)"mDiveInRootMorphMinusFrame";
  param_1[699] = 0;
  *(undefined4 *)(param_1 + 700) = 8;
  param_1[0x2b8] = (long)(puVar2 + 0x10);
  param_1[0x2bd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b8);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2b8] + 0xf0))(param_1 + 0x2b8);
  *puVar5 = 0xe;
  if ((*(uint *)(param_1 + 700) >> 7 & 1) == 0) {
    param_1[0x2bd] = 0;
    *(undefined4 *)(param_1 + 0x2bd) = 0xe;
  }
  param_1[0x2c0] = 0;
  *(uint *)(param_1 + 700) = *(uint *)(param_1 + 700) & 0xfeffffff;
  param_1[0x2bf] = (long)"mDiveGetDemoOffsetX";
  param_1[0x2c1] = 0;
  *(undefined4 *)(param_1 + 0x2c2) = 8;
  param_1[0x2be] = (long)(puVar1 + 0x10);
  param_1[0x2c3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2be);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2be] + 0xf0))(param_1 + 0x2be);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x2c2) >> 7 & 1) == 0) {
    param_1[0x2c3] = 0;
    *(undefined4 *)(param_1 + 0x2c3) = 0;
  }
  *(uint *)(param_1 + 0x2c2) = *(uint *)(param_1 + 0x2c2) & 0xfeffffff;
  param_1[0x2c5] = (long)"mDiveGetDemoOffsetY";
  param_1[0x2c6] = 0;
  param_1[0x2c7] = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 8;
  param_1[0x2c4] = (long)(puVar1 + 0x10);
  param_1[0x2c9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c4);
  uVar14 = 0xbf800000;
  if ((*(uint *)(param_1 + 0x2c8) & 0x800) != 0) {
    uVar14 = 0xbc8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2c4] + 0xf0))(param_1 + 0x2c4);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2c8);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2c9] = 0;
    uVar14 = 0xbf800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbc8efa35;
    }
    *(undefined4 *)(param_1 + 0x2c9) = uVar14;
  }
  param_1[0x2cc] = 0;
  *(uint *)(param_1 + 0x2c8) = uVar3 & 0xfeffffff;
  param_1[0x2cb] = (long)"mDiveGetDemoOffsetZ";
  param_1[0x2cd] = 0;
  *(undefined4 *)(param_1 + 0x2ce) = 8;
  param_1[0x2ca] = (long)(puVar1 + 0x10);
  param_1[0x2cf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ca);
  uVar14 = 0x3fc00000;
  if ((*(uint *)(param_1 + 0x2ce) & 0x800) != 0) {
    uVar14 = 0x3cd67750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2ca] + 0xf0))(param_1 + 0x2ca);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2ce);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2cf] = 0;
    uVar14 = 0x3fc00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3cd67750;
    }
    *(undefined4 *)(param_1 + 0x2cf) = uVar14;
  }
  *(uint *)(param_1 + 0x2ce) = uVar3 & 0xfeffffff;
  param_1[0x2d1] = (long)"mSwimWaitLeanShapeDegreeX";
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 8;
  param_1[0x2d0] = (long)(puVar1 + 0x10);
  param_1[0x2d5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2d0);
  uVar14 = 0x41980000;
  if ((*(uint *)(param_1 + 0x2d4) & 0x800) != 0) {
    uVar14 = 0x3ea9c91f;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2d0] + 0xf0))(param_1 + 0x2d0);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2d4);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2d5] = 0;
    uVar14 = 0x41980000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3ea9c91f;
    }
    *(undefined4 *)(param_1 + 0x2d5) = uVar14;
  }
  param_1[0x2d8] = 0;
  *(uint *)(param_1 + 0x2d4) = uVar3 & 0xfeffffff;
  param_1[0x2d7] = (long)"mSwimWaitLeanShapeDegreeXChaseValue";
  param_1[0x2d9] = 0;
  *(undefined4 *)(param_1 + 0x2da) = 8;
  param_1[0x2d6] = (long)(puVar1 + 0x10);
  param_1[0x2db] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2d6);
  uVar14 = 0x3d4ccccd;
  if ((*(uint *)(param_1 + 0x2da) & 0x800) != 0) {
    uVar14 = 0x3a64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2d6] + 0xf0))(param_1 + 0x2d6);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2da);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2db] = 0;
    uVar14 = 0x3d4ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3a64c388;
    }
    *(undefined4 *)(param_1 + 0x2db) = uVar14;
  }
  *(uint *)(param_1 + 0x2da) = uVar3 & 0xfeffffff;
  param_1[0x2dd] = (long)"mSwimWaitTurnChaseDegreeY";
  param_1[0x2de] = 0;
  param_1[0x2df] = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 8;
  param_1[0x2dc] = (long)(puVar1 + 0x10);
  param_1[0x2e1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2dc);
  uVar14 = 0x40c00000;
  if ((*(uint *)(param_1 + 0x2e0) & 0x800) != 0) {
    uVar14 = 0x3dd67750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2dc] + 0xf0))(param_1 + 0x2dc);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2e0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2e1] = 0;
    uVar14 = 0x40c00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3dd67750;
    }
    *(undefined4 *)(param_1 + 0x2e1) = uVar14;
  }
  param_1[0x2e4] = 0;
  *(uint *)(param_1 + 0x2e0) = uVar3 & 0xfeffffff;
  param_1[0x2e3] = (long)"mSwimWaitFastSpeed";
  param_1[0x2e5] = 0;
  *(undefined4 *)(param_1 + 0x2e6) = 8;
  param_1[0x2e2] = (long)(puVar1 + 0x10);
  param_1[0x2e7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2e2);
  uVar14 = 0x3e883127;
  if ((*(uint *)(param_1 + 0x2e6) & 0x800) != 0) {
    uVar14 = 0x3b9820c0;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2e2] + 0xf0))(param_1 + 0x2e2);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2e6);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2e7] = 0;
    uVar14 = 0x3e883127;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b9820c0;
    }
    *(undefined4 *)(param_1 + 0x2e7) = uVar14;
  }
  *(uint *)(param_1 + 0x2e6) = uVar3 & 0xfeffffff;
  param_1[0x2e9] = (long)"mSwimWaitFastSpeedChaseValue";
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 8;
  param_1[0x2e8] = (long)(puVar1 + 0x10);
  param_1[0x2ed] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2e8);
  uVar14 = 0x3c656042;
  if ((*(uint *)(param_1 + 0x2ec) & 0x800) != 0) {
    uVar14 = 0x39801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2e8] + 0xf0))(param_1 + 0x2e8);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2ec);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2ed] = 0;
    uVar14 = 0x3c656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x39801b94;
    }
    *(undefined4 *)(param_1 + 0x2ed) = uVar14;
  }
  param_1[0x2f0] = 0;
  *(uint *)(param_1 + 0x2ec) = uVar3 & 0xfeffffff;
  param_1[0x2ef] = (long)"mSwimWaitSlowSpeed";
  param_1[0x2f1] = 0;
  *(undefined4 *)(param_1 + 0x2f2) = 8;
  param_1[0x2ee] = (long)(puVar1 + 0x10);
  param_1[0x2f3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ee);
  uVar14 = 0x3df5c28f;
  if ((*(uint *)(param_1 + 0x2f2) & 0x800) != 0) {
    uVar14 = 0x3b09421e;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2ee] + 0xf0))(param_1 + 0x2ee);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2f2);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2f3] = 0;
    uVar14 = 0x3df5c28f;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b09421e;
    }
    *(undefined4 *)(param_1 + 0x2f3) = uVar14;
  }
  *(uint *)(param_1 + 0x2f2) = uVar3 & 0xfeffffff;
  param_1[0x2f5] = (long)"mSwimWaitSlowSpeedChaseValue";
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 8;
  param_1[0x2f4] = (long)(puVar1 + 0x10);
  param_1[0x2f9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2f4);
  uVar14 = 0x3b656042;
  if ((*(uint *)(param_1 + 0x2f8) & 0x800) != 0) {
    uVar14 = 0x38801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2f4] + 0xf0))(param_1 + 0x2f4);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2f8);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2f9] = 0;
    uVar14 = 0x3b656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x38801b94;
    }
    *(undefined4 *)(param_1 + 0x2f9) = uVar14;
  }
  param_1[0x2fc] = 0;
  *(uint *)(param_1 + 0x2f8) = uVar3 & 0xfeffffff;
  param_1[0x2fb] = (long)"mSwimWaitZeroSpeedChaseValue";
  param_1[0x2fd] = 0;
  *(undefined4 *)(param_1 + 0x2fe) = 8;
  param_1[0x2fa] = (long)(puVar1 + 0x10);
  param_1[0x2ff] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2fa);
  uVar14 = 0x3b656042;
  if ((*(uint *)(param_1 + 0x2fe) & 0x800) != 0) {
    uVar14 = 0x38801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2fa] + 0xf0))(param_1 + 0x2fa);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x2fe);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2ff] = 0;
    uVar14 = 0x3b656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x38801b94;
    }
    *(undefined4 *)(param_1 + 0x2ff) = uVar14;
  }
  *(uint *)(param_1 + 0x2fe) = uVar3 & 0xfeffffff;
  param_1[0x301] = (long)"mDiveWaitTurnChaseDegreeY";
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  *(undefined4 *)(param_1 + 0x304) = 8;
  param_1[0x300] = (long)(puVar1 + 0x10);
  param_1[0x305] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x300);
  uVar14 = 0x40c00000;
  if ((*(uint *)(param_1 + 0x304) & 0x800) != 0) {
    uVar14 = 0x3dd67750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x300] + 0xf0))(param_1 + 0x300);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x304);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x305] = 0;
    uVar14 = 0x40c00000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3dd67750;
    }
    *(undefined4 *)(param_1 + 0x305) = uVar14;
  }
  param_1[0x308] = 0;
  *(uint *)(param_1 + 0x304) = uVar3 & 0xfeffffff;
  param_1[0x307] = (long)"mDiveWaitFastSpeed";
  param_1[0x309] = 0;
  *(undefined4 *)(param_1 + 0x30a) = 8;
  param_1[0x306] = (long)(puVar1 + 0x10);
  param_1[0x30b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x306);
  uVar14 = 0x3e883127;
  if ((*(uint *)(param_1 + 0x30a) & 0x800) != 0) {
    uVar14 = 0x3b9820c0;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x306] + 0xf0))(param_1 + 0x306);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x30a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x30b] = 0;
    uVar14 = 0x3e883127;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b9820c0;
    }
    *(undefined4 *)(param_1 + 0x30b) = uVar14;
  }
  *(uint *)(param_1 + 0x30a) = uVar3 & 0xfeffffff;
  param_1[0x30d] = (long)"mDiveWaitFastSpeedChaseValue";
  param_1[0x30e] = 0;
  param_1[0x30f] = 0;
  *(undefined4 *)(param_1 + 0x310) = 8;
  param_1[0x30c] = (long)(puVar1 + 0x10);
  param_1[0x311] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30c);
  uVar14 = 0x3c656042;
  if ((*(uint *)(param_1 + 0x310) & 0x800) != 0) {
    uVar14 = 0x39801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x30c] + 0xf0))(param_1 + 0x30c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x310);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x311] = 0;
    uVar14 = 0x3c656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x39801b94;
    }
    *(undefined4 *)(param_1 + 0x311) = uVar14;
  }
  param_1[0x314] = 0;
  *(uint *)(param_1 + 0x310) = uVar3 & 0xfeffffff;
  param_1[0x313] = (long)"mDiveWaitSlowSpeed";
  param_1[0x315] = 0;
  *(undefined4 *)(param_1 + 0x316) = 8;
  param_1[0x312] = (long)(puVar1 + 0x10);
  param_1[0x317] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x312);
  uVar14 = 0x3df5c28f;
  if ((*(uint *)(param_1 + 0x316) & 0x800) != 0) {
    uVar14 = 0x3b09421e;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x312] + 0xf0))(param_1 + 0x312);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x316);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x317] = 0;
    uVar14 = 0x3df5c28f;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b09421e;
    }
    *(undefined4 *)(param_1 + 0x317) = uVar14;
  }
  *(uint *)(param_1 + 0x316) = uVar3 & 0xfeffffff;
  param_1[0x319] = (long)"mDiveWaitSlowSpeedChaseValue";
  param_1[0x31a] = 0;
  param_1[0x31b] = 0;
  *(undefined4 *)(param_1 + 0x31c) = 8;
  param_1[0x318] = (long)(puVar1 + 0x10);
  param_1[0x31d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x318);
  uVar14 = 0x3b656042;
  if ((*(uint *)(param_1 + 0x31c) & 0x800) != 0) {
    uVar14 = 0x38801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x318] + 0xf0))(param_1 + 0x318);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x31c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x31d] = 0;
    uVar14 = 0x3b656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x38801b94;
    }
    *(undefined4 *)(param_1 + 0x31d) = uVar14;
  }
  param_1[800] = 0;
  *(uint *)(param_1 + 0x31c) = uVar3 & 0xfeffffff;
  param_1[799] = (long)"mDiveWaitZeroSpeedChaseValue";
  param_1[0x321] = 0;
  *(undefined4 *)(param_1 + 0x322) = 8;
  param_1[0x31e] = (long)(puVar1 + 0x10);
  param_1[0x323] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31e);
  uVar14 = 0x3b656042;
  if ((*(uint *)(param_1 + 0x322) & 0x800) != 0) {
    uVar14 = 0x38801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x31e] + 0xf0))(param_1 + 0x31e);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x322);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x323] = 0;
    uVar14 = 0x3b656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x38801b94;
    }
    *(undefined4 *)(param_1 + 0x323) = uVar14;
  }
  *(uint *)(param_1 + 0x322) = uVar3 & 0xfeffffff;
  param_1[0x325] = (long)"mSwimMoveStartSpeedRate";
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  *(undefined4 *)(param_1 + 0x328) = 8;
  param_1[0x324] = (long)(puVar1 + 0x10);
  param_1[0x329] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x324);
  uVar14 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x328) & 0x800) != 0) {
    uVar14 = 0x3c0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x324] + 0xf0))(param_1 + 0x324);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x328);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x329] = 0;
    uVar14 = 0x3f000000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x329) = uVar14;
  }
  param_1[0x32c] = 0;
  *(uint *)(param_1 + 0x328) = uVar3 & 0xfeffffff;
  param_1[0x32b] = (long)"mSwimMoveTurnChaseDegreeY";
  param_1[0x32d] = 0;
  *(undefined4 *)(param_1 + 0x32e) = 8;
  param_1[0x32a] = (long)(puVar1 + 0x10);
  param_1[0x32f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x32a);
  uVar14 = 0x40000000;
  if ((*(uint *)(param_1 + 0x32e) & 0x800) != 0) {
    uVar14 = 0x3d0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x32a] + 0xf0))(param_1 + 0x32a);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x32e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x32f] = 0;
    uVar14 = 0x40000000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x32f) = uVar14;
  }
  *(uint *)(param_1 + 0x32e) = uVar3 & 0xfeffffff;
  param_1[0x331] = (long)"mSwimMoveFastSpeed";
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  *(undefined4 *)(param_1 + 0x334) = 8;
  param_1[0x330] = (long)(puVar1 + 0x10);
  param_1[0x335] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x330);
  uVar14 = 0x3e99999a;
  if ((*(uint *)(param_1 + 0x334) & 0x800) != 0) {
    uVar14 = 0x3bab92a6;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x330] + 0xf0))(param_1 + 0x330);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x334);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x335] = 0;
    uVar14 = 0x3e99999a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3bab92a6;
    }
    *(undefined4 *)(param_1 + 0x335) = uVar14;
  }
  param_1[0x338] = 0;
  *(uint *)(param_1 + 0x334) = uVar3 & 0xfeffffff;
  param_1[0x337] = (long)"mSwimMoveFastSpeedChaseValue";
  param_1[0x339] = 0;
  *(undefined4 *)(param_1 + 0x33a) = 8;
  param_1[0x336] = (long)(puVar1 + 0x10);
  param_1[0x33b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x336);
  uVar14 = 0x3c656042;
  if ((*(uint *)(param_1 + 0x33a) & 0x800) != 0) {
    uVar14 = 0x39801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x336] + 0xf0))(param_1 + 0x336);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x33a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x33b] = 0;
    uVar14 = 0x3c656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x39801b94;
    }
    *(undefined4 *)(param_1 + 0x33b) = uVar14;
  }
  *(uint *)(param_1 + 0x33a) = uVar3 & 0xfeffffff;
  param_1[0x33d] = (long)"mSwimMoveSlowSpeed";
  param_1[0x33e] = 0;
  param_1[0x33f] = 0;
  *(undefined4 *)(param_1 + 0x340) = 8;
  param_1[0x33c] = (long)(puVar1 + 0x10);
  param_1[0x341] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x33c);
  uVar14 = 0x3e19999a;
  if ((*(uint *)(param_1 + 0x340) & 0x800) != 0) {
    uVar14 = 0x3b2b92a6;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x33c] + 0xf0))(param_1 + 0x33c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x340);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x341] = 0;
    uVar14 = 0x3e19999a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b2b92a6;
    }
    *(undefined4 *)(param_1 + 0x341) = uVar14;
  }
  param_1[0x344] = 0;
  *(uint *)(param_1 + 0x340) = uVar3 & 0xfeffffff;
  param_1[0x343] = (long)"mSwimMoveSlowSpeedChaseValue";
  param_1[0x345] = 0;
  *(undefined4 *)(param_1 + 0x346) = 8;
  param_1[0x342] = (long)(puVar1 + 0x10);
  param_1[0x347] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x342);
  uVar14 = 0x3b656042;
  if ((*(uint *)(param_1 + 0x346) & 0x800) != 0) {
    uVar14 = 0x38801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x342] + 0xf0))(param_1 + 0x342);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x346);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x347] = 0;
    uVar14 = 0x3b656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x38801b94;
    }
    *(undefined4 *)(param_1 + 0x347) = uVar14;
  }
  *(uint *)(param_1 + 0x346) = uVar3 & 0xfeffffff;
  param_1[0x349] = (long)"mSwimMoveZeroSpeedChaseValue";
  param_1[0x34a] = 0;
  param_1[0x34b] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 8;
  param_1[0x348] = (long)(puVar1 + 0x10);
  param_1[0x34d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x348);
  uVar14 = 0x3b656042;
  if ((*(uint *)(param_1 + 0x34c) & 0x800) != 0) {
    uVar14 = 0x38801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x348] + 0xf0))(param_1 + 0x348);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x34c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x34d] = 0;
    uVar14 = 0x3b656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x38801b94;
    }
    *(undefined4 *)(param_1 + 0x34d) = uVar14;
  }
  param_1[0x350] = 0;
  *(uint *)(param_1 + 0x34c) = uVar3 & 0xfeffffff;
  param_1[0x34f] = (long)"mDiveMoveStartSpeedRate";
  param_1[0x351] = 0;
  *(undefined4 *)(param_1 + 0x352) = 8;
  param_1[0x34e] = (long)(puVar1 + 0x10);
  param_1[0x353] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x34e);
  uVar14 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x352) & 0x800) != 0) {
    uVar14 = 0x3c0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x34e] + 0xf0))(param_1 + 0x34e);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x352);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x353] = 0;
    uVar14 = 0x3f000000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x353) = uVar14;
  }
  *(uint *)(param_1 + 0x352) = uVar3 & 0xfeffffff;
  param_1[0x355] = (long)"mDiveMoveTurnChaseDegreeY";
  param_1[0x356] = 0;
  param_1[0x357] = 0;
  *(undefined4 *)(param_1 + 0x358) = 8;
  param_1[0x354] = (long)(puVar1 + 0x10);
  param_1[0x359] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x354);
  uVar14 = 0x40000000;
  if ((*(uint *)(param_1 + 0x358) & 0x800) != 0) {
    uVar14 = 0x3d0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x354] + 0xf0))(param_1 + 0x354);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x358);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x359] = 0;
    uVar14 = 0x40000000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x359) = uVar14;
  }
  param_1[0x35c] = 0;
  *(uint *)(param_1 + 0x358) = uVar3 & 0xfeffffff;
  param_1[0x35b] = (long)"mDiveMoveFastSpeed";
  param_1[0x35d] = 0;
  *(undefined4 *)(param_1 + 0x35e) = 8;
  param_1[0x35a] = (long)(puVar1 + 0x10);
  param_1[0x35f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x35a);
  uVar14 = 0x3e883127;
  if ((*(uint *)(param_1 + 0x35e) & 0x800) != 0) {
    uVar14 = 0x3b9820c0;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x35a] + 0xf0))(param_1 + 0x35a);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x35e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x35f] = 0;
    uVar14 = 0x3e883127;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b9820c0;
    }
    *(undefined4 *)(param_1 + 0x35f) = uVar14;
  }
  *(uint *)(param_1 + 0x35e) = uVar3 & 0xfeffffff;
  param_1[0x361] = (long)"mDiveMoveFastSpeedChaseValue";
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  *(undefined4 *)(param_1 + 0x364) = 8;
  param_1[0x360] = (long)(puVar1 + 0x10);
  param_1[0x365] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x360);
  uVar14 = 0x3c656042;
  if ((*(uint *)(param_1 + 0x364) & 0x800) != 0) {
    uVar14 = 0x39801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x360] + 0xf0))(param_1 + 0x360);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x364);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x365] = 0;
    uVar14 = 0x3c656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x39801b94;
    }
    *(undefined4 *)(param_1 + 0x365) = uVar14;
  }
  param_1[0x368] = 0;
  *(uint *)(param_1 + 0x364) = uVar3 & 0xfeffffff;
  param_1[0x367] = (long)"mDiveMoveSlowSpeed";
  param_1[0x369] = 0;
  *(undefined4 *)(param_1 + 0x36a) = 8;
  param_1[0x366] = (long)(puVar1 + 0x10);
  param_1[0x36b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x366);
  uVar14 = 0x3e29fbe7;
  if ((*(uint *)(param_1 + 0x36a) & 0x800) != 0) {
    uVar14 = 0x3b3ddfbb;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x366] + 0xf0))(param_1 + 0x366);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x36a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x36b] = 0;
    uVar14 = 0x3e29fbe7;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b3ddfbb;
    }
    *(undefined4 *)(param_1 + 0x36b) = uVar14;
  }
  *(uint *)(param_1 + 0x36a) = uVar3 & 0xfeffffff;
  param_1[0x36d] = (long)"mDiveMoveSlowSpeedChaseValue";
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  *(undefined4 *)(param_1 + 0x370) = 8;
  param_1[0x36c] = (long)(puVar1 + 0x10);
  param_1[0x371] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36c);
  uVar14 = 0x3c656042;
  if ((*(uint *)(param_1 + 0x370) & 0x800) != 0) {
    uVar14 = 0x39801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x36c] + 0xf0))(param_1 + 0x36c);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x370);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x371] = 0;
    uVar14 = 0x3c656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x39801b94;
    }
    *(undefined4 *)(param_1 + 0x371) = uVar14;
  }
  param_1[0x374] = 0;
  *(uint *)(param_1 + 0x370) = uVar3 & 0xfeffffff;
  param_1[0x373] = (long)"mDiveMoveZeroSpeedChaseValue";
  param_1[0x375] = 0;
  *(undefined4 *)(param_1 + 0x376) = 8;
  param_1[0x372] = (long)(puVar1 + 0x10);
  param_1[0x377] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x372);
  uVar14 = 0x3b656042;
  if ((*(uint *)(param_1 + 0x376) & 0x800) != 0) {
    uVar14 = 0x38801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x372] + 0xf0))(param_1 + 0x372);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x376);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x377] = 0;
    uVar14 = 0x3b656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x38801b94;
    }
    *(undefined4 *)(param_1 + 0x377) = uVar14;
  }
  *(uint *)(param_1 + 0x376) = uVar3 & 0xfeffffff;
  param_1[0x379] = (long)"mDiveInOutTurnChaseDegreeY";
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  *(undefined4 *)(param_1 + 0x37c) = 8;
  param_1[0x378] = (long)(puVar1 + 0x10);
  param_1[0x37d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x378);
  uVar14 = 0x40000000;
  if ((*(uint *)(param_1 + 0x37c) & 0x800) != 0) {
    uVar14 = 0x3d0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x378] + 0xf0))(param_1 + 0x378);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x37c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x37d] = 0;
    uVar14 = 0x40000000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x37d) = uVar14;
  }
  param_1[0x380] = 0;
  *(uint *)(param_1 + 0x37c) = uVar3 & 0xfeffffff;
  param_1[0x37f] = (long)"mDiveInOutSpeed";
  param_1[0x381] = 0;
  *(undefined4 *)(param_1 + 0x382) = 8;
  param_1[0x37e] = (long)(puVar1 + 0x10);
  param_1[899] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x37e);
  uVar14 = 0x3e883127;
  if ((*(uint *)(param_1 + 0x382) & 0x800) != 0) {
    uVar14 = 0x3b9820c0;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x37e] + 0xf0))(param_1 + 0x37e);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x382);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[899] = 0;
    uVar14 = 0x3e883127;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b9820c0;
    }
    *(undefined4 *)(param_1 + 899) = uVar14;
  }
  *(uint *)(param_1 + 0x382) = uVar3 & 0xfeffffff;
  param_1[0x385] = (long)"mDiveInOutSpeedChaseValue";
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  *(undefined4 *)(param_1 + 0x388) = 8;
  param_1[900] = (long)(puVar1 + 0x10);
  param_1[0x389] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 900);
  uVar14 = 0x3c656042;
  if ((*(uint *)(param_1 + 0x388) & 0x800) != 0) {
    uVar14 = 0x39801b94;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[900] + 0xf0))(param_1 + 900);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x388);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x389] = 0;
    uVar14 = 0x3c656042;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x39801b94;
    }
    *(undefined4 *)(param_1 + 0x389) = uVar14;
  }
  param_1[0x38c] = 0;
  *(uint *)(param_1 + 0x388) = uVar3 & 0xfeffffff;
  param_1[0x38b] = (long)"mDiveInEndRootMorphPosRate";
  param_1[0x38d] = 0;
  *(undefined4 *)(param_1 + 0x38e) = 8;
  param_1[0x38a] = (long)(puVar1 + 0x10);
  param_1[0x38f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x38a);
  uVar14 = 0x3c75c28f;
  if ((*(uint *)(param_1 + 0x38e) & 0x800) != 0) {
    uVar14 = 0x3989421e;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x38a] + 0xf0))(param_1 + 0x38a);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x38e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x38f] = 0;
    uVar14 = 0x3c75c28f;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3989421e;
    }
    *(undefined4 *)(param_1 + 0x38f) = uVar14;
  }
  *(uint *)(param_1 + 0x38e) = uVar3 & 0xfeffffff;
  param_1[0x391] = (long)"mDiveInEndRootMorphPosMin";
  param_1[0x392] = 0;
  param_1[0x393] = 0;
  *(undefined4 *)(param_1 + 0x394) = 8;
  param_1[0x390] = (long)(puVar1 + 0x10);
  param_1[0x395] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x390);
  uVar14 = 0x3a83126f;
  if ((*(uint *)(param_1 + 0x394) & 0x800) != 0) {
    uVar14 = 0x379268a9;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x390] + 0xf0))(param_1 + 0x390);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x394);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x395] = 0;
    uVar14 = 0x3a83126f;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x379268a9;
    }
    *(undefined4 *)(param_1 + 0x395) = uVar14;
  }
  param_1[0x398] = 0;
  *(uint *)(param_1 + 0x394) = uVar3 & 0xfeffffff;
  param_1[0x397] = (long)"mDiveOutSpeedY";
  param_1[0x399] = 0;
  *(undefined4 *)(param_1 + 0x39a) = 8;
  param_1[0x396] = (long)(puVar1 + 0x10);
  param_1[0x39b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x396);
  uVar14 = 0x3ecccccd;
  if ((*(uint *)(param_1 + 0x39a) & 0x800) != 0) {
    uVar14 = 0x3be4c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x396] + 0xf0))(param_1 + 0x396);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x39a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x39b] = 0;
    uVar14 = 0x3ecccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3be4c388;
    }
    *(undefined4 *)(param_1 + 0x39b) = uVar14;
  }
  puVar1 = PTR_DAT_04bb58c0;
  local_12c = 0;
  *(uint *)(param_1 + 0x39a) = uVar3 & 0xfeffffff;
  plVar10 = param_1 + 0x39c;
  local_124 = 0;
  local_130 = 0x400;
  puVar1 = puVar1 + 0x10;
  local_12e = 0x20;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  param_1[0x39d] = (long)"mDiveInCurveParam";
  param_1[0x39e] = 0;
  param_1[0x39f] = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  puVar2 = PTR_DAT_04bb58c8 + 0x10;
  param_1[0x39c] = (long)puVar2;
  *(undefined8 *)((long)param_1 + 0x1d1c) = 0;
  param_1[0x3a2] = (long)param_1 + 0x1d1c;
  *(undefined2 *)(param_1 + 0x3a3) = 0x400;
  param_1[0x3a1] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x1d1a) = 0x20;
  *(undefined8 *)((long)param_1 + 0x1d24) = 0;
  *(undefined8 *)((long)param_1 + 0x1d2c) = 0;
  *(undefined8 *)((long)param_1 + 0x1d34) = 0;
  *(undefined8 *)((long)param_1 + 0x1d3c) = 0;
  *(undefined8 *)((long)param_1 + 0x1d44) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4c) = 0;
  *(undefined8 *)((long)param_1 + 0x1d54) = 0;
  *(undefined8 *)((long)param_1 + 0x1d5c) = 0;
  *(undefined8 *)((long)param_1 + 0x1d64) = 0;
  *(undefined8 *)((long)param_1 + 0x1d6c) = 0;
  *(undefined8 *)((long)param_1 + 0x1d74) = 0;
  *(undefined8 *)((long)param_1 + 0x1d7c) = 0;
  *(undefined8 *)((long)param_1 + 0x1d84) = 0;
  *(undefined8 *)((long)param_1 + 0x1d8c) = 0;
  *(undefined8 *)((long)param_1 + 0x1d94) = 0;
  *(undefined1 *)((long)param_1 + 0x1d1b) = 2;
  param_1[0x3b4] = 0;
  local_12d = 2;
  local_140 = puVar1;
  pcStack_138 = (char *)&local_12c;
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  uVar6 = (**(code **)(param_1[0x39c] + 0xf0))(plVar10);
  FUN_008ea6d8(uVar6,&local_140);
  uVar3 = *(uint *)(param_1 + 0x3a0);
  uVar7 = uVar3 | 0x1000000;
  *(uint *)(param_1 + 0x3a0) = uVar7;
  if ((uVar3 >> 7 & 1) == 0) {
    FUN_008ea8f0(plVar10,&local_140);
    uVar7 = *(uint *)(param_1 + 0x3a0);
  }
  param_1[0x3b7] = 0;
  *(uint *)(param_1 + 0x3a0) = uVar7 & 0xfeffffff;
  plVar10 = param_1 + 0x3b5;
  param_1[0x3b8] = 0;
  param_1[0x3b6] = (long)"mTurnCurveParam";
  *(undefined8 *)((long)param_1 + 0x1de4) = 0;
  param_1[0x3bb] = (long)param_1 + 0x1de4;
  *(undefined4 *)(param_1 + 0x3b9) = 0;
  param_1[0x3b5] = (long)puVar2;
  *(undefined2 *)(param_1 + 0x3bc) = 0x400;
  param_1[0x3ba] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x1de2) = 0x20;
  *(undefined8 *)((long)param_1 + 0x1dec) = 0;
  *(undefined8 *)((long)param_1 + 0x1df4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dfc) = 0;
  *(undefined8 *)((long)param_1 + 0x1e04) = 0;
  *(undefined8 *)((long)param_1 + 0x1e0c) = 0;
  *(undefined8 *)((long)param_1 + 0x1e14) = 0;
  *(undefined8 *)((long)param_1 + 0x1e1c) = 0;
  *(undefined8 *)((long)param_1 + 0x1e24) = 0;
  *(undefined8 *)((long)param_1 + 0x1e2c) = 0;
  *(undefined8 *)((long)param_1 + 0x1e34) = 0;
  *(undefined8 *)((long)param_1 + 0x1e3c) = 0;
  *(undefined8 *)((long)param_1 + 0x1e44) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4c) = 0;
  *(undefined8 *)((long)param_1 + 0x1e54) = 0;
  *(undefined8 *)((long)param_1 + 0x1e5c) = 0;
  *(undefined1 *)((long)param_1 + 0x1de3) = 2;
  param_1[0x3cd] = 0;
  local_130 = 0x400;
  local_12e = 0x20;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_12d = 2;
  local_140 = puVar1;
  pcStack_138 = (char *)&local_12c;
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  uVar6 = (**(code **)(param_1[0x3b5] + 0xf0))(plVar10);
  FUN_008ea6d8(uVar6,&local_140);
  uVar3 = *(uint *)(param_1 + 0x3b9);
  uVar7 = uVar3 | 0x1000000;
  *(uint *)(param_1 + 0x3b9) = uVar7;
  if ((uVar3 >> 7 & 1) == 0) {
    FUN_008ea8f0(plVar10,&local_140);
    uVar7 = *(uint *)(param_1 + 0x3b9);
  }
  param_1[0x3d0] = 0;
  *(uint *)(param_1 + 0x3b9) = uVar7 & 0xfeffffff;
  param_1[0x3cf] = (long)"mJumpInWaterGravity";
  param_1[0x3d1] = 0;
  *(undefined4 *)(param_1 + 0x3d2) = 8;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x3d3] = 0;
  param_1[0x3ce] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3ce);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3ce] + 0xf0))(param_1 + 0x3ce);
  *puVar5 = 0;
  puVar4 = PTR_DAT_04bb62c0;
  puVar2 = PTR_DAT_04bb3380;
  if ((*(uint *)(param_1 + 0x3d2) >> 7 & 1) == 0) {
    param_1[0x3d3] = 0;
    *(undefined4 *)(param_1 + 0x3d3) = 0;
  }
  *(uint *)(param_1 + 0x3d2) = *(uint *)(param_1 + 0x3d2) & 0xfeffffff;
  param_1[0x3d5] = (long)"mJumpInWaterMinSpeedY";
  param_1[0x3d6] = 0;
  param_1[0x3d7] = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 8;
  param_1[0x3d4] = (long)(puVar1 + 0x10);
  param_1[0x3d9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d4);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3d4] + 0xf0))(param_1 + 0x3d4);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x3d8) >> 7 & 1) == 0) {
    param_1[0x3d9] = 0;
    *(undefined4 *)(param_1 + 0x3d9) = 0;
  }
  param_1[0x3dc] = 0;
  *(uint *)(param_1 + 0x3d8) = *(uint *)(param_1 + 0x3d8) & 0xfeffffff;
  param_1[0x3db] = (long)"mJumpInTimer";
  param_1[0x3dd] = 0;
  *(undefined4 *)(param_1 + 0x3de) = 8;
  param_1[0x3da] = (long)(puVar2 + 0x10);
  param_1[0x3df] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3da);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3da] + 0xf0))(param_1 + 0x3da);
  *puVar5 = 0x13;
  if ((*(uint *)(param_1 + 0x3de) >> 7 & 1) == 0) {
    param_1[0x3df] = 0;
    *(undefined4 *)(param_1 + 0x3df) = 0x13;
  }
  *(uint *)(param_1 + 0x3de) = *(uint *)(param_1 + 0x3de) & 0xfeffffff;
  param_1[0x3e1] = (long)"mJumpInTimerHigh";
  param_1[0x3e2] = 0;
  param_1[0x3e3] = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 8;
  param_1[0x3e0] = (long)(puVar2 + 0x10);
  param_1[0x3e5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3e0);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3e0] + 0xf0))(param_1 + 0x3e0);
  *puVar5 = 0x1a;
  if ((*(uint *)(param_1 + 0x3e4) >> 7 & 1) == 0) {
    param_1[0x3e5] = 0;
    *(undefined4 *)(param_1 + 0x3e5) = 0x1a;
  }
  param_1[1000] = 0;
  *(uint *)(param_1 + 0x3e4) = *(uint *)(param_1 + 0x3e4) & 0xfeffffff;
  param_1[999] = (long)"mJumpInWaterDownSpeedChaseRateXZ";
  param_1[0x3e9] = 0;
  *(undefined4 *)(param_1 + 0x3ea) = 8;
  param_1[0x3e6] = (long)(puVar1 + 0x10);
  param_1[0x3eb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3e6);
  uVar14 = 0x3d4ccccd;
  if ((*(uint *)(param_1 + 0x3ea) & 0x800) != 0) {
    uVar14 = 0x3a64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3e6] + 0xf0))(param_1 + 0x3e6);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x3ea);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x3eb] = 0;
    uVar14 = 0x3d4ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3a64c388;
    }
    *(undefined4 *)(param_1 + 0x3eb) = uVar14;
  }
  *(uint *)(param_1 + 0x3ea) = uVar3 & 0xfeffffff;
  param_1[0x3ed] = (long)"mJumpInWaterDownSpeedChaseRateY";
  param_1[0x3ee] = 0;
  param_1[0x3ef] = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 8;
  param_1[0x3ec] = (long)(puVar1 + 0x10);
  param_1[0x3f1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3ec);
  uVar14 = 0x3e8a3d71;
  if ((*(uint *)(param_1 + 0x3f0) & 0x800) != 0) {
    uVar14 = 0x3b9a6a63;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3ec] + 0xf0))(param_1 + 0x3ec);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x3f0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x3f1] = 0;
    uVar14 = 0x3e8a3d71;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b9a6a63;
    }
    *(undefined4 *)(param_1 + 0x3f1) = uVar14;
  }
  param_1[0x3f4] = 0;
  *(uint *)(param_1 + 0x3f0) = uVar3 & 0xfeffffff;
  param_1[0x3f3] = (long)"mJumpInWaterUpSpeedChaseRateXZ";
  param_1[0x3f5] = 0;
  *(undefined4 *)(param_1 + 0x3f6) = 8;
  param_1[0x3f2] = (long)(puVar1 + 0x10);
  param_1[0x3f7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3f2);
  uVar14 = 0x3da3d70a;
  if ((*(uint *)(param_1 + 0x3f6) & 0x800) != 0) {
    uVar14 = 0x3ab702d3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3f2] + 0xf0))(param_1 + 0x3f2);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x3f6);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x3f7] = 0;
    uVar14 = 0x3da3d70a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3ab702d3;
    }
    *(undefined4 *)(param_1 + 0x3f7) = uVar14;
  }
  *(uint *)(param_1 + 0x3f6) = uVar3 & 0xfeffffff;
  param_1[0x3f9] = (long)"mJumpInWaterUpSpeedChaseRateY";
  param_1[0x3fa] = 0;
  param_1[0x3fb] = 0;
  *(undefined4 *)(param_1 + 0x3fc) = 8;
  param_1[0x3f8] = (long)(puVar1 + 0x10);
  param_1[0x3fd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3f8);
  uVar14 = 0x3da3d70a;
  if ((*(uint *)(param_1 + 0x3fc) & 0x800) != 0) {
    uVar14 = 0x3ab702d3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3f8] + 0xf0))(param_1 + 0x3f8);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x3fc);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x3fd] = 0;
    uVar14 = 0x3da3d70a;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3ab702d3;
    }
    *(undefined4 *)(param_1 + 0x3fd) = uVar14;
  }
  param_1[0x400] = 0;
  *(uint *)(param_1 + 0x3fc) = uVar3 & 0xfeffffff;
  param_1[0x3ff] = (long)"mWalkToAim_WarpUnit";
  param_1[0x401] = 0;
  *(undefined4 *)(param_1 + 0x402) = 8;
  param_1[0x3fe] = (long)(puVar1 + 0x10);
  param_1[0x403] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3fe);
  uVar14 = 0x41800000;
  if ((*(uint *)(param_1 + 0x402) & 0x800) != 0) {
    uVar14 = 0x3e8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3fe] + 0xf0))(param_1 + 0x3fe);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x402);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x403] = 0;
    uVar14 = 0x41800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3e8efa35;
    }
    *(undefined4 *)(param_1 + 0x403) = uVar14;
  }
  *(uint *)(param_1 + 0x402) = uVar3 & 0xfeffffff;
  param_1[0x405] = (long)"mWalkToAim_ArrivalDistUnitRate";
  param_1[0x406] = 0;
  param_1[0x407] = 0;
  *(undefined4 *)(param_1 + 0x408) = 8;
  uVar13 = 0x3f000000;
  param_1[0x404] = (long)(puVar1 + 0x10);
  param_1[0x409] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x404);
  uVar14 = 0x3c842108;
  if ((*(uint *)(param_1 + 0x408) & 0x800) != 0) {
    uVar14 = 0x399396ec;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x404] + 0xf0))(param_1 + 0x404);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x408);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x409] = 0;
    uVar14 = 0x3c842108;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x399396ec;
    }
    *(undefined4 *)(param_1 + 0x409) = uVar14;
  }
  param_1[0x40c] = 0;
  *(uint *)(param_1 + 0x408) = uVar3 & 0xfeffffff;
  param_1[0x40b] = (long)"mWalkToAim_ToAimPos_StickInputMin";
  param_1[0x40d] = 0;
  *(undefined4 *)(param_1 + 0x40e) = 8;
  param_1[0x40a] = (long)(puVar1 + 0x10);
  param_1[0x40f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x40a);
  uVar14 = 0x3e800000;
  if ((*(uint *)(param_1 + 0x40e) & 0x800) != 0) {
    uVar14 = 0x3b8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x40a] + 0xf0))(param_1 + 0x40a);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x40e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x40f] = 0;
    uVar14 = 0x3e800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0x40f) = uVar14;
  }
  *(uint *)(param_1 + 0x40e) = uVar3 & 0xfeffffff;
  param_1[0x411] = (long)"mWalkToAim_ToAimPos_StickInputMax";
  param_1[0x412] = 0;
  param_1[0x413] = 0;
  *(undefined4 *)(param_1 + 0x414) = 8;
  param_1[0x410] = (long)(puVar1 + 0x10);
  param_1[0x415] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x410);
  uVar14 = 0x40800000;
  if ((*(uint *)(param_1 + 0x414) & 0x800) != 0) {
    uVar14 = 0x3d8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x410] + 0xf0))(param_1 + 0x410);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x414);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x415] = 0;
    uVar14 = 0x40800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d8efa35;
    }
    *(undefined4 *)(param_1 + 0x415) = uVar14;
  }
  param_1[0x418] = 0;
  *(uint *)(param_1 + 0x414) = uVar3 & 0xfeffffff;
  param_1[0x417] = (long)"mWalkToAim_TurnAddCalcRate";
  param_1[0x419] = 0;
  *(undefined4 *)(param_1 + 0x41a) = 8;
  param_1[0x416] = (long)(puVar1 + 0x10);
  param_1[0x41b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x416);
  uVar14 = 0x3e800000;
  if ((*(uint *)(param_1 + 0x41a) & 0x800) != 0) {
    uVar14 = 0x3b8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x416] + 0xf0))(param_1 + 0x416);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x41a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x41b] = 0;
    uVar14 = 0x3e800000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0x41b) = uVar14;
  }
  *(uint *)(param_1 + 0x41a) = uVar3 & 0xfeffffff;
  param_1[0x41d] = (long)"mWalkToAim_TurnMin";
  param_1[0x41e] = 0;
  param_1[0x41f] = 0;
  *(undefined4 *)(param_1 + 0x420) = 8;
  uVar14 = 0x40a00000;
  param_1[0x41c] = (long)(puVar1 + 0x10);
  param_1[0x421] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x41c);
  uVar11 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x420) & 0x800) != 0) {
    uVar11 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x41c] + 0xf0))(param_1 + 0x41c);
  *puVar5 = uVar11;
  uVar3 = *(uint *)(param_1 + 0x420);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x421] = 0;
    uVar11 = 0x3f800000;
    if ((uVar3 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x421) = uVar11;
  }
  param_1[0x424] = 0;
  *(uint *)(param_1 + 0x420) = uVar3 & 0xfeffffff;
  param_1[0x423] = (long)"mWalkToAim_TurnMax";
  param_1[0x425] = 0;
  *(undefined4 *)(param_1 + 0x426) = 8;
  param_1[0x422] = (long)(puVar1 + 0x10);
  param_1[0x427] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x422);
  uVar11 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x426) & 0x800) != 0) {
    uVar11 = 0x3f060a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x422] + 0xf0))(param_1 + 0x422);
  *puVar5 = uVar11;
  uVar3 = *(uint *)(param_1 + 0x426);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x427] = 0;
    uVar11 = 0x41f00000;
    if ((uVar3 & 0x800) != 0) {
      uVar11 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x427) = uVar11;
  }
  *(uint *)(param_1 + 0x426) = uVar3 & 0xfeffffff;
  param_1[0x429] = (long)"mWalkToAim_FrontHit_PosAddCalcRate";
  param_1[0x42a] = 0;
  param_1[0x42b] = 0;
  *(undefined4 *)(param_1 + 0x42c) = 8;
  param_1[0x428] = (long)(puVar1 + 0x10);
  param_1[0x42d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x428);
  uVar11 = 0x3e8a3d71;
  if ((*(uint *)(param_1 + 0x42c) & 0x800) != 0) {
    uVar11 = 0x3b9a6a63;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x428] + 0xf0))(param_1 + 0x428);
  *puVar5 = uVar11;
  uVar3 = *(uint *)(param_1 + 0x42c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x42d] = 0;
    uVar11 = 0x3e8a3d71;
    if ((uVar3 & 0x800) != 0) {
      uVar11 = 0x3b9a6a63;
    }
    *(undefined4 *)(param_1 + 0x42d) = uVar11;
  }
  param_1[0x430] = 0;
  *(uint *)(param_1 + 0x42c) = uVar3 & 0xfeffffff;
  param_1[0x42f] = (long)"mWalkToAim_FrontHit_AngleAddCalcRate";
  param_1[0x431] = 0;
  *(undefined4 *)(param_1 + 0x432) = 8;
  param_1[0x42e] = (long)(puVar1 + 0x10);
  param_1[0x433] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42e);
  uVar11 = 0x3e8a3d71;
  if ((*(uint *)(param_1 + 0x432) & 0x800) != 0) {
    uVar11 = 0x3b9a6a63;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x42e] + 0xf0))(param_1 + 0x42e);
  *puVar5 = uVar11;
  uVar11 = 0x40a00000;
  uVar3 = *(uint *)(param_1 + 0x432);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x433] = 0;
    uVar12 = 0x3e8a3d71;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3b9a6a63;
    }
    *(undefined4 *)(param_1 + 0x433) = uVar12;
  }
  *(uint *)(param_1 + 0x432) = uVar3 & 0xfeffffff;
  param_1[0x435] = (long)"mLinecarCheckOffset";
  param_1[0x436] = 0;
  param_1[0x437] = 0;
  *(undefined4 *)(param_1 + 0x438) = 8;
  param_1[0x434] = (long)(puVar1 + 0x10);
  param_1[0x439] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x434);
  uVar12 = uVar14;
  if ((*(uint *)(param_1 + 0x438) & 0x800) != 0) {
    uVar12 = 0x3db2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x434] + 0xf0))(param_1 + 0x434);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x438);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x439] = 0;
    uVar12 = uVar14;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x439) = uVar12;
  }
  param_1[0x43c] = 0;
  *(uint *)(param_1 + 0x438) = uVar3 & 0xfeffffff;
  param_1[0x43b] = (long)"mLinecarNiceDistFromTarget";
  param_1[0x43d] = 0;
  *(undefined4 *)(param_1 + 0x43e) = 8;
  param_1[0x43a] = (long)(puVar1 + 0x10);
  param_1[0x43f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x43a);
  uVar12 = 0x41700000;
  if ((*(uint *)(param_1 + 0x43e) & 0x800) != 0) {
    uVar12 = 0x3e860a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x43a] + 0xf0))(param_1 + 0x43a);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x43e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x43f] = 0;
    uVar12 = 0x41700000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0x43f) = uVar12;
  }
  *(uint *)(param_1 + 0x43e) = uVar3 & 0xfeffffff;
  param_1[0x441] = (long)"mLinecarAddCalcRate";
  param_1[0x442] = 0;
  param_1[0x443] = 0;
  *(undefined4 *)(param_1 + 0x444) = 8;
  param_1[0x440] = (long)(puVar1 + 0x10);
  param_1[0x445] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x440);
  uVar12 = 0x3f333333;
  if ((*(uint *)(param_1 + 0x444) & 0x800) != 0) {
    uVar12 = 0x3c482b17;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x440] + 0xf0))(param_1 + 0x440);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x444);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x445] = 0;
    uVar12 = 0x3f333333;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3c482b17;
    }
    *(undefined4 *)(param_1 + 0x445) = uVar12;
  }
  *(uint *)(param_1 + 0x444) = uVar3 & 0xfeffffff;
  param_1[0x448] = 0;
  param_1[0x447] = (long)"mPushStickCancelTimer";
  param_1[0x449] = 0;
  *(undefined4 *)(param_1 + 0x44a) = 8;
  param_1[0x446] = (long)(puVar4 + 0x10);
  param_1[1099] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x446);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x446] + 0xf0))(param_1 + 0x446);
  *puVar5 = 0xc;
  if ((*(uint *)(param_1 + 0x44a) >> 7 & 1) == 0) {
    param_1[1099] = 0;
    *(undefined4 *)(param_1 + 1099) = 0xc;
  }
  *(undefined4 *)(param_1 + 0x450) = 8;
  *(uint *)(param_1 + 0x44a) = *(uint *)(param_1 + 0x44a) & 0xfeffffff;
  param_1[0x44d] = (long)"mPushStickCenterLimit";
  param_1[0x44e] = 0;
  param_1[0x44f] = 0;
  param_1[0x44c] = (long)(puVar1 + 0x10);
  param_1[0x451] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x44c);
  uVar12 = 0x3ecccccd;
  if ((*(uint *)(param_1 + 0x450) & 0x800) != 0) {
    uVar12 = 0x3be4c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x44c] + 0xf0))(param_1 + 0x44c);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x450);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x451] = 0;
    uVar12 = 0x3ecccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3be4c388;
    }
    *(undefined4 *)(param_1 + 0x451) = uVar12;
  }
  param_1[0x454] = 0;
  *(uint *)(param_1 + 0x450) = uVar3 & 0xfeffffff;
  param_1[0x455] = 0;
  param_1[0x453] = (long)"mToolReflectKnockbackDist";
  *(undefined4 *)(param_1 + 0x456) = 8;
  param_1[0x452] = (long)(puVar1 + 0x10);
  param_1[0x457] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x452);
  uVar12 = 0x40000000;
  if ((*(uint *)(param_1 + 0x456) & 0x800) != 0) {
    uVar12 = 0x3d0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x452] + 0xf0))(param_1 + 0x452);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x456);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x457] = 0;
    uVar12 = 0x40000000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x457) = uVar12;
  }
  param_1[0x45a] = 0;
  *(uint *)(param_1 + 0x456) = uVar3 & 0xfeffffff;
  param_1[0x459] = (long)"mToolReflectKnockbackFrame";
  param_1[0x45b] = 0;
  *(undefined4 *)(param_1 + 0x45c) = 8;
  param_1[0x458] = (long)(puVar4 + 0x10);
  param_1[0x45d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x458);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x458] + 0xf0))(param_1 + 0x458);
  *puVar5 = 5;
  if ((*(uint *)(param_1 + 0x45c) >> 7 & 1) == 0) {
    param_1[0x45d] = 0;
    *(undefined4 *)(param_1 + 0x45d) = 5;
  }
  param_1[0x460] = 0;
  *(uint *)(param_1 + 0x45c) = *(uint *)(param_1 + 0x45c) & 0xfeffffff;
  param_1[0x45f] = (long)"mToolBreakTurnAddCalcRate";
  param_1[0x461] = 0;
  *(undefined4 *)(param_1 + 0x462) = 8;
  param_1[0x45e] = (long)(puVar1 + 0x10);
  param_1[0x463] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x45e);
  uVar12 = uVar13;
  if ((*(uint *)(param_1 + 0x462) & 0x800) != 0) {
    uVar12 = 0x3c0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x45e] + 0xf0))(param_1 + 0x45e);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x462);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x463] = 0;
    uVar12 = uVar13;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x463) = uVar12;
  }
  *(uint *)(param_1 + 0x462) = uVar3 & 0xfeffffff;
  param_1[0x465] = (long)"mToolUmbrellaShortLength";
  param_1[0x466] = 0;
  param_1[0x467] = 0;
  *(undefined4 *)(param_1 + 0x468) = 8;
  param_1[0x464] = (long)(puVar1 + 0x10);
  param_1[0x469] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x464);
  uVar12 = 0x41078937;
  if ((*(uint *)(param_1 + 0x468) & 0x800) != 0) {
    uVar12 = 0x3e176529;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x464] + 0xf0))(param_1 + 0x464);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x468);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x469] = 0;
    uVar12 = 0x41078937;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3e176529;
    }
    *(undefined4 *)(param_1 + 0x469) = uVar12;
  }
  param_1[0x46c] = 0;
  *(uint *)(param_1 + 0x468) = uVar3 & 0xfeffffff;
  param_1[0x46b] = (long)"mFootBuryCheckUnitRate";
  param_1[0x46d] = 0;
  *(undefined4 *)(param_1 + 0x46e) = 8;
  param_1[0x46a] = (long)(puVar1 + 0x10);
  param_1[0x46f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x46a);
  uVar12 = 0x3f59999a;
  if ((*(uint *)(param_1 + 0x46e) & 0x800) != 0) {
    uVar12 = 0x3c730fc1;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x46a] + 0xf0))(param_1 + 0x46a);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x46e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x46f] = 0;
    uVar12 = 0x3f59999a;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3c730fc1;
    }
    *(undefined4 *)(param_1 + 0x46f) = uVar12;
  }
  *(uint *)(param_1 + 0x46e) = uVar3 & 0xfeffffff;
  param_1[0x471] = (long)"mSharePlayCullingCheckRadius";
  param_1[0x472] = 0;
  param_1[0x473] = 0;
  *(undefined4 *)(param_1 + 0x474) = 8;
  param_1[0x470] = (long)(puVar1 + 0x10);
  param_1[0x475] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x470);
  uVar12 = 0x40400000;
  if ((*(uint *)(param_1 + 0x474) & 0x800) != 0) {
    uVar12 = 0x3d567750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x470] + 0xf0))(param_1 + 0x470);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x474);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x475] = 0;
    uVar12 = 0x40400000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x475) = uVar12;
  }
  param_1[0x478] = 0;
  *(uint *)(param_1 + 0x474) = uVar3 & 0xfeffffff;
  param_1[0x477] = (long)"mSharePlayCullingCheckOffsetY";
  param_1[0x479] = 0;
  *(undefined4 *)(param_1 + 0x47a) = 8;
  param_1[0x476] = (long)(puVar1 + 0x10);
  param_1[0x47b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x476);
  uVar12 = 0x40400000;
  if ((*(uint *)(param_1 + 0x47a) & 0x800) != 0) {
    uVar12 = 0x3d567750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x476] + 0xf0))(param_1 + 0x476);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x47a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x47b] = 0;
    uVar12 = 0x40400000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x47b) = uVar12;
  }
  *(uint *)(param_1 + 0x47a) = uVar3 & 0xfeffffff;
  param_1[0x47d] = (long)"mSharePlayCullingCheckDistanceZ";
  param_1[0x47e] = 0;
  param_1[0x47f] = 0;
  *(undefined4 *)(param_1 + 0x480) = 8;
  param_1[0x47c] = (long)(puVar1 + 0x10);
  param_1[0x481] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x47c);
  uVar12 = 0x43480000;
  if ((*(uint *)(param_1 + 0x480) & 0x800) != 0) {
    uVar12 = 0x405f66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x47c] + 0xf0))(param_1 + 0x47c);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x480);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x481] = 0;
    uVar12 = 0x43480000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x405f66f3;
    }
    *(undefined4 *)(param_1 + 0x481) = uVar12;
  }
  *(uint *)(param_1 + 0x480) = uVar3 & 0xfeffffff;
  param_1[0x484] = 0;
  param_1[0x483] = (long)"mSharePlayCullingCheckDistanceZ_ByCliff1";
  param_1[0x485] = 0;
  *(undefined4 *)(param_1 + 0x486) = 8;
  param_1[0x482] = (long)(puVar1 + 0x10);
  param_1[0x487] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x482);
  uVar12 = 0x43480000;
  if ((*(uint *)(param_1 + 0x486) & 0x800) != 0) {
    uVar12 = 0x405f66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x482] + 0xf0))(param_1 + 0x482);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x486);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x487] = 0;
    uVar12 = 0x43480000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x405f66f3;
    }
    *(undefined4 *)(param_1 + 0x487) = uVar12;
  }
  *(undefined4 *)(param_1 + 0x48c) = 8;
  *(uint *)(param_1 + 0x486) = uVar3 & 0xfeffffff;
  param_1[0x489] = (long)"mSharePlayMainGetCancelTimer";
  param_1[0x48a] = 0;
  param_1[0x48b] = 0;
  param_1[0x488] = (long)(puVar4 + 0x10);
  param_1[0x48d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x488);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x488] + 0xf0))(param_1 + 0x488);
  *puVar5 = 0x1e;
  if ((*(uint *)(param_1 + 0x48c) >> 7 & 1) == 0) {
    param_1[0x48d] = 0;
    *(undefined4 *)(param_1 + 0x48d) = 0x1e;
  }
  param_1[0x490] = 0;
  *(uint *)(param_1 + 0x48c) = *(uint *)(param_1 + 0x48c) & 0xfeffffff;
  param_1[0x491] = 0;
  param_1[0x48f] = (long)"mSharePlaySubWarpTimer";
  *(undefined4 *)(param_1 + 0x492) = 8;
  param_1[0x48e] = (long)(puVar4 + 0x10);
  param_1[0x493] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48e);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x48e] + 0xf0))(param_1 + 0x48e);
  *puVar5 = 0x3c;
  if ((*(uint *)(param_1 + 0x492) >> 7 & 1) == 0) {
    param_1[0x493] = 0;
    *(undefined4 *)(param_1 + 0x493) = 0x3c;
  }
  param_1[0x496] = 0;
  *(uint *)(param_1 + 0x492) = *(uint *)(param_1 + 0x492) & 0xfeffffff;
  param_1[0x495] = (long)"mCancelBalloonHasAnyKeyTimer";
  param_1[0x497] = 0;
  *(undefined4 *)(param_1 + 0x498) = 8;
  param_1[0x494] = (long)(puVar4 + 0x10);
  param_1[0x499] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x494);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x494] + 0xf0))(param_1 + 0x494);
  *puVar5 = 0x14;
  if ((*(uint *)(param_1 + 0x498) >> 7 & 1) == 0) {
    param_1[0x499] = 0;
    *(undefined4 *)(param_1 + 0x499) = 0x14;
  }
  param_1[0x49c] = 0;
  *(uint *)(param_1 + 0x498) = *(uint *)(param_1 + 0x498) & 0xfeffffff;
  param_1[0x49d] = 0;
  param_1[0x49b] = (long)"mCancelPadTimerBySharePlayModeChange";
  *(undefined4 *)(param_1 + 0x49e) = 8;
  param_1[0x49a] = (long)(puVar4 + 0x10);
  param_1[0x49f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x49a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x49a] + 0xf0))(param_1 + 0x49a);
  *puVar5 = 6;
  if ((*(uint *)(param_1 + 0x49e) >> 7 & 1) == 0) {
    param_1[0x49f] = 0;
    *(undefined4 *)(param_1 + 0x49f) = 6;
  }
  param_1[0x4a2] = 0;
  *(uint *)(param_1 + 0x49e) = *(uint *)(param_1 + 0x49e) & 0xfeffffff;
  param_1[0x4a1] = (long)"mBlackFadeBlackConst7";
  param_1[0x4a3] = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 8;
  param_1[0x4a0] = (long)(puVar1 + 0x10);
  param_1[0x4a5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4a0);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4a0] + 0xf0))(param_1 + 0x4a0);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4a4) >> 7 & 1) == 0) {
    param_1[0x4a5] = 0;
    *(undefined4 *)(param_1 + 0x4a5) = 0;
  }
  param_1[0x4a8] = 0;
  *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfeffffff;
  param_1[0x4a9] = 0;
  param_1[0x4a7] = (long)"mBlackFadeStartOffsetDoorIn";
  *(undefined4 *)(param_1 + 0x4aa) = 8;
  param_1[0x4a6] = (long)(puVar1 + 0x10);
  param_1[0x4ab] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4a6);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4a6] + 0xf0))(param_1 + 0x4a6);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4aa) >> 7 & 1) == 0) {
    param_1[0x4ab] = 0;
    *(undefined4 *)(param_1 + 0x4ab) = 0;
  }
  param_1[0x4ae] = 0;
  *(uint *)(param_1 + 0x4aa) = *(uint *)(param_1 + 0x4aa) & 0xfeffffff;
  param_1[0x4ad] = (long)"mBlackFadeEndOffsetDoorIn";
  param_1[0x4af] = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 8;
  param_1[0x4ac] = (long)(puVar1 + 0x10);
  param_1[0x4b1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4ac);
  uVar12 = 0x40e00000;
  if ((*(uint *)(param_1 + 0x4b0) & 0x800) != 0) {
    uVar12 = 0x3dfa35dd;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4ac] + 0xf0))(param_1 + 0x4ac);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x4b0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4b1] = 0;
    uVar12 = 0x40e00000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3dfa35dd;
    }
    *(undefined4 *)(param_1 + 0x4b1) = uVar12;
  }
  param_1[0x4b4] = 0;
  *(uint *)(param_1 + 0x4b0) = uVar3 & 0xfeffffff;
  param_1[0x4b5] = 0;
  param_1[0x4b3] = (long)"mBlackFadeStartOffsetDoorOut";
  *(undefined4 *)(param_1 + 0x4b6) = 8;
  param_1[0x4b2] = (long)(puVar1 + 0x10);
  param_1[0x4b7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4b2);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4b2] + 0xf0))(param_1 + 0x4b2);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4b6) >> 7 & 1) == 0) {
    param_1[0x4b7] = 0;
    *(undefined4 *)(param_1 + 0x4b7) = 0;
  }
  param_1[0x4ba] = 0;
  *(uint *)(param_1 + 0x4b6) = *(uint *)(param_1 + 0x4b6) & 0xfeffffff;
  param_1[0x4b9] = (long)"mBlackFadeEndOffsetDoorOut";
  param_1[0x4bb] = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 8;
  param_1[0x4b8] = (long)(puVar1 + 0x10);
  param_1[0x4bd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4b8);
  uVar12 = 0x41400000;
  if ((*(uint *)(param_1 + 0x4bc) & 0x800) != 0) {
    uVar12 = 0x3e567750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4b8] + 0xf0))(param_1 + 0x4b8);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x4bc);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4bd] = 0;
    uVar12 = 0x41400000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3e567750;
    }
    *(undefined4 *)(param_1 + 0x4bd) = uVar12;
  }
  param_1[0x4c0] = 0;
  *(uint *)(param_1 + 0x4bc) = uVar3 & 0xfeffffff;
  param_1[0x4c1] = 0;
  param_1[0x4bf] = (long)"mBlackFadeStartOffsetStageStairsIn";
  *(undefined4 *)(param_1 + 0x4c2) = 8;
  param_1[0x4be] = (long)(puVar1 + 0x10);
  param_1[0x4c3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4be);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4be] + 0xf0))(param_1 + 0x4be);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4c2) >> 7 & 1) == 0) {
    param_1[0x4c3] = 0;
    *(undefined4 *)(param_1 + 0x4c3) = 0;
  }
  param_1[0x4c6] = 0;
  *(uint *)(param_1 + 0x4c2) = *(uint *)(param_1 + 0x4c2) & 0xfeffffff;
  param_1[0x4c5] = (long)"mBlackFadeEndOffsetStageStairsIn";
  param_1[0x4c7] = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 8;
  param_1[0x4c4] = (long)(puVar1 + 0x10);
  param_1[0x4c9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4c4);
  uVar12 = 0x42200000;
  if ((*(uint *)(param_1 + 0x4c8) & 0x800) != 0) {
    uVar12 = 0x3f32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4c4] + 0xf0))(param_1 + 0x4c4);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x4c8);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4c9] = 0;
    uVar12 = 0x42200000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3f32b8c2;
    }
    *(undefined4 *)(param_1 + 0x4c9) = uVar12;
  }
  param_1[0x4cc] = 0;
  *(uint *)(param_1 + 0x4c8) = uVar3 & 0xfeffffff;
  param_1[0x4cd] = 0;
  param_1[0x4cb] = (long)"mBlackFadeStartOffsetStageStairsOut";
  *(undefined4 *)(param_1 + 0x4ce) = 8;
  param_1[0x4ca] = (long)(puVar1 + 0x10);
  param_1[0x4cf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4ca);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4ca] + 0xf0))(param_1 + 0x4ca);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4ce) >> 7 & 1) == 0) {
    param_1[0x4cf] = 0;
    *(undefined4 *)(param_1 + 0x4cf) = 0;
  }
  param_1[0x4d2] = 0;
  *(uint *)(param_1 + 0x4ce) = *(uint *)(param_1 + 0x4ce) & 0xfeffffff;
  param_1[0x4d1] = (long)"mBlackFadeEndOffsetStageStairsOut";
  param_1[0x4d3] = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 8;
  param_1[0x4d0] = (long)(puVar1 + 0x10);
  param_1[0x4d5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4d0);
  uVar12 = 0x42200000;
  if ((*(uint *)(param_1 + 0x4d4) & 0x800) != 0) {
    uVar12 = 0x3f32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4d0] + 0xf0))(param_1 + 0x4d0);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x4d4);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4d5] = 0;
    uVar12 = 0x42200000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3f32b8c2;
    }
    *(undefined4 *)(param_1 + 0x4d5) = uVar12;
  }
  param_1[0x4d8] = 0;
  *(uint *)(param_1 + 0x4d4) = uVar3 & 0xfeffffff;
  param_1[0x4d9] = 0;
  param_1[0x4d7] = (long)"mBlackFadeStartOffsetStageWalkIn";
  *(undefined4 *)(param_1 + 0x4da) = 8;
  param_1[0x4d6] = (long)(puVar1 + 0x10);
  param_1[0x4db] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4d6);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4d6] + 0xf0))(param_1 + 0x4d6);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4da) >> 7 & 1) == 0) {
    param_1[0x4db] = 0;
    *(undefined4 *)(param_1 + 0x4db) = 0;
  }
  param_1[0x4de] = 0;
  *(uint *)(param_1 + 0x4da) = *(uint *)(param_1 + 0x4da) & 0xfeffffff;
  param_1[0x4dd] = (long)"mBlackFadeEndOffsetStageWalkIn";
  param_1[0x4df] = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 8;
  param_1[0x4dc] = (long)(puVar1 + 0x10);
  param_1[0x4e1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4dc);
  uVar12 = 0x41c80000;
  if ((*(uint *)(param_1 + 0x4e0) & 0x800) != 0) {
    uVar12 = 0x3edf66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4dc] + 0xf0))(param_1 + 0x4dc);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x4e0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4e1] = 0;
    uVar12 = 0x41c80000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3edf66f3;
    }
    *(undefined4 *)(param_1 + 0x4e1) = uVar12;
  }
  param_1[0x4e4] = 0;
  *(uint *)(param_1 + 0x4e0) = uVar3 & 0xfeffffff;
  param_1[0x4e5] = 0;
  param_1[0x4e3] = (long)"mBlackFadeStartOffsetStageWalkOut";
  *(undefined4 *)(param_1 + 0x4e6) = 8;
  param_1[0x4e2] = (long)(puVar1 + 0x10);
  param_1[0x4e7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e2);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4e2] + 0xf0))(param_1 + 0x4e2);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4e6) >> 7 & 1) == 0) {
    param_1[0x4e7] = 0;
    *(undefined4 *)(param_1 + 0x4e7) = 0;
  }
  param_1[0x4ea] = 0;
  *(uint *)(param_1 + 0x4e6) = *(uint *)(param_1 + 0x4e6) & 0xfeffffff;
  param_1[0x4e9] = (long)"mBlackFadeEndOffsetStageWalkOut";
  param_1[0x4eb] = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 8;
  param_1[0x4e8] = (long)(puVar1 + 0x10);
  param_1[0x4ed] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e8);
  uVar12 = 0x41c80000;
  if ((*(uint *)(param_1 + 0x4ec) & 0x800) != 0) {
    uVar12 = 0x3edf66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4e8] + 0xf0))(param_1 + 0x4e8);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x4ec);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4ed] = 0;
    uVar12 = 0x41c80000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3edf66f3;
    }
    *(undefined4 *)(param_1 + 0x4ed) = uVar12;
  }
  *(uint *)(param_1 + 0x4ec) = uVar3 & 0xfeffffff;
  param_1[0x4f0] = 0;
  param_1[0x4ef] = (long)"mStateWalkOutSceneChangeTimer";
  param_1[0x4f1] = 0;
  *(undefined4 *)(param_1 + 0x4f2) = 8;
  param_1[0x4ee] = (long)(puVar2 + 0x10);
  param_1[0x4f3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4ee);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4ee] + 0xf0))(param_1 + 0x4ee);
  *puVar5 = 0x14;
  if ((*(uint *)(param_1 + 0x4f2) >> 7 & 1) == 0) {
    param_1[0x4f3] = 0;
    *(undefined4 *)(param_1 + 0x4f3) = 0x14;
  }
  param_1[0x4f6] = 0;
  *(uint *)(param_1 + 0x4f2) = *(uint *)(param_1 + 0x4f2) & 0xfeffffff;
  param_1[0x4f5] = (long)"mTestModelBlackRate";
  param_1[0x4f7] = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 8;
  param_1[0x4f4] = (long)(puVar1 + 0x10);
  param_1[0x4f9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4f4);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4f4] + 0xf0))(param_1 + 0x4f4);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4f8) >> 7 & 1) == 0) {
    param_1[0x4f9] = 0;
    *(undefined4 *)(param_1 + 0x4f9) = 0;
  }
  param_1[0x4fc] = 0;
  *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) & 0xfeffffff;
  param_1[0x4fd] = 0;
  param_1[0x4fb] = (long)"mDoorDemoScaleMin";
  *(undefined4 *)(param_1 + 0x4fe) = 8;
  param_1[0x4fa] = (long)(puVar1 + 0x10);
  param_1[0x4ff] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4fa);
  uVar12 = 0x3f666666;
  if ((*(uint *)(param_1 + 0x4fe) & 0x800) != 0) {
    uVar12 = 0x3c80adfc;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4fa] + 0xf0))(param_1 + 0x4fa);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x4fe);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4ff] = 0;
    uVar12 = 0x3f666666;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3c80adfc;
    }
    *(undefined4 *)(param_1 + 0x4ff) = uVar12;
  }
  param_1[0x502] = 0;
  *(uint *)(param_1 + 0x4fe) = uVar3 & 0xfeffffff;
  param_1[0x501] = (long)"mCameraSpecialOffsetY";
  param_1[0x503] = 0;
  *(undefined4 *)(param_1 + 0x504) = 8;
  param_1[0x500] = (long)(puVar1 + 0x10);
  param_1[0x505] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x500);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x500] + 0xf0))(param_1 + 0x500);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x504) >> 7 & 1) == 0) {
    param_1[0x505] = 0;
    *(undefined4 *)(param_1 + 0x505) = 0;
  }
  param_1[0x508] = 0;
  *(uint *)(param_1 + 0x504) = *(uint *)(param_1 + 0x504) & 0xfeffffff;
  param_1[0x509] = 0;
  param_1[0x507] = (long)"mCameraDoorInOffsetY";
  *(undefined4 *)(param_1 + 0x50a) = 8;
  param_1[0x506] = (long)(puVar1 + 0x10);
  param_1[0x50b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x506);
  uVar12 = 0x40e00000;
  if ((*(uint *)(param_1 + 0x50a) & 0x800) != 0) {
    uVar12 = 0x3dfa35dd;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x506] + 0xf0))(param_1 + 0x506);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x50a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x50b] = 0;
    uVar12 = 0x40e00000;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3dfa35dd;
    }
    *(undefined4 *)(param_1 + 0x50b) = uVar12;
  }
  *(undefined4 *)(param_1 + 0x510) = 8;
  *(uint *)(param_1 + 0x50a) = uVar3 & 0xfeffffff;
  param_1[0x50d] = (long)"mIconMinScale";
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  param_1[0x50c] = (long)(puVar1 + 0x10);
  param_1[0x511] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x50c);
  uVar12 = 0x3f19999a;
  if ((*(uint *)(param_1 + 0x510) & 0x800) != 0) {
    uVar12 = 0x3c2b92a6;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x50c] + 0xf0))(param_1 + 0x50c);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x510);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x511] = 0;
    uVar12 = 0x3f19999a;
    if ((uVar3 & 0x800) != 0) {
      uVar12 = 0x3c2b92a6;
    }
    *(undefined4 *)(param_1 + 0x511) = uVar12;
  }
  param_1[0x514] = 0;
  *(uint *)(param_1 + 0x510) = uVar3 & 0xfeffffff;
  param_1[0x513] = (long)"mSmartPhoneLookAtOffsetY";
  param_1[0x515] = 0;
  *(undefined4 *)(param_1 + 0x516) = 8;
  param_1[0x512] = (long)(puVar1 + 0x10);
  param_1[0x517] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x512);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x512] + 0xf0))(param_1 + 0x512);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x516) >> 7 & 1) == 0) {
    param_1[0x517] = 0;
    *(undefined4 *)(param_1 + 0x517) = 0;
  }
  *(undefined4 *)(param_1 + 0x51c) = 8;
  *(uint *)(param_1 + 0x516) = *(uint *)(param_1 + 0x516) & 0xfeffffff;
  param_1[0x519] = (long)"mSpeedRateFPC";
  param_1[0x51a] = 0;
  param_1[0x51b] = 0;
  param_1[0x518] = (long)(puVar1 + 0x10);
  param_1[0x51d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x518);
  uVar12 = uVar13;
  if ((*(uint *)(param_1 + 0x51c) & 0x800) != 0) {
    uVar12 = 0x3c0efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x518] + 0xf0))(param_1 + 0x518);
  *puVar5 = uVar12;
  uVar3 = *(uint *)(param_1 + 0x51c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x51d] = 0;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x51d) = uVar13;
  }
  param_1[0x520] = 0;
  *(uint *)(param_1 + 0x51c) = uVar3 & 0xfeffffff;
  param_1[0x51f] = (long)"mPipeCommonJumpGravity";
  param_1[0x521] = 0;
  *(undefined4 *)(param_1 + 0x522) = 8;
  param_1[0x51e] = (long)(puVar1 + 0x10);
  param_1[0x523] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x51e);
  uVar13 = 0x3ecccccd;
  if ((*(uint *)(param_1 + 0x522) & 0x800) != 0) {
    uVar13 = 0x3be4c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x51e] + 0xf0))(param_1 + 0x51e);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x522);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x523] = 0;
    uVar13 = 0x3ecccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3be4c388;
    }
    *(undefined4 *)(param_1 + 0x523) = uVar13;
  }
  *(undefined4 *)(param_1 + 0x528) = 8;
  *(uint *)(param_1 + 0x522) = uVar3 & 0xfeffffff;
  param_1[0x525] = (long)"mPipeCommonScaleMin";
  param_1[0x526] = 0;
  param_1[0x527] = 0;
  param_1[0x524] = (long)(puVar1 + 0x10);
  param_1[0x529] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x524);
  uVar13 = 0x3f333333;
  if ((*(uint *)(param_1 + 0x528) & 0x800) != 0) {
    uVar13 = 0x3c482b17;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x524] + 0xf0))(param_1 + 0x524);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x528);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x529] = 0;
    uVar13 = 0x3f333333;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3c482b17;
    }
    *(undefined4 *)(param_1 + 0x529) = uVar13;
  }
  param_1[0x52c] = 0;
  *(uint *)(param_1 + 0x528) = uVar3 & 0xfeffffff;
  param_1[0x52b] = (long)"mPipeCommonWipeSpeed";
  param_1[0x52d] = 0;
  *(undefined4 *)(param_1 + 0x52e) = 8;
  param_1[0x52a] = (long)(puVar1 + 0x10);
  param_1[0x52f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x52a);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x52e) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x52a] + 0xf0))(param_1 + 0x52a);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x52e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x52f] = 0;
    uVar13 = 0x3f800000;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x52f) = uVar13;
  }
  param_1[0x532] = 0;
  *(uint *)(param_1 + 0x52e) = uVar3 & 0xfeffffff;
  param_1[0x531] = (long)"mPipeEnterRequestCameraFrame";
  param_1[0x533] = 0;
  *(undefined4 *)(param_1 + 0x534) = 8;
  param_1[0x530] = (long)(puVar4 + 0x10);
  param_1[0x535] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x530);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x530] + 0xf0))(param_1 + 0x530);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x534) >> 7 & 1) == 0) {
    param_1[0x535] = 0;
    *(undefined4 *)(param_1 + 0x535) = 0;
  }
  *(uint *)(param_1 + 0x534) = *(uint *)(param_1 + 0x534) & 0xfeffffff;
  param_1[0x538] = 0;
  param_1[0x537] = (long)"mPipeEnterTurnAddCalcRate";
  param_1[0x539] = 0;
  *(undefined4 *)(param_1 + 0x53a) = 8;
  param_1[0x536] = (long)(puVar1 + 0x10);
  param_1[0x53b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x536);
  uVar13 = 0x3ebd70a4;
  if ((*(uint *)(param_1 + 0x53a) & 0x800) != 0) {
    uVar13 = 0x3bd39b44;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x536] + 0xf0))(param_1 + 0x536);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x53a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x53b] = 0;
    uVar13 = 0x3ebd70a4;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3bd39b44;
    }
    *(undefined4 *)(param_1 + 0x53b) = uVar13;
  }
  param_1[0x53e] = 0;
  *(uint *)(param_1 + 0x53a) = uVar3 & 0xfeffffff;
  param_1[0x53d] = (long)"mPipeEnterScaleDownStartFrame";
  param_1[0x53f] = 0;
  *(undefined4 *)(param_1 + 0x540) = 8;
  param_1[0x53c] = (long)(puVar4 + 0x10);
  param_1[0x541] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x53c);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x53c] + 0xf0))(param_1 + 0x53c);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x540) >> 7 & 1) == 0) {
    param_1[0x541] = 0;
    *(undefined4 *)(param_1 + 0x541) = 0;
  }
  param_1[0x544] = 0;
  *(uint *)(param_1 + 0x540) = *(uint *)(param_1 + 0x540) & 0xfeffffff;
  param_1[0x543] = (long)"mPipeEnterScaleDownSpeed";
  param_1[0x545] = 0;
  *(undefined4 *)(param_1 + 0x546) = 8;
  param_1[0x542] = (long)(puVar1 + 0x10);
  param_1[0x547] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x542);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x542] + 0xf0))(param_1 + 0x542);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x546) >> 7 & 1) == 0) {
    param_1[0x547] = 0;
    *(undefined4 *)(param_1 + 0x547) = 0;
  }
  param_1[0x54a] = 0;
  *(uint *)(param_1 + 0x546) = *(uint *)(param_1 + 0x546) & 0xfeffffff;
  param_1[0x549] = (long)"mPipeEnterFallStartFrame";
  param_1[0x54b] = 0;
  *(undefined4 *)(param_1 + 0x54c) = 8;
  param_1[0x548] = (long)(puVar4 + 0x10);
  param_1[0x54d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x548);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x548] + 0xf0))(param_1 + 0x548);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x54c) >> 7 & 1) == 0) {
    param_1[0x54d] = 0;
    *(undefined4 *)(param_1 + 0x54d) = 0;
  }
  param_1[0x550] = 0;
  *(uint *)(param_1 + 0x54c) = *(uint *)(param_1 + 0x54c) & 0xfeffffff;
  param_1[0x54f] = (long)"mPipeEnterFallSpeedY";
  param_1[0x551] = 0;
  *(undefined4 *)(param_1 + 0x552) = 8;
  param_1[0x54e] = (long)(puVar1 + 0x10);
  param_1[0x553] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54e);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x54e] + 0xf0))(param_1 + 0x54e);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x552) >> 7 & 1) == 0) {
    param_1[0x553] = 0;
    *(undefined4 *)(param_1 + 0x553) = 0;
  }
  *(undefined4 *)(param_1 + 0x558) = 8;
  *(uint *)(param_1 + 0x552) = *(uint *)(param_1 + 0x552) & 0xfeffffff;
  param_1[0x555] = (long)"mPipeEnterFadeOutStartFrame";
  param_1[0x556] = 0;
  param_1[0x557] = 0;
  param_1[0x554] = (long)(puVar4 + 0x10);
  param_1[0x559] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x554);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x554] + 0xf0))(param_1 + 0x554);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x558) >> 7 & 1) == 0) {
    param_1[0x559] = 0;
    *(undefined4 *)(param_1 + 0x559) = 0;
  }
  param_1[0x55c] = 0;
  *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) & 0xfeffffff;
  param_1[0x55d] = 0;
  param_1[0x55b] = (long)"mPipeExitFadeInDelayFrame";
  *(undefined4 *)(param_1 + 0x55e) = 8;
  param_1[0x55a] = (long)(puVar4 + 0x10);
  param_1[0x55f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x55a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x55a] + 0xf0))(param_1 + 0x55a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x55e) >> 7 & 1) == 0) {
    param_1[0x55f] = 0;
    *(undefined4 *)(param_1 + 0x55f) = 0;
  }
  param_1[0x562] = 0;
  *(uint *)(param_1 + 0x55e) = *(uint *)(param_1 + 0x55e) & 0xfeffffff;
  param_1[0x561] = (long)"mPipeExitPipeSEStartFrame";
  param_1[0x563] = 0;
  *(undefined4 *)(param_1 + 0x564) = 8;
  param_1[0x560] = (long)(puVar4 + 0x10);
  param_1[0x565] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x560);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x560] + 0xf0))(param_1 + 0x560);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x564) >> 7 & 1) == 0) {
    param_1[0x565] = 0;
    *(undefined4 *)(param_1 + 0x565) = 0;
  }
  param_1[0x568] = 0;
  *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) & 0xfeffffff;
  param_1[0x569] = 0;
  param_1[0x567] = (long)"mPipeExitRiseStartFrame";
  *(undefined4 *)(param_1 + 0x56a) = 8;
  param_1[0x566] = (long)(puVar4 + 0x10);
  param_1[0x56b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x566);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x566] + 0xf0))(param_1 + 0x566);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x56a) >> 7 & 1) == 0) {
    param_1[0x56b] = 0;
    *(undefined4 *)(param_1 + 0x56b) = 0;
  }
  param_1[0x56e] = 0;
  *(uint *)(param_1 + 0x56a) = *(uint *)(param_1 + 0x56a) & 0xfeffffff;
  param_1[0x56d] = (long)"mPipeExitRiseSpeedY";
  param_1[0x56f] = 0;
  *(undefined4 *)(param_1 + 0x570) = 8;
  param_1[0x56c] = (long)(puVar1 + 0x10);
  param_1[0x571] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x56c);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x56c] + 0xf0))(param_1 + 0x56c);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x570) >> 7 & 1) == 0) {
    param_1[0x571] = 0;
    *(undefined4 *)(param_1 + 0x571) = 0;
  }
  *(uint *)(param_1 + 0x570) = *(uint *)(param_1 + 0x570) & 0xfeffffff;
  param_1[0x574] = 0;
  param_1[0x573] = (long)"mPipeExitScaleUpStartFrame";
  param_1[0x575] = 0;
  *(undefined4 *)(param_1 + 0x576) = 8;
  param_1[0x572] = (long)(puVar4 + 0x10);
  param_1[0x577] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x572);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x572] + 0xf0))(param_1 + 0x572);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x576) >> 7 & 1) == 0) {
    param_1[0x577] = 0;
    *(undefined4 *)(param_1 + 0x577) = 0;
  }
  param_1[0x57a] = 0;
  *(uint *)(param_1 + 0x576) = *(uint *)(param_1 + 0x576) & 0xfeffffff;
  param_1[0x579] = (long)"mPipeExitScaleUpSpeed";
  param_1[0x57b] = 0;
  *(undefined4 *)(param_1 + 0x57c) = 8;
  param_1[0x578] = (long)(puVar1 + 0x10);
  param_1[0x57d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x578);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x578] + 0xf0))(param_1 + 0x578);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x57c) >> 7 & 1) == 0) {
    param_1[0x57d] = 0;
    *(undefined4 *)(param_1 + 0x57d) = 0;
  }
  param_1[0x580] = 0;
  *(uint *)(param_1 + 0x57c) = *(uint *)(param_1 + 0x57c) & 0xfeffffff;
  param_1[0x57f] = (long)"mPipeExitPopCameraFrame";
  param_1[0x581] = 0;
  *(undefined4 *)(param_1 + 0x582) = 8;
  param_1[0x57e] = (long)(puVar4 + 0x10);
  param_1[0x583] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x57e);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x57e] + 0xf0))(param_1 + 0x57e);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x582) >> 7 & 1) == 0) {
    param_1[0x583] = 0;
    *(undefined4 *)(param_1 + 0x583) = 0;
  }
  *(undefined4 *)(param_1 + 0x588) = 8;
  *(uint *)(param_1 + 0x582) = *(uint *)(param_1 + 0x582) & 0xfeffffff;
  param_1[0x585] = (long)"mSWalkInAddCalcRate";
  param_1[0x586] = 0;
  param_1[0x587] = 0;
  param_1[0x584] = (long)(puVar1 + 0x10);
  param_1[0x589] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x584);
  uVar13 = 0x3f266666;
  if ((*(uint *)(param_1 + 0x588) & 0x800) != 0) {
    uVar13 = 0x3c39dede;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x584] + 0xf0))(param_1 + 0x584);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x588);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x589] = 0;
    uVar13 = 0x3f266666;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3c39dede;
    }
    *(undefined4 *)(param_1 + 0x589) = uVar13;
  }
  param_1[0x58c] = 0;
  *(uint *)(param_1 + 0x588) = uVar3 & 0xfeffffff;
  param_1[0x58d] = 0;
  param_1[0x58b] = (long)"mSWalkOutAddCalcRate";
  *(undefined4 *)(param_1 + 0x58e) = 8;
  param_1[0x58a] = (long)(puVar1 + 0x10);
  param_1[0x58f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x58a);
  uVar13 = 0x3f266666;
  if ((*(uint *)(param_1 + 0x58e) & 0x800) != 0) {
    uVar13 = 0x3c39dede;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x58a] + 0xf0))(param_1 + 0x58a);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x58e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x58f] = 0;
    uVar13 = 0x3f266666;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3c39dede;
    }
    *(undefined4 *)(param_1 + 0x58f) = uVar13;
  }
  param_1[0x592] = 0;
  *(uint *)(param_1 + 0x58e) = uVar3 & 0xfeffffff;
  param_1[0x591] = (long)"mFoodPowerT";
  param_1[0x593] = 0;
  *(undefined4 *)(param_1 + 0x594) = 8;
  param_1[0x590] = (long)(puVar2 + 0x10);
  param_1[0x595] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x590);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x590] + 0xf0))(param_1 + 0x590);
  *puVar5 = 5;
  if ((*(uint *)(param_1 + 0x594) >> 7 & 1) == 0) {
    param_1[0x595] = 0;
    *(undefined4 *)(param_1 + 0x595) = 5;
  }
  param_1[0x598] = 0;
  *(uint *)(param_1 + 0x594) = *(uint *)(param_1 + 0x594) & 0xfeffffff;
  param_1[0x599] = 0;
  param_1[0x597] = (long)"mFoodPowerN";
  *(undefined4 *)(param_1 + 0x59a) = 8;
  param_1[0x596] = (long)(puVar2 + 0x10);
  param_1[0x59b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x596);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x596] + 0xf0))(param_1 + 0x596);
  *puVar5 = 2;
  if ((*(uint *)(param_1 + 0x59a) >> 7 & 1) == 0) {
    param_1[0x59b] = 0;
    *(undefined4 *)(param_1 + 0x59b) = 2;
  }
  param_1[0x59e] = 0;
  *(uint *)(param_1 + 0x59a) = *(uint *)(param_1 + 0x59a) & 0xfeffffff;
  param_1[0x59d] = (long)"mShowIconOffsetCoX";
  param_1[0x59f] = 0;
  *(undefined4 *)(param_1 + 0x5a0) = 8;
  param_1[0x59c] = (long)(puVar1 + 0x10);
  param_1[0x5a1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x59c);
  uVar13 = 0xc04ccccd;
  if ((*(uint *)(param_1 + 0x5a0) & 0x800) != 0) {
    uVar13 = 0xbd64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x59c] + 0xf0))(param_1 + 0x59c);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x5a0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5a1] = 0;
    uVar13 = 0xc04ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0xbd64c388;
    }
    *(undefined4 *)(param_1 + 0x5a1) = uVar13;
  }
  param_1[0x5a4] = 0;
  *(uint *)(param_1 + 0x5a0) = uVar3 & 0xfeffffff;
  param_1[0x5a5] = 0;
  param_1[0x5a3] = (long)"mShowIconOffsetCoY";
  *(undefined4 *)(param_1 + 0x5a6) = 8;
  param_1[0x5a2] = (long)(puVar1 + 0x10);
  param_1[0x5a7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a2);
  uVar13 = 0x40800000;
  if ((*(uint *)(param_1 + 0x5a6) & 0x800) != 0) {
    uVar13 = 0x3d8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5a2] + 0xf0))(param_1 + 0x5a2);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x5a6);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5a7] = 0;
    uVar13 = 0x40800000;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3d8efa35;
    }
    *(undefined4 *)(param_1 + 0x5a7) = uVar13;
  }
  param_1[0x5aa] = 0;
  *(uint *)(param_1 + 0x5a6) = uVar3 & 0xfeffffff;
  param_1[0x5a9] = (long)"mShowIconOffsetCoZ";
  param_1[0x5ab] = 0;
  *(undefined4 *)(param_1 + 0x5ac) = 8;
  param_1[0x5a8] = (long)(puVar1 + 0x10);
  param_1[0x5ad] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a8);
  uVar13 = uVar14;
  if ((*(uint *)(param_1 + 0x5ac) & 0x800) != 0) {
    uVar13 = 0x3db2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5a8] + 0xf0))(param_1 + 0x5a8);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x5ac);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5ad] = 0;
    uVar13 = uVar14;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x5ad) = uVar13;
  }
  param_1[0x5b0] = 0;
  *(uint *)(param_1 + 0x5ac) = uVar3 & 0xfeffffff;
  param_1[0x5b1] = 0;
  param_1[0x5af] = (long)"mShowIconOffsetCoInterpolationRate";
  *(undefined4 *)(param_1 + 0x5b2) = 8;
  param_1[0x5ae] = (long)(puVar1 + 0x10);
  param_1[0x5b3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5ae);
  uVar13 = 0x3e800000;
  if ((*(uint *)(param_1 + 0x5b2) & 0x800) != 0) {
    uVar13 = 0x3b8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5ae] + 0xf0))(param_1 + 0x5ae);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x5b2);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5b3] = 0;
    uVar13 = 0x3e800000;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0x5b3) = uVar13;
  }
  param_1[0x5b6] = 0;
  *(uint *)(param_1 + 0x5b2) = uVar3 & 0xfeffffff;
  param_1[0x5b5] = (long)"mShowIconOffsetDrX";
  param_1[0x5b7] = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 8;
  param_1[0x5b4] = (long)(puVar1 + 0x10);
  param_1[0x5b9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5b4);
  uVar13 = 0xc04ccccd;
  if ((*(uint *)(param_1 + 0x5b8) & 0x800) != 0) {
    uVar13 = 0xbd64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5b4] + 0xf0))(param_1 + 0x5b4);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x5b8);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5b9] = 0;
    uVar13 = 0xc04ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0xbd64c388;
    }
    *(undefined4 *)(param_1 + 0x5b9) = uVar13;
  }
  param_1[0x5bc] = 0;
  *(uint *)(param_1 + 0x5b8) = uVar3 & 0xfeffffff;
  param_1[0x5bd] = 0;
  param_1[0x5bb] = (long)"mShowIconOffsetDrY";
  *(undefined4 *)(param_1 + 0x5be) = 8;
  param_1[0x5ba] = (long)(puVar1 + 0x10);
  param_1[0x5bf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5ba);
  uVar13 = 0x40800000;
  if ((*(uint *)(param_1 + 0x5be) & 0x800) != 0) {
    uVar13 = 0x3d8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5ba] + 0xf0))(param_1 + 0x5ba);
  *puVar5 = uVar13;
  uVar3 = *(uint *)(param_1 + 0x5be);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5bf] = 0;
    uVar13 = 0x40800000;
    if ((uVar3 & 0x800) != 0) {
      uVar13 = 0x3d8efa35;
    }
    *(undefined4 *)(param_1 + 0x5bf) = uVar13;
  }
  *(undefined4 *)(param_1 + 0x5c4) = 8;
  *(uint *)(param_1 + 0x5be) = uVar3 & 0xfeffffff;
  param_1[0x5c1] = (long)"mShowIconOffsetDrZ";
  param_1[0x5c2] = 0;
  param_1[0x5c3] = 0;
  param_1[0x5c0] = (long)(puVar1 + 0x10);
  param_1[0x5c5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5c0);
  if ((*(uint *)(param_1 + 0x5c4) & 0x800) != 0) {
    uVar11 = 0x3db2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5c0] + 0xf0))(param_1 + 0x5c0);
  *puVar5 = uVar11;
  uVar3 = *(uint *)(param_1 + 0x5c4);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5c5] = 0;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x5c5) = uVar14;
  }
  param_1[0x5c8] = 0;
  *(uint *)(param_1 + 0x5c4) = uVar3 & 0xfeffffff;
  param_1[0x5c7] = (long)"mShowIconOffsetCoFX";
  param_1[0x5c9] = 0;
  *(undefined4 *)(param_1 + 0x5ca) = 8;
  param_1[0x5c6] = (long)(puVar1 + 0x10);
  param_1[0x5cb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5c6);
  uVar14 = 0xc04ccccd;
  if ((*(uint *)(param_1 + 0x5ca) & 0x800) != 0) {
    uVar14 = 0xbd64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5c6] + 0xf0))(param_1 + 0x5c6);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x5ca);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5cb] = 0;
    uVar14 = 0xc04ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0xbd64c388;
    }
    *(undefined4 *)(param_1 + 0x5cb) = uVar14;
  }
  *(undefined4 *)(param_1 + 0x5d0) = 8;
  *(uint *)(param_1 + 0x5ca) = uVar3 & 0xfeffffff;
  param_1[0x5cd] = (long)"mShowIconOffsetCoFY";
  param_1[0x5ce] = 0;
  param_1[0x5cf] = 0;
  param_1[0x5cc] = (long)(puVar1 + 0x10);
  param_1[0x5d1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5cc);
  uVar14 = 0x40200000;
  if ((*(uint *)(param_1 + 0x5d0) & 0x800) != 0) {
    uVar14 = 0x3d32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5cc] + 0xf0))(param_1 + 0x5cc);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x5d0);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5d1] = 0;
    uVar14 = 0x40200000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d32b8c2;
    }
    *(undefined4 *)(param_1 + 0x5d1) = uVar14;
  }
  param_1[0x5d4] = 0;
  *(uint *)(param_1 + 0x5d0) = uVar3 & 0xfeffffff;
  param_1[0x5d3] = (long)"mShowIconOffsetCoFZ";
  param_1[0x5d5] = 0;
  *(undefined4 *)(param_1 + 0x5d6) = 8;
  param_1[0x5d2] = (long)(puVar1 + 0x10);
  param_1[0x5d7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5d2);
  uVar14 = 0x40200000;
  if ((*(uint *)(param_1 + 0x5d6) & 0x800) != 0) {
    uVar14 = 0x3d32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5d2] + 0xf0))(param_1 + 0x5d2);
  *puVar5 = uVar14;
  uVar3 = *(uint *)(param_1 + 0x5d6);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5d7] = 0;
    uVar14 = 0x40200000;
    if ((uVar3 & 0x800) != 0) {
      uVar14 = 0x3d32b8c2;
    }
    *(undefined4 *)(param_1 + 0x5d7) = uVar14;
  }
  param_1[0x5da] = 0;
  *(uint *)(param_1 + 0x5d6) = uVar3 & 0xfeffffff;
  param_1[0x5d9] = (long)"mTumblePercentFD";
  param_1[0x5db] = 0;
  *(undefined4 *)(param_1 + 0x5dc) = 8;
  param_1[0x5d8] = (long)(puVar2 + 0x10);
  param_1[0x5dd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5d8);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5d8] + 0xf0))(param_1 + 0x5d8);
  *puVar5 = 2;
  if ((*(uint *)(param_1 + 0x5dc) >> 7 & 1) == 0) {
    param_1[0x5dd] = 0;
    *(undefined4 *)(param_1 + 0x5dd) = 2;
  }
  *(uint *)(param_1 + 0x5dc) = *(uint *)(param_1 + 0x5dc) & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

