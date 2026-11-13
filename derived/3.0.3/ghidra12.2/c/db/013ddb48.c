
void FUN_013ddb48(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [7];
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined *local_e0;
  char *local_d8;
  undefined1 local_d0 [7];
  undefined4 uStack_c9;
  undefined1 local_c5;
  undefined4 uStack_c4;
  undefined *local_c0;
  undefined8 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_8d;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04bb60a0;
  lVar9 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar9;
  lVar9 = param_2[6];
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar9;
  *param_1 = (long)(puVar4 + 0x10);
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar2 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_04995d40;
  local_58 = 0;
  local_8d = 0;
  local_c5 = 0;
  local_88 = puVar2 + 0x10;
  pcStack_80 = "mPassName";
  puStack_70 = &DAT_0407ebb1;
  local_d8 = local_d0 + 4;
  puStack_60 = &DAT_0407ebb1;
  local_d0 = (undefined1  [7])0x4e6e5500000040;
  uStack_c9 = 0x64656d61;
  local_e0 = PTR_DAT_04bb2bc0 + 0x10;
  local_78 = local_88;
  local_68 = local_88;
  FUN_00744dd0(param_1 + 6,&local_88,&local_e0,param_1);
  param_1[0x1a] = 0;
  param_1[0x18] = (long)"mIsUseLocatorPos";
  param_1[0x19] = 0;
  puVar1 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  plVar12 = param_1 + 0x17;
  *plVar12 = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar12);
  puVar7 = (undefined1 *)(**(code **)(*plVar12 + 0xf0))(plVar12);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0x1b) >> 7 & 1) == 0) {
    param_1[0x1c] = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xfeffffff;
  param_1[0x1e] = (long)"mLocatorID";
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar1 = PTR_DAT_04bb3380 + 0x10;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  plVar12 = param_1 + 0x1d;
  *plVar12 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar12);
  puVar8 = (undefined4 *)(**(code **)(*plVar12 + 0xf0))(plVar12);
  *puVar8 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x21) >> 7 & 1) == 0) {
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  }
  puVar2 = puVar2 + 0x10;
  local_b0 = 0;
  *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) & 0xfeffffff;
  local_d8 = "mCenterPinPos";
  local_d0 = SUB87(puVar2,0);
  auVar5 = local_d0;
  uStack_c9._0_1_ = (undefined1)((ulong)puVar2 >> 0x38);
  uVar6 = (undefined1)uStack_c9;
  uStack_c9 = CONCAT31(0x7ebb1,(undefined1)uStack_c9);
  local_c5 = 4;
  uStack_c4 = 0;
  puStack_b8 = &DAT_0407ebb1;
  local_e0 = puVar2;
  local_c0 = puVar2;
  FUN_006fdfc0(param_1 + 0x23,&local_e0,PTR_DAT_04bb2150,param_1);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)puVar1;
  param_1[0x2b] = (long)"mAquariumID";
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar8 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  }
  puStack_b8 = &DAT_0407ebb1;
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  local_d8 = "mPointBuffer";
  uStack_c9 = CONCAT31(0xb05ae,uVar6);
  local_c5 = 4;
  uStack_c4 = 0;
  local_b0 = 0;
  param_1[0x30] = (long)(PTR_DAT_04bd0d40 + 0x10);
  param_1[0x31] = 0;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_e0 = puVar2;
  local_d0 = auVar5;
  local_c0 = puVar2;
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
  param_1[0x34] = (long)(puVar3 + 0x10);
  (**(code **)(local_e0 + 0x18))(&local_e0);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x38) = local_b0;
  param_1[0x34] = (long)(puVar4 + 0x10);
  param_1[0x35] = (long)local_d8;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x30] = (long)&PTR_LAB_04995ea0;
  param_1[0x3a] = 0;
  param_1[0x34] = (long)&PTR_LAB_04995f60;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined2 *)((long)param_1 + 0x201) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return;
}

