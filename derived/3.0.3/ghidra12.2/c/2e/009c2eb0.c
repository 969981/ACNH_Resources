
void FUN_009c2eb0(long *param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar3 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04bb60a0;
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)(puVar4 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar5;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  plVar8 = param_1 + 7;
  *plVar8 = 0;
  param_1[6] = 0;
  param_1[0x17] = 0;
  plVar7 = param_1 + 0x11;
  *plVar7 = (long)(param_1 + 0x17);
  plVar6 = param_1 + 0xb;
  *plVar6 = (long)plVar7;
  param_1[8] = 0;
  param_1[9] = (long)plVar6;
  puVar4 = PTR_DAT_04bb3380;
  param_1[10] = (long)plVar6;
  if (param_1 + 0x1d == (long *)0x0) {
    plVar6 = (long *)0x0;
    *param_1 = (long)&PTR_LAB_0492cf88;
  }
  else {
    param_1[9] = (long)plVar7;
    param_1[8] = (long)(param_1 + 0x1d);
    param_1[0xb] = (long)(puVar3 + 0x10);
    *(undefined4 *)((long)param_1 + 0x3c) = 3;
    *param_1 = (long)&PTR_LAB_0492cf88;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = param_2[1];
    param_1[0xe] = 0;
    param_1[0xc] = lVar5;
    param_1[0xd] = 0;
    uVar1 = *(uint *)(param_2 + 6);
    param_1[0xb] = (long)(puVar4 + 0x10);
    param_1[0x10] = 0;
    *(uint *)(param_1 + 0xf) = uVar1;
    uVar2 = *param_3;
    *(uint *)(param_1 + 0xf) = uVar1 | 0x1000000;
    *(undefined4 *)((long)param_1 + 0x7c) = uVar2;
    if ((uVar1 >> 7 & 1) == 0) {
      param_1[0x10] = 0;
      *(undefined4 *)(param_1 + 0x10) = *param_3;
    }
    param_1[0xb] = (long)&PTR_LAB_0492d288;
    *(uint *)(param_1 + 0xf) = uVar1 & 0xfeffffff;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar6;
      *(int *)plVar8 = (int)*plVar8 + 1;
    }
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,param_1);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar7 = (long *)param_1[9];
    if (plVar7 != (long *)0x0) {
      param_1[9] = *plVar7;
    }
    *plVar7 = (long)(puVar3 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = param_2[1];
    plVar7[3] = 0;
    plVar7[1] = lVar5;
    plVar7[2] = 0;
    uVar1 = *(uint *)(param_2 + 6);
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[5] = 0;
    *(uint *)(plVar7 + 4) = uVar1;
    uVar2 = *param_3;
    *(uint *)(plVar7 + 4) = uVar1 | 0x1000000;
    *(undefined4 *)((long)plVar7 + 0x24) = uVar2;
    if ((uVar1 >> 7 & 1) == 0) {
      plVar7[5] = 0;
      *(undefined4 *)(plVar7 + 5) = *param_3;
    }
    *plVar7 = (long)&PTR_LAB_0492d288;
    *(uint *)(plVar7 + 4) = uVar1 & 0xfeffffff;
    if ((int)*plVar8 < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)*plVar8 * 8) = plVar7;
      *(int *)plVar8 = (int)*plVar8 + 1;
    }
  }
  else {
    plVar7 = (long *)0x0;
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1);
  *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar7 = (long *)param_1[9];
    if (plVar7 != (long *)0x0) {
      param_1[9] = *plVar7;
    }
    *plVar7 = (long)(puVar3 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = param_2[1];
    plVar7[3] = 0;
    plVar7[1] = lVar5;
    plVar7[2] = 0;
    uVar1 = *(uint *)(param_2 + 6);
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[5] = 0;
    *(uint *)(plVar7 + 4) = uVar1;
    uVar2 = *param_3;
    *(uint *)(plVar7 + 4) = uVar1 | 0x1000000;
    *(undefined4 *)((long)plVar7 + 0x24) = uVar2;
    if ((uVar1 >> 7 & 1) == 0) {
      plVar7[5] = 0;
      *(undefined4 *)(plVar7 + 5) = *param_3;
    }
    *plVar7 = (long)&PTR_LAB_0492d288;
    *(uint *)(plVar7 + 4) = uVar1 & 0xfeffffff;
    if ((int)*plVar8 < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)*plVar8 * 8) = plVar7;
      *(int *)plVar8 = (int)*plVar8 + 1;
    }
  }
  else {
    plVar7 = (long *)0x0;
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1);
  *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffffc;
  return;
}

