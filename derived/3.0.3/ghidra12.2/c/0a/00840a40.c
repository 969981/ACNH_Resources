
void FUN_00840a40(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
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
  param_1[0x19] = (long)(param_1 + 0x20);
  param_1[0x12] = (long)(param_1 + 0x19);
  plVar3 = param_1 + 0xb;
  *plVar3 = (long)(param_1 + 0x12);
  param_1[0x20] = (long)(param_1 + 0x27);
  param_1[0x27] = (long)(param_1 + 0x2e);
  param_1[0x58] = 0;
  param_1[0x2e] = (long)(param_1 + 0x35);
  param_1[10] = (long)plVar3;
  param_1[0x35] = (long)(param_1 + 0x3c);
  param_1[0x3c] = (long)(param_1 + 0x43);
  param_1[0x43] = (long)(param_1 + 0x4a);
  param_1[0x4a] = (long)(param_1 + 0x51);
  param_1[0x51] = (long)(param_1 + 0x58);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = (long)plVar3;
  if (param_1 + 0x5f != (long *)0x0) {
    param_1[8] = (long)(param_1 + 0x5f);
    *(undefined4 *)((long)param_1 + 0x3c) = 0xc;
  }
  *param_1 = (long)&PTR_LAB_04919f60;
  puVar1 = PTR_DAT_04bb2150;
  iVar4 = 0xc;
  do {
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      plVar3 = (long *)param_1[9];
      if (plVar3 != (long *)0x0) {
        param_1[9] = *plVar3;
      }
      FUN_006fdfc0(plVar3,param_2,puVar1,0);
      *plVar3 = (long)&PTR_FUN_0491a0e0;
      if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
        *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar3;
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      }
    }
    else {
      plVar3 = (long *)0x0;
    }
    (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
    iVar4 = iVar4 + -1;
    *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) & 0xfffffffc;
  } while (iVar4 != 0);
  return;
}

