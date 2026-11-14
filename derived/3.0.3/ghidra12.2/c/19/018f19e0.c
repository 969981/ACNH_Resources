
void FUN_018f19e0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar2 = PTR_DAT_04bb60a0;
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar5;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[9] = 0;
  *param_1 = (long)&PTR_LAB_049d3d30;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[7] = (long)"mBaseHeight";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[6] = (long)(puVar2 + 0x10);
  lVar5 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  uVar7 = 0x41200000;
  if ((*(uint *)(param_1 + 10) & 0x800) != 0) {
    uVar7 = 0x3e32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    uVar7 = 0x41200000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0xb) = uVar7;
  }
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = uVar1 & 0xfeffffff;
  param_1[0xd] = (long)"mSwingHeight";
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  plVar6 = param_1 + 0xc;
  *plVar6 = (long)(puVar2 + 0x10);
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3ff00000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar7 = 0x3d060a92;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar7 = 0x3ff00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3d060a92;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar7;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar1 & 0xfeffffff;
  param_1[0x13] = (long)"mDownSpeed";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  plVar6 = param_1 + 0x12;
  *plVar6 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0xbec80000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar7 = 0xbbdf66f3;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x16);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar7 = 0xbec80000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0xbbdf66f3;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar7;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar1 & 0xfeffffff;
  param_1[0x19] = (long)"mUpSpeedMax";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  plVar6 = param_1 + 0x18;
  *plVar6 = (long)(puVar2 + 0x10);
  param_1[0x1d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3da00000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar7 = 0x3ab2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar7 = 0x3da00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3ab2b8c2;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar7;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar1 & 0xfeffffff;
  param_1[0x1f] = (long)"mChaseSpeed";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  plVar6 = param_1 + 0x1e;
  *plVar6 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3d200000;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar7 = 0x3a32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x22);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar7 = 0x3d200000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3a32b8c2;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar7;
  }
  *(uint *)(param_1 + 0x22) = uVar1 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x24] = (long)(puVar2 + 0x10);
  param_1[0x25] = (long)"mApproachCycle";
  param_1[0x29] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  uVar7 = 0x44160000;
  if ((*(uint *)(param_1 + 0x28) & 0x800) != 0) {
    uVar7 = 0x41278d36;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    uVar7 = 0x44160000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x41278d36;
    }
    *(undefined4 *)(param_1 + 0x29) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(uint *)(param_1 + 0x28) = uVar1 & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = (long)(puVar2 + 0x10);
  param_1[0x2b] = (long)"mRestTime";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  uVar7 = 0x42b40000;
  if ((*(uint *)(param_1 + 0x2e) & 0x800) != 0) {
    uVar7 = 0x3fc90fdb;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x2e);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    uVar7 = 0x42b40000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3fc90fdb;
    }
    *(undefined4 *)(param_1 + 0x2f) = uVar7;
  }
  *(uint *)(param_1 + 0x2e) = uVar1 & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x30] = (long)(puVar2 + 0x10);
  param_1[0x31] = (long)"mAppSpeedMin";
  param_1[0x35] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  uVar7 = 0x3d000000;
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    uVar7 = 0x3a0efa35;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    uVar7 = 0x3d000000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3a0efa35;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(uint *)(param_1 + 0x34) = uVar1 & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = (long)(puVar2 + 0x10);
  param_1[0x37] = (long)"mAppSpeedMax";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  uVar7 = 0x3f8c0000;
  if ((*(uint *)(param_1 + 0x3a) & 0x800) != 0) {
    uVar7 = 0x3c9c61aa;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x3a);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    uVar7 = 0x3f8c0000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3c9c61aa;
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar7;
  }
  *(uint *)(param_1 + 0x3a) = uVar1 & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3c] = (long)(puVar2 + 0x10);
  param_1[0x3d] = (long)"mEscapeRate";
  param_1[0x41] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  uVar7 = 0x3fa00000;
  if ((*(uint *)(param_1 + 0x40) & 0x800) != 0) {
    uVar7 = 0x3cb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    uVar7 = 0x3fa00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3cb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x41) = uVar7;
  }
  *(uint *)(param_1 + 0x40) = uVar1 & 0xfeffffff;
  return;
}

