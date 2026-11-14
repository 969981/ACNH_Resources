
void FUN_018ed4d0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 *__src;
  undefined4 uVar8;
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
  puVar4 = PTR_DAT_04bb60a0;
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  *param_1 = (long)(puVar4 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar6;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_88 = PTR_DAT_04bb2020;
  local_58 = 0;
  *param_1 = (long)&PTR_FUN_049d30d0;
  puVar4 = PTR_PTR_04bb2238;
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
  __src = *(undefined1 **)(puVar4 + 8);
  if (auStack_ac != __src) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar4 + 8) + lVar6) == '\0') goto LAB_018ed640;
      lVar1 = *(long *)(puVar4 + 8) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_018ed640;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_018ed640;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_018ed640:
    iVar2 = (int)lVar6;
    if (local_b0 <= (int)lVar6) {
      iVar2 = local_b0 + -1;
    }
    memcpy(auStack_ac,__src,(long)iVar2);
    auStack_ac[iVar2] = 0;
  }
  local_c0 = PTR_DAT_04bb2028 + 0x10;
  FUN_008f0e20(param_1 + 6,&local_88,&local_c0,param_1);
  param_1[0x16] = 0;
  param_1[0x14] = (long)"mMaxSpeed";
  param_1[0x15] = 0;
  puVar4 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  plVar7 = param_1 + 0x13;
  *plVar7 = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x3ff00000;
  if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
    uVar8 = 0x3d060a92;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar5 = uVar8;
  uVar3 = *(uint *)(param_1 + 0x17);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x18] = 0;
    uVar8 = 0x3ff00000;
    if ((uVar3 & 0x800) != 0) {
      uVar8 = 0x3d060a92;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar8;
  }
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x17) = uVar3 & 0xfeffffff;
  param_1[0x1a] = (long)"mAccel";
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  plVar7 = param_1 + 0x19;
  *plVar7 = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x3ea00000;
  if ((*(uint *)(param_1 + 0x1d) & 0x800) != 0) {
    uVar8 = 0x3bb2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar5 = uVar8;
  uVar3 = *(uint *)(param_1 + 0x1d);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    uVar8 = 0x3ea00000;
    if ((uVar3 & 0x800) != 0) {
      uVar8 = 0x3bb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x1e) = uVar8;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1d) = uVar3 & 0xfeffffff;
  param_1[0x20] = (long)"mSpeedUpDown";
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  plVar7 = param_1 + 0x1f;
  *plVar7 = (long)(puVar4 + 0x10);
  param_1[0x24] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x3e200000;
  if ((*(uint *)(param_1 + 0x23) & 0x800) != 0) {
    uVar8 = 0x3b32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar5 = uVar8;
  uVar3 = *(uint *)(param_1 + 0x23);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    uVar8 = 0x3e200000;
    if ((uVar3 & 0x800) != 0) {
      uVar8 = 0x3b32b8c2;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(uint *)(param_1 + 0x23) = uVar3 & 0xfeffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = (long)(puVar4 + 0x10);
  param_1[0x26] = (long)"mAttackDist";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25);
  uVar8 = 0x40fa0000;
  if ((*(uint *)(param_1 + 0x29) & 0x800) != 0) {
    uVar8 = 0x3e0ba058;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x25] + 0xf0))(param_1 + 0x25);
  *puVar5 = uVar8;
  uVar3 = *(uint *)(param_1 + 0x29);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2a] = 0;
    uVar8 = 0x40fa0000;
    if ((uVar3 & 0x800) != 0) {
      uVar8 = 0x3e0ba058;
    }
    *(undefined4 *)(param_1 + 0x2a) = uVar8;
  }
  *(uint *)(param_1 + 0x29) = uVar3 & 0xfeffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2b] = (long)(puVar4 + 0x10);
  param_1[0x2c] = (long)"mBaseHeight";
  param_1[0x30] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b);
  uVar8 = 0x41700000;
  if ((*(uint *)(param_1 + 0x2f) & 0x800) != 0) {
    uVar8 = 0x3e860a92;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  *puVar5 = uVar8;
  uVar3 = *(uint *)(param_1 + 0x2f);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    uVar8 = 0x41700000;
    if ((uVar3 & 0x800) != 0) {
      uVar8 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(uint *)(param_1 + 0x2f) = uVar3 & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x31] = (long)(puVar4 + 0x10);
  param_1[0x32] = (long)"mAddDirAng";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  uVar8 = 0x411ff600;
  if ((*(uint *)(param_1 + 0x35) & 0x800) != 0) {
    uVar8 = 0x3e32ad97;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar5 = uVar8;
  uVar3 = *(uint *)(param_1 + 0x35);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    uVar8 = 0x411ff600;
    if ((uVar3 & 0x800) != 0) {
      uVar8 = 0x3e32ad97;
    }
    *(undefined4 *)(param_1 + 0x36) = uVar8;
  }
  *(uint *)(param_1 + 0x35) = uVar3 & 0xfeffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x37] = (long)(puVar4 + 0x10);
  param_1[0x38] = (long)"mHeadOffset";
  param_1[0x3c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x37);
  uVar8 = 0x41880000;
  if ((*(uint *)(param_1 + 0x3b) & 0x800) != 0) {
    uVar8 = 0x3e97e9d8;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x37] + 0xf0))(param_1 + 0x37);
  *puVar5 = uVar8;
  uVar3 = *(uint *)(param_1 + 0x3b);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x3c] = 0;
    uVar8 = 0x41880000;
    if ((uVar3 & 0x800) != 0) {
      uVar8 = 0x3e97e9d8;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(uint *)(param_1 + 0x3b) = uVar3 & 0xfeffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x3d] = (long)(puVar4 + 0x10);
  param_1[0x3e] = (long)"mPassHeight";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d);
  uVar8 = 0x41200000;
  if ((*(uint *)(param_1 + 0x41) & 0x800) != 0) {
    uVar8 = 0x3e32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x3d] + 0xf0))(param_1 + 0x3d);
  *puVar5 = uVar8;
  uVar3 = *(uint *)(param_1 + 0x41);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x42] = 0;
    uVar8 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar8 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x42) = uVar8;
  }
  param_1[0x45] = 0;
  *(uint *)(param_1 + 0x41) = uVar3 & 0xfeffffff;
  param_1[0x44] = (long)"mAroundFrame";
  param_1[0x46] = 0;
  puVar4 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x43] = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x43);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x43] + 0xf0))(param_1 + 0x43);
  *puVar5 = 0x3c;
  if ((*(uint *)(param_1 + 0x47) >> 7 & 1) == 0) {
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x3c;
  }
  param_1[0x4b] = 0;
  *(uint *)(param_1 + 0x47) = *(uint *)(param_1 + 0x47) & 0xfeffffff;
  param_1[0x4a] = (long)"mAttackFrame";
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x49] = (long)(puVar4 + 0x10);
  param_1[0x4e] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x49);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x49] + 0xf0))(param_1 + 0x49);
  *puVar5 = 0x3c;
  if ((*(uint *)(param_1 + 0x4d) >> 7 & 1) == 0) {
    param_1[0x4e] = 0;
    *(undefined4 *)(param_1 + 0x4e) = 0x3c;
  }
  *(uint *)(param_1 + 0x4d) = *(uint *)(param_1 + 0x4d) & 0xfeffffff;
  return;
}

