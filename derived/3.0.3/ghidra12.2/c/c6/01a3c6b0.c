
void FUN_01a3c6b0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  
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
  plVar2 = param_1 + 0xb;
  *plVar2 = (long)(param_1 + 0x25);
  param_1[0x25] = (long)(param_1 + 0x3f);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = (long)plVar2;
  param_1[0x247] = 0;
  param_1[10] = (long)plVar2;
  *param_1 = (long)&PTR_LAB_049fcdc0;
  param_1[0x3f] = (long)(param_1 + 0x59);
  param_1[0x59] = (long)(param_1 + 0x73);
  param_1[0x73] = (long)(param_1 + 0x8d);
  param_1[0x8d] = (long)(param_1 + 0xa7);
  param_1[0xa7] = (long)(param_1 + 0xc1);
  param_1[0xc1] = (long)(param_1 + 0xdb);
  param_1[0xdb] = (long)(param_1 + 0xf5);
  param_1[0xf5] = (long)(param_1 + 0x10f);
  param_1[0x10f] = (long)(param_1 + 0x129);
  param_1[0x129] = (long)(param_1 + 0x143);
  param_1[0x143] = (long)(param_1 + 0x15d);
  param_1[0x15d] = (long)(param_1 + 0x177);
  param_1[0x177] = (long)(param_1 + 0x191);
  param_1[0x191] = (long)(param_1 + 0x1ab);
  param_1[0x1ab] = (long)(param_1 + 0x1c5);
  param_1[0x1c5] = (long)(param_1 + 0x1df);
  param_1[0x1df] = (long)(param_1 + 0x1f9);
  param_1[0x1f9] = (long)(param_1 + 0x213);
  param_1[0x213] = (long)(param_1 + 0x22d);
  param_1[0x22d] = (long)(param_1 + 0x247);
  if (param_1 + 0x261 != (long *)0x0) {
    param_1[7] = 0x1700000000;
    param_1[8] = (long)(param_1 + 0x261);
  }
  *param_1 = (long)&PTR_LAB_049fed20;
  iVar3 = 0x17;
  do {
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      plVar2 = (long *)param_1[9];
      if (plVar2 != (long *)0x0) {
        param_1[9] = *plVar2;
      }
      FUN_01a3ae4c(plVar2,param_2);
      *plVar2 = (long)&PTR_LAB_049feea0;
      if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
        *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar2;
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
    iVar3 = iVar3 + -1;
    *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) & 0xfffffffc;
  } while (iVar3 != 0);
  return;
}

