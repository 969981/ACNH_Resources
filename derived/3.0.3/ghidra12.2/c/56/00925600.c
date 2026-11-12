
void FUN_00925600(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  FUN_00751ec0();
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_LAB_04927d10;
  param_1[0x19] = (long)"mDeckOffset";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  param_1[0x1e] = 0;
  plVar7 = param_1 + 5;
  param_1[0x18] = (long)&PTR_LAB_04928000;
  lVar6 = *plVar7;
  if (*plVar7 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar5 + 0x10);
  }
  *plVar7 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar1 = (undefined8 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x20] = (long)"mGateOffset";
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 8;
  plVar7 = param_1 + 0x1f;
  *plVar7 = (long)&PTR_LAB_04928000;
  param_1[0x25] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar1 = (undefined8 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x23) >> 7 & 1) == 0) {
    param_1[0x25] = 0;
  }
  *(undefined4 *)(param_1 + 0x2a) = 8;
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xfeffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x26] = (long)&PTR_LAB_04928000;
  param_1[0x27] = (long)"mTapOffset";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x26);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x26] + 0xf0))(param_1 + 0x26);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x2a) >> 7 & 1) == 0) {
    param_1[0x2c] = 0;
  }
  *(undefined4 *)(param_1 + 0x31) = 8;
  *(uint *)(param_1 + 0x2a) = *(uint *)(param_1 + 0x2a) & 0xfeffffff;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x2d] = (long)&PTR_LAB_04928000;
  param_1[0x2e] = (long)"mTapOffsetMulti";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2d);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x2d] + 0xf0))(param_1 + 0x2d);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x31) >> 7 & 1) == 0) {
    param_1[0x33] = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 8;
  *(uint *)(param_1 + 0x31) = *(uint *)(param_1 + 0x31) & 0xfeffffff;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x34] = (long)&PTR_LAB_04928000;
  param_1[0x35] = (long)"mNormalNpcOffset";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x34);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x34] + 0xf0))(param_1 + 0x34);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x38) >> 7 & 1) == 0) {
    param_1[0x3a] = 0;
  }
  *(undefined4 *)(param_1 + 0x3f) = 8;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfeffffff;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x3b] = (long)&PTR_LAB_04928000;
  param_1[0x3c] = (long)"mHaniwaOffset";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3b);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x3b] + 0xf0))(param_1 + 0x3b);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x3f) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x3f) = *(uint *)(param_1 + 0x3f) & 0xfeffffff;
  param_1[0x43] = (long)"mBedBaseOffset";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 8;
  param_1[0x42] = (long)&PTR_LAB_04928000;
  param_1[0x48] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x46) >> 7 & 1) == 0) {
    param_1[0x48] = 0;
  }
  param_1[0x4b] = 0;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xfeffffff;
  param_1[0x4a] = (long)"mDresserOffset";
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 8;
  param_1[0x49] = (long)&PTR_LAB_04928000;
  param_1[0x4f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x49);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x49] + 0xf0))(param_1 + 0x49);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x4d) >> 7 & 1) == 0) {
    param_1[0x4f] = 0;
  }
  param_1[0x52] = 0;
  *(uint *)(param_1 + 0x4d) = *(uint *)(param_1 + 0x4d) & 0xfeffffff;
  param_1[0x51] = (long)"mChestOffset";
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 8;
  param_1[0x50] = (long)&PTR_LAB_04928000;
  param_1[0x56] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x50);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x50] + 0xf0))(param_1 + 0x50);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x54) >> 7 & 1) == 0) {
    param_1[0x56] = 0;
  }
  param_1[0x59] = 0;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfeffffff;
  param_1[0x58] = (long)"mDeckFlatRangeMin";
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 8;
  param_1[0x57] = (long)&PTR_LAB_04928000;
  param_1[0x5d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x57);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x57] + 0xf0))(param_1 + 0x57);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x5b) >> 7 & 1) == 0) {
    param_1[0x5d] = 0;
  }
  param_1[0x60] = 0;
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) & 0xfeffffff;
  param_1[0x5f] = (long)"mDeckFlatRangeSize";
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 8;
  param_1[0x5e] = (long)&PTR_LAB_04928000;
  param_1[100] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5e);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x5e] + 0xf0))(param_1 + 0x5e);
  *puVar1 = 0x100000001;
  if ((*(uint *)(param_1 + 0x62) >> 7 & 1) == 0) {
    param_1[100] = 0x100000001;
  }
  param_1[0x67] = 0;
  *(uint *)(param_1 + 0x62) = *(uint *)(param_1 + 0x62) & 0xfeffffff;
  param_1[0x66] = (long)"mNoLandMakingRangeMin";
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 8;
  param_1[0x65] = (long)&PTR_LAB_04928000;
  param_1[0x6b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x65);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x65] + 0xf0))(param_1 + 0x65);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x69) >> 7 & 1) == 0) {
    param_1[0x6b] = 0;
  }
  param_1[0x6e] = 0;
  *(uint *)(param_1 + 0x69) = *(uint *)(param_1 + 0x69) & 0xfeffffff;
  param_1[0x6d] = (long)"mNoLandMakingRangeSize";
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 8;
  param_1[0x6c] = (long)&PTR_LAB_04928000;
  param_1[0x72] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6c);
  puVar1 = (undefined8 *)(**(code **)(param_1[0x6c] + 0xf0))(param_1 + 0x6c);
  *puVar1 = 0x100000001;
  if ((*(uint *)(param_1 + 0x70) >> 7 & 1) == 0) {
    param_1[0x72] = 0x100000001;
  }
  local_98 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfeffffff;
  param_1[0x74] = (long)"mBedParamList";
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 8;
  local_98 = local_98 + 0x10;
  local_90 = "mBedParamList";
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  param_1[0x78] = 0;
  local_68 = 8;
  param_1[0x73] = (long)&DAT_04b7e798;
  local_88 = local_98;
  local_78 = local_98;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x73);
  param_1[0x7b] = 0;
  param_1[0x7e] = (long)(param_1 + 0x97);
  param_1[0x7a] = 0;
  param_1[0x97] = (long)(param_1 + 0xb0);
  param_1[0x79] = 0;
  param_1[0xb0] = (long)(param_1 + 0xc9);
  param_1[0x7c] = (long)(param_1 + 0x7e);
  param_1[0xc9] = (long)(param_1 + 0xe2);
  param_1[0x191] = 0;
  param_1[0xe2] = (long)(param_1 + 0xfb);
  param_1[0x7d] = (long)(param_1 + 0x7e);
  param_1[0xfb] = (long)(param_1 + 0x114);
  param_1[0x114] = (long)(param_1 + 0x12d);
  param_1[0x12d] = (long)(param_1 + 0x146);
  param_1[0x146] = (long)(param_1 + 0x15f);
  param_1[0x15f] = (long)(param_1 + 0x178);
  param_1[0x178] = (long)(param_1 + 0x191);
  if (param_1 + 0x1aa != (long *)0x0) {
    param_1[0x7b] = (long)(param_1 + 0x1aa);
    *(undefined4 *)((long)param_1 + 0x3d4) = 0xc;
  }
  param_1[0x73] = (long)&PTR_LAB_04928280;
  iVar8 = 0;
  do {
    if ((int)param_1[0x7a] < *(int *)((long)param_1 + 0x3d4)) {
      plVar7 = (long *)param_1[0x7c];
      if (plVar7 != (long *)0x0) {
        param_1[0x7c] = *plVar7;
      }
      *plVar7 = (long)&DAT_04b7e9f0;
      (**(code **)(local_98 + 0x18))(&local_98);
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[7] = (long)"mOffset";
      plVar7[8] = 0;
      *(undefined4 *)(plVar7 + 0xb) = 0;
      plVar7[1] = (long)local_90;
      *plVar7 = (long)&PTR_LAB_04927bb0;
      plVar4 = plVar7 + 6;
      *plVar4 = (long)&PTR_LAB_04928000;
      plVar7[5] = (long)plVar4;
      plVar7[0xc] = 0;
      plVar7[0x10] = 0;
      *(undefined4 *)(plVar7 + 0x11) = 8;
      *(undefined4 *)(plVar7 + 4) = local_68;
      plVar7[9] = (long)plVar7;
      plVar7[10] = 8;
      plVar7[0xe] = (long)"mCardinal";
      plVar7[0xf] = 0;
      plVar7[0xd] = (long)&PTR_LAB_04928140;
      plVar7[0x12] = 0;
      do {
        plVar3 = plVar4;
        plVar4 = (long *)plVar3[2];
      } while (plVar4 != (long *)0x0);
      plVar3[2] = (long)(plVar7 + 0xd);
      plVar7[0x10] = (long)plVar7;
      puVar2 = (undefined1 *)(**(code **)(plVar7[0xd] + 0xf0))();
      *puVar2 = 0;
      if ((*(uint *)(plVar7 + 0x11) >> 7 & 1) == 0) {
        plVar7[0x12] = 0;
        *(undefined1 *)(plVar7 + 0x12) = 0;
      }
      plVar7[0x16] = 0;
      *(uint *)(plVar7 + 0x11) = *(uint *)(plVar7 + 0x11) & 0xfeffffff;
      plVar7[0x14] = (long)"mIsSafetyZoneRight";
      plVar7[0x15] = 0;
      *(undefined4 *)(plVar7 + 0x17) = 8;
      plVar7[0x18] = 0;
      plVar4 = plVar7 + 0x13;
      *plVar4 = (long)&PTR_LAB_04902ff8;
      (**(code **)(*plVar7 + 0x140))(plVar7,plVar4);
      puVar2 = (undefined1 *)(**(code **)(*plVar4 + 0xf0))(plVar4);
      *puVar2 = 0;
      if ((*(uint *)(plVar7 + 0x17) >> 7 & 1) == 0) {
        plVar7[0x18] = 0;
        *(undefined1 *)(plVar7 + 0x18) = 0;
      }
      *plVar7 = (long)&PTR_LAB_04928400;
      *(uint *)(plVar7 + 0x17) = *(uint *)(plVar7 + 0x17) & 0xfeffffff;
      if ((int)param_1[0x7a] < *(int *)((long)param_1 + 0x3d4)) {
        *(long **)(param_1[0x7b] + (long)(int)param_1[0x7a] * 8) = plVar7;
        *(int *)(param_1 + 0x7a) = (int)param_1[0x7a] + 1;
      }
    }
    else {
      plVar7 = (long *)0x0;
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x73);
    iVar8 = iVar8 + 1;
    *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffffc;
  } while (iVar8 != 0xc);
  return;
}

