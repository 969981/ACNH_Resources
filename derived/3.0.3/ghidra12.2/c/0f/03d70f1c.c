
void FUN_03d70f1c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined *local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  char *pcStack_b8;
  undefined4 local_b0;
  undefined1 local_8d;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  FUN_03d70660();
  puVar4 = PTR_DAT_04bb2020;
  local_58 = 0;
  local_8d = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "mUserName";
  *param_1 = (long)(PTR_DAT_04bc5560 + 0x10);
  local_d0 = (undefined *)0x6d6d754400000040;
  local_c8 = (undefined *)CONCAT62(local_c8._2_6_,0x79);
  puStack_70 = &DAT_040e1c47;
  puStack_60 = &DAT_0407ebb1;
  local_d8 = (char *)((long)&local_d0 + 4);
  local_e0 = PTR_DAT_04bb2bc0 + 0x10;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_00744dd0(param_1 + 0x20,&local_88,&local_e0,param_1);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  puVar2 = PTR_DAT_04bb33a8;
  param_1[0x36] = 0;
  param_1[0x31] = (long)(puVar2 + 0x10);
  param_1[0x32] = (long)"mIsUniqueUserId";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  puVar7 = (undefined1 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0x35) >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    *(undefined1 *)(param_1 + 0x36) = 0;
  }
  *(uint *)(param_1 + 0x35) = *(uint *)(param_1 + 0x35) & 0xfeffffff;
  local_d8 = "mAnimOperationParamBuffer";
  local_c8 = &DAT_040dc91b;
  pcStack_b8 = "BgColor = Yellow";
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  local_b0 = 0;
  param_1[0x37] = (long)puVar2;
  param_1[0x38] = 0;
  puVar5 = PTR_DAT_04bb2698;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  lVar8 = *(long *)puVar5;
  local_e0 = puVar1;
  local_d0 = puVar1;
  local_c0 = puVar1;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,param_1 + 0x37);
    param_1[0x38] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar3 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x37));
      *plVar10 = (long)plVar3;
      *plVar3 = lVar9;
      plVar3[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar3;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  puVar1 = PTR_DAT_04bb3050 + 0x10;
  param_1[0x3b] = (long)puVar1;
  (**(code **)(local_e0 + 0x18))(&local_e0);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = local_b0;
  puVar6 = PTR_DAT_04bb60a0;
  param_1[0x40] = 0;
  param_1[0x3b] = (long)(puVar6 + 0x10);
  param_1[0x3c] = (long)local_d8;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3b);
  lVar8 = *(long *)puVar5;
  param_1[0x37] = (long)&DAT_04b914d0;
  local_e0 = puVar4 + 0x10;
  param_1[0x3b] = (long)&PTR_LAB_04b91590;
  local_d8 = "mPartsParamBuffer";
  local_c8 = &DAT_0408431b;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  local_b0 = 0;
  param_1[0x47] = (long)puVar2;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  pcStack_b8 = "BgColor = Blue";
  local_d0 = local_e0;
  local_c0 = local_e0;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,param_1 + 0x47);
    param_1[0x48] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar3 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x47));
      *plVar10 = (long)plVar3;
      *plVar3 = lVar9;
      plVar3[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar3;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  param_1[0x4b] = (long)puVar1;
  (**(code **)(local_e0 + 0x18))(&local_e0);
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = (long)(puVar6 + 0x10);
  param_1[0x50] = 0;
  param_1[0x4c] = (long)local_d8;
  *(undefined4 *)(param_1 + 0x4f) = local_b0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4b);
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x47] = (long)&DAT_04b91708;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x4b] = (long)&PTR_LAB_04b917c8;
  return;
}

