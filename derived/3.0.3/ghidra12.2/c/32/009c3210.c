
void FUN_009c3210(long *param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  puVar4 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar5;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  lVar5 = 0x9f;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = (long)(param_1 + 0xb);
  plVar6 = param_1 + 0x11;
  do {
    plVar6[-6] = (long)plVar6;
    plVar6[6] = (long)(plVar6 + 0xc);
    *plVar6 = (long)(plVar6 + 6);
    lVar5 = lVar5 + -3;
    plVar6 = plVar6 + 0x12;
  } while (lVar5 != 0);
  param_1[10] = (long)(param_1 + 0xb);
  param_1[0x3c5] = 0;
  if (param_1 + 0x3cb != (long *)0x0) {
    param_1[7] = 0xa000000000;
    param_1[8] = (long)(param_1 + 0x3cb);
  }
  *param_1 = (long)&PTR_LAB_0492e0e8;
  iVar7 = 0xa0;
  puVar1 = PTR_DAT_04bb3380 + 0x10;
  do {
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      plVar6 = (long *)param_1[9];
      if (plVar6 != (long *)0x0) {
        param_1[9] = *plVar6;
      }
      *plVar6 = (long)(puVar4 + 0x10);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = param_2[1];
      plVar6[3] = 0;
      plVar6[1] = lVar5;
      plVar6[2] = 0;
      uVar2 = *(uint *)(param_2 + 6);
      *plVar6 = (long)puVar1;
      plVar6[5] = 0;
      *(uint *)(plVar6 + 4) = uVar2;
      uVar3 = *param_3;
      *(uint *)(plVar6 + 4) = uVar2 | 0x1000000;
      *(undefined4 *)((long)plVar6 + 0x24) = uVar3;
      if ((uVar2 >> 7 & 1) == 0) {
        plVar6[5] = 0;
        *(undefined4 *)(plVar6 + 5) = *param_3;
      }
      *plVar6 = (long)&PTR_LAB_0492e3e8;
      *(uint *)(plVar6 + 4) = uVar2 & 0xfeffffff;
      if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
        *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar6;
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      }
    }
    else {
      plVar6 = (long *)0x0;
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,param_1);
    iVar7 = iVar7 + -1;
    *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  } while (iVar7 != 0);
  return;
}

