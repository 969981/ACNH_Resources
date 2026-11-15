
void FUN_0222d850(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined8 local_94;
  undefined4 local_8c;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "Actor";
  FUN_00751ec0(param_1,&local_88,param_2,0);
  puVar4 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_FUN_04a77b78;
  param_1[0x19] = (long)"mDefaultSpeed";
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = (long)(puVar4 + 0x10);
  plVar10 = param_1 + 5;
  lVar9 = *plVar10;
  if (*plVar10 != 0) {
    do {
      lVar8 = lVar9;
      lVar9 = *(long *)(lVar8 + 0x10);
    } while (lVar9 != 0);
    plVar10 = (long *)(lVar8 + 0x10);
  }
  *plVar10 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  uVar11 = 0x3dae147b;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar11 = 0x3ac27301;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar11 = 0x3dae147b;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x3ac27301;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar11;
  }
  *(uint *)(param_1 + 0x1c) = uVar2 & 0xfeffffff;
  param_1[0x1f] = (long)"mIsDebugDraw";
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar1 = PTR_DAT_04bb33a8 + 0x10;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  plVar10 = param_1 + 0x1e;
  *plVar10 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  puVar7 = (undefined1 *)(**(code **)(*plVar10 + 0xf0))(plVar10);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)puVar1;
  param_1[0x25] = (long)"mIsRumble";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar7 = (undefined1 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar7 = 1;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar4 + 0x10);
  param_1[0x2b] = (long)"mIconOffset";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar5 = PTR_DAT_04bb62c0;
  param_1[0x35] = 0;
  puVar1 = puVar5 + 0x10;
  param_1[0x30] = (long)puVar1;
  param_1[0x31] = (long)"mElevationAngle";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar6 = 0x1e;
  if ((*(uint *)(param_1 + 0x34) >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0x1e;
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = (long)puVar1;
  param_1[0x37] = (long)"mSearchUnitNum";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar6 = 5;
  if ((*(uint *)(param_1 + 0x3a) >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 5;
  }
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3c] = (long)(puVar4 + 0x10);
  param_1[0x3d] = (long)"mStructureAvoidanceAngle";
  param_1[0x41] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  uVar11 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x40) & 0x800) != 0) {
    uVar11 = 0x3f060a92;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    uVar11 = 0x41f00000;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x41) = uVar11;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = uVar2 & 0xfeffffff;
  param_1[0x43] = (long)"mStructureSearchUnitNum";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar5 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar6 = 3;
  if ((*(uint *)(param_1 + 0x46) >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x47) = 3;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xfeffffff;
  param_1[0x49] = (long)"mColHeight";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar4 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  uVar11 = 0x41000000;
  if ((*(uint *)(param_1 + 0x4c) & 0x800) != 0) {
    uVar11 = 0x3e0efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x4c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    uVar11 = 0x41000000;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x3e0efa35;
    }
    *(undefined4 *)(param_1 + 0x4d) = uVar11;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = uVar2 & 0xfeffffff;
  param_1[0x4f] = (long)"mColRadius";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4e] = (long)(puVar4 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  uVar11 = 0x40800000;
  if ((*(uint *)(param_1 + 0x52) & 0x800) != 0) {
    uVar11 = 0x3d8efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x52);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    uVar11 = 0x40800000;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x3d8efa35;
    }
    *(undefined4 *)(param_1 + 0x53) = uVar11;
  }
  *(uint *)(param_1 + 0x52) = uVar2 & 0xfeffffff;
  local_88 = puVar3 + 0x10;
  local_58 = 0;
  pcStack_80 = "mColOffset";
  puStack_70 = &DAT_0407ebb1;
  local_8c = 0;
  puStack_60 = &DAT_0407ebb1;
  local_94 = 0x4080000000000000;
  local_78 = local_88;
  local_68 = local_88;
  FUN_006fdfc0(param_1 + 0x54,&local_88,&local_94,param_1);
  param_1[0x5d] = 0;
  param_1[0x5c] = (long)"mWindMinAnimRate";
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x5b] = (long)(puVar4 + 0x10);
  param_1[0x60] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5b);
  uVar11 = 0x3dcccccd;
  if ((*(uint *)(param_1 + 0x5f) & 0x800) != 0) {
    uVar11 = 0x3ae4c388;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x5b] + 0xf0))(param_1 + 0x5b);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x5f);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x60] = 0;
    uVar11 = 0x3dcccccd;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x3ae4c388;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar11;
  }
  param_1[99] = 0;
  *(uint *)(param_1 + 0x5f) = uVar2 & 0xfeffffff;
  param_1[0x62] = (long)"mUnitIconAngleY";
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x61] = (long)(puVar4 + 0x10);
  param_1[0x66] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x61);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x61] + 0xf0))(param_1 + 0x61);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x65) >> 7 & 1) == 0) {
    param_1[0x66] = 0;
    *(undefined4 *)(param_1 + 0x66) = 0;
  }
  param_1[0x69] = 0;
  *(uint *)(param_1 + 0x65) = *(uint *)(param_1 + 0x65) & 0xfeffffff;
  param_1[0x68] = (long)"mSpeedRateMaxOnSea";
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x67] = (long)(puVar4 + 0x10);
  param_1[0x6c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x67);
  uVar11 = 0x40000000;
  if ((*(uint *)(param_1 + 0x6b) & 0x800) != 0) {
    uVar11 = 0x3d0efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x67] + 0xf0))(param_1 + 0x67);
  *puVar6 = uVar11;
  uVar2 = *(uint *)(param_1 + 0x6b);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x6c] = 0;
    uVar11 = 0x40000000;
    if ((uVar2 & 0x800) != 0) {
      uVar11 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar11;
  }
  *(uint *)(param_1 + 0x6b) = uVar2 & 0xfeffffff;
  return;
}

