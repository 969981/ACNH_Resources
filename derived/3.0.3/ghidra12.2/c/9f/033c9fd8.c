
void FUN_033c9fd8(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined *local_b0;
  undefined8 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_7d;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  lVar7 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar3 = PTR_DAT_04bb60a0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar7;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  param_1[0x2a] = (long)param_1;
  *param_1 = (long)&PTR_FUN_04b254b0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  puVar1 = PTR_DAT_04bb2020;
  local_48 = 0;
  local_7d = 0;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "mParamName";
  puStack_50 = &DAT_0407ebb1;
  puStack_60 = &DAT_040ca03d;
  local_c8 = (char *)((long)&local_c0 + 4);
  local_c0._0_4_ = 0x40;
  uStack_b4 = 0x656d61;
  local_c0._4_4_ = s_DefaultName_0405c6e7._0_4_;
  uStack_b8 = s_DefaultName_0405c6e7._4_4_;
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_68 = local_78;
  local_58 = local_78;
  FUN_00744dd0(param_1 + 0x2b,&local_78,&local_d0,param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x80;
  puVar4 = PTR_DAT_04bbd958;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar4 + 0x10);
  param_1[0x3d] = (long)"mReleaseVersion";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  param_1[0x43] = (long)"mMode";
  param_1[0x46] = -0x100000000;
  param_1[0x45] = 0;
  param_1[0x42] = (long)&PTR_LAB_04b25618;
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar5 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x46) >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  }
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xfeffffff;
  local_d0 = puVar1 + 0x10;
  local_c8 = "mCategoryUseParamArray";
  uStack_b8 = 0x40c6f4b;
  uStack_b4 = 0;
  puStack_a8 = &DAT_0407ebb1;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  local_a0 = 0;
  param_1[0x49] = 0;
  param_1[0x48] = (long)puVar1;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x4a] = 0;
  lVar7 = *(long *)puVar1;
  param_1[0x4b] = 0;
  local_b0 = local_d0;
  local_c0 = local_d0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,param_1 + 0x48);
    param_1[0x49] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar9 = (long *)(lVar7 + 0x70);
      lVar8 = *plVar9;
      plVar2 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(param_1 + 0x48));
      *plVar9 = (long)plVar2;
      *plVar2 = lVar8;
      plVar2[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar2;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  param_1[0x4c] = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(local_d0 + 0x18))(&local_d0);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x4d] = (long)local_c8;
  *(undefined4 *)(param_1 + 0x50) = local_a0;
  param_1[0x4c] = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x48] = (long)&PTR_LAB_04b25a30;
  param_1[0x4c] = (long)&PTR_LAB_04b25af0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x59] = (long)"mItemAreaSize";
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  puVar1 = PTR_DAT_04bbd520 + 0x10;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  param_1[0x58] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x58);
  puVar6 = (undefined8 *)(**(code **)(param_1[0x58] + 0xf0))(param_1 + 0x58);
  *puVar6 = 0x42c8000042c80000;
  if ((*(uint *)(param_1 + 0x5c) >> 7 & 1) == 0) {
    param_1[0x5e] = 0x42c8000042c80000;
  }
  param_1[0x61] = 0;
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfeffffff;
  param_1[0x60] = (long)"mItemAreaPos";
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x5f] = (long)puVar1;
  param_1[0x65] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5f);
  puVar6 = (undefined8 *)(**(code **)(param_1[0x5f] + 0xf0))(param_1 + 0x5f);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 99) >> 7 & 1) == 0) {
    param_1[0x65] = 0;
  }
  param_1[0x68] = 0;
  *(uint *)(param_1 + 99) = *(uint *)(param_1 + 99) & 0xfeffffff;
  param_1[0x67] = (long)"mNormalDeleteFrame";
  param_1[0x69] = 0;
  puVar1 = PTR_DAT_04bb62c0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x66] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x66);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x66] + 0xf0))(param_1 + 0x66);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x6a) >> 7 & 1) == 0) {
    param_1[0x6b] = 0;
    *(undefined4 *)(param_1 + 0x6b) = 0;
  }
  param_1[0x6e] = 0;
  *(uint *)(param_1 + 0x6a) = *(uint *)(param_1 + 0x6a) & 0xfeffffff;
  param_1[0x6d] = (long)"mSpecialDeleteFrame";
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6c] = (long)(puVar1 + 0x10);
  param_1[0x71] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6c);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x6c] + 0xf0))(param_1 + 0x6c);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x70) >> 7 & 1) == 0) {
    param_1[0x71] = 0;
    *(undefined4 *)(param_1 + 0x71) = 0;
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfeffffff;
  (**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  return;
}

