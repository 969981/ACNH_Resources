
void FUN_02273670(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  char *pcStack_58;
  
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "Actor";
  local_68 = param_2;
  local_60 = local_70;
  FUN_00751ec0(param_1,&local_60,&local_70,0);
  puVar3 = PTR_DAT_04bb33a8;
  *param_1 = (long)&PTR_LAB_04a7c3e8;
  param_1[0x19] = (long)"__dummy_param_st_move_X";
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x65;
  param_1[0x18] = (long)(puVar3 + 0x10);
  plVar8 = param_1 + 5;
  lVar7 = *plVar8;
  if (*plVar8 != 0) {
    do {
      lVar6 = lVar7;
      lVar7 = *(long *)(lVar6 + 0x10);
    } while (lVar7 != 0);
    plVar8 = (long *)(lVar6 + 0x10);
  }
  *plVar8 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar4 = (undefined1 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mAbsoluteMaxRotX";
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  plVar8 = param_1 + 0x1e;
  *plVar8 = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  puVar5 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar1 + 0x10);
  param_1[0x25] = (long)"mHalfPeriodX";
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
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar1 + 0x10);
  param_1[0x2b] = (long)"mMaxRotXDecrement";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
  }
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x66;
  param_1[0x30] = (long)(puVar3 + 0x10);
  param_1[0x31] = (long)"__dummy_param_ed_move_X";
  param_1[0x35] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x34) >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  *(undefined4 *)(param_1 + 0x3a) = 0x65;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = (long)(puVar3 + 0x10);
  param_1[0x37] = (long)"__dummy_param_st_move_Z";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x3a) >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3c] = (long)(puVar1 + 0x10);
  param_1[0x3d] = (long)"mAbsoluteMaxRotZ";
  param_1[0x41] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  param_1[0x43] = (long)"mHalfPeriodZ";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar1 + 0x10);
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
  param_1[0x49] = (long)"mMaxRotZDecrement";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar1 + 0x10);
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
  param_1[0x4f] = (long)"__dummy_param_ed_move_Z";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x66;
  param_1[0x4e] = (long)(puVar3 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x52) >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    *(undefined1 *)(param_1 + 0x53) = 0;
  }
  param_1[0x56] = 0;
  *(uint *)(param_1 + 0x52) = *(uint *)(param_1 + 0x52) & 0xfeffffff;
  param_1[0x55] = (long)"__dummy_param_st_move_common";
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x65;
  param_1[0x54] = (long)(puVar3 + 0x10);
  param_1[0x59] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x58) >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  param_1[0x5c] = 0;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfeffffff;
  param_1[0x5b] = (long)"mRootDelayCount";
  param_1[0x5d] = 0;
  puVar2 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x5a] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x5e) >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    *(undefined4 *)(param_1 + 0x5f) = 0;
  }
  param_1[0x62] = 0;
  *(uint *)(param_1 + 0x5e) = *(uint *)(param_1 + 0x5e) & 0xfeffffff;
  param_1[0x61] = (long)"mSwayMaxRotXZDecrement";
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x60] = (long)(puVar1 + 0x10);
  param_1[0x65] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x60);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x60] + 0xf0))(param_1 + 0x60);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 100) >> 7 & 1) == 0) {
    param_1[0x65] = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
  }
  param_1[0x68] = 0;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfeffffff;
  param_1[0x67] = (long)"__dummy_param_ed_move_common";
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0x66;
  param_1[0x66] = (long)(puVar3 + 0x10);
  param_1[0x6b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x66);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x66] + 0xf0))(param_1 + 0x66);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x6a) >> 7 & 1) == 0) {
    param_1[0x6b] = 0;
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  *(uint *)(param_1 + 0x6a) = *(uint *)(param_1 + 0x6a) & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

