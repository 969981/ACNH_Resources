
void FUN_01a3c1f4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar2;
  lVar2 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar2;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  plVar4 = param_1 + 7;
  *plVar4 = 0;
  param_1[6] = 0;
  param_1[0x59] = 0;
  plVar1 = param_1 + 0x25;
  *plVar1 = (long)(param_1 + 0x3f);
  param_1[0x3f] = (long)(param_1 + 0x59);
  plVar3 = param_1 + 0xb;
  *plVar3 = (long)plVar1;
  param_1[8] = 0;
  param_1[9] = (long)plVar3;
  param_1[10] = (long)plVar3;
  if (param_1 + 0x73 == (long *)0x0) {
    plVar3 = (long *)0x0;
    *param_1 = (long)&PTR_LAB_049fe438;
  }
  else {
    param_1[9] = (long)plVar1;
    *param_1 = (long)&PTR_LAB_049fe438;
    param_1[8] = (long)(param_1 + 0x73);
    *(int *)((long)param_1 + 0x3c) = 4;
    FUN_01a3ae4c(plVar3,param_2);
    param_1[0xb] = (long)&PTR_LAB_049fe5b8;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar3;
      *(int *)plVar4 = (int)*plVar4 + 1;
    }
  }
  piVar5 = (int *)((long)param_1 + 0x3c);
  plVar1 = param_1 + 8;
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar3 = (long *)param_1[9];
    if (plVar3 != (long *)0x0) {
      param_1[9] = *plVar3;
    }
    FUN_01a3ae4c(plVar3,param_2);
    *plVar3 = (long)&PTR_LAB_049fe5b8;
    if ((int)*plVar4 < *piVar5) {
      *(long **)(*plVar1 + (long)(int)*plVar4 * 8) = plVar3;
      *(int *)plVar4 = (int)*plVar4 + 1;
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar3 = (long *)param_1[9];
    if (plVar3 != (long *)0x0) {
      param_1[9] = *plVar3;
    }
    FUN_01a3ae4c(plVar3,param_2);
    *plVar3 = (long)&PTR_LAB_049fe5b8;
    if ((int)*plVar4 < *piVar5) {
      *(long **)(*plVar1 + (long)(int)*plVar4 * 8) = plVar3;
      *(int *)plVar4 = (int)*plVar4 + 1;
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar3 = (long *)param_1[9];
    if (plVar3 != (long *)0x0) {
      param_1[9] = *plVar3;
    }
    FUN_01a3ae4c(plVar3,param_2);
    *plVar3 = (long)&PTR_LAB_049fe5b8;
    if ((int)*plVar4 < *piVar5) {
      *(long **)(*plVar1 + (long)(int)*plVar4 * 8) = plVar3;
      *(int *)plVar4 = (int)*plVar4 + 1;
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) & 0xfffffffc;
  return;
}

