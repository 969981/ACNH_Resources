
void FUN_03d70b6c(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined *local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined2 local_c4;
  undefined2 uStack_c2;
  undefined *local_c0;
  undefined8 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_8d;
  undefined *local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 uStack_69;
  undefined *local_68;
  undefined8 *puStack_60;
  uint local_58;
  
  puVar4 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = PTR_DAT_04bb60a0;
  lVar9 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar9;
  lVar9 = param_2[6];
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar9;
  *param_1 = (long)(puVar6 + 0x10);
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar3 = PTR_DAT_04bb2020;
  local_58 = 0;
  local_8d = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "mPath";
  *param_1 = (long)(PTR_DAT_04bc5580 + 0x10);
  local_d0._0_4_ = 0x40;
  uStack_70 = 0x406a22d;
  local_6c = 0;
  local_6a = 0;
  uStack_69 = 0;
  puStack_60 = &DAT_0407ebb1;
  local_d8 = (char *)((long)&local_d0 + 4);
  local_d0._4_4_ = s_DummyPath_0405f5cb._0_4_;
  uStack_c8 = s_DummyPath_0405f5cb._4_4_;
  local_c4 = 0x68;
  local_e0 = PTR_DAT_04bb2bc0 + 0x10;
  local_88 = puVar1;
  local_68 = puVar1;
  local_78 = puVar1;
  FUN_00744dd0(param_1 + 6,&local_88,&local_e0,param_1);
  param_1[0x1a] = 0;
  param_1[0x18] = (long)"mIsIncludePath";
  param_1[0x19] = 0;
  puVar5 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  plVar12 = param_1 + 0x17;
  *plVar12 = (long)(puVar5 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar12);
  puVar7 = (undefined1 *)(**(code **)(*plVar12 + 0xf0))(plVar12);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0x1b) >> 7 & 1) == 0) {
    param_1[0x1c] = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  uVar2 = s_DummyGroup_040c2875._0_8_;
  local_78._0_4_ = 0x20;
  local_b0 = 0;
  local_6c = 0x7075;
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xfeffffff;
  local_d8 = "mGroupName";
  uStack_c8 = 0x408f0c3;
  local_c4 = 0;
  uStack_c2 = 0;
  pcStack_80 = (char *)((long)&local_78 + 4);
  local_58 = local_58 & 0xffffff;
  local_78._4_4_ = (undefined4)uVar2;
  uStack_70 = SUB84(uVar2,4);
  local_6a = 0;
  puStack_b8 = &DAT_0407ebb1;
  local_88 = PTR_DAT_04bb2028 + 0x10;
  local_e0 = puVar1;
  local_c0 = puVar1;
  local_d0 = puVar1;
  FUN_008f0e20(param_1 + 0x1d,&local_e0,&local_88,param_1);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar1 = PTR_DAT_04bc5588;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = (long)(puVar1 + 0x10);
  param_1[0x2b] = (long)"mBaseOption";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
  }
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  param_1[0x2a] = (long)&DAT_04b91390;
  local_e0 = puVar3 + 0x10;
  local_d8 = "mAnimOperationParamBuffer";
  uStack_c8 = 0x40fc446;
  local_c4 = 0;
  uStack_c2 = 0;
  puStack_b8 = &DAT_0407ebb1;
  local_b0 = 0;
  param_1[0x30] = (long)(PTR_DAT_04bd0d40 + 0x10);
  param_1[0x31] = 0;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_c0 = local_e0;
  local_d0 = local_e0;
  if (lVar9 != 0) {
    lVar9 = FUN_038cb610(lVar9,param_1 + 0x30);
    param_1[0x31] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar11 = (long *)(lVar9 + 0x70);
      lVar10 = *plVar11;
      plVar12 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)(param_1 + 0x30));
      *plVar11 = (long)plVar12;
      *plVar12 = lVar10;
      plVar12[1] = (long)plVar11;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar12;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  param_1[0x34] = (long)(puVar4 + 0x10);
  (**(code **)(local_e0 + 0x18))(&local_e0);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x38) = local_b0;
  param_1[0x34] = (long)(puVar6 + 0x10);
  param_1[0x35] = (long)local_d8;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x30] = (long)&DAT_04b914d0;
  param_1[0x3a] = 0;
  param_1[0x34] = (long)&PTR_LAB_04b91590;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return;
}

