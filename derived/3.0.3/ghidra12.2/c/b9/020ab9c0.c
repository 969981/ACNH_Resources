
void FUN_020ab9c0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  
  FUN_00751ec0();
  puVar3 = PTR_DAT_04bb3380;
  *param_1 = (long)&PTR_FUN_04a71f70;
  param_1[0x19] = (long)"mUpdateFrame";
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
  puVar4 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0x1e;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mNaturalChangeValue";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar7 = param_1 + 0x1e;
  *plVar7 = (long)(puVar3 + 0x10);
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar3 + 0x10);
  param_1[0x25] = (long)"mNaturalChangeTime";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar4 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar3 + 0x10);
  param_1[0x2b] = (long)"mDoingChangeValue";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar3 + 0x10);
  param_1[0x31] = (long)"mDoingChangeTime";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar4 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x34) >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  }
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x36] = (long)(puVar3 + 0x10);
  param_1[0x37] = (long)"mDoingStopChangeValue";
  param_1[0x3b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x3a) >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar3 + 0x10);
  param_1[0x3d] = (long)"mDoingStopChangeTime";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar4 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  param_1[0x43] = (long)"mRecoverThresholdValue";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar3 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x46) >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xfeffffff;
  param_1[0x49] = (long)"mRecoverChangeValue";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar3 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x4c) >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    *(undefined4 *)(param_1 + 0x4d) = 0;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfeffffff;
  param_1[0x4f] = (long)"mRecoverChangeTime";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4e] = (long)(puVar3 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar4 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x52) >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  }
  param_1[0x56] = 0;
  *(uint *)(param_1 + 0x52) = *(uint *)(param_1 + 0x52) & 0xfeffffff;
  param_1[0x55] = (long)"mLostThresholdValue";
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x54] = (long)(puVar3 + 0x10);
  param_1[0x59] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar4 = 0x42;
  if ((*(uint *)(param_1 + 0x58) >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0x42;
  }
  param_1[0x5c] = 0;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfeffffff;
  param_1[0x5b] = (long)"mNormalThresholdValue";
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5a] = (long)(puVar3 + 0x10);
  param_1[0x5f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar4 = 0x21;
  if ((*(uint *)(param_1 + 0x5e) >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    *(undefined4 *)(param_1 + 0x5f) = 0x21;
  }
  param_1[0x62] = 0;
  *(uint *)(param_1 + 0x5e) = *(uint *)(param_1 + 0x5e) & 0xfeffffff;
  param_1[0x61] = (long)"mConflictStartLineSlope";
  param_1[99] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x60] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x60);
  uVar8 = 0x40000000;
  if ((*(uint *)(param_1 + 100) & 0x800) != 0) {
    uVar8 = 0x3d0efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x60] + 0xf0))(param_1 + 0x60);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 100);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x65] = 0;
    uVar8 = 0x40000000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x65) = uVar8;
  }
  param_1[0x68] = 0;
  *(uint *)(param_1 + 100) = uVar1 & 0xfeffffff;
  param_1[0x67] = (long)"mConflictStartLineOffset";
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x66] = (long)(puVar2 + 0x10);
  param_1[0x6b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x66);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x66] + 0xf0))(param_1 + 0x66);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x6a) >> 7 & 1) == 0) {
    param_1[0x6b] = 0;
    *(undefined4 *)(param_1 + 0x6b) = 0;
  }
  param_1[0x6e] = 0;
  *(uint *)(param_1 + 0x6a) = *(uint *)(param_1 + 0x6a) & 0xfeffffff;
  param_1[0x6d] = (long)"mConflictEndLineSlope";
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6c] = (long)(puVar2 + 0x10);
  param_1[0x71] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6c);
  uVar8 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x70) & 0x800) != 0) {
    uVar8 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x6c] + 0xf0))(param_1 + 0x6c);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x70);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x71] = 0;
    uVar8 = 0x3f800000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x71) = uVar8;
  }
  param_1[0x74] = 0;
  *(uint *)(param_1 + 0x70) = uVar1 & 0xfeffffff;
  param_1[0x73] = (long)"mConflictEndLineOffset";
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x72] = (long)(puVar2 + 0x10);
  param_1[0x77] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x72);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x72] + 0xf0))(param_1 + 0x72);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x76) >> 7 & 1) == 0) {
    param_1[0x77] = 0;
    *(undefined4 *)(param_1 + 0x77) = 0;
  }
  param_1[0x7a] = 0;
  *(uint *)(param_1 + 0x76) = *(uint *)(param_1 + 0x76) & 0xfeffffff;
  param_1[0x79] = (long)"mConflictChangeSlope";
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x78] = (long)(puVar2 + 0x10);
  param_1[0x7d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x78);
  uVar8 = 0xbd4ccccd;
  if ((*(uint *)(param_1 + 0x7c) & 0x800) != 0) {
    uVar8 = 0xba64c388;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x78] + 0xf0))(param_1 + 0x78);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x7c);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x7d] = 0;
    uVar8 = 0xbd4ccccd;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0xba64c388;
    }
    *(undefined4 *)(param_1 + 0x7d) = uVar8;
  }
  param_1[0x80] = 0;
  *(uint *)(param_1 + 0x7c) = uVar1 & 0xfeffffff;
  param_1[0x7f] = (long)"mConflictInterestChange";
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7e] = (long)(puVar3 + 0x10);
  param_1[0x83] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7e);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x7e] + 0xf0))(param_1 + 0x7e);
  *puVar4 = 0xfffffffe;
  if ((*(uint *)(param_1 + 0x82) >> 7 & 1) == 0) {
    param_1[0x83] = 0;
    *(undefined4 *)(param_1 + 0x83) = 0xfffffffe;
  }
  param_1[0x86] = 0;
  *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfeffffff;
  param_1[0x85] = (long)"mConflictInterestStopChange";
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x84] = (long)(puVar3 + 0x10);
  param_1[0x89] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x84);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x84] + 0xf0))(param_1 + 0x84);
  *puVar4 = 0xfffffffc;
  if ((*(uint *)(param_1 + 0x88) >> 7 & 1) == 0) {
    param_1[0x89] = 0;
    *(undefined4 *)(param_1 + 0x89) = 0xfffffffc;
  }
  param_1[0x8c] = 0;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfeffffff;
  param_1[0x8b] = (long)"mConflictChangeTime";
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8a] = (long)(puVar3 + 0x10);
  param_1[0x8f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x8a);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x8a] + 0xf0))(param_1 + 0x8a);
  *puVar4 = 1;
  if ((*(uint *)(param_1 + 0x8e) >> 7 & 1) == 0) {
    param_1[0x8f] = 0;
    *(undefined4 *)(param_1 + 0x8f) = 1;
  }
  param_1[0x92] = 0;
  *(uint *)(param_1 + 0x8e) = *(uint *)(param_1 + 0x8e) & 0xfeffffff;
  param_1[0x91] = (long)"mConflictChangeRange";
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x90] = (long)(puVar3 + 0x10);
  param_1[0x95] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x90);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x90] + 0xf0))(param_1 + 0x90);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x94) >> 7 & 1) == 0) {
    param_1[0x95] = 0;
    *(undefined4 *)(param_1 + 0x95) = 0;
  }
  param_1[0x98] = 0;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfeffffff;
  param_1[0x97] = (long)"mConflictInterestChangeRange";
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x96] = (long)(puVar3 + 0x10);
  param_1[0x9b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x96);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x96] + 0xf0))(param_1 + 0x96);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x9a) >> 7 & 1) == 0) {
    param_1[0x9b] = 0;
    *(undefined4 *)(param_1 + 0x9b) = 0;
  }
  param_1[0x9e] = 0;
  *(uint *)(param_1 + 0x9a) = *(uint *)(param_1 + 0x9a) & 0xfeffffff;
  param_1[0x9d] = (long)"mConflictChangeRangeTime";
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9c] = (long)(puVar3 + 0x10);
  param_1[0xa1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x9c] + 0xf0))(param_1 + 0x9c);
  *puVar4 = 10;
  if ((*(uint *)(param_1 + 0xa0) >> 7 & 1) == 0) {
    param_1[0xa1] = 0;
    *(undefined4 *)(param_1 + 0xa1) = 10;
  }
  param_1[0xa4] = 0;
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfeffffff;
  param_1[0xa3] = (long)"mConflictQuitLineOffset";
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa2] = (long)(puVar2 + 0x10);
  param_1[0xa7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa2);
  uVar8 = 0x41840000;
  if ((*(uint *)(param_1 + 0xa6) & 0x800) != 0) {
    uVar8 = 0x3e937207;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0xa2] + 0xf0))(param_1 + 0xa2);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0xa6);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xa7] = 0;
    uVar8 = 0x41840000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3e937207;
    }
    *(undefined4 *)(param_1 + 0xa7) = uVar8;
  }
  param_1[0xaa] = 0;
  *(uint *)(param_1 + 0xa6) = uVar1 & 0xfeffffff;
  param_1[0xa9] = (long)"mConflictQuitConcentrateTh";
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa8] = (long)(puVar3 + 0x10);
  param_1[0xad] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa8);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xa8] + 0xf0))(param_1 + 0xa8);
  *puVar4 = 0x21;
  if ((*(uint *)(param_1 + 0xac) >> 7 & 1) == 0) {
    param_1[0xad] = 0;
    *(undefined4 *)(param_1 + 0xad) = 0x21;
  }
  param_1[0xb0] = 0;
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) & 0xfeffffff;
  param_1[0xaf] = (long)"mConflictQuitInterestTh";
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xae] = (long)(puVar3 + 0x10);
  param_1[0xb3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xae);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xae] + 0xf0))(param_1 + 0xae);
  *puVar4 = 0x32;
  if ((*(uint *)(param_1 + 0xb2) >> 7 & 1) == 0) {
    param_1[0xb3] = 0;
    *(undefined4 *)(param_1 + 0xb3) = 0x32;
  }
  param_1[0xb6] = 0;
  *(uint *)(param_1 + 0xb2) = *(uint *)(param_1 + 0xb2) & 0xfeffffff;
  param_1[0xb5] = (long)"mConflictReverseEndThMin";
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xb4] = (long)(puVar3 + 0x10);
  param_1[0xb9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb4);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xb4] + 0xf0))(param_1 + 0xb4);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0xb8) >> 7 & 1) == 0) {
    param_1[0xb9] = 0;
    *(undefined4 *)(param_1 + 0xb9) = 0;
  }
  param_1[0xbc] = 0;
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfeffffff;
  param_1[0xbb] = (long)"mConflictReverseEndThMax";
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xba] = (long)(puVar3 + 0x10);
  param_1[0xbf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xba);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xba] + 0xf0))(param_1 + 0xba);
  *puVar4 = 0x32;
  if ((*(uint *)(param_1 + 0xbe) >> 7 & 1) == 0) {
    param_1[0xbf] = 0;
    *(undefined4 *)(param_1 + 0xbf) = 0x32;
  }
  param_1[0xc2] = 0;
  *(uint *)(param_1 + 0xbe) = *(uint *)(param_1 + 0xbe) & 0xfeffffff;
  param_1[0xc1] = (long)"mConflictReverseEndRateMax";
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc0] = (long)(puVar3 + 0x10);
  param_1[0xc5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc0);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xc0] + 0xf0))(param_1 + 0xc0);
  *puVar4 = 0x14;
  if ((*(uint *)(param_1 + 0xc4) >> 7 & 1) == 0) {
    param_1[0xc5] = 0;
    *(undefined4 *)(param_1 + 0xc5) = 0x14;
  }
  param_1[200] = 0;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfeffffff;
  param_1[199] = (long)"mConflictReverseEndRateMin";
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xc6] = (long)(puVar3 + 0x10);
  param_1[0xcb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc6);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xc6] + 0xf0))(param_1 + 0xc6);
  *puVar4 = 10;
  if ((*(uint *)(param_1 + 0xca) >> 7 & 1) == 0) {
    param_1[0xcb] = 0;
    *(undefined4 *)(param_1 + 0xcb) = 10;
  }
  param_1[0xce] = 0;
  *(uint *)(param_1 + 0xca) = *(uint *)(param_1 + 0xca) & 0xfeffffff;
  param_1[0xcd] = (long)"mConflictReverseEndNeedValue";
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xcc] = (long)(puVar3 + 0x10);
  param_1[0xd1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcc);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xcc] + 0xf0))(param_1 + 0xcc);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0xd0) >> 7 & 1) == 0) {
    param_1[0xd1] = 0;
    *(undefined4 *)(param_1 + 0xd1) = 0x1e;
  }
  param_1[0xd4] = 0;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) & 0xfeffffff;
  param_1[0xd3] = (long)"mInterestRushRateMin";
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd2] = (long)(puVar3 + 0x10);
  param_1[0xd7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd2);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xd2] + 0xf0))(param_1 + 0xd2);
  *puVar4 = 0x14;
  if ((*(uint *)(param_1 + 0xd6) >> 7 & 1) == 0) {
    param_1[0xd7] = 0;
    *(undefined4 *)(param_1 + 0xd7) = 0x14;
  }
  param_1[0xda] = 0;
  *(uint *)(param_1 + 0xd6) = *(uint *)(param_1 + 0xd6) & 0xfeffffff;
  param_1[0xd9] = (long)"mInterestRushRateMax";
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xd8] = (long)(puVar3 + 0x10);
  param_1[0xdd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd8);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xd8] + 0xf0))(param_1 + 0xd8);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0xdc) >> 7 & 1) == 0) {
    param_1[0xdd] = 0;
    *(undefined4 *)(param_1 + 0xdd) = 0x1e;
  }
  param_1[0xe0] = 0;
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) & 0xfeffffff;
  param_1[0xdf] = (long)"mInterestChangeValue";
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xde] = (long)(puVar3 + 0x10);
  param_1[0xe3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xde);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xde] + 0xf0))(param_1 + 0xde);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0xe2) >> 7 & 1) == 0) {
    param_1[0xe3] = 0;
    *(undefined4 *)(param_1 + 0xe3) = 5;
  }
  param_1[0xe6] = 0;
  *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfeffffff;
  param_1[0xe5] = (long)"mInterestChangeTime";
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  param_1[0xe4] = (long)(puVar3 + 0x10);
  param_1[0xe9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe4);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xe4] + 0xf0))(param_1 + 0xe4);
  *puVar4 = 1;
  if ((*(uint *)(param_1 + 0xe8) >> 7 & 1) == 0) {
    param_1[0xe9] = 0;
    *(undefined4 *)(param_1 + 0xe9) = 1;
  }
  param_1[0xec] = 0;
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xfeffffff;
  param_1[0xeb] = (long)"mInterestGainRate";
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xea] = (long)(puVar2 + 0x10);
  param_1[0xef] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xea);
  uVar8 = 0x3f666666;
  if ((*(uint *)(param_1 + 0xee) & 0x800) != 0) {
    uVar8 = 0x3c80adfc;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0xea] + 0xf0))(param_1 + 0xea);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0xee);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xef] = 0;
    uVar8 = 0x3f666666;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3c80adfc;
    }
    *(undefined4 *)(param_1 + 0xef) = uVar8;
  }
  param_1[0xf2] = 0;
  *(uint *)(param_1 + 0xee) = uVar1 & 0xfeffffff;
  param_1[0xf1] = (long)"mInterestGainTime";
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf0] = (long)(puVar3 + 0x10);
  param_1[0xf5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf0);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xf0] + 0xf0))(param_1 + 0xf0);
  *puVar4 = 1;
  if ((*(uint *)(param_1 + 0xf4) >> 7 & 1) == 0) {
    param_1[0xf5] = 0;
    *(undefined4 *)(param_1 + 0xf5) = 1;
  }
  param_1[0xf8] = 0;
  *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfeffffff;
  param_1[0xf7] = (long)"mConcentrateInterest1to2V";
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xf6] = (long)(puVar3 + 0x10);
  param_1[0xfb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf6);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xf6] + 0xf0))(param_1 + 0xf6);
  *puVar4 = 0x50;
  if ((*(uint *)(param_1 + 0xfa) >> 7 & 1) == 0) {
    param_1[0xfb] = 0;
    *(undefined4 *)(param_1 + 0xfb) = 0x50;
  }
  param_1[0xfe] = 0;
  *(uint *)(param_1 + 0xfa) = *(uint *)(param_1 + 0xfa) & 0xfeffffff;
  param_1[0xfd] = (long)"mConcentrateInterest2to3V";
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0xfc] = (long)(puVar3 + 0x10);
  param_1[0x101] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xfc);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xfc] + 0xf0))(param_1 + 0xfc);
  *puVar4 = 0x3c;
  if ((*(uint *)(param_1 + 0x100) >> 7 & 1) == 0) {
    param_1[0x101] = 0;
    *(undefined4 *)(param_1 + 0x101) = 0x3c;
  }
  param_1[0x104] = 0;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) & 0xfeffffff;
  param_1[0x103] = (long)"mConcentrateInterest3to4V";
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x102] = (long)(puVar3 + 0x10);
  param_1[0x107] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x102);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x102] + 0xf0))(param_1 + 0x102);
  *puVar4 = 0x28;
  if ((*(uint *)(param_1 + 0x106) >> 7 & 1) == 0) {
    param_1[0x107] = 0;
    *(undefined4 *)(param_1 + 0x107) = 0x28;
  }
  param_1[0x10a] = 0;
  *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfeffffff;
  param_1[0x109] = (long)"mConcentrateInterest4to5V";
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  param_1[0x108] = (long)(puVar3 + 0x10);
  param_1[0x10d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x108);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x108] + 0xf0))(param_1 + 0x108);
  *puVar4 = 0x14;
  if ((*(uint *)(param_1 + 0x10c) >> 7 & 1) == 0) {
    param_1[0x10d] = 0;
    *(undefined4 *)(param_1 + 0x10d) = 0x14;
  }
  param_1[0x110] = 0;
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfeffffff;
  param_1[0x10f] = (long)"mConcentrateInterest1to2H";
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  param_1[0x10e] = (long)(puVar3 + 0x10);
  param_1[0x113] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x10e);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x10e] + 0xf0))(param_1 + 0x10e);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x112) >> 7 & 1) == 0) {
    param_1[0x113] = 0;
    *(undefined4 *)(param_1 + 0x113) = 0;
  }
  param_1[0x116] = 0;
  *(uint *)(param_1 + 0x112) = *(uint *)(param_1 + 0x112) & 0xfeffffff;
  param_1[0x115] = (long)"mConcentrateInterest2to3H";
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  param_1[0x114] = (long)(puVar3 + 0x10);
  param_1[0x119] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x114);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x114] + 0xf0))(param_1 + 0x114);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x118) >> 7 & 1) == 0) {
    param_1[0x119] = 0;
    *(undefined4 *)(param_1 + 0x119) = 0;
  }
  param_1[0x11c] = 0;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfeffffff;
  param_1[0x11b] = (long)"mConcentrateInterest3to4H";
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  param_1[0x11a] = (long)(puVar3 + 0x10);
  param_1[0x11f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x11a);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x11a] + 0xf0))(param_1 + 0x11a);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x11e) >> 7 & 1) == 0) {
    param_1[0x11f] = 0;
    *(undefined4 *)(param_1 + 0x11f) = 0;
  }
  param_1[0x122] = 0;
  *(uint *)(param_1 + 0x11e) = *(uint *)(param_1 + 0x11e) & 0xfeffffff;
  param_1[0x121] = (long)"mConcentrateInterest4to5H";
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  param_1[0x120] = (long)(puVar3 + 0x10);
  param_1[0x125] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x120);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x120] + 0xf0))(param_1 + 0x120);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x124) >> 7 & 1) == 0) {
    param_1[0x125] = 0;
    *(undefined4 *)(param_1 + 0x125) = 0;
  }
  param_1[0x128] = 0;
  *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xfeffffff;
  param_1[0x127] = (long)"mNeedStartValue";
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  param_1[0x126] = (long)(puVar3 + 0x10);
  param_1[299] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x126);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x126] + 0xf0))(param_1 + 0x126);
  *puVar4 = 100;
  if ((*(uint *)(param_1 + 0x12a) >> 7 & 1) == 0) {
    param_1[299] = 0;
    *(undefined4 *)(param_1 + 299) = 100;
  }
  param_1[0x12e] = 0;
  *(uint *)(param_1 + 0x12a) = *(uint *)(param_1 + 0x12a) & 0xfeffffff;
  param_1[0x12d] = (long)"mNeedCurveBias";
  param_1[0x12f] = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  param_1[300] = (long)(puVar2 + 0x10);
  param_1[0x131] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 300);
  uVar8 = 0x3f400000;
  if ((*(uint *)(param_1 + 0x130) & 0x800) != 0) {
    uVar8 = 0x3c567750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[300] + 0xf0))(param_1 + 300);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x130);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x131] = 0;
    uVar8 = 0x3f400000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3c567750;
    }
    *(undefined4 *)(param_1 + 0x131) = uVar8;
  }
  param_1[0x134] = 0;
  *(uint *)(param_1 + 0x130) = uVar1 & 0xfeffffff;
  param_1[0x133] = (long)"mNeedLimitValue";
  param_1[0x135] = 0;
  *(undefined4 *)(param_1 + 0x136) = 0;
  param_1[0x132] = (long)(puVar3 + 0x10);
  param_1[0x137] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x132);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x132] + 0xf0))(param_1 + 0x132);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x136) >> 7 & 1) == 0) {
    param_1[0x137] = 0;
    *(undefined4 *)(param_1 + 0x137) = 0;
  }
  param_1[0x13a] = 0;
  *(uint *)(param_1 + 0x136) = *(uint *)(param_1 + 0x136) & 0xfeffffff;
  param_1[0x139] = (long)"mNeedLimitTime";
  param_1[0x13b] = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  param_1[0x138] = (long)(puVar3 + 0x10);
  param_1[0x13d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x138);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x138] + 0xf0))(param_1 + 0x138);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x13c) >> 7 & 1) == 0) {
    param_1[0x13d] = 0;
    *(undefined4 *)(param_1 + 0x13d) = 0x1e;
  }
  param_1[0x140] = 0;
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfeffffff;
  param_1[0x13f] = (long)"mNeedNaturalChange";
  param_1[0x141] = 0;
  *(undefined4 *)(param_1 + 0x142) = 0;
  param_1[0x13e] = (long)(puVar3 + 0x10);
  param_1[0x143] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x13e);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x13e] + 0xf0))(param_1 + 0x13e);
  *puVar4 = 1;
  if ((*(uint *)(param_1 + 0x142) >> 7 & 1) == 0) {
    param_1[0x143] = 0;
    *(undefined4 *)(param_1 + 0x143) = 1;
  }
  param_1[0x146] = 0;
  *(uint *)(param_1 + 0x142) = *(uint *)(param_1 + 0x142) & 0xfeffffff;
  param_1[0x145] = (long)"mNeedNaturalChangeTime";
  param_1[0x147] = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  param_1[0x144] = (long)(puVar3 + 0x10);
  param_1[0x149] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x144);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x144] + 0xf0))(param_1 + 0x144);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x148) >> 7 & 1) == 0) {
    param_1[0x149] = 0;
    *(undefined4 *)(param_1 + 0x149) = 5;
  }
  param_1[0x14c] = 0;
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfeffffff;
  param_1[0x14b] = (long)"mSightAngle";
  param_1[0x14d] = 0;
  *(undefined4 *)(param_1 + 0x14e) = 0;
  param_1[0x14a] = (long)(puVar2 + 0x10);
  param_1[0x14f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x14a);
  uVar8 = 0x42b40000;
  if ((*(uint *)(param_1 + 0x14e) & 0x800) != 0) {
    uVar8 = 0x3fc90fdb;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x14a] + 0xf0))(param_1 + 0x14a);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x14e);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x14f] = 0;
    uVar8 = 0x42b40000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3fc90fdb;
    }
    *(undefined4 *)(param_1 + 0x14f) = uVar8;
  }
  param_1[0x152] = 0;
  *(uint *)(param_1 + 0x14e) = uVar1 & 0xfeffffff;
  param_1[0x151] = (long)"mSightLength";
  param_1[0x153] = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  param_1[0x150] = (long)(puVar2 + 0x10);
  param_1[0x155] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x150);
  uVar8 = 0x42700000;
  if ((*(uint *)(param_1 + 0x154) & 0x800) != 0) {
    uVar8 = 0x3f860a92;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x150] + 0xf0))(param_1 + 0x150);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x154);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x155] = 0;
    uVar8 = 0x42700000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3f860a92;
    }
    *(undefined4 *)(param_1 + 0x155) = uVar8;
  }
  param_1[0x158] = 0;
  *(uint *)(param_1 + 0x154) = uVar1 & 0xfeffffff;
  param_1[0x157] = (long)"mPersonalSpaceRadius";
  param_1[0x159] = 0;
  *(undefined4 *)(param_1 + 0x15a) = 0;
  param_1[0x156] = (long)(puVar2 + 0x10);
  param_1[0x15b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x156);
  uVar8 = 0x41700000;
  if ((*(uint *)(param_1 + 0x15a) & 0x800) != 0) {
    uVar8 = 0x3e860a92;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x156] + 0xf0))(param_1 + 0x156);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x15a);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x15b] = 0;
    uVar8 = 0x41700000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0x15b) = uVar8;
  }
  param_1[0x15e] = 0;
  *(uint *)(param_1 + 0x15a) = uVar1 & 0xfeffffff;
  param_1[0x15d] = (long)"mPersonalSpaceReactionTime";
  param_1[0x15f] = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  param_1[0x15c] = (long)(puVar3 + 0x10);
  param_1[0x161] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x15c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x15c] + 0xf0))(param_1 + 0x15c);
  *puVar4 = 0x5a;
  if ((*(uint *)(param_1 + 0x160) >> 7 & 1) == 0) {
    param_1[0x161] = 0;
    *(undefined4 *)(param_1 + 0x161) = 0x5a;
  }
  param_1[0x164] = 0;
  *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) & 0xfeffffff;
  param_1[0x163] = (long)"mPersonalSpaceCollisionRate";
  param_1[0x165] = 0;
  *(undefined4 *)(param_1 + 0x166) = 0;
  param_1[0x162] = (long)(puVar3 + 0x10);
  param_1[0x167] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x162);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x162] + 0xf0))(param_1 + 0x162);
  *puVar4 = 6;
  if ((*(uint *)(param_1 + 0x166) >> 7 & 1) == 0) {
    param_1[0x167] = 0;
    *(undefined4 *)(param_1 + 0x167) = 6;
  }
  param_1[0x16a] = 0;
  *(uint *)(param_1 + 0x166) = *(uint *)(param_1 + 0x166) & 0xfeffffff;
  param_1[0x169] = (long)"mConversationTalkFrameMin";
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  param_1[0x168] = (long)(puVar3 + 0x10);
  param_1[0x16d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x168);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x168] + 0xf0))(param_1 + 0x168);
  *puVar4 = 0x5a;
  if ((*(uint *)(param_1 + 0x16c) >> 7 & 1) == 0) {
    param_1[0x16d] = 0;
    *(undefined4 *)(param_1 + 0x16d) = 0x5a;
  }
  param_1[0x170] = 0;
  *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) & 0xfeffffff;
  param_1[0x16f] = (long)"mConversationTalkFrameMax";
  param_1[0x171] = 0;
  *(undefined4 *)(param_1 + 0x172) = 0;
  param_1[0x16e] = (long)(puVar3 + 0x10);
  param_1[0x173] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x16e);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x16e] + 0xf0))(param_1 + 0x16e);
  *puVar4 = 0x78;
  if ((*(uint *)(param_1 + 0x172) >> 7 & 1) == 0) {
    param_1[0x173] = 0;
    *(undefined4 *)(param_1 + 0x173) = 0x78;
  }
  param_1[0x176] = 0;
  *(uint *)(param_1 + 0x172) = *(uint *)(param_1 + 0x172) & 0xfeffffff;
  param_1[0x175] = (long)"mConversationReactionFrameMin";
  param_1[0x177] = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  param_1[0x174] = (long)(puVar3 + 0x10);
  param_1[0x179] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x174);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x174] + 0xf0))(param_1 + 0x174);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x178) >> 7 & 1) == 0) {
    param_1[0x179] = 0;
    *(undefined4 *)(param_1 + 0x179) = 0;
  }
  param_1[0x17c] = 0;
  *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xfeffffff;
  param_1[0x17b] = (long)"mConversationReactionFrameMax";
  param_1[0x17d] = 0;
  *(undefined4 *)(param_1 + 0x17e) = 0;
  param_1[0x17a] = (long)(puVar3 + 0x10);
  param_1[0x17f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x17a);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x17a] + 0xf0))(param_1 + 0x17a);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x17e) >> 7 & 1) == 0) {
    param_1[0x17f] = 0;
    *(undefined4 *)(param_1 + 0x17f) = 0x1e;
  }
  param_1[0x182] = 0;
  *(uint *)(param_1 + 0x17e) = *(uint *)(param_1 + 0x17e) & 0xfeffffff;
  param_1[0x181] = (long)"mConversationEndFrameMin";
  param_1[0x183] = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  param_1[0x180] = (long)(puVar3 + 0x10);
  param_1[0x185] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x180);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x180] + 0xf0))(param_1 + 0x180);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x184) >> 7 & 1) == 0) {
    param_1[0x185] = 0;
    *(undefined4 *)(param_1 + 0x185) = 0;
  }
  param_1[0x188] = 0;
  *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x184) & 0xfeffffff;
  param_1[0x187] = (long)"mConversationEndFrameMax";
  param_1[0x189] = 0;
  *(undefined4 *)(param_1 + 0x18a) = 0;
  param_1[0x186] = (long)(puVar3 + 0x10);
  param_1[0x18b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x186);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x186] + 0xf0))(param_1 + 0x186);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x18a) >> 7 & 1) == 0) {
    param_1[0x18b] = 0;
    *(undefined4 *)(param_1 + 0x18b) = 0x1e;
  }
  param_1[0x18e] = 0;
  *(uint *)(param_1 + 0x18a) = *(uint *)(param_1 + 0x18a) & 0xfeffffff;
  param_1[0x18d] = (long)"mConversationEndReactDelayFrame";
  param_1[399] = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  param_1[0x18c] = (long)(puVar3 + 0x10);
  param_1[0x191] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x18c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x18c] + 0xf0))(param_1 + 0x18c);
  *puVar4 = 0xc;
  if ((*(uint *)(param_1 + 400) >> 7 & 1) == 0) {
    param_1[0x191] = 0;
    *(undefined4 *)(param_1 + 0x191) = 0xc;
  }
  param_1[0x194] = 0;
  *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xfeffffff;
  param_1[0x193] = (long)"mConversationSpeakerChangeRate";
  param_1[0x195] = 0;
  *(undefined4 *)(param_1 + 0x196) = 0;
  param_1[0x192] = (long)(puVar3 + 0x10);
  param_1[0x197] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x192);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x192] + 0xf0))(param_1 + 0x192);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x196) >> 7 & 1) == 0) {
    param_1[0x197] = 0;
    *(undefined4 *)(param_1 + 0x197) = 0x1e;
  }
  param_1[0x19a] = 0;
  *(uint *)(param_1 + 0x196) = *(uint *)(param_1 + 0x196) & 0xfeffffff;
  param_1[0x199] = (long)"mConversationSpeakerMaxNum";
  param_1[0x19b] = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  param_1[0x198] = (long)(puVar3 + 0x10);
  param_1[0x19d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x198);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x198] + 0xf0))(param_1 + 0x198);
  *puVar4 = 3;
  if ((*(uint *)(param_1 + 0x19c) >> 7 & 1) == 0) {
    param_1[0x19d] = 0;
    *(undefined4 *)(param_1 + 0x19d) = 3;
  }
  param_1[0x1a0] = 0;
  *(uint *)(param_1 + 0x19c) = *(uint *)(param_1 + 0x19c) & 0xfeffffff;
  param_1[0x19f] = (long)"mConversationRadiusS";
  param_1[0x1a1] = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  param_1[0x19e] = (long)(puVar2 + 0x10);
  param_1[0x1a3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x19e);
  uVar8 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x1a2) & 0x800) != 0) {
    uVar8 = 0x3db2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x19e] + 0xf0))(param_1 + 0x19e);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1a2);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1a3] = 0;
    uVar8 = 0x40a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x1a3) = uVar8;
  }
  param_1[0x1a6] = 0;
  *(uint *)(param_1 + 0x1a2) = uVar1 & 0xfeffffff;
  param_1[0x1a5] = (long)"mConversationRadiusM";
  param_1[0x1a7] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  param_1[0x1a4] = (long)(puVar2 + 0x10);
  param_1[0x1a9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1a4);
  uVar8 = 0x40c00000;
  if ((*(uint *)(param_1 + 0x1a8) & 0x800) != 0) {
    uVar8 = 0x3dd67750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1a4] + 0xf0))(param_1 + 0x1a4);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1a8);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1a9] = 0;
    uVar8 = 0x40c00000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3dd67750;
    }
    *(undefined4 *)(param_1 + 0x1a9) = uVar8;
  }
  param_1[0x1ac] = 0;
  *(uint *)(param_1 + 0x1a8) = uVar1 & 0xfeffffff;
  param_1[0x1ab] = (long)"mConversationRadiusL";
  param_1[0x1ad] = 0;
  *(undefined4 *)(param_1 + 0x1ae) = 0;
  param_1[0x1aa] = (long)(puVar2 + 0x10);
  param_1[0x1af] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1aa);
  uVar8 = 0x40e00000;
  if ((*(uint *)(param_1 + 0x1ae) & 0x800) != 0) {
    uVar8 = 0x3dfa35dd;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1aa] + 0xf0))(param_1 + 0x1aa);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1ae);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1af] = 0;
    uVar8 = 0x40e00000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3dfa35dd;
    }
    *(undefined4 *)(param_1 + 0x1af) = uVar8;
  }
  param_1[0x1b2] = 0;
  *(uint *)(param_1 + 0x1ae) = uVar1 & 0xfeffffff;
  param_1[0x1b1] = (long)"mGreetIntervalTime";
  param_1[0x1b3] = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  param_1[0x1b0] = (long)(puVar3 + 0x10);
  param_1[0x1b5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1b0);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1b0] + 0xf0))(param_1 + 0x1b0);
  *puVar4 = 0xf;
  if ((*(uint *)(param_1 + 0x1b4) >> 7 & 1) == 0) {
    param_1[0x1b5] = 0;
    *(undefined4 *)(param_1 + 0x1b5) = 0xf;
  }
  param_1[0x1b8] = 0;
  *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1b4) & 0xfeffffff;
  param_1[0x1b7] = (long)"mFacePanelReactionIntervalTime";
  param_1[0x1b9] = 0;
  *(undefined4 *)(param_1 + 0x1ba) = 0;
  param_1[0x1b6] = (long)(puVar3 + 0x10);
  param_1[0x1bb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1b6);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1b6] + 0xf0))(param_1 + 0x1b6);
  *puVar4 = 0x3c;
  if ((*(uint *)(param_1 + 0x1ba) >> 7 & 1) == 0) {
    param_1[0x1bb] = 0;
    *(undefined4 *)(param_1 + 0x1bb) = 0x3c;
  }
  param_1[0x1be] = 0;
  *(uint *)(param_1 + 0x1ba) = *(uint *)(param_1 + 0x1ba) & 0xfeffffff;
  param_1[0x1bd] = (long)"mExerciseClassMinRadius";
  param_1[0x1bf] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  param_1[0x1bc] = (long)(puVar2 + 0x10);
  param_1[0x1c1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1bc);
  uVar8 = 0x41200000;
  if ((*(uint *)(param_1 + 0x1c0) & 0x800) != 0) {
    uVar8 = 0x3e32b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1bc] + 0xf0))(param_1 + 0x1bc);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1c0);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1c1] = 0;
    uVar8 = 0x41200000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x1c1) = uVar8;
  }
  param_1[0x1c4] = 0;
  *(uint *)(param_1 + 0x1c0) = uVar1 & 0xfeffffff;
  param_1[0x1c3] = (long)"mExerciseClassMaxRadius";
  param_1[0x1c5] = 0;
  *(undefined4 *)(param_1 + 0x1c6) = 0;
  param_1[0x1c2] = (long)(puVar2 + 0x10);
  param_1[0x1c7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1c2);
  uVar8 = 0x41b40000;
  if ((*(uint *)(param_1 + 0x1c6) & 0x800) != 0) {
    uVar8 = 0x3ec90fdb;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1c2] + 0xf0))(param_1 + 0x1c2);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1c6);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1c7] = 0;
    uVar8 = 0x41b40000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3ec90fdb;
    }
    *(undefined4 *)(param_1 + 0x1c7) = uVar8;
  }
  param_1[0x1ca] = 0;
  *(uint *)(param_1 + 0x1c6) = uVar1 & 0xfeffffff;
  param_1[0x1c9] = (long)"mStartDozeProbability";
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  param_1[0x1c8] = (long)(puVar3 + 0x10);
  param_1[0x1cd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1c8);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1c8] + 0xf0))(param_1 + 0x1c8);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x1cc) >> 7 & 1) == 0) {
    param_1[0x1cd] = 0;
    *(undefined4 *)(param_1 + 0x1cd) = 5;
  }
  param_1[0x1d0] = 0;
  *(uint *)(param_1 + 0x1cc) = *(uint *)(param_1 + 0x1cc) & 0xfeffffff;
  param_1[0x1cf] = (long)"mReactionDelayFrameMin";
  param_1[0x1d1] = 0;
  *(undefined4 *)(param_1 + 0x1d2) = 0;
  param_1[0x1ce] = (long)(puVar3 + 0x10);
  param_1[0x1d3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ce);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1ce] + 0xf0))(param_1 + 0x1ce);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x1d2) >> 7 & 1) == 0) {
    param_1[0x1d3] = 0;
    *(undefined4 *)(param_1 + 0x1d3) = 5;
  }
  param_1[0x1d6] = 0;
  *(uint *)(param_1 + 0x1d2) = *(uint *)(param_1 + 0x1d2) & 0xfeffffff;
  param_1[0x1d5] = (long)"mReactionDelayFrameMax";
  param_1[0x1d7] = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  param_1[0x1d4] = (long)(puVar3 + 0x10);
  param_1[0x1d9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1d4);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1d4] + 0xf0))(param_1 + 0x1d4);
  *puVar4 = 0xf;
  if ((*(uint *)(param_1 + 0x1d8) >> 7 & 1) == 0) {
    param_1[0x1d9] = 0;
    *(undefined4 *)(param_1 + 0x1d9) = 0xf;
  }
  param_1[0x1dc] = 0;
  *(uint *)(param_1 + 0x1d8) = *(uint *)(param_1 + 0x1d8) & 0xfeffffff;
  param_1[0x1db] = (long)"mFtrSwitchResponseFrameMin";
  param_1[0x1dd] = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0;
  param_1[0x1da] = (long)(puVar3 + 0x10);
  param_1[0x1df] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1da);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1da] + 0xf0))(param_1 + 0x1da);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x1de) >> 7 & 1) == 0) {
    param_1[0x1df] = 0;
    *(undefined4 *)(param_1 + 0x1df) = 5;
  }
  param_1[0x1e2] = 0;
  *(uint *)(param_1 + 0x1de) = *(uint *)(param_1 + 0x1de) & 0xfeffffff;
  param_1[0x1e1] = (long)"mFtrSwitchResponseFrameMax";
  param_1[0x1e3] = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  param_1[0x1e0] = (long)(puVar3 + 0x10);
  param_1[0x1e5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1e0);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1e0] + 0xf0))(param_1 + 0x1e0);
  *puVar4 = 0xf;
  if ((*(uint *)(param_1 + 0x1e4) >> 7 & 1) == 0) {
    param_1[0x1e5] = 0;
    *(undefined4 *)(param_1 + 0x1e5) = 0xf;
  }
  param_1[0x1e8] = 0;
  *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfeffffff;
  param_1[0x1e7] = (long)"mCatchInsectStopDist";
  param_1[0x1e9] = 0;
  *(undefined4 *)(param_1 + 0x1ea) = 0;
  param_1[0x1e6] = (long)(puVar2 + 0x10);
  param_1[0x1eb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1e6);
  uVar8 = 0x41200000;
  if ((*(uint *)(param_1 + 0x1ea) & 0x800) != 0) {
    uVar8 = 0x3e32b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1e6] + 0xf0))(param_1 + 0x1e6);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1ea);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1eb] = 0;
    uVar8 = 0x41200000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x1eb) = uVar8;
  }
  param_1[0x1ee] = 0;
  *(uint *)(param_1 + 0x1ea) = uVar1 & 0xfeffffff;
  param_1[0x1ed] = (long)"mCatchInsectStartDist";
  param_1[0x1ef] = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  param_1[0x1ec] = (long)(puVar2 + 0x10);
  param_1[0x1f1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ec);
  uVar8 = 0x41700000;
  if ((*(uint *)(param_1 + 0x1f0) & 0x800) != 0) {
    uVar8 = 0x3e860a92;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1ec] + 0xf0))(param_1 + 0x1ec);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1f0);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1f1] = 0;
    uVar8 = 0x41700000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0x1f1) = uVar8;
  }
  param_1[500] = 0;
  *(uint *)(param_1 + 0x1f0) = uVar1 & 0xfeffffff;
  param_1[499] = (long)"mCatchInsectRunDist";
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1f6) = 0;
  param_1[0x1f2] = (long)(puVar2 + 0x10);
  param_1[0x1f7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1f2);
  uVar8 = 0x41c80000;
  if ((*(uint *)(param_1 + 0x1f6) & 0x800) != 0) {
    uVar8 = 0x3edf66f3;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1f2] + 0xf0))(param_1 + 0x1f2);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1f6);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1f7] = 0;
    uVar8 = 0x41c80000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3edf66f3;
    }
    *(undefined4 *)(param_1 + 0x1f7) = uVar8;
  }
  param_1[0x1fa] = 0;
  *(uint *)(param_1 + 0x1f6) = uVar1 & 0xfeffffff;
  param_1[0x1f9] = (long)"mCatchInsectMaxDist";
  param_1[0x1fb] = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  param_1[0x1f8] = (long)(puVar2 + 0x10);
  param_1[0x1fd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1f8);
  uVar8 = 0x420c0000;
  if ((*(uint *)(param_1 + 0x1fc) & 0x800) != 0) {
    uVar8 = 0x3f1c61aa;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1f8] + 0xf0))(param_1 + 0x1f8);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1fc);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1fd] = 0;
    uVar8 = 0x420c0000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3f1c61aa;
    }
    *(undefined4 *)(param_1 + 0x1fd) = uVar8;
  }
  param_1[0x200] = 0;
  *(uint *)(param_1 + 0x1fc) = uVar1 & 0xfeffffff;
  param_1[0x1ff] = (long)"mFollowInsectStopDist";
  param_1[0x201] = 0;
  *(undefined4 *)(param_1 + 0x202) = 0;
  param_1[0x1fe] = (long)(puVar2 + 0x10);
  param_1[0x203] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1fe);
  uVar8 = 0x40000000;
  if ((*(uint *)(param_1 + 0x202) & 0x800) != 0) {
    uVar8 = 0x3d0efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x1fe] + 0xf0))(param_1 + 0x1fe);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x202);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x203] = 0;
    uVar8 = 0x40000000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x203) = uVar8;
  }
  *(uint *)(param_1 + 0x202) = uVar1 & 0xfeffffff;
  param_1[0x205] = (long)"mFollowInsectStartDist";
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  param_1[0x204] = (long)(puVar2 + 0x10);
  param_1[0x209] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x204);
  uVar8 = 0x40400000;
  if ((*(uint *)(param_1 + 0x208) & 0x800) != 0) {
    uVar8 = 0x3d567750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x204] + 0xf0))(param_1 + 0x204);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x208);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x209] = 0;
    uVar8 = 0x40400000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x209) = uVar8;
  }
  param_1[0x20c] = 0;
  *(uint *)(param_1 + 0x208) = uVar1 & 0xfeffffff;
  param_1[0x20b] = (long)"mFollowInsectRunDist";
  param_1[0x20d] = 0;
  *(undefined4 *)(param_1 + 0x20e) = 0;
  param_1[0x20a] = (long)(puVar2 + 0x10);
  param_1[0x20f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x20a);
  uVar8 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x20e) & 0x800) != 0) {
    uVar8 = 0x3db2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x20a] + 0xf0))(param_1 + 0x20a);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x20e);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x20f] = 0;
    uVar8 = 0x40a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x20f) = uVar8;
  }
  *(uint *)(param_1 + 0x20e) = uVar1 & 0xfeffffff;
  param_1[0x211] = (long)"mFollowInsectMaxDist";
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  param_1[0x210] = (long)(puVar2 + 0x10);
  param_1[0x215] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x210);
  uVar8 = 0x40e00000;
  if ((*(uint *)(param_1 + 0x214) & 0x800) != 0) {
    uVar8 = 0x3dfa35dd;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x210] + 0xf0))(param_1 + 0x210);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x214);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x215] = 0;
    uVar8 = 0x40e00000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3dfa35dd;
    }
    *(undefined4 *)(param_1 + 0x215) = uVar8;
  }
  param_1[0x218] = 0;
  *(uint *)(param_1 + 0x214) = uVar1 & 0xfeffffff;
  param_1[0x217] = (long)"mCatchFollowInsectTurnAngle";
  param_1[0x219] = 0;
  *(undefined4 *)(param_1 + 0x21a) = 0;
  param_1[0x216] = (long)(puVar2 + 0x10);
  param_1[0x21b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x216);
  uVar8 = 0x42340000;
  if ((*(uint *)(param_1 + 0x21a) & 0x800) != 0) {
    uVar8 = 0x3f490fdb;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x216] + 0xf0))(param_1 + 0x216);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x21a);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x21b] = 0;
    uVar8 = 0x42340000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3f490fdb;
    }
    *(undefined4 *)(param_1 + 0x21b) = uVar8;
  }
  param_1[0x21e] = 0;
  *(uint *)(param_1 + 0x21a) = uVar1 & 0xfeffffff;
  param_1[0x21d] = (long)"mPlacementFieldRateHouse";
  param_1[0x21f] = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  param_1[0x21c] = (long)(puVar3 + 0x10);
  param_1[0x221] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x21c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x21c] + 0xf0))(param_1 + 0x21c);
  *puVar4 = 0x28;
  if ((*(uint *)(param_1 + 0x220) >> 7 & 1) == 0) {
    param_1[0x221] = 0;
    *(undefined4 *)(param_1 + 0x221) = 0x28;
  }
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) & 0xfeffffff;
  param_1[0x223] = (long)"mPlacementFieldRateEventPlaza";
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  *(undefined4 *)(param_1 + 0x226) = 0;
  param_1[0x222] = (long)(puVar3 + 0x10);
  param_1[0x227] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x222);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x222] + 0xf0))(param_1 + 0x222);
  *puVar4 = 0x28;
  if ((*(uint *)(param_1 + 0x226) >> 7 & 1) == 0) {
    param_1[0x227] = 0;
    *(undefined4 *)(param_1 + 0x227) = 0x28;
  }
  param_1[0x22a] = 0;
  *(uint *)(param_1 + 0x226) = *(uint *)(param_1 + 0x226) & 0xfeffffff;
  param_1[0x229] = (long)"mNatureInterestHeight";
  param_1[0x22b] = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  param_1[0x228] = (long)(puVar3 + 0x10);
  param_1[0x22d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x228);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x228] + 0xf0))(param_1 + 0x228);
  *puVar4 = 0x32;
  if ((*(uint *)(param_1 + 0x22c) >> 7 & 1) == 0) {
    param_1[0x22d] = 0;
    *(undefined4 *)(param_1 + 0x22d) = 0x32;
  }
  param_1[0x230] = 0;
  *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xfeffffff;
  param_1[0x22f] = (long)"mWatchFtrHeight";
  param_1[0x231] = 0;
  *(undefined4 *)(param_1 + 0x232) = 0;
  param_1[0x22e] = (long)(puVar2 + 0x10);
  param_1[0x233] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x22e);
  uVar8 = 0x42c80000;
  if ((*(uint *)(param_1 + 0x232) & 0x800) != 0) {
    uVar8 = 0x3fdf66f3;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x22e] + 0xf0))(param_1 + 0x22e);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x232);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x233] = 0;
    uVar8 = 0x42c80000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3fdf66f3;
    }
    *(undefined4 *)(param_1 + 0x233) = uVar8;
  }
  param_1[0x236] = 0;
  *(uint *)(param_1 + 0x232) = uVar1 & 0xfeffffff;
  param_1[0x235] = (long)"mMinimumReadFrameInHousing";
  param_1[0x237] = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  param_1[0x234] = (long)(puVar3 + 0x10);
  param_1[0x239] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x234);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x234] + 0xf0))(param_1 + 0x234);
  *puVar4 = 0x1c2;
  if ((*(uint *)(param_1 + 0x238) >> 7 & 1) == 0) {
    param_1[0x239] = 0;
    *(undefined4 *)(param_1 + 0x239) = 0x1c2;
  }
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xfeffffff;
  param_1[0x23b] = (long)"mMinimumSitFrameInHousing";
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  *(undefined4 *)(param_1 + 0x23e) = 0;
  param_1[0x23a] = (long)(puVar3 + 0x10);
  param_1[0x23f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x23a);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x23a] + 0xf0))(param_1 + 0x23a);
  *puVar4 = 0x1c2;
  if ((*(uint *)(param_1 + 0x23e) >> 7 & 1) == 0) {
    param_1[0x23f] = 0;
    *(undefined4 *)(param_1 + 0x23f) = 0x1c2;
  }
  param_1[0x242] = 0;
  *(uint *)(param_1 + 0x23e) = *(uint *)(param_1 + 0x23e) & 0xfeffffff;
  param_1[0x241] = (long)"mMinimumFtrFrameInHousing";
  param_1[0x243] = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  param_1[0x240] = (long)(puVar3 + 0x10);
  param_1[0x245] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x240);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x240] + 0xf0))(param_1 + 0x240);
  *puVar4 = 0x1c2;
  if ((*(uint *)(param_1 + 0x244) >> 7 & 1) == 0) {
    param_1[0x245] = 0;
    *(undefined4 *)(param_1 + 0x245) = 0x1c2;
  }
  *(uint *)(param_1 + 0x244) = *(uint *)(param_1 + 0x244) & 0xfeffffff;
  param_1[0x247] = (long)"mWanderFrameInHousing";
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  *(undefined4 *)(param_1 + 0x24a) = 0;
  param_1[0x246] = (long)(puVar3 + 0x10);
  param_1[0x24b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x246);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x246] + 0xf0))(param_1 + 0x246);
  *puVar4 = 0x1c2;
  if ((*(uint *)(param_1 + 0x24a) >> 7 & 1) == 0) {
    param_1[0x24b] = 0;
    *(undefined4 *)(param_1 + 0x24b) = 0x1c2;
  }
  param_1[0x24e] = 0;
  *(uint *)(param_1 + 0x24a) = *(uint *)(param_1 + 0x24a) & 0xfeffffff;
  param_1[0x24d] = (long)"mWanderPercentInHousing";
  param_1[0x24f] = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  param_1[0x24c] = (long)(puVar3 + 0x10);
  param_1[0x251] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x24c] + 0xf0))(param_1 + 0x24c);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x250) >> 7 & 1) == 0) {
    param_1[0x251] = 0;
    *(undefined4 *)(param_1 + 0x251) = 0x1e;
  }
  *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) & 0xfeffffff;
  param_1[0x253] = (long)"mSitPercentInHousing";
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  *(undefined4 *)(param_1 + 0x256) = 0;
  param_1[0x252] = (long)(puVar3 + 0x10);
  param_1[599] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x252);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x252] + 0xf0))(param_1 + 0x252);
  *puVar4 = 0x32;
  if ((*(uint *)(param_1 + 0x256) >> 7 & 1) == 0) {
    param_1[599] = 0;
    *(undefined4 *)(param_1 + 599) = 0x32;
  }
  param_1[0x25a] = 0;
  *(uint *)(param_1 + 0x256) = *(uint *)(param_1 + 0x256) & 0xfeffffff;
  param_1[0x259] = (long)"mLookToSkyPercent";
  param_1[0x25b] = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  param_1[600] = (long)(puVar3 + 0x10);
  param_1[0x25d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 600);
  puVar4 = (undefined4 *)(**(code **)(param_1[600] + 0xf0))(param_1 + 600);
  *puVar4 = 10;
  if ((*(uint *)(param_1 + 0x25c) >> 7 & 1) == 0) {
    param_1[0x25d] = 0;
    *(undefined4 *)(param_1 + 0x25d) = 10;
  }
  *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfeffffff;
  param_1[0x25f] = (long)"mAudioFinishDelayMaxBeat";
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  *(undefined4 *)(param_1 + 0x262) = 0;
  param_1[0x25e] = (long)(puVar3 + 0x10);
  param_1[0x263] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25e);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x25e] + 0xf0))(param_1 + 0x25e);
  *puVar4 = 8;
  if ((*(uint *)(param_1 + 0x262) >> 7 & 1) == 0) {
    param_1[0x263] = 0;
    *(undefined4 *)(param_1 + 0x263) = 8;
  }
  param_1[0x266] = 0;
  *(uint *)(param_1 + 0x262) = *(uint *)(param_1 + 0x262) & 0xfeffffff;
  param_1[0x265] = (long)"mAudioFinishDelayMinBeat";
  param_1[0x267] = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  param_1[0x264] = (long)(puVar3 + 0x10);
  param_1[0x269] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x264);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x264] + 0xf0))(param_1 + 0x264);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x268) >> 7 & 1) == 0) {
    param_1[0x269] = 0;
    *(undefined4 *)(param_1 + 0x269) = 0;
  }
  *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfeffffff;
  param_1[0x26b] = (long)"mWateringWaitFrameMin";
  param_1[0x26c] = 0;
  param_1[0x26d] = 0;
  *(undefined4 *)(param_1 + 0x26e) = 0;
  param_1[0x26a] = (long)(puVar3 + 0x10);
  param_1[0x26f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x26a);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x26a] + 0xf0))(param_1 + 0x26a);
  *puVar4 = 0x5a;
  if ((*(uint *)(param_1 + 0x26e) >> 7 & 1) == 0) {
    param_1[0x26f] = 0;
    *(undefined4 *)(param_1 + 0x26f) = 0x5a;
  }
  param_1[0x272] = 0;
  *(uint *)(param_1 + 0x26e) = *(uint *)(param_1 + 0x26e) & 0xfeffffff;
  param_1[0x271] = (long)"mWateringWaitFrameMax";
  param_1[0x273] = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  param_1[0x270] = (long)(puVar3 + 0x10);
  param_1[0x275] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x270);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x270] + 0xf0))(param_1 + 0x270);
  *puVar4 = 0xf0;
  if ((*(uint *)(param_1 + 0x274) >> 7 & 1) == 0) {
    param_1[0x275] = 0;
    *(undefined4 *)(param_1 + 0x275) = 0xf0;
  }
  *(uint *)(param_1 + 0x274) = *(uint *)(param_1 + 0x274) & 0xfeffffff;
  param_1[0x277] = (long)"mSitBenchFrame";
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  *(undefined4 *)(param_1 + 0x27a) = 0;
  param_1[0x276] = (long)(puVar3 + 0x10);
  param_1[0x27b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x276);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x276] + 0xf0))(param_1 + 0x276);
  *puVar4 = 900;
  if ((*(uint *)(param_1 + 0x27a) >> 7 & 1) == 0) {
    param_1[0x27b] = 0;
    *(undefined4 *)(param_1 + 0x27b) = 900;
  }
  param_1[0x27e] = 0;
  *(uint *)(param_1 + 0x27a) = *(uint *)(param_1 + 0x27a) & 0xfeffffff;
  param_1[0x27d] = (long)"mToolActionInDoNotingRate";
  param_1[0x27f] = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  param_1[0x27c] = (long)(puVar3 + 0x10);
  param_1[0x281] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x27c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x27c] + 0xf0))(param_1 + 0x27c);
  *puVar4 = 0x19;
  if ((*(uint *)(param_1 + 0x280) >> 7 & 1) == 0) {
    param_1[0x281] = 0;
    *(undefined4 *)(param_1 + 0x281) = 0x19;
  }
  *(uint *)(param_1 + 0x280) = *(uint *)(param_1 + 0x280) & 0xfeffffff;
  param_1[0x283] = (long)"mGroupPlayFireworkNumMin";
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  *(undefined4 *)(param_1 + 0x286) = 0;
  param_1[0x282] = (long)(puVar3 + 0x10);
  param_1[0x287] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x282);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x282] + 0xf0))(param_1 + 0x282);
  *puVar4 = 2;
  if ((*(uint *)(param_1 + 0x286) >> 7 & 1) == 0) {
    param_1[0x287] = 0;
    *(undefined4 *)(param_1 + 0x287) = 2;
  }
  param_1[0x28a] = 0;
  *(uint *)(param_1 + 0x286) = *(uint *)(param_1 + 0x286) & 0xfeffffff;
  param_1[0x289] = (long)"mGroupPlayFireworkNumMax";
  param_1[0x28b] = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  param_1[0x288] = (long)(puVar3 + 0x10);
  param_1[0x28d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x288);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x288] + 0xf0))(param_1 + 0x288);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x28c) >> 7 & 1) == 0) {
    param_1[0x28d] = 0;
    *(undefined4 *)(param_1 + 0x28d) = 5;
  }
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) & 0xfeffffff;
  param_1[0x28f] = (long)"mGroupPlayFireworkIntervalMin";
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  *(undefined4 *)(param_1 + 0x292) = 0;
  param_1[0x28e] = (long)(puVar3 + 0x10);
  param_1[0x293] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x28e);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x28e] + 0xf0))(param_1 + 0x28e);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x292) >> 7 & 1) == 0) {
    param_1[0x293] = 0;
    *(undefined4 *)(param_1 + 0x293) = 0x1e;
  }
  param_1[0x296] = 0;
  *(uint *)(param_1 + 0x292) = *(uint *)(param_1 + 0x292) & 0xfeffffff;
  param_1[0x295] = (long)"mGroupPlayFireworkIntervalMax";
  param_1[0x297] = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  param_1[0x294] = (long)(puVar3 + 0x10);
  param_1[0x299] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x294);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x294] + 0xf0))(param_1 + 0x294);
  *puVar4 = 0x5a;
  if ((*(uint *)(param_1 + 0x298) >> 7 & 1) == 0) {
    param_1[0x299] = 0;
    *(undefined4 *)(param_1 + 0x299) = 0x5a;
  }
  *(uint *)(param_1 + 0x298) = *(uint *)(param_1 + 0x298) & 0xfeffffff;
  param_1[0x29b] = (long)"mGroupPlayFireworkWaitFrameMin";
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  *(undefined4 *)(param_1 + 0x29e) = 0;
  param_1[0x29a] = (long)(puVar3 + 0x10);
  param_1[0x29f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x29a);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x29a] + 0xf0))(param_1 + 0x29a);
  *puVar4 = 0x96;
  if ((*(uint *)(param_1 + 0x29e) >> 7 & 1) == 0) {
    param_1[0x29f] = 0;
    *(undefined4 *)(param_1 + 0x29f) = 0x96;
  }
  param_1[0x2a2] = 0;
  *(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) & 0xfeffffff;
  param_1[0x2a1] = (long)"mGroupPlayFireworkWaitFrameMax";
  param_1[0x2a3] = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  param_1[0x2a0] = (long)(puVar3 + 0x10);
  param_1[0x2a5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a0);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2a0] + 0xf0))(param_1 + 0x2a0);
  *puVar4 = 0xf0;
  if ((*(uint *)(param_1 + 0x2a4) >> 7 & 1) == 0) {
    param_1[0x2a5] = 0;
    *(undefined4 *)(param_1 + 0x2a5) = 0xf0;
  }
  *(uint *)(param_1 + 0x2a4) = *(uint *)(param_1 + 0x2a4) & 0xfeffffff;
  param_1[0x2a7] = (long)"mChristmasBasicRatio";
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  *(undefined4 *)(param_1 + 0x2aa) = 0;
  param_1[0x2a6] = (long)(puVar3 + 0x10);
  param_1[0x2ab] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a6);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2a6] + 0xf0))(param_1 + 0x2a6);
  *puVar4 = 0x50;
  if ((*(uint *)(param_1 + 0x2aa) >> 7 & 1) == 0) {
    param_1[0x2ab] = 0;
    *(undefined4 *)(param_1 + 0x2ab) = 0x50;
  }
  param_1[0x2ae] = 0;
  *(uint *)(param_1 + 0x2aa) = *(uint *)(param_1 + 0x2aa) & 0xfeffffff;
  param_1[0x2ad] = (long)"mChristmasBasicTimerMin";
  param_1[0x2af] = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  param_1[0x2ac] = (long)(puVar3 + 0x10);
  param_1[0x2b1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ac);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2ac] + 0xf0))(param_1 + 0x2ac);
  *puVar4 = 0x1c2;
  if ((*(uint *)(param_1 + 0x2b0) >> 7 & 1) == 0) {
    param_1[0x2b1] = 0;
    *(undefined4 *)(param_1 + 0x2b1) = 0x1c2;
  }
  *(uint *)(param_1 + 0x2b0) = *(uint *)(param_1 + 0x2b0) & 0xfeffffff;
  param_1[0x2b3] = (long)"mChristmasBasicTimerMax";
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  *(undefined4 *)(param_1 + 0x2b6) = 0;
  param_1[0x2b2] = (long)(puVar3 + 0x10);
  param_1[0x2b7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b2);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2b2] + 0xf0))(param_1 + 0x2b2);
  *puVar4 = 900;
  if ((*(uint *)(param_1 + 0x2b6) >> 7 & 1) == 0) {
    param_1[0x2b7] = 0;
    *(undefined4 *)(param_1 + 0x2b7) = 900;
  }
  param_1[0x2ba] = 0;
  *(uint *)(param_1 + 0x2b6) = *(uint *)(param_1 + 0x2b6) & 0xfeffffff;
  param_1[0x2b9] = (long)"mChristmasSmilingTimerMin";
  param_1[699] = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  param_1[0x2b8] = (long)(puVar3 + 0x10);
  param_1[0x2bd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b8);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2b8] + 0xf0))(param_1 + 0x2b8);
  *puVar4 = 0x96;
  if ((*(uint *)(param_1 + 700) >> 7 & 1) == 0) {
    param_1[0x2bd] = 0;
    *(undefined4 *)(param_1 + 0x2bd) = 0x96;
  }
  *(uint *)(param_1 + 700) = *(uint *)(param_1 + 700) & 0xfeffffff;
  param_1[0x2bf] = (long)"mChristmasSmilingTimerMax";
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  *(undefined4 *)(param_1 + 0x2c2) = 0;
  param_1[0x2be] = (long)(puVar3 + 0x10);
  param_1[0x2c3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2be);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2be] + 0xf0))(param_1 + 0x2be);
  *puVar4 = 0x1c2;
  if ((*(uint *)(param_1 + 0x2c2) >> 7 & 1) == 0) {
    param_1[0x2c3] = 0;
    *(undefined4 *)(param_1 + 0x2c3) = 0x1c2;
  }
  param_1[0x2c6] = 0;
  *(uint *)(param_1 + 0x2c2) = *(uint *)(param_1 + 0x2c2) & 0xfeffffff;
  param_1[0x2c5] = (long)"mChristmasExcitedTimeMin";
  param_1[0x2c7] = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  param_1[0x2c4] = (long)(puVar3 + 0x10);
  param_1[0x2c9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c4);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2c4] + 0xf0))(param_1 + 0x2c4);
  *puVar4 = 600;
  if ((*(uint *)(param_1 + 0x2c8) >> 7 & 1) == 0) {
    param_1[0x2c9] = 0;
    *(undefined4 *)(param_1 + 0x2c9) = 600;
  }
  *(uint *)(param_1 + 0x2c8) = *(uint *)(param_1 + 0x2c8) & 0xfeffffff;
  param_1[0x2cb] = (long)"mChristmasExcitedTimeMax";
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  *(undefined4 *)(param_1 + 0x2ce) = 0;
  param_1[0x2ca] = (long)(puVar3 + 0x10);
  param_1[0x2cf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ca);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2ca] + 0xf0))(param_1 + 0x2ca);
  *puVar4 = 0x708;
  if ((*(uint *)(param_1 + 0x2ce) >> 7 & 1) == 0) {
    param_1[0x2cf] = 0;
    *(undefined4 *)(param_1 + 0x2cf) = 0x708;
  }
  param_1[0x2d2] = 0;
  *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) & 0xfeffffff;
  param_1[0x2d1] = (long)"mChristmasAbsentMindednessTimeMin";
  param_1[0x2d3] = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  param_1[0x2d0] = (long)(puVar3 + 0x10);
  param_1[0x2d5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2d0);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2d0] + 0xf0))(param_1 + 0x2d0);
  *puVar4 = 600;
  if ((*(uint *)(param_1 + 0x2d4) >> 7 & 1) == 0) {
    param_1[0x2d5] = 0;
    *(undefined4 *)(param_1 + 0x2d5) = 600;
  }
  *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) & 0xfeffffff;
  param_1[0x2d7] = (long)"mChristmasAbsentMindednessTimeMax";
  param_1[0x2d8] = 0;
  param_1[0x2d9] = 0;
  *(undefined4 *)(param_1 + 0x2da) = 0;
  param_1[0x2d6] = (long)(puVar3 + 0x10);
  param_1[0x2db] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2d6);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2d6] + 0xf0))(param_1 + 0x2d6);
  *puVar4 = 0x708;
  if ((*(uint *)(param_1 + 0x2da) >> 7 & 1) == 0) {
    param_1[0x2db] = 0;
    *(undefined4 *)(param_1 + 0x2db) = 0x708;
  }
  param_1[0x2de] = 0;
  *(uint *)(param_1 + 0x2da) = *(uint *)(param_1 + 0x2da) & 0xfeffffff;
  param_1[0x2dd] = (long)"mChristmasFirstLookRatio";
  param_1[0x2df] = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  param_1[0x2dc] = (long)(puVar3 + 0x10);
  param_1[0x2e1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2dc);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2dc] + 0xf0))(param_1 + 0x2dc);
  *puVar4 = 0x32;
  if ((*(uint *)(param_1 + 0x2e0) >> 7 & 1) == 0) {
    param_1[0x2e1] = 0;
    *(undefined4 *)(param_1 + 0x2e1) = 0x32;
  }
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfeffffff;
  param_1[0x2e3] = (long)"mChristmasSmilingRatio";
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  *(undefined4 *)(param_1 + 0x2e6) = 0;
  param_1[0x2e2] = (long)(puVar3 + 0x10);
  param_1[0x2e7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2e2);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2e2] + 0xf0))(param_1 + 0x2e2);
  *puVar4 = 10;
  if ((*(uint *)(param_1 + 0x2e6) >> 7 & 1) == 0) {
    param_1[0x2e7] = 0;
    *(undefined4 *)(param_1 + 0x2e7) = 10;
  }
  param_1[0x2ea] = 0;
  *(uint *)(param_1 + 0x2e6) = *(uint *)(param_1 + 0x2e6) & 0xfeffffff;
  param_1[0x2e9] = (long)"mChristmasWatchRatio";
  param_1[0x2eb] = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  param_1[0x2e8] = (long)(puVar3 + 0x10);
  param_1[0x2ed] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2e8);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2e8] + 0xf0))(param_1 + 0x2e8);
  *puVar4 = 0x14;
  if ((*(uint *)(param_1 + 0x2ec) >> 7 & 1) == 0) {
    param_1[0x2ed] = 0;
    *(undefined4 *)(param_1 + 0x2ed) = 0x14;
  }
  *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2ec) & 0xfeffffff;
  param_1[0x2ef] = (long)"mChristmasTakePhotoRatio";
  param_1[0x2f0] = 0;
  param_1[0x2f1] = 0;
  *(undefined4 *)(param_1 + 0x2f2) = 0;
  param_1[0x2ee] = (long)(puVar3 + 0x10);
  param_1[0x2f3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ee);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2ee] + 0xf0))(param_1 + 0x2ee);
  *puVar4 = 0xf;
  if ((*(uint *)(param_1 + 0x2f2) >> 7 & 1) == 0) {
    param_1[0x2f3] = 0;
    *(undefined4 *)(param_1 + 0x2f3) = 0xf;
  }
  param_1[0x2f6] = 0;
  *(uint *)(param_1 + 0x2f2) = *(uint *)(param_1 + 0x2f2) & 0xfeffffff;
  param_1[0x2f5] = (long)"mChristmasExcitedRatio";
  param_1[0x2f7] = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  param_1[0x2f4] = (long)(puVar3 + 0x10);
  param_1[0x2f9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2f4);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2f4] + 0xf0))(param_1 + 0x2f4);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x2f8) >> 7 & 1) == 0) {
    param_1[0x2f9] = 0;
    *(undefined4 *)(param_1 + 0x2f9) = 0x1e;
  }
  *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) & 0xfeffffff;
  param_1[0x2fb] = (long)"mChristmasAbsentMindednessRatio";
  param_1[0x2fc] = 0;
  param_1[0x2fd] = 0;
  *(undefined4 *)(param_1 + 0x2fe) = 0;
  param_1[0x2fa] = (long)(puVar3 + 0x10);
  param_1[0x2ff] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2fa);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2fa] + 0xf0))(param_1 + 0x2fa);
  *puVar4 = 0x14;
  if ((*(uint *)(param_1 + 0x2fe) >> 7 & 1) == 0) {
    param_1[0x2ff] = 0;
    *(undefined4 *)(param_1 + 0x2ff) = 0x14;
  }
  param_1[0x302] = 0;
  *(uint *)(param_1 + 0x2fe) = *(uint *)(param_1 + 0x2fe) & 0xfeffffff;
  param_1[0x301] = (long)"mChristmasSingRatio";
  param_1[0x303] = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  param_1[0x300] = (long)(puVar3 + 0x10);
  param_1[0x305] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x300);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x300] + 0xf0))(param_1 + 0x300);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x304) >> 7 & 1) == 0) {
    param_1[0x305] = 0;
    *(undefined4 *)(param_1 + 0x305) = 5;
  }
  *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfeffffff;
  param_1[0x307] = (long)"mChristmasInterestLookRatio";
  param_1[0x308] = 0;
  param_1[0x309] = 0;
  *(undefined4 *)(param_1 + 0x30a) = 0;
  param_1[0x306] = (long)(puVar3 + 0x10);
  param_1[0x30b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x306);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x306] + 0xf0))(param_1 + 0x306);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x30a) >> 7 & 1) == 0) {
    param_1[0x30b] = 0;
    *(undefined4 *)(param_1 + 0x30b) = 0x1e;
  }
  param_1[0x30e] = 0;
  *(uint *)(param_1 + 0x30a) = *(uint *)(param_1 + 0x30a) & 0xfeffffff;
  param_1[0x30d] = (long)"mChristmasInterestSmilingRatio";
  param_1[0x30f] = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  param_1[0x30c] = (long)(puVar3 + 0x10);
  param_1[0x311] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x30c] + 0xf0))(param_1 + 0x30c);
  *puVar4 = 0x28;
  if ((*(uint *)(param_1 + 0x310) >> 7 & 1) == 0) {
    param_1[0x311] = 0;
    *(undefined4 *)(param_1 + 0x311) = 0x28;
  }
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0xfeffffff;
  param_1[0x313] = (long)"mChristmasInterestTakePhotoRatio";
  param_1[0x314] = 0;
  param_1[0x315] = 0;
  *(undefined4 *)(param_1 + 0x316) = 0;
  param_1[0x312] = (long)(puVar3 + 0x10);
  param_1[0x317] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x312);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x312] + 0xf0))(param_1 + 0x312);
  *puVar4 = 0x23;
  if ((*(uint *)(param_1 + 0x316) >> 7 & 1) == 0) {
    param_1[0x317] = 0;
    *(undefined4 *)(param_1 + 0x317) = 0x23;
  }
  param_1[0x31a] = 0;
  *(uint *)(param_1 + 0x316) = *(uint *)(param_1 + 0x316) & 0xfeffffff;
  param_1[0x319] = (long)"mChristmasInterestExcitedRatio";
  param_1[0x31b] = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  param_1[0x318] = (long)(puVar3 + 0x10);
  param_1[0x31d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x318);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x318] + 0xf0))(param_1 + 0x318);
  *puVar4 = 0x23;
  if ((*(uint *)(param_1 + 0x31c) >> 7 & 1) == 0) {
    param_1[0x31d] = 0;
    *(undefined4 *)(param_1 + 0x31d) = 0x23;
  }
  *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) & 0xfeffffff;
  param_1[799] = (long)"mChristmasInterestAbsentMindednessRatio";
  param_1[800] = 0;
  param_1[0x321] = 0;
  *(undefined4 *)(param_1 + 0x322) = 0;
  param_1[0x31e] = (long)(puVar3 + 0x10);
  param_1[0x323] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31e);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x31e] + 0xf0))(param_1 + 0x31e);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x322) >> 7 & 1) == 0) {
    param_1[0x323] = 0;
    *(undefined4 *)(param_1 + 0x323) = 0x1e;
  }
  param_1[0x326] = 0;
  *(uint *)(param_1 + 0x322) = *(uint *)(param_1 + 0x322) & 0xfeffffff;
  param_1[0x325] = (long)"mTkkLiveLightUpDelayFrame";
  param_1[0x327] = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  param_1[0x324] = (long)(puVar3 + 0x10);
  param_1[0x329] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x324);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x324] + 0xf0))(param_1 + 0x324);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x328) >> 7 & 1) == 0) {
    param_1[0x329] = 0;
    *(undefined4 *)(param_1 + 0x329) = 5;
  }
  *(uint *)(param_1 + 0x328) = *(uint *)(param_1 + 0x328) & 0xfeffffff;
  param_1[0x32b] = (long)"mTkkLiveLightDownDelayFrame";
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  *(undefined4 *)(param_1 + 0x32e) = 0;
  param_1[0x32a] = (long)(puVar3 + 0x10);
  param_1[0x32f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x32a);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x32a] + 0xf0))(param_1 + 0x32a);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x32e) >> 7 & 1) == 0) {
    param_1[0x32f] = 0;
    *(undefined4 *)(param_1 + 0x32f) = 5;
  }
  param_1[0x332] = 0;
  *(uint *)(param_1 + 0x32e) = *(uint *)(param_1 + 0x32e) & 0xfeffffff;
  param_1[0x331] = (long)"mTkkLiveStartClapDelayFrame";
  param_1[0x333] = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  param_1[0x330] = (long)(puVar3 + 0x10);
  param_1[0x335] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x330);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x330] + 0xf0))(param_1 + 0x330);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x334) >> 7 & 1) == 0) {
    param_1[0x335] = 0;
    *(undefined4 *)(param_1 + 0x335) = 5;
  }
  *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xfeffffff;
  param_1[0x337] = (long)"mTkkLiveEndClapDelayFrame";
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  *(undefined4 *)(param_1 + 0x33a) = 0;
  param_1[0x336] = (long)(puVar3 + 0x10);
  param_1[0x33b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x336);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x336] + 0xf0))(param_1 + 0x336);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x33a) >> 7 & 1) == 0) {
    param_1[0x33b] = 0;
    *(undefined4 *)(param_1 + 0x33b) = 5;
  }
  param_1[0x33e] = 0;
  *(uint *)(param_1 + 0x33a) = *(uint *)(param_1 + 0x33a) & 0xfeffffff;
  param_1[0x33d] = (long)"mTkkLiveEndClapKeepFrame";
  param_1[0x33f] = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  param_1[0x33c] = (long)(puVar3 + 0x10);
  param_1[0x341] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x33c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x33c] + 0xf0))(param_1 + 0x33c);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x340) >> 7 & 1) == 0) {
    param_1[0x341] = 0;
    *(undefined4 *)(param_1 + 0x341) = 5;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xfeffffff;
  param_1[0x343] = (long)"mSpeakerMegaphoneFarReactionDelay";
  param_1[0x344] = 0;
  param_1[0x345] = 0;
  *(undefined4 *)(param_1 + 0x346) = 0;
  param_1[0x342] = (long)(puVar3 + 0x10);
  param_1[0x347] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x342);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x342] + 0xf0))(param_1 + 0x342);
  *puVar4 = 5;
  if ((*(uint *)(param_1 + 0x346) >> 7 & 1) == 0) {
    param_1[0x347] = 0;
    *(undefined4 *)(param_1 + 0x347) = 5;
  }
  param_1[0x34a] = 0;
  *(uint *)(param_1 + 0x346) = *(uint *)(param_1 + 0x346) & 0xfeffffff;
  param_1[0x349] = (long)"mSpeakerMegaphoneMiddleReactionDelay";
  param_1[0x34b] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x348] = (long)(puVar3 + 0x10);
  param_1[0x34d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x348);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x348] + 0xf0))(param_1 + 0x348);
  *puVar4 = 10;
  if ((*(uint *)(param_1 + 0x34c) >> 7 & 1) == 0) {
    param_1[0x34d] = 0;
    *(undefined4 *)(param_1 + 0x34d) = 10;
  }
  *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xfeffffff;
  param_1[0x34f] = (long)"mSpeakerMegaphoneNoticeFrame";
  param_1[0x350] = 0;
  param_1[0x351] = 0;
  *(undefined4 *)(param_1 + 0x352) = 0;
  param_1[0x34e] = (long)(puVar3 + 0x10);
  param_1[0x353] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x34e);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x34e] + 0xf0))(param_1 + 0x34e);
  *puVar4 = 0x28;
  if ((*(uint *)(param_1 + 0x352) >> 7 & 1) == 0) {
    param_1[0x353] = 0;
    *(undefined4 *)(param_1 + 0x353) = 0x28;
  }
  param_1[0x356] = 0;
  *(uint *)(param_1 + 0x352) = *(uint *)(param_1 + 0x352) & 0xfeffffff;
  param_1[0x355] = (long)"mIsEatCucumberPercentForHotel";
  param_1[0x357] = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x354] = (long)(puVar3 + 0x10);
  param_1[0x359] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x354);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x354] + 0xf0))(param_1 + 0x354);
  *puVar4 = 0x32;
  if ((*(uint *)(param_1 + 0x358) >> 7 & 1) == 0) {
    param_1[0x359] = 0;
    *(undefined4 *)(param_1 + 0x359) = 0x32;
  }
  *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x358) & 0xfeffffff;
  return;
}

