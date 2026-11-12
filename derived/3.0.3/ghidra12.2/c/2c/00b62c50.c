
void FUN_00b62c50(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  FUN_00751ec0();
  plVar5 = param_1 + 0x18;
  *plVar5 = (long)(PTR_DAT_04bd0d40 + 0x10);
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_049390b8;
  local_68 = 0;
  local_98 = puVar1 + 0x10;
  param_1[0x19] = 0;
  puVar2 = PTR_DAT_04bb2698;
  local_90 = "mFtrList";
  pcStack_80 = "FtrList";
  puStack_70 = &DAT_0407ebb1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_88 = local_98;
  local_78 = local_98;
  if (*(long *)puVar2 != 0) {
    lVar4 = FUN_038cb610(*(long *)puVar2,plVar5);
    param_1[0x19] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar9 = (long *)(lVar4 + 0x70);
      lVar8 = *plVar9;
      plVar5 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar5);
      *plVar9 = (long)plVar5;
      *plVar5 = lVar8;
      plVar5[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar5;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  plVar5 = param_1 + 0x1c;
  *plVar5 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(local_98 + 0x18))(&local_98);
  param_1[0x1f] = 0;
  param_1[0x1d] = (long)local_90;
  param_1[0x1e] = 0;
  puVar3 = PTR_DAT_04bb60a0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x20) = local_68;
  *plVar5 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  param_1[0x18] = (long)&PTR_LAB_04939228;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *plVar5 = (long)&PTR_LAB_049392e8;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = (long)(puVar3 + 0x10);
  param_1[0x29] = (long)"mWall";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x28);
  param_1[0x28] = (long)&PTR_LAB_04939908;
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x2e] = (long)&PTR_LAB_04939a68;
  param_1[0x2f] = (long)"mItemNameParam";
  lVar10 = *(long *)puVar2;
  lVar4 = param_1[0x2d];
  if (param_1[0x2d] == 0) {
    plVar5 = param_1 + 0x2d;
  }
  else {
    do {
      lVar8 = lVar4;
      lVar4 = *(long *)(lVar8 + 0x10);
    } while (lVar4 != 0);
    plVar5 = (long *)(lVar8 + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x2e);
  param_1[0x31] = (long)(param_1 + 0x28);
  plVar5 = (long *)(**(code **)(param_1[0x2e] + 0xf0))();
  *plVar5 = lVar10;
  if ((*(uint *)(param_1 + 0x32) >> 7 & 1) == 0) {
    param_1[0x34] = lVar10;
  }
  *(uint *)(param_1 + 0x32) = *(uint *)(param_1 + 0x32) & 0xfeffffff;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = (long)"mFloor";
  param_1[0x3a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x35);
  lVar10 = *(long *)puVar2;
  param_1[0x35] = (long)&PTR_LAB_04939908;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x41] = 0;
  param_1[0x3b] = (long)&PTR_LAB_04939a68;
  param_1[0x3c] = (long)"mItemNameParam";
  lVar4 = param_1[0x3a];
  if (param_1[0x3a] == 0) {
    plVar5 = param_1 + 0x3a;
  }
  else {
    do {
      lVar8 = lVar4;
      lVar4 = *(long *)(lVar8 + 0x10);
    } while (lVar4 != 0);
    plVar5 = (long *)(lVar8 + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x3b);
  param_1[0x3e] = (long)(param_1 + 0x35);
  plVar5 = (long *)(**(code **)(param_1[0x3b] + 0xf0))();
  *plVar5 = lVar10;
  if ((*(uint *)(param_1 + 0x3f) >> 7 & 1) == 0) {
    param_1[0x41] = lVar10;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x3f) = *(uint *)(param_1 + 0x3f) & 0xfeffffff;
  param_1[0x43] = (long)"mMusic";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar3 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  lVar10 = *(long *)puVar2;
  param_1[0x42] = (long)&PTR_LAB_04939908;
  param_1[0x49] = (long)"mItemNameParam";
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)&PTR_LAB_04939a68;
  param_1[0x4e] = 0;
  lVar4 = param_1[0x47];
  if (param_1[0x47] == 0) {
    plVar5 = param_1 + 0x47;
  }
  else {
    do {
      lVar8 = lVar4;
      lVar4 = *(long *)(lVar8 + 0x10);
    } while (lVar4 != 0);
    plVar5 = (long *)(lVar8 + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x48);
  param_1[0x4b] = (long)(param_1 + 0x42);
  plVar5 = (long *)(**(code **)(param_1[0x48] + 0xf0))();
  *plVar5 = lVar10;
  if ((*(uint *)(param_1 + 0x4c) >> 7 & 1) == 0) {
    param_1[0x4e] = lVar10;
  }
  param_1[0x51] = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfeffffff;
  param_1[0x50] = (long)"mFloorRotate";
  param_1[0x52] = 0;
  puVar2 = PTR_DAT_04bb5a88;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x4f] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4f);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x4f] + 0xf0))(param_1 + 0x4f);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x53) >> 7 & 1) == 0) {
    param_1[0x54] = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) & 0xfeffffff;
  local_98 = puVar1 + 0x10;
  local_68 = 0;
  local_90 = "mDIYWorkbench";
  pcStack_80 = "DIYWorkbench";
  puStack_70 = &DAT_0407ebb1;
  local_88 = local_98;
  local_78 = local_98;
  FUN_00b63860(param_1 + 0x55,&local_98,param_1);
  param_1[0x7c] = 0;
  param_1[0x7b] = (long)"mDIYRangeLUX";
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7a] = (long)(puVar2 + 0x10);
  param_1[0x7f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7a);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x7a] + 0xf0))(param_1 + 0x7a);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x7e) >> 7 & 1) == 0) {
    param_1[0x7f] = 0;
    *(undefined1 *)(param_1 + 0x7f) = 0;
  }
  param_1[0x82] = 0;
  *(uint *)(param_1 + 0x7e) = *(uint *)(param_1 + 0x7e) & 0xfeffffff;
  param_1[0x81] = (long)"mDIYRangeLUZ";
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x80] = (long)(puVar2 + 0x10);
  param_1[0x85] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x80);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x80] + 0xf0))(param_1 + 0x80);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x84) >> 7 & 1) == 0) {
    param_1[0x85] = 0;
    *(undefined1 *)(param_1 + 0x85) = 0;
  }
  param_1[0x88] = 0;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfeffffff;
  param_1[0x87] = (long)"mDIYRangeWidth";
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x86] = (long)(puVar2 + 0x10);
  param_1[0x8b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x86);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x86] + 0xf0))(param_1 + 0x86);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x8a) >> 7 & 1) == 0) {
    param_1[0x8b] = 0;
    *(undefined1 *)(param_1 + 0x8b) = 0;
  }
  param_1[0x8e] = 0;
  *(uint *)(param_1 + 0x8a) = *(uint *)(param_1 + 0x8a) & 0xfeffffff;
  param_1[0x8d] = (long)"mDIYRangeHeight";
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x8c] = (long)(puVar2 + 0x10);
  param_1[0x91] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x8c);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x8c] + 0xf0))(param_1 + 0x8c);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x90) >> 7 & 1) == 0) {
    param_1[0x91] = 0;
    *(undefined1 *)(param_1 + 0x91) = 0;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfeffffff;
  local_98 = puVar1 + 0x10;
  local_68 = 0;
  local_90 = "mKitchen";
  pcStack_80 = "Kitchen";
  puStack_70 = &DAT_0407ebb1;
  local_88 = local_98;
  local_78 = local_98;
  FUN_00b63860(param_1 + 0x92,&local_98,param_1);
  param_1[0xb9] = 0;
  param_1[0xb8] = (long)"mCookingRangeLUX";
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  param_1[0xb7] = (long)(puVar2 + 0x10);
  param_1[0xbc] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb7);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xb7] + 0xf0))(param_1 + 0xb7);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xbb) >> 7 & 1) == 0) {
    param_1[0xbc] = 0;
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  param_1[0xbf] = 0;
  *(uint *)(param_1 + 0xbb) = *(uint *)(param_1 + 0xbb) & 0xfeffffff;
  param_1[0xbe] = (long)"mCookingRangeLUZ";
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  param_1[0xbd] = (long)(puVar2 + 0x10);
  param_1[0xc2] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xbd);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xbd] + 0xf0))(param_1 + 0xbd);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xc1) >> 7 & 1) == 0) {
    param_1[0xc2] = 0;
    *(undefined1 *)(param_1 + 0xc2) = 0;
  }
  param_1[0xc5] = 0;
  *(uint *)(param_1 + 0xc1) = *(uint *)(param_1 + 0xc1) & 0xfeffffff;
  param_1[0xc4] = (long)"mCookingRangeWidth";
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  param_1[0xc3] = (long)(puVar2 + 0x10);
  param_1[200] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc3);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xc3] + 0xf0))(param_1 + 0xc3);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 199) >> 7 & 1) == 0) {
    param_1[200] = 0;
    *(undefined1 *)(param_1 + 200) = 0;
  }
  param_1[0xcb] = 0;
  *(uint *)(param_1 + 199) = *(uint *)(param_1 + 199) & 0xfeffffff;
  param_1[0xca] = (long)"mCookingRangeHeight";
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  param_1[0xc9] = (long)(puVar2 + 0x10);
  param_1[0xce] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc9);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xc9] + 0xf0))(param_1 + 0xc9);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xcd) >> 7 & 1) == 0) {
    param_1[0xce] = 0;
    *(undefined1 *)(param_1 + 0xce) = 0;
  }
  param_1[0xd1] = 0;
  *(uint *)(param_1 + 0xcd) = *(uint *)(param_1 + 0xcd) & 0xfeffffff;
  param_1[0xd0] = (long)"mLifePoint";
  param_1[0xd2] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  param_1[0xcf] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcf);
  puVar7 = (undefined4 *)(**(code **)(param_1[0xcf] + 0xf0))(param_1 + 0xcf);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0xd3) >> 7 & 1) == 0) {
    param_1[0xd4] = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  param_1[0xd7] = 0;
  *(uint *)(param_1 + 0xd3) = *(uint *)(param_1 + 0xd3) & 0xfeffffff;
  param_1[0xd6] = (long)"mHobbyPoint";
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xd5] = (long)(puVar1 + 0x10);
  param_1[0xda] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd5);
  puVar7 = (undefined4 *)(**(code **)(param_1[0xd5] + 0xf0))(param_1 + 0xd5);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0xd9) >> 7 & 1) == 0) {
    param_1[0xda] = 0;
    *(undefined4 *)(param_1 + 0xda) = 0;
  }
  *(uint *)(param_1 + 0xd9) = *(uint *)(param_1 + 0xd9) & 0xfeffffff;
  return;
}

