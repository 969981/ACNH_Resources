
void FUN_018f7480(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
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
  puVar4 = PTR_DAT_04bb60a0;
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  lVar7 = param_2[6];
  *param_1 = (long)(puVar4 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar7;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_88 = PTR_DAT_04bb2020;
  local_58 = 0;
  *param_1 = (long)&PTR_LAB_049d4f10;
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
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar4 + 8) + lVar7) == '\0') goto LAB_018f75f0;
      lVar1 = *(long *)(puVar4 + 8) + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_018f75f0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_018f75f0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_018f75f0:
    iVar2 = (int)lVar7;
    if (local_b0 <= (int)lVar7) {
      iVar2 = local_b0 + -1;
    }
    memcpy(auStack_ac,__src,(long)iVar2);
    auStack_ac[iVar2] = 0;
  }
  local_c0 = PTR_DAT_04bb2028 + 0x10;
  FUN_008f0e20(param_1 + 6,&local_88,&local_c0,param_1);
  param_1[0x16] = 0;
  param_1[0x14] = (long)"mMoveFrame";
  param_1[0x15] = 0;
  puVar4 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  plVar8 = param_1 + 0x13;
  *plVar8 = (long)(puVar4 + 0x10);
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
  uVar3 = *(uint *)(param_1 + 0x1d);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    uVar9 = 0xbc800000;
    if ((uVar3 & 0x800) != 0) {
      uVar9 = 0xb98efa35;
    }
    *(undefined4 *)(param_1 + 0x1e) = uVar9;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1d) = uVar3 & 0xfeffffff;
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
  uVar3 = *(uint *)(param_1 + 0x23);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    uVar9 = 0x40f00000;
    if ((uVar3 & 0x800) != 0) {
      uVar9 = 0x3e060a92;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar9;
  }
  *(uint *)(param_1 + 0x23) = uVar3 & 0xfeffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x25] = (long)(puVar5 + 0x10);
  param_1[0x26] = (long)"mMoveSpeed";
  param_1[0x2a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25);
  uVar9 = 0x3ea00000;
  if ((*(uint *)(param_1 + 0x29) & 0x800) != 0) {
    uVar9 = 0x3bb2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x25] + 0xf0))(param_1 + 0x25);
  *puVar6 = uVar9;
  uVar3 = *(uint *)(param_1 + 0x29);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2a] = 0;
    uVar9 = 0x3ea00000;
    if ((uVar3 & 0x800) != 0) {
      uVar9 = 0x3bb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x2a) = uVar9;
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(uint *)(param_1 + 0x29) = uVar3 & 0xfeffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x2b] = (long)(puVar5 + 0x10);
  param_1[0x2c] = (long)"mVanishTime";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b);
  uVar9 = 0x41200000;
  if ((*(uint *)(param_1 + 0x2f) & 0x800) != 0) {
    uVar9 = 0x3e32b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  *puVar6 = uVar9;
  uVar3 = *(uint *)(param_1 + 0x2f);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    uVar9 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar9 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar9;
  }
  *(uint *)(param_1 + 0x2f) = uVar3 & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x31] = (long)(puVar4 + 0x10);
  param_1[0x32] = (long)"mSwingCycle";
  param_1[0x36] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar6 = 0x28;
  if ((*(uint *)(param_1 + 0x35) >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0x28;
  }
  *(uint *)(param_1 + 0x35) = *(uint *)(param_1 + 0x35) & 0xfeffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x37] = (long)(puVar5 + 0x10);
  param_1[0x38] = (long)"mSwingAngle";
  param_1[0x3c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x37);
  uVar9 = 0x41700000;
  if ((*(uint *)(param_1 + 0x3b) & 0x800) != 0) {
    uVar9 = 0x3e860a92;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x37] + 0xf0))(param_1 + 0x37);
  *puVar6 = uVar9;
  uVar3 = *(uint *)(param_1 + 0x3b);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x3c] = 0;
    uVar9 = 0x41700000;
    if ((uVar3 & 0x800) != 0) {
      uVar9 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar9;
  }
  *(uint *)(param_1 + 0x3b) = uVar3 & 0xfeffffff;
  return;
}

