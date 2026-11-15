
void FUN_0219fd80(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  FUN_00751ec0();
  puVar2 = PTR_DAT_04bb6048;
  *param_1 = (long)&PTR_LAB_04a76800;
  param_1[0x19] = (long)"mShape";
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = (long)(puVar2 + 0x10);
  plVar5 = param_1 + 5;
  lVar6 = *plVar5;
  if (*plVar5 != 0) {
    do {
      lVar8 = lVar6;
      lVar6 = *(long *)(lVar8 + 0x10);
    } while (lVar6 != 0);
    plVar5 = (long *)(lVar8 + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar4 = (undefined2 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined2 *)(param_1 + 0x1d) = 0;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mWall";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar5 = param_1 + 0x1e;
  *plVar5 = (long)(puVar2 + 0x10);
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  puVar4 = (undefined2 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined2 *)(param_1 + 0x23) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar2 + 0x10);
  param_1[0x25] = (long)"mRoof";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar4 = (undefined2 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x29) = 0;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar2 + 0x10);
  param_1[0x2b] = (long)"mDoor";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar4 = (undefined2 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined2 *)(param_1 + 0x2f) = 0;
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar1 = PTR_DAT_04bb60a0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar1 + 0x10);
  param_1[0x31] = (long)"mDeco";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  puVar3 = PTR_DAT_04bb6ca0;
  puVar1 = PTR_DAT_04bb37e0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  lVar8 = *(long *)puVar1;
  param_1[0x30] = (long)(puVar3 + 0x10);
  puVar1 = PTR_DAT_04bb6ca8;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  param_1[0x36] = (long)(puVar1 + 0x10);
  param_1[0x37] = (long)"mItemNameParam";
  lVar6 = param_1[0x35];
  if (param_1[0x35] == 0) {
    plVar5 = param_1 + 0x35;
  }
  else {
    do {
      lVar7 = lVar6;
      lVar6 = *(long *)(lVar7 + 0x10);
    } while (lVar6 != 0);
    plVar5 = (long *)(lVar7 + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x36);
  param_1[0x39] = (long)(param_1 + 0x30);
  plVar5 = (long *)(**(code **)(param_1[0x36] + 0xf0))();
  *plVar5 = lVar8;
  if ((*(uint *)(param_1 + 0x3a) >> 7 & 1) == 0) {
    param_1[0x3c] = lVar8;
  }
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfeffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3d] = (long)(puVar2 + 0x10);
  param_1[0x3e] = (long)"mCurtain";
  param_1[0x42] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d);
  puVar4 = (undefined2 *)(**(code **)(param_1[0x3d] + 0xf0))(param_1 + 0x3d);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x41) >> 7 & 1) == 0) {
    param_1[0x42] = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
  }
  *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) & 0xfeffffff;
  return;
}

