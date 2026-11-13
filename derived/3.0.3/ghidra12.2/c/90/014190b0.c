
void FUN_014190b0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  *(int *)(param_1 + 4) = (int)lVar6;
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[9] = 0;
  *param_1 = (long)&PTR_LAB_049985b8;
  puVar1 = PTR_DAT_04bb6048;
  param_1[7] = (long)"mUniqueID";
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
  puVar3 = (undefined2 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar3 = 0xfffe;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    *(undefined2 *)(param_1 + 0xb) = 0xfffe;
  }
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  param_1[0xd] = (long)"mSpeedUpMaxRate";
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  plVar7 = param_1 + 0xc;
  *plVar7 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x3fb33333;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar8 = 0x3cc82b17;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar8 = 0x3fb33333;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3cc82b17;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar8;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar2 & 0xfeffffff;
  param_1[0x13] = (long)"mSearchPredatorRange";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  plVar7 = param_1 + 0x12;
  *plVar7 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar8 = 0x3eb2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x16);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar8 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar8;
  }
  *(uint *)(param_1 + 0x16) = uVar2 & 0xfeffffff;
  return;
}

