
void FUN_018f8eb0(long *param_1,long *param_2,long *param_3)

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
  *param_1 = (long)&PTR_LAB_049d51d0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[7] = (long)"mGravity";
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
  uVar7 = 0xbe200000;
  if ((*(uint *)(param_1 + 10) & 0x800) != 0) {
    uVar7 = 0xbb32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    uVar7 = 0xbe200000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0xbb32b8c2;
    }
    *(undefined4 *)(param_1 + 0xb) = uVar7;
  }
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = uVar1 & 0xfeffffff;
  param_1[0xd] = (long)"mDownSpeedMax";
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  plVar6 = param_1 + 0xc;
  *plVar6 = (long)(puVar2 + 0x10);
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0xbfc80000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar7 = 0xbcdf66f3;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar7 = 0xbfc80000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0xbcdf66f3;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar7;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar1 & 0xfeffffff;
  param_1[0x13] = (long)"mEscapeSpeedFly";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  plVar6 = param_1 + 0x12;
  *plVar6 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3f200000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar7 = 0x3c32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x16);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar7 = 0x3f200000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3c32b8c2;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar7;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar1 & 0xfeffffff;
  param_1[0x19] = (long)"mEscapeSpeedWorm";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  plVar6 = param_1 + 0x18;
  *plVar6 = (long)(puVar2 + 0x10);
  param_1[0x1d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3e75c28f;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar7 = 0x3b89421e;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar7 = 0x3e75c28f;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3b89421e;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar7;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar1 & 0xfeffffff;
  param_1[0x1f] = (long)"mEscapeAccelWorm";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  plVar6 = param_1 + 0x1e;
  *plVar6 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0xbc23d70a;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar7 = 0xb93702d3;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x22);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar7 = 0xbc23d70a;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0xb93702d3;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar7;
  }
  *(uint *)(param_1 + 0x22) = uVar1 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x24] = (long)(puVar2 + 0x10);
  param_1[0x25] = (long)"mEscapeLastAngleXMaxDeg";
  param_1[0x29] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  uVar7 = 0x438d8c40;
  if ((*(uint *)(param_1 + 0x28) & 0x800) != 0) {
    uVar7 = 0x409e1c48;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    uVar7 = 0x438d8c40;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x409e1c48;
    }
    *(undefined4 *)(param_1 + 0x29) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(uint *)(param_1 + 0x28) = uVar1 & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = (long)(puVar2 + 0x10);
  param_1[0x2b] = (long)"mEscapeLastAngleXStepDeg";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  uVar7 = 0x408ca000;
  if ((*(uint *)(param_1 + 0x2e) & 0x800) != 0) {
    uVar7 = 0x3d9d1463;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x2e);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    uVar7 = 0x408ca000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3d9d1463;
    }
    *(undefined4 *)(param_1 + 0x2f) = uVar7;
  }
  *(uint *)(param_1 + 0x2e) = uVar1 & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x30] = (long)(puVar2 + 0x10);
  param_1[0x31] = (long)"mEscapeLastAngleYMaxDeg";
  param_1[0x35] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  uVar7 = 0x4283d600;
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    uVar7 = 0x3f93431d;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    uVar7 = 0x4283d600;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3f93431d;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(uint *)(param_1 + 0x34) = uVar1 & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = (long)(puVar2 + 0x10);
  param_1[0x37] = (long)"mAlphaOutFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  uVar7 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x3a) & 0x800) != 0) {
    uVar7 = 0x3f060a92;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x3a);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    uVar7 = 0x41f00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar7;
  }
  *(uint *)(param_1 + 0x3a) = uVar1 & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3c] = (long)(puVar2 + 0x10);
  param_1[0x3d] = (long)"mMileStoneFrame";
  param_1[0x41] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x40) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    uVar7 = 0x41a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x41) = uVar7;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = uVar1 & 0xfeffffff;
  param_1[0x43] = (long)"m1stCheckDistance";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar2 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  uVar7 = 0x43480000;
  if ((*(uint *)(param_1 + 0x46) & 0x800) != 0) {
    uVar7 = 0x405f66f3;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x46);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    uVar7 = 0x43480000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x405f66f3;
    }
    *(undefined4 *)(param_1 + 0x47) = uVar7;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = uVar1 & 0xfeffffff;
  param_1[0x49] = (long)"m1stSec";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar2 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  uVar7 = 0x42700000;
  if ((*(uint *)(param_1 + 0x4c) & 0x800) != 0) {
    uVar7 = 0x3f860a92;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    uVar7 = 0x42700000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3f860a92;
    }
    *(undefined4 *)(param_1 + 0x4d) = uVar7;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = uVar1 & 0xfeffffff;
  param_1[0x4f] = (long)"m2ndCheckDistance";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4e] = (long)(puVar2 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  uVar7 = 0x43af0000;
  if ((*(uint *)(param_1 + 0x52) & 0x800) != 0) {
    uVar7 = 0x40c37a14;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x52);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    uVar7 = 0x43af0000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x40c37a14;
    }
    *(undefined4 *)(param_1 + 0x53) = uVar7;
  }
  param_1[0x56] = 0;
  *(uint *)(param_1 + 0x52) = uVar1 & 0xfeffffff;
  param_1[0x55] = (long)"m2ndSec";
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x54] = (long)(puVar2 + 0x10);
  param_1[0x59] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54);
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x58) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    uVar7 = 0x41a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x59) = uVar7;
  }
  param_1[0x5c] = 0;
  *(uint *)(param_1 + 0x58) = uVar1 & 0xfeffffff;
  param_1[0x5b] = (long)"mOtherSec";
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5a] = (long)(puVar2 + 0x10);
  param_1[0x5f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  uVar7 = 0x40400000;
  if ((*(uint *)(param_1 + 0x5e) & 0x800) != 0) {
    uVar7 = 0x3d567750;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x5e);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    uVar7 = 0x40400000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x5f) = uVar7;
  }
  *(uint *)(param_1 + 0x5e) = uVar1 & 0xfeffffff;
  return;
}

