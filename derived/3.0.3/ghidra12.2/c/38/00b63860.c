
void FUN_00b63860(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  *(int *)(param_1 + 4) = (int)lVar6;
  plVar3 = param_1 + 5;
  *plVar3 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *param_1 = (long)&PTR_LAB_049397a8;
  param_1[7] = (long)"mItemSaveParam";
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  plVar5 = param_1 + 6;
  *plVar5 = (long)&DAT_04b7e798;
  plVar7 = param_1 + 0xb;
  *plVar7 = 0;
  lVar6 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar9 = lVar6;
      lVar6 = *(long *)(lVar9 + 0x10);
    } while (lVar6 != 0);
    plVar3 = (long *)(lVar9 + 0x10);
  }
  *plVar3 = (long)plVar5;
  param_1[9] = (long)param_1;
  param_1[6] = (long)&PTR_LAB_04939908;
  param_1[0xc] = (long)&PTR_LAB_04939a68;
  puVar1 = PTR_DAT_04bb37e0;
  param_1[0xf] = 0;
  lVar9 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0xd] = (long)"mItemNameParam";
  param_1[0xe] = 0;
  lVar6 = param_1[0xb];
  if (param_1[0xb] != 0) {
    do {
      lVar8 = lVar6;
      lVar6 = *(long *)(lVar8 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar8 + 0x10);
  }
  *plVar7 = (long)(param_1 + 0xc);
  param_1[0xf] = (long)plVar5;
  plVar3 = (long *)(**(code **)(param_1[0xc] + 0xf0))();
  *plVar3 = lVar9;
  if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
    param_1[0x12] = lVar9;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfeffffff;
  param_1[0x14] = (long)"mUnitX";
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puVar2 = PTR_DAT_04bb5a88;
  *(undefined4 *)(param_1 + 0x17) = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x18] = 0;
  plVar3 = param_1 + 0x13;
  *plVar3 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar3);
  puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0xf0))(plVar3);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x17) >> 7 & 1) == 0) {
    param_1[0x18] = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) & 0xfeffffff;
  param_1[0x1a] = (long)"mUnitZ";
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  plVar3 = param_1 + 0x19;
  *plVar3 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar3);
  puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0xf0))(plVar3);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x1d) >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfeffffff;
  plVar3 = param_1 + 0x1f;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x20] = (long)"mLayer";
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar3);
  puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0xf0))(plVar3);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x23) >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xfeffffff;
  return;
}

