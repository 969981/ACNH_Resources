
void FUN_0293ad88(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [7];
  undefined1 uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *local_d0;
  char *local_c8;
  undefined1 local_c0 [7];
  undefined4 uStack_b9;
  undefined1 local_b5;
  undefined4 uStack_b4;
  undefined *local_b0;
  undefined8 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_7d;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04bb60a0;
  lVar8 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar8;
  lVar8 = param_2[6];
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar8;
  *param_1 = (long)(puVar4 + 0x10);
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_04a930d0;
  local_48 = 0;
  local_7d = 0;
  local_b5 = 0;
  puVar1 = puVar1 + 0x10;
  local_c0 = (undefined1  [7])0x4e6e5500000040;
  uStack_b9 = 0x64656d61;
  pcStack_70 = "mPassName";
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  local_c8 = local_c0 + 4;
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_00744dd0(param_1 + 6,&local_78,&local_d0,param_1);
  local_a0 = 0;
  local_c8 = "mCenterPinPos";
  local_c0 = SUB87(puVar1,0);
  auVar5 = local_c0;
  uStack_b9._0_1_ = (undefined1)((ulong)puVar1 >> 0x38);
  uVar6 = (undefined1)uStack_b9;
  uStack_b9 = CONCAT31(0x7ebb1,(undefined1)uStack_b9);
  local_b5 = 4;
  uStack_b4 = 0;
  puStack_a8 = &DAT_0407ebb1;
  local_d0 = puVar1;
  local_b0 = puVar1;
  FUN_006fdfc0(param_1 + 0x17,&local_d0,PTR_DAT_04bb2150,param_1);
  param_1[0x21] = 0;
  param_1[0x1f] = (long)"mAquariumID";
  param_1[0x20] = 0;
  puVar3 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  plVar11 = param_1 + 0x1e;
  *plVar11 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar11);
  puVar7 = (undefined4 *)(**(code **)(*plVar11 + 0xf0))(plVar11);
  *puVar7 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  }
  puStack_a8 = &DAT_0407ebb1;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  local_c8 = "mPointBuffer";
  uStack_b9 = CONCAT31(0xb05ae,uVar6);
  local_b5 = 4;
  uStack_b4 = 0;
  local_a0 = 0;
  param_1[0x24] = (long)(PTR_DAT_04bd0d40 + 0x10);
  param_1[0x25] = 0;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  local_d0 = puVar1;
  local_c0 = auVar5;
  local_b0 = puVar1;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,param_1 + 0x24);
    param_1[0x25] = lVar8;
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
      plVar11 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x24));
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
  param_1[0x28] = (long)(puVar2 + 0x10);
  (**(code **)(local_d0 + 0x18))(&local_d0);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2c) = local_a0;
  param_1[0x28] = (long)(puVar4 + 0x10);
  param_1[0x29] = (long)local_c8;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x24] = (long)&PTR_LAB_04a93230;
  param_1[0x2e] = 0;
  param_1[0x28] = (long)&PTR_LAB_04a932f0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return;
}

