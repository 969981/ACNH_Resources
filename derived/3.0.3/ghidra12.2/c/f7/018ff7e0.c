
void FUN_018ff7e0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *__src;
  undefined4 uVar9;
  undefined *local_c0;
  undefined1 *puStack_b8;
  int local_b0;
  undefined1 auStack_ac [31];
  undefined1 local_8d;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  lVar7 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar7;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_88 = PTR_DAT_04bb2020;
  local_58 = 0;
  *param_1 = (long)&PTR_FUN_049d63b0;
  puVar1 = PTR_PTR_04bb2238;
  local_88 = local_88 + 0x10;
  pcStack_80 = "mLabel";
  puStack_70 = &DAT_0408730e;
  puStack_60 = &DAT_0407ebb1;
  local_b0 = 0x20;
  local_c0 = PTR_DAT_04bb2a08 + 0x10;
  local_8d = 0;
  puStack_b8 = auStack_ac;
  local_78 = local_88;
  local_68 = local_88;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar1 + 8);
  if (auStack_ac != __src) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar7) == '\0') goto LAB_018ff950;
      lVar2 = *(long *)(puVar1 + 8) + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_018ff950;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_018ff950;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_018ff950:
    iVar3 = (int)lVar7;
    if (local_b0 <= (int)lVar7) {
      iVar3 = local_b0 + -1;
    }
    memcpy(auStack_ac,__src,(long)iVar3);
    auStack_ac[iVar3] = 0;
  }
  local_c0 = PTR_DAT_04bb2028 + 0x10;
  FUN_008f0e20(param_1 + 6,&local_88,&local_c0,param_1);
  param_1[0x16] = 0;
  param_1[0x14] = (long)"mMoveFrame";
  param_1[0x15] = 0;
  puVar1 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  plVar8 = param_1 + 0x13;
  *plVar8 = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar6 = 0x14;
  if ((*(uint *)(param_1 + 0x17) >> 7 & 1) == 0) {
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0x14;
  }
  *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) & 0xfeffffff;
  param_1[0x1a] = (long)"mRegistSpeed";
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puVar5 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  plVar8 = param_1 + 0x19;
  *plVar8 = (long)(puVar5 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0xbc800000;
  if ((*(uint *)(param_1 + 0x1d) & 0x800) != 0) {
    uVar9 = 0xb98efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x1d);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    uVar9 = 0xbc800000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0xb98efa35;
    }
    *(undefined4 *)(param_1 + 0x1e) = uVar9;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1d) = uVar4 & 0xfeffffff;
  param_1[0x20] = (long)"mJumpDist";
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  plVar8 = param_1 + 0x1f;
  *plVar8 = (long)(puVar5 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0x40f00000;
  if ((*(uint *)(param_1 + 0x23) & 0x800) != 0) {
    uVar9 = 0x3e060a92;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x23);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    uVar9 = 0x40f00000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3e060a92;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar9;
  }
  *(uint *)(param_1 + 0x23) = uVar4 & 0xfeffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x25] = (long)(puVar5 + 0x10);
  param_1[0x26] = (long)"mMoveSpeed";
  param_1[0x2a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25);
  uVar9 = 0x3e200000;
  if ((*(uint *)(param_1 + 0x29) & 0x800) != 0) {
    uVar9 = 0x3b32b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x25] + 0xf0))(param_1 + 0x25);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x29);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x2a] = 0;
    uVar9 = 0x3e200000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3b32b8c2;
    }
    *(undefined4 *)(param_1 + 0x2a) = uVar9;
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(uint *)(param_1 + 0x29) = uVar4 & 0xfeffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x2b] = (long)(puVar5 + 0x10);
  param_1[0x2c] = (long)"mVanishSec";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b);
  uVar9 = 0x41200000;
  if ((*(uint *)(param_1 + 0x2f) & 0x800) != 0) {
    uVar9 = 0x3e32b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x2f);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    uVar9 = 0x41200000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar9;
  }
  *(uint *)(param_1 + 0x2f) = uVar4 & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x31] = (long)(puVar5 + 0x10);
  param_1[0x32] = (long)"mGravityCheckOffset";
  param_1[0x36] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  uVar9 = 0x3f700000;
  if ((*(uint *)(param_1 + 0x35) & 0x800) != 0) {
    uVar9 = 0x3c860a92;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x35);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    uVar9 = 0x3f700000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3c860a92;
    }
    *(undefined4 *)(param_1 + 0x36) = uVar9;
  }
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(uint *)(param_1 + 0x35) = uVar4 & 0xfeffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x37] = (long)(puVar5 + 0x10);
  param_1[0x38] = (long)"mScaleSwing";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x37);
  uVar9 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0x3b) & 0x800) != 0) {
    uVar9 = 0x3b64c388;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x37] + 0xf0))(param_1 + 0x37);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x3b);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x3c] = 0;
    uVar9 = 0x3e4ccccd;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar9;
  }
  puVar1 = puVar1 + 0x10;
  *(uint *)(param_1 + 0x3b) = uVar4 & 0xfeffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3d] = (long)puVar1;
  param_1[0x3e] = (long)"mTriangleStep";
  param_1[0x42] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x3d] + 0xf0))(param_1 + 0x3d);
  *puVar6 = 3;
  if ((*(uint *)(param_1 + 0x41) >> 7 & 1) == 0) {
    param_1[0x42] = 0;
    *(undefined4 *)(param_1 + 0x42) = 3;
  }
  param_1[0x45] = 0;
  *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) & 0xfeffffff;
  param_1[0x44] = (long)"mCycleFrame";
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x43] = (long)puVar1;
  param_1[0x48] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x43);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x43] + 0xf0))(param_1 + 0x43);
  *puVar6 = 0x19;
  if ((*(uint *)(param_1 + 0x47) >> 7 & 1) == 0) {
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x19;
  }
  param_1[0x4b] = 0;
  *(uint *)(param_1 + 0x47) = *(uint *)(param_1 + 0x47) & 0xfeffffff;
  param_1[0x4a] = (long)"mEscapeMinSec";
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x49] = (long)(puVar5 + 0x10);
  param_1[0x4e] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x49);
  uVar9 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x4d) & 0x800) != 0) {
    uVar9 = 0x3c8efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x49] + 0xf0))(param_1 + 0x49);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x4d);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x4e] = 0;
    uVar9 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x4e) = uVar9;
  }
  param_1[0x51] = 0;
  *(uint *)(param_1 + 0x4d) = uVar4 & 0xfeffffff;
  param_1[0x50] = (long)"mEscapeMaxSec";
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x4f] = (long)(puVar5 + 0x10);
  param_1[0x54] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4f);
  uVar9 = 0x40000000;
  if ((*(uint *)(param_1 + 0x53) & 0x800) != 0) {
    uVar9 = 0x3d0efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x4f] + 0xf0))(param_1 + 0x4f);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x53);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x54] = 0;
    uVar9 = 0x40000000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar9;
  }
  param_1[0x57] = 0;
  *(uint *)(param_1 + 0x53) = uVar4 & 0xfeffffff;
  param_1[0x56] = (long)"mWaitingSec";
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x55] = (long)(puVar5 + 0x10);
  param_1[0x5a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x55);
  uVar9 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x59) & 0x800) != 0) {
    uVar9 = 0x3c0efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x55] + 0xf0))(param_1 + 0x55);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x59);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x5a] = 0;
    uVar9 = 0x3f000000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x5a) = uVar9;
  }
  *(uint *)(param_1 + 0x59) = uVar4 & 0xfeffffff;
  return;
}

