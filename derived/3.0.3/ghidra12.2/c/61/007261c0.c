
void FUN_007261c0(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  lVar8 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  plVar11 = param_1 + 5;
  *plVar11 = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar8;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  *param_1 = (long)&PTR_FUN_04900b00;
  param_1[0x2c] = (long)"mPattern";
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)&PTR_LAB_04903138;
  lVar8 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar12 = lVar8;
      lVar8 = *(long *)(lVar12 + 0x10);
    } while (lVar8 != 0);
    plVar11 = (long *)(lVar12 + 0x10);
  }
  *plVar11 = (long)(param_1 + 0x2b);
  param_1[0x2e] = (long)param_1;
  puVar6 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))();
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x31] = (long)&PTR_LAB_04902ff8;
  param_1[0x32] = (long)"mIsSyncAnimeRatio";
  param_1[0x36] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  puVar7 = (undefined1 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar7 = 1;
  if ((*(uint *)(param_1 + 0x35) >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  puVar1 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x35) = *(uint *)(param_1 + 0x35) & 0xfeffffff;
  puVar5 = PTR_DAT_04bd0d40;
  local_98 = puVar1 + 0x10;
  local_90 = "mAnimationNameInfoArray";
  puStack_80 = (undefined8 *)&DAT_040ee4f6;
  puStack_70 = &DAT_0407ebb1;
  local_68 = 8;
  param_1[0x37] = (long)(PTR_DAT_04bd0d40 + 0x10);
  param_1[0x38] = 0;
  puVar3 = PTR_DAT_04bb2698;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  local_88 = local_98;
  local_78 = local_98;
  if (*(long *)puVar3 != 0) {
    lVar8 = FUN_038cb610(*(long *)puVar3,param_1 + 0x37);
    param_1[0x38] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x37));
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  puVar3 = PTR_DAT_04bb3050;
  param_1[0x3b] = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(local_98 + 0x18))(&local_98);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = local_68;
  puVar2 = PTR_DAT_04bb60a0;
  param_1[0x40] = 0;
  param_1[0x3b] = (long)(puVar2 + 0x10);
  param_1[0x3c] = (long)local_90;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3b);
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x37] = (long)&PTR_FUN_04900c68;
  param_1[0x3b] = (long)&PTR_LAB_04900d28;
  param_1[0x49] = (long)"mSlotInfoIndex";
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)&PTR_LAB_04903138;
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar6 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x4c) >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  }
  param_1[0x4f] = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfeffffff;
  puVar2 = puVar1 + 0x10;
  local_90 = "mMusicSequenceTypeBuffer";
  puStack_80 = (undefined8 *)&DAT_040865de;
  local_68 = 8;
  param_1[0x4e] = (long)(puVar5 + 0x10);
  param_1[0x50] = 0;
  puStack_70 = &DAT_0407ebb1;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x51] = 0;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,param_1 + 0x4e);
    param_1[0x4f] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x4e));
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  param_1[0x52] = (long)(puVar3 + 0x10);
  (**(code **)(local_98 + 0x18))(&local_98);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x53] = (long)local_90;
  *(undefined4 *)(param_1 + 0x56) = local_68;
  puVar4 = PTR_DAT_04bb60a0;
  param_1[0x57] = 0;
  param_1[0x52] = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x4e] = (long)&PTR_FUN_04901320;
  param_1[0x5c] = 0;
  param_1[0x52] = (long)&PTR_LAB_049013e0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5e] = 0;
  local_68 = 8;
  param_1[0x5f] = (long)(puVar5 + 0x10);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  local_90 = "mSongCategoryBuffer";
  puStack_80 = &DAT_040f3bd7;
  puStack_70 = &DAT_0407ebb1;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x62] = 0;
  puVar5 = PTR_DAT_04bd0d40;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,param_1 + 0x5f);
    param_1[0x60] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x5f));
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  param_1[99] = (long)(puVar3 + 0x10);
  (**(code **)(local_98 + 0x18))(&local_98);
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[99] = (long)(puVar4 + 0x10);
  param_1[0x68] = 0;
  param_1[100] = (long)local_90;
  *(undefined4 *)(param_1 + 0x67) = local_68;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 99);
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x5f] = (long)&PTR_LAB_04902010;
  puVar1 = puVar1 + 0x10;
  param_1[99] = (long)&PTR_LAB_049020d0;
  local_90 = "mCommandDataThreeCount";
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6f] = 0;
  local_68 = 8;
  param_1[0x70] = (long)(puVar5 + 0x10);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  puStack_80 = (undefined8 *)&DAT_040865f7;
  puStack_70 = &DAT_0407ebb1;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x73] = 0;
  puVar3 = PTR_DAT_04bb3050;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,param_1 + 0x70);
    param_1[0x71] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x70));
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  param_1[0x74] = (long)(puVar3 + 0x10);
  (**(code **)(local_98 + 0x18))(&local_98);
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x75] = (long)local_90;
  *(undefined4 *)(param_1 + 0x78) = local_68;
  puVar2 = PTR_DAT_04bb60a0;
  param_1[0x79] = 0;
  param_1[0x74] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7e] = 0;
  local_90 = "mCommandDataFourCount";
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x70] = (long)&PTR_LAB_04902890;
  param_1[0x74] = (long)&PTR_LAB_04902950;
  param_1[0x80] = 0;
  local_68 = 8;
  param_1[0x81] = (long)(puVar5 + 0x10);
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  puStack_80 = (undefined8 *)&DAT_0409b0e3;
  puStack_70 = &DAT_0407ebb1;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x84] = 0;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,param_1 + 0x81);
    param_1[0x82] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x81));
      *plVar10 = (long)plVar11;
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar11;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  param_1[0x85] = (long)(puVar3 + 0x10);
  (**(code **)(local_98 + 0x18))(&local_98);
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x85] = (long)(puVar2 + 0x10);
  param_1[0x8a] = 0;
  param_1[0x86] = (long)local_90;
  *(undefined4 *)(param_1 + 0x89) = local_68;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x85);
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x93] = (long)"mSwitchTimingFrame";
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x81] = (long)&PTR_LAB_04902890;
  param_1[0x85] = (long)&PTR_LAB_04902950;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x92] = (long)&PTR_LAB_04903138;
  param_1[0x97] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x92);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x92] + 0xf0))(param_1 + 0x92);
  *puVar6 = 2;
  if ((*(uint *)(param_1 + 0x96) >> 7 & 1) == 0) {
    param_1[0x97] = 0;
    *(undefined4 *)(param_1 + 0x97) = 2;
  }
  param_1[0x9a] = 0;
  *(uint *)(param_1 + 0x96) = *(uint *)(param_1 + 0x96) & 0xfeffffff;
  param_1[0x99] = (long)"mInterval";
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x98] = (long)&PTR_LAB_04903138;
  param_1[0x9d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x98);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x98] + 0xf0))(param_1 + 0x98);
  *puVar6 = 1;
  if ((*(uint *)(param_1 + 0x9c) >> 7 & 1) == 0) {
    param_1[0x9d] = 0;
    *(undefined4 *)(param_1 + 0x9d) = 1;
  }
  param_1[0xa0] = 0;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfeffffff;
  param_1[0x9f] = (long)"mSwitchType";
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9e] = (long)&PTR_LAB_04903138;
  param_1[0xa3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9e);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x9e] + 0xf0))(param_1 + 0x9e);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xa2) >> 7 & 1) == 0) {
    param_1[0xa3] = 0;
    *(undefined4 *)(param_1 + 0xa3) = 0;
  }
  param_1[0xa6] = 0;
  *(uint *)(param_1 + 0xa2) = *(uint *)(param_1 + 0xa2) & 0xfeffffff;
  param_1[0xa5] = (long)"mIsDetailPlayTimingSetting";
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa4] = (long)&PTR_LAB_04902ff8;
  param_1[0xa9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa4);
  puVar7 = (undefined1 *)(**(code **)(param_1[0xa4] + 0xf0))(param_1 + 0xa4);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0xa8) >> 7 & 1) == 0) {
    param_1[0xa9] = 0;
    *(undefined1 *)(param_1 + 0xa9) = 0;
  }
  param_1[0xac] = 0;
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xfeffffff;
  param_1[0xab] = (long)"mIsDetailPlayTimingSyncSpan";
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xaa] = (long)&PTR_LAB_04902ff8;
  param_1[0xaf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xaa);
  puVar7 = (undefined1 *)(**(code **)(param_1[0xaa] + 0xf0))(param_1 + 0xaa);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0xae) >> 7 & 1) == 0) {
    param_1[0xaf] = 0;
    *(undefined1 *)(param_1 + 0xaf) = 0;
  }
  param_1[0xb2] = 0;
  *(uint *)(param_1 + 0xae) = *(uint *)(param_1 + 0xae) & 0xfeffffff;
  param_1[0xb1] = (long)"mDetailPlayTimingStart";
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb0] = (long)&PTR_LAB_04903138;
  param_1[0xb5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb0);
  puVar6 = (undefined4 *)(**(code **)(param_1[0xb0] + 0xf0))(param_1 + 0xb0);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xb4) >> 7 & 1) == 0) {
    param_1[0xb5] = 0;
    *(undefined4 *)(param_1 + 0xb5) = 0;
  }
  param_1[0xb8] = 0;
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfeffffff;
  param_1[0xb7] = (long)"mDetailPlayTimingEnd";
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xb6] = (long)&PTR_LAB_04903138;
  param_1[0xbb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb6);
  puVar6 = (undefined4 *)(**(code **)(param_1[0xb6] + 0xf0))(param_1 + 0xb6);
  *puVar6 = 1;
  if ((*(uint *)(param_1 + 0xba) >> 7 & 1) == 0) {
    param_1[0xbb] = 0;
    *(undefined4 *)(param_1 + 0xbb) = 1;
  }
  *(uint *)(param_1 + 0xba) = *(uint *)(param_1 + 0xba) & 0xfeffffff;
  return;
}

