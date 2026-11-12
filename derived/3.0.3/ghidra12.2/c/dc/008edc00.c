
void FUN_008edc00(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bb33a8;
  lVar8 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar8;
  lVar8 = param_2[6];
  plVar7 = param_1 + 6;
  *plVar7 = (long)(puVar3 + 0x10);
  *param_1 = (long)&PTR_LAB_049246c8;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[7] = (long)"__dummy_param_st_south_shore";
  param_1[8] = 0;
  param_1[9] = (long)param_1;
  param_1[5] = (long)plVar7;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(int *)(param_1 + 4) = (int)lVar8;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0xc] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 10) = 0x65;
  param_1[0xd] = (long)"mSouthShoreBaseline";
  param_1[0xe] = 0;
  do {
    plVar6 = plVar7;
    plVar7 = (long *)plVar6[2];
  } while (plVar7 != (long *)0x0);
  plVar6[2] = (long)(param_1 + 0xc);
  param_1[0xf] = (long)param_1;
  uVar9 = 0x447a0000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar9 = 0x418ba058;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0xc] + 0xf0))();
  *puVar4 = uVar9;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar9 = 0x447a0000;
    if ((uVar2 & 0x800) != 0) {
      uVar9 = 0x418ba058;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar9;
  }
  puVar1 = puVar1 + 0x10;
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar2 & 0xfeffffff;
  param_1[0x13] = (long)"mSouthShoreRange";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  plVar7 = param_1 + 0x12;
  *plVar7 = (long)puVar1;
  param_1[0x17] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar9 = 0x42480000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar9 = 0x3f5f66f3;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar9;
  uVar2 = *(uint *)(param_1 + 0x16);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar9 = 0x42480000;
    if ((uVar2 & 0x800) != 0) {
      uVar9 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar9;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar2 & 0xfeffffff;
  param_1[0x19] = (long)"mSouthShoreOffset";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  plVar7 = param_1 + 0x18;
  *plVar7 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar9 = 0x41200000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar9 = 0x3e32b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar9;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar9 = 0x41200000;
    if ((uVar2 & 0x800) != 0) {
      uVar9 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar9;
  }
  *(uint *)(param_1 + 0x1c) = uVar2 & 0xfeffffff;
  param_1[0x1f] = (long)"__dummy_param_ed_south_shore";
  param_1[0x20] = 0;
  plVar7 = param_1 + 0x1e;
  *plVar7 = (long)(puVar3 + 0x10);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x66;
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar5 = (undefined1 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  return;
}

