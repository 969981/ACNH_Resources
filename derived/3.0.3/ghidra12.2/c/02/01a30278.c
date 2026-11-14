
void FUN_01a30278(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
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
  plVar3 = param_1 + 7;
  *plVar3 = 0;
  param_1[0x1f] = (long)(param_1 + 0x33);
  param_1[0x33] = (long)(param_1 + 0x47);
  plVar1 = param_1 + 0xb;
  *plVar1 = (long)(param_1 + 0x1f);
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = (long)plVar1;
  param_1[0x47] = 0;
  param_1[10] = (long)plVar1;
  if (param_1 + 0x5b != (long *)0x0) {
    param_1[8] = (long)(param_1 + 0x5b);
    *(undefined4 *)((long)param_1 + 0x3c) = 4;
  }
  *param_1 = (long)&PTR_LAB_049fba80;
  plVar1 = (long *)FUN_01a32018(plVar3,param_2);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  *(uint *)(plVar1 + 4) = *(uint *)(plVar1 + 4) & 0xfffffffc;
  plVar1 = (long *)FUN_01a32018(plVar3,param_2);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  *(uint *)(plVar1 + 4) = *(uint *)(plVar1 + 4) & 0xfffffffc;
  plVar1 = (long *)FUN_01a32018(plVar3,param_2);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  *(uint *)(plVar1 + 4) = *(uint *)(plVar1 + 4) & 0xfffffffc;
  plVar1 = (long *)FUN_01a32018(plVar3,param_2);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  *(uint *)(plVar1 + 4) = *(uint *)(plVar1 + 4) & 0xfffffffc;
  return;
}

