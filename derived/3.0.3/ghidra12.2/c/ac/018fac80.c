
void FUN_018fac80(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  *(int *)(param_1 + 4) = (int)lVar5;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[9] = 0;
  *param_1 = (long)&PTR_LAB_049d5750;
  puVar1 = PTR_DAT_04bb3380;
  param_1[7] = (long)"mStartChilpTime";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
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
  puVar3 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar3 = 0x1e;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x1e;
  }
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  param_1[0xd] = (long)"mEscapeDistanceRate";
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  plVar6 = param_1 + 0xc;
  *plVar6 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3fa00000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar7 = 0x3cb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar7 = 0x3fa00000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3cb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar7;
  }
  *(uint *)(param_1 + 0x10) = uVar2 & 0xfeffffff;
  param_1[0x13] = (long)"mRotateAngleYStep";
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar1 = PTR_DAT_04bb62c0 + 0x10;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  plVar6 = param_1 + 0x12;
  *plVar6 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = 0x1110000;
  if ((*(uint *)(param_1 + 0x16) >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0x1110000;
  }
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfeffffff;
  return;
}

