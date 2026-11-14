
void FUN_0191be40(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar4 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar4;
  lVar4 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *param_1 = (long)&PTR_LAB_049da738;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[9] = 0;
  param_1[7] = (long)"mSwingHeight";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  plVar5 = param_1 + 6;
  *plVar5 = (long)(puVar2 + 0x10);
  FUN_03c28900(param_1,plVar5);
  uVar6 = 0x3ff00000;
  if ((*(uint *)(param_1 + 10) & 0x800) != 0) {
    uVar6 = 0x3d060a92;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    uVar6 = 0x3ff00000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x3d060a92;
    }
    *(undefined4 *)(param_1 + 0xb) = uVar6;
  }
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = uVar1 & 0xfeffffff;
  param_1[0xd] = (long)"mDownSpeed";
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  plVar5 = param_1 + 0xc;
  *plVar5 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  uVar6 = 0xbec80000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar6 = 0xbbdf66f3;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar6 = 0xbec80000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0xbbdf66f3;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar6;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar1 & 0xfeffffff;
  param_1[0x13] = (long)"mUpSpeedMax";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  plVar5 = param_1 + 0x12;
  *plVar5 = (long)(puVar2 + 0x10);
  param_1[0x17] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  uVar6 = 0x3da00000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar6 = 0x3ab2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 0x16);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar6 = 0x3da00000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x3ab2b8c2;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar6;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar1 & 0xfeffffff;
  param_1[0x19] = (long)"mChaseSpeed";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  plVar5 = param_1 + 0x18;
  *plVar5 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  uVar6 = 0x3d200000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar6 = 0x3a32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar6 = 0x3d200000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x3a32b8c2;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar6;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar1 & 0xfeffffff;
  param_1[0x1f] = (long)"mHoveringTimeMin";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar5 = param_1 + 0x1e;
  *plVar5 = (long)(puVar2 + 0x10);
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar2 + 0x10);
  param_1[0x25] = (long)"mHoveringTimeMax";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  uVar6 = 0x40000000;
  if ((*(uint *)(param_1 + 0x28) & 0x800) != 0) {
    uVar6 = 0x3d0efa35;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    uVar6 = 0x40000000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x29) = uVar6;
  }
  *(uint *)(param_1 + 0x28) = uVar1 & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar2 + 0x10);
  param_1[0x2b] = (long)"mGyrateAngleRangeYDeg";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  uVar6 = 0x42f00000;
  if ((*(uint *)(param_1 + 0x2e) & 0x800) != 0) {
    uVar6 = 0x40060a92;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 0x2e);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    uVar6 = 0x42f00000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x40060a92;
    }
    *(undefined4 *)(param_1 + 0x2f) = uVar6;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x2e) = uVar1 & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar2 + 0x10);
  param_1[0x31] = (long)"mAddDirAngYDeg";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  uVar6 = 0x403ff400;
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    uVar6 = 0x3d5669e8;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    uVar6 = 0x403ff400;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x3d5669e8;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar6;
  }
  *(uint *)(param_1 + 0x34) = uVar1 & 0xfeffffff;
  return;
}

