
void FUN_0158de64(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar1 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar1;
  lVar1 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar1;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  plVar3 = param_1 + 7;
  *plVar3 = 0;
  param_1[6] = 0;
  param_1[0xf8] = 0;
  plVar2 = param_1 + 0xb;
  *plVar2 = (long)(param_1 + 0xf8);
  param_1[8] = 0;
  param_1[9] = (long)plVar2;
  param_1[10] = (long)plVar2;
  if (param_1 + 0x1e5 == (long *)0x0) {
    plVar2 = (long *)0x0;
    *param_1 = (long)&PTR_LAB_049ace60;
  }
  else {
    param_1[9] = (long)(param_1 + 0xf8);
    *param_1 = (long)&PTR_LAB_049ace60;
    param_1[8] = (long)(param_1 + 0x1e5);
    *(int *)((long)param_1 + 0x3c) = 2;
    FUN_01571d40(plVar2,param_2,0);
    param_1[0xb] = (long)&PTR_FUN_049ad160;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar2;
      *(int *)plVar3 = (int)*plVar3 + 1;
    }
  }
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar2 = (long *)param_1[9];
    if (plVar2 != (long *)0x0) {
      param_1[9] = *plVar2;
    }
    FUN_01571d40(plVar2,param_2,0);
    *plVar2 = (long)&PTR_FUN_049ad160;
    if ((int)*plVar3 < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)*plVar3 * 8) = plVar2;
      *(int *)plVar3 = (int)*plVar3 + 1;
    }
  }
  else {
    plVar2 = (long *)0x0;
  }
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) & 0xfffffffc;
  return;
}

