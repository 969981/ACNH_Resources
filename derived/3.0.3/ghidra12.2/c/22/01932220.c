
void FUN_01932220(long *param_1,long *param_2,long *param_3)

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
  puVar1 = PTR_DAT_04bb60a0;
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar5;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[9] = 0;
  *param_1 = (long)&PTR_LAB_049de348;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[7] = (long)"mActStopSecMin";
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
  uVar7 = 0x40a00000;
  if ((*(uint *)(param_1 + 10) & 0x800) != 0) {
    uVar7 = 0x3db2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 10);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    uVar7 = 0x40a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0xb) = uVar7;
  }
  puVar1 = puVar1 + 0x10;
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = uVar2 & 0xfeffffff;
  param_1[0xd] = (long)"mActStopSecMax";
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  plVar6 = param_1 + 0xc;
  *plVar6 = (long)puVar1;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x41200000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar7 = 0x3e32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar7 = 0x41200000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar7;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar2 & 0xfeffffff;
  param_1[0x13] = (long)"mAddDirAng";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  plVar6 = param_1 + 0x12;
  *plVar6 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3fbff400;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar7 = 0x3cd669e8;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x16);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar7 = 0x3fbff400;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3cd669e8;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar7;
  }
  *(uint *)(param_1 + 0x16) = uVar2 & 0xfeffffff;
  return;
}

