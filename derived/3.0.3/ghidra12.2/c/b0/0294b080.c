
void FUN_0294b080(long *param_1,undefined8 param_2)

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
  int iVar11;
  undefined4 uVar12;
  ulong local_b4;
  undefined4 local_ac;
  undefined *local_a8;
  char *local_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  uint local_78;
  
  puVar3 = PTR_DAT_04bb2020;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = "Actor";
  FUN_00751ec0(param_1,&local_a8,param_2,0);
  puVar4 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_FUN_04a941e8;
  param_1[0x19] = (long)"mBuoyLeftOffset";
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
  uVar12 = 0x42480000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar12 = 0x3f5f66f3;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar12 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar12;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar2 & 0xfeffffff;
  param_1[0x1f] = (long)"mBuoyRightOffset";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar10 = param_1 + 0x1e;
  *plVar10 = (long)(puVar4 + 0x10);
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  uVar12 = 0x42480000;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar12 = 0x3f5f66f3;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar10 + 0xf0))(plVar10);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x22);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar12 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar12;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = uVar2 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar4 + 0x10);
  param_1[0x25] = (long)"mBuoyUpOffset";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  uVar12 = 0x42480000;
  if ((*(uint *)(param_1 + 0x28) & 0x800) != 0) {
    uVar12 = 0x3f5f66f3;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    uVar12 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x29) = uVar12;
  }
  *(uint *)(param_1 + 0x28) = uVar2 & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar4 + 0x10);
  param_1[0x2b] = (long)"mBuoyDownOffset";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  uVar12 = 0x42480000;
  if ((*(uint *)(param_1 + 0x2e) & 0x800) != 0) {
    uVar12 = 0x3f5f66f3;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x2e);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    uVar12 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x2f) = uVar12;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x2e) = uVar2 & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar4 + 0x10);
  param_1[0x31] = (long)"mBuoyLeftCreateAreaOffset";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  uVar12 = 0x42a00000;
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    uVar12 = 0x3fb2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x34);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    uVar12 = 0x42a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3fb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar12;
  }
  *(uint *)(param_1 + 0x34) = uVar2 & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x36] = (long)(puVar4 + 0x10);
  param_1[0x37] = (long)"mBuoyRightCreateAreaOffset";
  param_1[0x3b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  uVar12 = 0x42a00000;
  if ((*(uint *)(param_1 + 0x3a) & 0x800) != 0) {
    uVar12 = 0x3fb2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x3a);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    uVar12 = 0x42a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3fb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar12;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x3a) = uVar2 & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar4 + 0x10);
  param_1[0x3d] = (long)"mBuoyUpCreateAreaOffset";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  uVar12 = 0x42dc0000;
  if ((*(uint *)(param_1 + 0x40) & 0x800) != 0) {
    uVar12 = 0x3ff5be0b;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    uVar12 = 0x42dc0000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3ff5be0b;
    }
    *(undefined4 *)(param_1 + 0x41) = uVar12;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = uVar2 & 0xfeffffff;
  param_1[0x43] = (long)"mBuoyDownCreateAreaOffset";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar4 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  uVar12 = 0x42dc0000;
  if ((*(uint *)(param_1 + 0x46) & 0x800) != 0) {
    uVar12 = 0x3ff5be0b;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x46);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    uVar12 = 0x42dc0000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3ff5be0b;
    }
    *(undefined4 *)(param_1 + 0x47) = uVar12;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = uVar2 & 0xfeffffff;
  param_1[0x49] = (long)"mGulBQuestItemCreateRate";
  param_1[0x4b] = 0;
  puVar1 = PTR_DAT_04bb5a88;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x48] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  puVar7 = (undefined1 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar7 = 0x3c;
  if ((*(uint *)(param_1 + 0x4c) >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    *(undefined1 *)(param_1 + 0x4d) = 0x3c;
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfeffffff;
  local_a8 = puVar3 + 0x10;
  local_78 = 0;
  puStack_90 = (undefined8 *)&DAT_040b1c13;
  local_a0 = "mPosArray";
  puStack_80 = &DAT_0407ebb1;
  local_b4 = 0xc1a0000000000000;
  param_1[0x4f] = (long)"mPosArray";
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  puVar5 = PTR_DAT_04bb60a0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x53] = 0;
  local_ac = 0;
  param_1[0x4e] = (long)puVar1;
  local_98 = local_a8;
  local_88 = local_a8;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  param_1[0x54] = 0;
  puVar1 = PTR_DAT_04bc3bb0;
  param_1[0x59] = (long)(param_1 + 0x60);
  param_1[0x60] = (long)(param_1 + 0x67);
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = (long)(param_1 + 0x59);
  param_1[0xbb] = 0;
  param_1[0x58] = (long)(param_1 + 0x59);
  param_1[0x4e] = (long)(puVar1 + 0x10);
  param_1[0x67] = (long)(param_1 + 0x6e);
  param_1[0x6e] = (long)(param_1 + 0x75);
  param_1[0x75] = (long)(param_1 + 0x7c);
  param_1[0x7c] = (long)(param_1 + 0x83);
  param_1[0x83] = (long)(param_1 + 0x8a);
  param_1[0x8a] = (long)(param_1 + 0x91);
  param_1[0x91] = (long)(param_1 + 0x98);
  param_1[0x98] = (long)(param_1 + 0x9f);
  param_1[0x9f] = (long)(param_1 + 0xa6);
  param_1[0xa6] = (long)(param_1 + 0xad);
  param_1[0xad] = (long)(param_1 + 0xb4);
  param_1[0xb4] = (long)(param_1 + 0xbb);
  if (param_1 + 0xc2 != (long *)0x0) {
    param_1[0x56] = (long)(param_1 + 0xc2);
    param_1[0x55] = 0xf00000000;
  }
  param_1[0x4e] = (long)&PTR_LAB_04a94358;
  iVar11 = 0xf;
  do {
    if ((int)param_1[0x55] < *(int *)((long)param_1 + 0x2ac)) {
      plVar10 = (long *)param_1[0x57];
      if (plVar10 != (long *)0x0) {
        param_1[0x57] = *plVar10;
      }
      FUN_006fdfc0(plVar10,&local_a8,&local_b4,0);
      *plVar10 = (long)&DAT_04a944d8;
      if ((int)param_1[0x55] < *(int *)((long)param_1 + 0x2ac)) {
        *(long **)(param_1[0x56] + (long)(int)param_1[0x55] * 8) = plVar10;
        *(int *)(param_1 + 0x55) = (int)param_1[0x55] + 1;
      }
    }
    else {
      plVar10 = (long *)0x0;
    }
    (**(code **)(*plVar10 + 0x38))(plVar10,param_1 + 0x4e);
    iVar11 = iVar11 + -1;
    *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) & 0xfffffffc;
  } while (iVar11 != 0);
  local_78 = 0;
  puVar1 = puVar3 + 0x10;
  local_a0 = "mAngleXArray";
  local_b4 = local_b4 & 0xffffffff00000000;
  puStack_90 = (undefined8 *)&DAT_040c12d9;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_0294c1c0(param_1 + 0xd1,&local_a8,&local_b4,param_1);
  local_78 = 0;
  local_a0 = "mAngleYArray";
  local_b4 = local_b4 & 0xffffffff00000000;
  puStack_90 = (undefined8 *)&DAT_04082b13;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_0294c1c0(param_1 + 0x145,&local_a8,&local_b4,param_1);
  local_78 = 0;
  local_a0 = "mAngleZArray";
  local_b4 = local_b4 & 0xffffffff00000000;
  puStack_90 = (undefined8 *)&DAT_040634e9;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  FUN_0294c1c0(param_1 + 0x1b9,&local_a8,&local_b4,param_1);
  param_1[0x22f] = 0;
  local_a0 = "mNameEnumArray";
  param_1[0x22e] = (long)"mNameEnumArray";
  param_1[0x22d] = (long)(puVar5 + 0x10);
  param_1[0x230] = 0;
  *(undefined4 *)(param_1 + 0x231) = 0;
  param_1[0x232] = 0;
  local_78 = 0;
  puStack_90 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x22d);
  puVar1 = PTR_DAT_04bc3b98;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  param_1[0x238] = (long)(param_1 + 0x23e);
  param_1[0x235] = 0;
  param_1[0x23e] = (long)(param_1 + 0x244);
  param_1[0x28c] = 0;
  param_1[0x22d] = (long)(puVar1 + 0x10);
  param_1[0x236] = (long)(param_1 + 0x238);
  param_1[0x237] = (long)(param_1 + 0x238);
  param_1[0x244] = (long)(param_1 + 0x24a);
  param_1[0x24a] = (long)(param_1 + 0x250);
  param_1[0x250] = (long)(param_1 + 0x256);
  param_1[0x256] = (long)(param_1 + 0x25c);
  param_1[0x25c] = (long)(param_1 + 0x262);
  param_1[0x262] = (long)(param_1 + 0x268);
  param_1[0x268] = (long)(param_1 + 0x26e);
  param_1[0x26e] = (long)(param_1 + 0x274);
  param_1[0x274] = (long)(param_1 + 0x27a);
  param_1[0x27a] = (long)(param_1 + 0x280);
  param_1[0x280] = (long)(param_1 + 0x286);
  param_1[0x286] = (long)(param_1 + 0x28c);
  if (param_1 + 0x292 != (long *)0x0) {
    param_1[0x235] = (long)(param_1 + 0x292);
    param_1[0x234] = 0xf00000000;
  }
  puVar1 = PTR_DAT_04bb3050;
  iVar11 = 0xf;
  param_1[0x22d] = (long)&PTR_LAB_04a94908;
  do {
    if ((int)param_1[0x234] < *(int *)((long)param_1 + 0x11a4)) {
      plVar10 = (long *)param_1[0x236];
      if (plVar10 != (long *)0x0) {
        param_1[0x236] = *plVar10;
      }
      *plVar10 = (long)(puVar1 + 0x10);
      (**(code **)(local_a8 + 0x18))(&local_a8);
      plVar10[3] = 0;
      plVar10[1] = (long)local_a0;
      plVar10[2] = 0;
      plVar10[5] = 0;
      *(undefined4 *)((long)plVar10 + 0x24) = 3;
      if ((local_78 >> 7 & 1) == 0) {
        *(undefined4 *)(plVar10 + 5) = 3;
      }
      *plVar10 = (long)&DAT_04a94a88;
      *(uint *)(plVar10 + 4) = local_78 & 0xfeffffff;
      if ((int)param_1[0x234] < *(int *)((long)param_1 + 0x11a4)) {
        *(long **)(param_1[0x235] + (long)(int)param_1[0x234] * 8) = plVar10;
        *(int *)(param_1 + 0x234) = (int)param_1[0x234] + 1;
      }
    }
    else {
      plVar10 = (long *)0x0;
    }
    (**(code **)(*plVar10 + 0x38))(plVar10,param_1 + 0x22d);
    iVar11 = iVar11 + -1;
    *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) & 0xfffffffc;
  } while (iVar11 != 0);
  local_a8 = puVar3 + 0x10;
  local_a0 = "mScaleArray";
  puStack_90 = (undefined8 *)&DAT_040bb2a5;
  puStack_80 = &DAT_0407ebb1;
  local_78 = 0;
  local_b4 = CONCAT44(local_b4._4_4_,0x3f800000);
  local_98 = local_a8;
  local_88 = local_a8;
  FUN_0294c1c0(param_1 + 0x2a1,&local_a8,&local_b4,param_1);
  param_1[0x317] = 0;
  param_1[0x316] = (long)"mTourBuoyLeftOffset";
  param_1[0x318] = 0;
  *(undefined4 *)(param_1 + 0x319) = 0;
  param_1[0x315] = (long)(puVar4 + 0x10);
  param_1[0x31a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x315);
  uVar12 = 0x42480000;
  if ((*(uint *)(param_1 + 0x319) & 0x800) != 0) {
    uVar12 = 0x3f5f66f3;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x315] + 0xf0))(param_1 + 0x315);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x319);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x31a] = 0;
    uVar12 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x31a) = uVar12;
  }
  *(uint *)(param_1 + 0x319) = uVar2 & 0xfeffffff;
  param_1[0x31c] = (long)"mTourBuoyRightOffset";
  param_1[0x31d] = 0;
  param_1[0x31e] = 0;
  *(undefined4 *)(param_1 + 799) = 0;
  param_1[0x31b] = (long)(puVar4 + 0x10);
  param_1[800] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31b);
  uVar12 = 0x42480000;
  if ((*(uint *)(param_1 + 799) & 0x800) != 0) {
    uVar12 = 0x3f5f66f3;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x31b] + 0xf0))(param_1 + 0x31b);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 799);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[800] = 0;
    uVar12 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 800) = uVar12;
  }
  param_1[0x323] = 0;
  *(uint *)(param_1 + 799) = uVar2 & 0xfeffffff;
  param_1[0x322] = (long)"mTourBuoyUpOffset";
  param_1[0x324] = 0;
  *(undefined4 *)(param_1 + 0x325) = 0;
  param_1[0x321] = (long)(puVar4 + 0x10);
  param_1[0x326] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x321);
  uVar12 = 0x42480000;
  if ((*(uint *)(param_1 + 0x325) & 0x800) != 0) {
    uVar12 = 0x3f5f66f3;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x321] + 0xf0))(param_1 + 0x321);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x325);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x326] = 0;
    uVar12 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x326) = uVar12;
  }
  *(uint *)(param_1 + 0x325) = uVar2 & 0xfeffffff;
  param_1[0x328] = (long)"mTourBuoyDownOffset";
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  *(undefined4 *)(param_1 + 0x32b) = 0;
  param_1[0x327] = (long)(puVar4 + 0x10);
  param_1[0x32c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x327);
  uVar12 = 0x42480000;
  if ((*(uint *)(param_1 + 0x32b) & 0x800) != 0) {
    uVar12 = 0x3f5f66f3;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x327] + 0xf0))(param_1 + 0x327);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x32b);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x32c] = 0;
    uVar12 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x32c) = uVar12;
  }
  param_1[0x32f] = 0;
  *(uint *)(param_1 + 0x32b) = uVar2 & 0xfeffffff;
  param_1[0x32e] = (long)"mTourBuoyLeftCreateAreaOffset";
  param_1[0x330] = 0;
  *(undefined4 *)(param_1 + 0x331) = 0;
  param_1[0x32d] = (long)(puVar4 + 0x10);
  param_1[0x332] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x32d);
  uVar12 = 0x42a00000;
  if ((*(uint *)(param_1 + 0x331) & 0x800) != 0) {
    uVar12 = 0x3fb2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x32d] + 0xf0))(param_1 + 0x32d);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x331);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x332] = 0;
    uVar12 = 0x42a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3fb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x332) = uVar12;
  }
  *(uint *)(param_1 + 0x331) = uVar2 & 0xfeffffff;
  param_1[0x334] = (long)"mTourBuoyRightCreateAreaOffset";
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  *(undefined4 *)(param_1 + 0x337) = 0;
  param_1[0x333] = (long)(puVar4 + 0x10);
  param_1[0x338] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x333);
  uVar12 = 0x42a00000;
  if ((*(uint *)(param_1 + 0x337) & 0x800) != 0) {
    uVar12 = 0x3fb2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x333] + 0xf0))(param_1 + 0x333);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x337);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x338] = 0;
    uVar12 = 0x42a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3fb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x338) = uVar12;
  }
  param_1[0x33b] = 0;
  *(uint *)(param_1 + 0x337) = uVar2 & 0xfeffffff;
  param_1[0x33a] = (long)"mTourBuoyUpCreateAreaOffset";
  param_1[0x33c] = 0;
  *(undefined4 *)(param_1 + 0x33d) = 0;
  param_1[0x339] = (long)(puVar4 + 0x10);
  param_1[0x33e] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x339);
  uVar12 = 0x42dc0000;
  if ((*(uint *)(param_1 + 0x33d) & 0x800) != 0) {
    uVar12 = 0x3ff5be0b;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x339] + 0xf0))(param_1 + 0x339);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x33d);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x33e] = 0;
    uVar12 = 0x42dc0000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3ff5be0b;
    }
    *(undefined4 *)(param_1 + 0x33e) = uVar12;
  }
  *(uint *)(param_1 + 0x33d) = uVar2 & 0xfeffffff;
  param_1[0x340] = (long)"mTourBuoyDownCreateAreaOffset";
  param_1[0x341] = 0;
  param_1[0x342] = 0;
  *(undefined4 *)(param_1 + 0x343) = 0;
  param_1[0x33f] = (long)(puVar4 + 0x10);
  param_1[0x344] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x33f);
  uVar12 = 0x42dc0000;
  if ((*(uint *)(param_1 + 0x343) & 0x800) != 0) {
    uVar12 = 0x3ff5be0b;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x33f] + 0xf0))(param_1 + 0x33f);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x343);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x344] = 0;
    uVar12 = 0x42dc0000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3ff5be0b;
    }
    *(undefined4 *)(param_1 + 0x344) = uVar12;
  }
  param_1[0x347] = 0;
  *(uint *)(param_1 + 0x343) = uVar2 & 0xfeffffff;
  param_1[0x346] = (long)"mCreateCycle";
  param_1[0x348] = 0;
  *(undefined4 *)(param_1 + 0x349) = 0;
  param_1[0x345] = (long)(puVar4 + 0x10);
  param_1[0x34a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x345);
  uVar12 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x349) & 0x800) != 0) {
    uVar12 = 0x3eb2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x345] + 0xf0))(param_1 + 0x345);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x349);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x34a] = 0;
    uVar12 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x34a) = uVar12;
  }
  *(uint *)(param_1 + 0x349) = uVar2 & 0xfeffffff;
  param_1[0x34c] = (long)"mTourCreateCycle";
  param_1[0x34d] = 0;
  param_1[0x34e] = 0;
  *(undefined4 *)(param_1 + 0x34f) = 0;
  param_1[0x34b] = (long)(puVar4 + 0x10);
  param_1[0x350] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x34b);
  uVar12 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x34f) & 0x800) != 0) {
    uVar12 = 0x3db2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x34b] + 0xf0))(param_1 + 0x34b);
  *puVar6 = uVar12;
  uVar2 = *(uint *)(param_1 + 0x34f);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x350] = 0;
    uVar12 = 0x40a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar12 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x350) = uVar12;
  }
  *(uint *)(param_1 + 0x34f) = uVar2 & 0xfeffffff;
  return;
}

