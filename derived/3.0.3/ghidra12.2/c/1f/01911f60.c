
void FUN_01911f60(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar2 = PTR_DAT_04bb60a0;
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar6;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar3 = PTR_DAT_04bbf210;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[7] = (long)"mBottomRadius";
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[6] = (long)(puVar2 + 0x10);
  lVar6 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar5 + 0x10);
  }
  *plVar7 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  uVar8 = 0x40a00000;
  if ((*(uint *)(param_1 + 10) & 0x800) != 0) {
    uVar8 = 0x3db2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    uVar8 = 0x40a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0xb) = uVar8;
  }
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = uVar1 & 0xfeffffff;
  param_1[0xd] = (long)"mHeight";
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  plVar7 = param_1 + 0xc;
  *plVar7 = (long)(puVar2 + 0x10);
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar8 = 0x3db2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar8 = 0x40a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar8;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar1 & 0xfeffffff;
  param_1[0x13] = (long)"mAngleYDeg";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  plVar7 = param_1 + 0x12;
  *plVar7 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x42b40000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar8 = 0x3fc90fdb;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x16);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar8 = 0x42b40000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3fc90fdb;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar8;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar1 & 0xfeffffff;
  plVar7 = param_1 + 0x18;
  *plVar7 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = (long)"mTaper";
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  return;
}

