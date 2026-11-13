
void FUN_013400f0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar6;
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[9] = 0;
  *param_1 = (long)&PTR_LAB_04990c98;
  puVar1 = PTR_DAT_04bb3380;
  param_1[7] = (long)"mUnitX";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
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
  puVar3 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  plVar7 = param_1 + 0xc;
  *plVar7 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xd] = (long)"mUnitZ";
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar3 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfeffffff;
  param_1[0x13] = (long)"mWallUniqueID";
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar2 = PTR_DAT_04bb6048;
  *(undefined4 *)(param_1 + 0x16) = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x17] = 0;
  plVar7 = param_1 + 0x12;
  *plVar7 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined2 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 0x2a;
  if ((*(uint *)(param_1 + 0x16) >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    *(undefined2 *)(param_1 + 0x17) = 0x2a;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfeffffff;
  param_1[0x19] = (long)"mRoofUniqueID";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  plVar7 = param_1 + 0x18;
  *plVar7 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined2 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 0x13;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined2 *)(param_1 + 0x1d) = 0x13;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  plVar7 = param_1 + 0x1e;
  *plVar7 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = (long)"mDoorUniqueID";
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined2 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 0x1c;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined2 *)(param_1 + 0x23) = 0x1c;
  }
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  return;
}

