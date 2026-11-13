
void FUN_014a6d20(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04bb33a8;
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  lVar7 = param_2[6];
  *param_1 = (long)&PTR_LAB_049a63b8;
  param_1[9] = (long)param_1;
  plVar9 = param_1 + 6;
  *plVar9 = (long)(puVar4 + 0x10);
  param_1[7] = (long)"__dummy_param_st_range";
  param_1[8] = 0;
  param_1[5] = (long)plVar9;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(int *)(param_1 + 4) = (int)lVar7;
  puVar3 = PTR_DAT_04bb31d0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 10) = 0x65;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0xc] = (long)puVar1;
  param_1[0xd] = (long)"mCreateRangeLeft";
  param_1[0xe] = 0;
  do {
    plVar8 = plVar9;
    plVar9 = (long *)plVar8[2];
  } while (plVar9 != (long *)0x0);
  plVar8[2] = (long)(param_1 + 0xc);
  param_1[0xf] = (long)param_1;
  uVar10 = 0x43070000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar10 = 0x4016cbe4;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xc] + 0xf0))();
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar10 = 0x43070000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x4016cbe4;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar10;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar2 & 0xfeffffff;
  param_1[0x13] = (long)"mCreateRangeRight";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  plVar9 = param_1 + 0x12;
  *plVar9 = (long)(puVar3 + 0x10);
  param_1[0x17] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  uVar10 = 0x43070000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar10 = 0x4016cbe4;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar9 + 0xf0))(plVar9);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x16);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar10 = 0x43070000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x4016cbe4;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar10;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar2 & 0xfeffffff;
  param_1[0x19] = (long)"mCreateRangeNear";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  plVar9 = param_1 + 0x18;
  *plVar9 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  uVar10 = 0x42c80000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar10 = 0x3fdf66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar9 + 0xf0))(plVar9);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar10 = 0x42c80000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x3fdf66f3;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar10;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar2 & 0xfeffffff;
  param_1[0x1f] = (long)"mCreateRangeFar";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar9 = param_1 + 0x1e;
  *plVar9 = (long)(puVar3 + 0x10);
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  uVar10 = 0x43ac8000;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar10 = 0x40c0af31;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar9 + 0xf0))(plVar9);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x22);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar10 = 0x43ac8000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x40c0af31;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar10;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = uVar2 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar3 + 0x10);
  param_1[0x25] = (long)"mCreateRangeTilt";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  uVar10 = 0x42960000;
  if ((*(uint *)(param_1 + 0x28) & 0x800) != 0) {
    uVar10 = 0x3fa78d36;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    uVar10 = 0x42960000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x3fa78d36;
    }
    *(undefined4 *)(param_1 + 0x29) = uVar10;
  }
  *(uint *)(param_1 + 0x28) = uVar2 & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x66;
  param_1[0x2a] = (long)(puVar4 + 0x10);
  param_1[0x2b] = (long)"__dummy_param_ed_range";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x65;
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar4 + 0x10);
  param_1[0x31] = (long)"__dummy_param_st_extension_range";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x34) >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x36] = (long)(puVar3 + 0x10);
  param_1[0x37] = (long)"mCreateRangeLeftExtension";
  param_1[0x3b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  uVar10 = 0x42480000;
  if ((*(uint *)(param_1 + 0x3a) & 0x800) != 0) {
    uVar10 = 0x3f5f66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x3a);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    uVar10 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar10;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x3a) = uVar2 & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar3 + 0x10);
  param_1[0x3d] = (long)"mCreateRangeRightExtension";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  uVar10 = 0x42480000;
  if ((*(uint *)(param_1 + 0x40) & 0x800) != 0) {
    uVar10 = 0x3f5f66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    uVar10 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x41) = uVar10;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = uVar2 & 0xfeffffff;
  param_1[0x43] = (long)"mCreateRangeNearExtension";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar3 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x46) >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xfeffffff;
  param_1[0x49] = (long)"mCreateRangeFarExtension";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar3 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x4c) >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    *(undefined4 *)(param_1 + 0x4d) = 0;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfeffffff;
  param_1[0x4f] = (long)"mCreateRangeTiltExtension";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4e] = (long)(puVar3 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x52) >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    *(undefined4 *)(param_1 + 0x53) = 0;
  }
  param_1[0x56] = 0;
  *(uint *)(param_1 + 0x52) = *(uint *)(param_1 + 0x52) & 0xfeffffff;
  param_1[0x55] = (long)"__dummy_param_ed_extension_range";
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x66;
  param_1[0x54] = (long)(puVar4 + 0x10);
  param_1[0x59] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x58) >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  param_1[0x5c] = 0;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfeffffff;
  param_1[0x5b] = (long)"__dummy_param_st_wherearen_add_range";
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x65;
  param_1[0x5a] = (long)(puVar4 + 0x10);
  param_1[0x5f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x5e) >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
  }
  param_1[0x62] = 0;
  *(uint *)(param_1 + 0x5e) = *(uint *)(param_1 + 0x5e) & 0xfeffffff;
  param_1[0x61] = (long)"mWherearenAddRight";
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x60] = (long)(puVar3 + 0x10);
  param_1[0x65] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x60);
  uVar10 = 0x43070000;
  if ((*(uint *)(param_1 + 100) & 0x800) != 0) {
    uVar10 = 0x4016cbe4;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x60] + 0xf0))(param_1 + 0x60);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 100);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x65] = 0;
    uVar10 = 0x43070000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x4016cbe4;
    }
    *(undefined4 *)(param_1 + 0x65) = uVar10;
  }
  param_1[0x68] = 0;
  *(uint *)(param_1 + 100) = uVar2 & 0xfeffffff;
  param_1[0x67] = (long)"mWherearenAddFar";
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x66] = (long)(puVar3 + 0x10);
  param_1[0x6b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x66);
  uVar10 = 0x43ac8000;
  if ((*(uint *)(param_1 + 0x6a) & 0x800) != 0) {
    uVar10 = 0x40c0af31;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x66] + 0xf0))(param_1 + 0x66);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x6a);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x6b] = 0;
    uVar10 = 0x43ac8000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x40c0af31;
    }
    *(undefined4 *)(param_1 + 0x6b) = uVar10;
  }
  param_1[0x6e] = 0;
  *(uint *)(param_1 + 0x6a) = uVar2 & 0xfeffffff;
  param_1[0x6d] = (long)"__dummy_param_ed_wherearen_add_range";
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x66;
  param_1[0x6c] = (long)(puVar4 + 0x10);
  param_1[0x71] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6c);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x6c] + 0xf0))(param_1 + 0x6c);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x70) >> 7 & 1) == 0) {
    param_1[0x71] = 0;
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  param_1[0x74] = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfeffffff;
  param_1[0x73] = (long)"__dummy_param_st_buff";
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0x65;
  param_1[0x72] = (long)(puVar4 + 0x10);
  param_1[0x77] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x72);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x72] + 0xf0))(param_1 + 0x72);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x76) >> 7 & 1) == 0) {
    param_1[0x77] = 0;
    *(undefined1 *)(param_1 + 0x77) = 0;
  }
  param_1[0x7a] = 0;
  *(uint *)(param_1 + 0x76) = *(uint *)(param_1 + 0x76) & 0xfeffffff;
  param_1[0x79] = (long)"mRangeWidthBuff";
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x78] = (long)(puVar3 + 0x10);
  param_1[0x7d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x78);
  uVar10 = 0x41400000;
  if ((*(uint *)(param_1 + 0x7c) & 0x800) != 0) {
    uVar10 = 0x3e567750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x78] + 0xf0))(param_1 + 0x78);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x7c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x7d] = 0;
    uVar10 = 0x41400000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x3e567750;
    }
    *(undefined4 *)(param_1 + 0x7d) = uVar10;
  }
  param_1[0x80] = 0;
  *(uint *)(param_1 + 0x7c) = uVar2 & 0xfeffffff;
  param_1[0x7f] = (long)"mRangeNearBuff";
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7e] = (long)(puVar3 + 0x10);
  param_1[0x83] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7e);
  uVar10 = 0x41400000;
  if ((*(uint *)(param_1 + 0x82) & 0x800) != 0) {
    uVar10 = 0x3e567750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x7e] + 0xf0))(param_1 + 0x7e);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x82);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x83] = 0;
    uVar10 = 0x41400000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x3e567750;
    }
    *(undefined4 *)(param_1 + 0x83) = uVar10;
  }
  param_1[0x86] = 0;
  *(uint *)(param_1 + 0x82) = uVar2 & 0xfeffffff;
  param_1[0x85] = (long)"mRangeFarBuff";
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x84] = (long)(puVar3 + 0x10);
  param_1[0x89] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x84);
  uVar10 = 0x41400000;
  if ((*(uint *)(param_1 + 0x88) & 0x800) != 0) {
    uVar10 = 0x3e567750;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x84] + 0xf0))(param_1 + 0x84);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x88);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x89] = 0;
    uVar10 = 0x41400000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x3e567750;
    }
    *(undefined4 *)(param_1 + 0x89) = uVar10;
  }
  param_1[0x8c] = 0;
  *(uint *)(param_1 + 0x88) = uVar2 & 0xfeffffff;
  param_1[0x8b] = (long)"__dummy_param_ed_buff";
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0x66;
  param_1[0x8a] = (long)(puVar4 + 0x10);
  param_1[0x8f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x8a);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x8a] + 0xf0))(param_1 + 0x8a);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x8e) >> 7 & 1) == 0) {
    param_1[0x8f] = 0;
    *(undefined1 *)(param_1 + 0x8f) = 0;
  }
  param_1[0x92] = 0;
  *(uint *)(param_1 + 0x8e) = *(uint *)(param_1 + 0x8e) & 0xfeffffff;
  param_1[0x91] = (long)"__dummy_param_st_camera_range";
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x65;
  param_1[0x90] = (long)(puVar4 + 0x10);
  param_1[0x95] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x90);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x90] + 0xf0))(param_1 + 0x90);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x94) >> 7 & 1) == 0) {
    param_1[0x95] = 0;
    *(undefined1 *)(param_1 + 0x95) = 0;
  }
  param_1[0x98] = 0;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfeffffff;
  param_1[0x97] = (long)"mCameraRangeLeft";
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x96] = (long)(puVar3 + 0x10);
  param_1[0x9b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x96);
  uVar10 = 0x42fa0000;
  if ((*(uint *)(param_1 + 0x9a) & 0x800) != 0) {
    uVar10 = 0x400ba058;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x96] + 0xf0))(param_1 + 0x96);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0x9a);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x9b] = 0;
    uVar10 = 0x42fa0000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x400ba058;
    }
    *(undefined4 *)(param_1 + 0x9b) = uVar10;
  }
  param_1[0x9e] = 0;
  *(uint *)(param_1 + 0x9a) = uVar2 & 0xfeffffff;
  param_1[0x9d] = (long)"mCameraRangeRight";
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9c] = (long)(puVar3 + 0x10);
  param_1[0xa1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9c);
  uVar10 = 0x42fa0000;
  if ((*(uint *)(param_1 + 0xa0) & 0x800) != 0) {
    uVar10 = 0x400ba058;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x9c] + 0xf0))(param_1 + 0x9c);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0xa0);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0xa1] = 0;
    uVar10 = 0x42fa0000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x400ba058;
    }
    *(undefined4 *)(param_1 + 0xa1) = uVar10;
  }
  param_1[0xa4] = 0;
  *(uint *)(param_1 + 0xa0) = uVar2 & 0xfeffffff;
  param_1[0xa3] = (long)"mCameraRangeNear";
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa2] = (long)(puVar3 + 0x10);
  param_1[0xa7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa2);
  uVar10 = 0x428c0000;
  if ((*(uint *)(param_1 + 0xa6) & 0x800) != 0) {
    uVar10 = 0x3f9c61aa;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xa2] + 0xf0))(param_1 + 0xa2);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0xa6);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0xa7] = 0;
    uVar10 = 0x428c0000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x3f9c61aa;
    }
    *(undefined4 *)(param_1 + 0xa7) = uVar10;
  }
  param_1[0xaa] = 0;
  *(uint *)(param_1 + 0xa6) = uVar2 & 0xfeffffff;
  param_1[0xa9] = (long)"mCameraRangeFar";
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa8] = (long)(puVar3 + 0x10);
  param_1[0xad] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa8);
  uVar10 = 0x43520000;
  if ((*(uint *)(param_1 + 0xac) & 0x800) != 0) {
    uVar10 = 0x406a927f;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xa8] + 0xf0))(param_1 + 0xa8);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0xac);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0xad] = 0;
    uVar10 = 0x43520000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x406a927f;
    }
    *(undefined4 *)(param_1 + 0xad) = uVar10;
  }
  param_1[0xb0] = 0;
  *(uint *)(param_1 + 0xac) = uVar2 & 0xfeffffff;
  param_1[0xaf] = (long)"mCameraRangeTilt";
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xae] = (long)(puVar3 + 0x10);
  param_1[0xb3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xae);
  uVar10 = 0x42b40000;
  if ((*(uint *)(param_1 + 0xb2) & 0x800) != 0) {
    uVar10 = 0x3fc90fdb;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xae] + 0xf0))(param_1 + 0xae);
  *puVar5 = uVar10;
  uVar2 = *(uint *)(param_1 + 0xb2);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0xb3] = 0;
    uVar10 = 0x42b40000;
    if ((uVar2 & 0x800) != 0) {
      uVar10 = 0x3fc90fdb;
    }
    *(undefined4 *)(param_1 + 0xb3) = uVar10;
  }
  param_1[0xb6] = 0;
  *(uint *)(param_1 + 0xb2) = uVar2 & 0xfeffffff;
  param_1[0xb5] = (long)"__dummy_param_ed_camera_range";
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x66;
  param_1[0xb4] = (long)(puVar4 + 0x10);
  param_1[0xb9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb4);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xb4] + 0xf0))(param_1 + 0xb4);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xb8) >> 7 & 1) == 0) {
    param_1[0xb9] = 0;
    *(undefined1 *)(param_1 + 0xb9) = 0;
  }
  param_1[0xbc] = 0;
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfeffffff;
  param_1[0xbb] = (long)"__dummy_param_st_sound_range";
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0x65;
  param_1[0xba] = (long)(puVar4 + 0x10);
  param_1[0xbf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xba);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xba] + 0xf0))(param_1 + 0xba);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xbe) >> 7 & 1) == 0) {
    param_1[0xbf] = 0;
    *(undefined1 *)(param_1 + 0xbf) = 0;
  }
  param_1[0xc2] = 0;
  *(uint *)(param_1 + 0xbe) = *(uint *)(param_1 + 0xbe) & 0xfeffffff;
  param_1[0xc1] = (long)"mSoundRangeWidthHalfUnit";
  param_1[0xc3] = 0;
  puVar3 = PTR_DAT_04bb5a88;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0xc5] = 0;
  param_1[0xc0] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc0);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xc0] + 0xf0))(param_1 + 0xc0);
  *puVar6 = 0x38;
  if ((*(uint *)(param_1 + 0xc4) >> 7 & 1) == 0) {
    param_1[0xc5] = 0;
    *(undefined1 *)(param_1 + 0xc5) = 0x38;
  }
  param_1[200] = 0;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfeffffff;
  param_1[199] = (long)"mSoundRangeDepthHalfUnit";
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xc6] = (long)puVar1;
  param_1[0xcb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc6);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xc6] + 0xf0))(param_1 + 0xc6);
  *puVar6 = 0x10;
  if ((*(uint *)(param_1 + 0xca) >> 7 & 1) == 0) {
    param_1[0xcb] = 0;
    *(undefined1 *)(param_1 + 0xcb) = 0x10;
  }
  param_1[0xce] = 0;
  *(uint *)(param_1 + 0xca) = *(uint *)(param_1 + 0xca) & 0xfeffffff;
  param_1[0xcd] = (long)"__dummy_param_ed_sound_range";
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0x66;
  param_1[0xcc] = (long)(puVar4 + 0x10);
  param_1[0xd1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcc);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xcc] + 0xf0))(param_1 + 0xcc);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xd0) >> 7 & 1) == 0) {
    param_1[0xd1] = 0;
    *(undefined1 *)(param_1 + 0xd1) = 0;
  }
  param_1[0xd4] = 0;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) & 0xfeffffff;
  param_1[0xd3] = (long)"__dummy_param_st_most_priority_radius";
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0x65;
  param_1[0xd2] = (long)(puVar4 + 0x10);
  param_1[0xd7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd2);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xd2] + 0xf0))(param_1 + 0xd2);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xd6) >> 7 & 1) == 0) {
    param_1[0xd7] = 0;
    *(undefined1 *)(param_1 + 0xd7) = 0;
  }
  param_1[0xda] = 0;
  *(uint *)(param_1 + 0xd6) = *(uint *)(param_1 + 0xd6) & 0xfeffffff;
  param_1[0xd9] = (long)"mMostPriorityRadiusUnit";
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xd8] = (long)(puVar3 + 0x10);
  param_1[0xdd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd8);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xd8] + 0xf0))(param_1 + 0xd8);
  *puVar6 = 4;
  if ((*(uint *)(param_1 + 0xdc) >> 7 & 1) == 0) {
    param_1[0xdd] = 0;
    *(undefined1 *)(param_1 + 0xdd) = 4;
  }
  param_1[0xe0] = 0;
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) & 0xfeffffff;
  param_1[0xdf] = (long)"__dummy_param_ed_most_priority_radius";
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0x66;
  param_1[0xde] = (long)(puVar4 + 0x10);
  param_1[0xe3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xde);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xde] + 0xf0))(param_1 + 0xde);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xe2) >> 7 & 1) == 0) {
    param_1[0xe3] = 0;
    *(undefined1 *)(param_1 + 0xe3) = 0;
  }
  *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfeffffff;
  return;
}

