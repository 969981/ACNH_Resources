
void FUN_01923540(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *local_78;
  char *local_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  FUN_01907f30();
  param_1[0xa7] = 0;
  *param_1 = (long)&PTR_FUN_049dd1a8;
  param_1[0xa6] = (long)"mActionType";
  param_1[0xa9] = 8;
  param_1[0xa5] = (long)&PTR_LAB_049dd658;
  plVar6 = param_1 + 5;
  param_1[0xa8] = 0;
  param_1[0xaa] = 0;
  lVar8 = *plVar6;
  if (*plVar6 != 0) {
    do {
      lVar10 = lVar8;
      lVar8 = *(long *)(lVar10 + 0x10);
    } while (lVar8 != 0);
    plVar6 = (long *)(lVar10 + 0x10);
  }
  *plVar6 = (long)(param_1 + 0xa5);
  param_1[0xa8] = (long)param_1;
  puVar4 = (undefined4 *)(**(code **)(param_1[0xa5] + 0xf0))();
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0xa9) >> 7 & 1) == 0) {
    param_1[0xaa] = 0;
    *(undefined4 *)(param_1 + 0xaa) = 0;
  }
  puVar1 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0xa9) = *(uint *)(param_1 + 0xa9) & 0xfeffffff;
  local_48 = 8;
  puVar1 = puVar1 + 0x10;
  local_70 = "mAngle";
  puStack_60 = &DAT_040cf826;
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_006fdfc0(param_1 + 0xab,&local_78,PTR_DAT_04bb2150,param_1);
  param_1[0xb4] = 0;
  param_1[0xb3] = (long)"mIsUseGroupParam";
  param_1[0xb5] = 0;
  puVar3 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0xb6) = 8;
  param_1[0xb7] = 0;
  param_1[0xb2] = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb2);
  puVar5 = (undefined1 *)(**(code **)(param_1[0xb2] + 0xf0))(param_1 + 0xb2);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0xb6) >> 7 & 1) == 0) {
    param_1[0xb7] = 0;
    *(undefined1 *)(param_1 + 0xb7) = 0;
  }
  puStack_50 = &DAT_0407ebb1;
  plVar6 = param_1 + 0xb8;
  *(uint *)(param_1 + 0xb6) = *(uint *)(param_1 + 0xb6) & 0xfeffffff;
  local_70 = "mGroupParamIDBuffer";
  puStack_60 = &DAT_04091e20;
  local_48 = 8;
  param_1[0xb9] = 0;
  param_1[0xb8] = (long)&PTR_FUN_04b64428;
  param_1[0xba] = 0;
  lVar8 = DAT_05ae7600;
  param_1[0xbb] = 0;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,plVar6);
    param_1[0xb9] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar9 = (long *)(lVar8 + 0x70);
      lVar7 = *plVar9;
      plVar2 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)plVar6);
      *plVar9 = (long)plVar2;
      *plVar2 = lVar7;
      plVar2[1] = (long)plVar9;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar2;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  param_1[0xbc] = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(local_78 + 0x18))(&local_78);
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xbd] = (long)local_70;
  puVar1 = PTR_DAT_04bb60a0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc0) = local_48;
  param_1[0xbc] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xbc);
  param_1[200] = 0;
  param_1[0xb8] = (long)&PTR_LAB_049dc680;
  param_1[0xbc] = (long)&PTR_LAB_049dc740;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 199) = 3;
  FUN_01929bc0(plVar6,&DAT_04177450);
  param_1[0xb8] = (long)&PTR_LAB_049dc440;
  param_1[0xbc] = (long)&PTR_LAB_049dc508;
  param_1[0xc9] = (long)&PTR_LAB_049dc668;
  return;
}

