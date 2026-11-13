
void FUN_0141aeb0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  lVar7 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  *(int *)(param_1 + 4) = (int)lVar7;
  plVar8 = param_1 + 5;
  *plVar8 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[9] = 0;
  *param_1 = (long)&PTR_LAB_04998a78;
  puVar1 = PTR_DAT_04bb6048;
  param_1[7] = (long)"mUniqueID";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  lVar7 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar6 = lVar7;
      lVar7 = *(long *)(lVar6 + 0x10);
    } while (lVar7 != 0);
    plVar8 = (long *)(lVar6 + 0x10);
  }
  *plVar8 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  puVar4 = (undefined2 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar4 = 0xfffe;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    *(undefined2 *)(param_1 + 0xb) = 0xfffe;
  }
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  param_1[0xd] = (long)"mWaitFrameRangeMin";
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x11] = 0;
  plVar8 = param_1 + 0xc;
  *plVar8 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0x41200000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar9 = 0x3e32b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar5 = uVar9;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar9 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar9 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar9;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar3 & 0xfeffffff;
  param_1[0x13] = (long)"mWaitFrameRangeMax";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  plVar8 = param_1 + 0x12;
  *plVar8 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0x42700000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar9 = 0x3f860a92;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar5 = uVar9;
  uVar3 = *(uint *)(param_1 + 0x16);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar9 = 0x42700000;
    if ((uVar3 & 0x800) != 0) {
      uVar9 = 0x3f860a92;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar9;
  }
  puVar2 = puVar2 + 0x10;
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar3 & 0xfeffffff;
  param_1[0x19] = (long)"mWaterRegist";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  plVar8 = param_1 + 0x18;
  *plVar8 = (long)puVar2;
  param_1[0x1d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar9 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar5 = uVar9;
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar9 = 0x3f800000;
    if ((uVar3 & 0x800) != 0) {
      uVar9 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar9;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar3 & 0xfeffffff;
  param_1[0x1f] = (long)"mMaxAnimSpeed";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  plVar8 = param_1 + 0x1e;
  *plVar8 = (long)puVar2;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0x40400000;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar9 = 0x3d567750;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar5 = uVar9;
  uVar3 = *(uint *)(param_1 + 0x22);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar9 = 0x40400000;
    if ((uVar3 & 0x800) != 0) {
      uVar9 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar9;
  }
  *(uint *)(param_1 + 0x22) = uVar3 & 0xfeffffff;
  return;
}

