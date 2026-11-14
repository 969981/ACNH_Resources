
void FUN_01715780(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  
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
  param_1[0x29f] = 0;
  plVar2 = param_1 + 0xb;
  *plVar2 = (long)(param_1 + 0x2c);
  *param_1 = (long)&PTR_LAB_049be6c8;
  param_1[0x2c] = (long)(param_1 + 0x4d);
  param_1[0x4d] = (long)(param_1 + 0x6e);
  param_1[10] = (long)plVar2;
  param_1[0x6e] = (long)(param_1 + 0x8f);
  param_1[0x8f] = (long)(param_1 + 0xb0);
  param_1[0xb0] = (long)(param_1 + 0xd1);
  param_1[0xd1] = (long)(param_1 + 0xf2);
  param_1[0xf2] = (long)(param_1 + 0x113);
  param_1[0x113] = (long)(param_1 + 0x134);
  param_1[0x134] = (long)(param_1 + 0x155);
  param_1[0x155] = (long)(param_1 + 0x176);
  param_1[0x176] = (long)(param_1 + 0x197);
  param_1[0x197] = (long)(param_1 + 0x1b8);
  param_1[0x1b8] = (long)(param_1 + 0x1d9);
  param_1[0x1d9] = (long)(param_1 + 0x1fa);
  param_1[0x1fa] = (long)(param_1 + 0x21b);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x21b] = (long)(param_1 + 0x23c);
  param_1[0x23c] = (long)(param_1 + 0x25d);
  param_1[8] = 0;
  param_1[9] = (long)plVar2;
  param_1[0x25d] = (long)(param_1 + 0x27e);
  param_1[0x27e] = (long)(param_1 + 0x29f);
  if (param_1 + 0x2c0 != (long *)0x0) {
    param_1[7] = 0x1500000000;
    param_1[8] = (long)(param_1 + 0x2c0);
  }
  *param_1 = (long)&PTR_LAB_049bd468;
  iVar3 = 0;
  do {
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      plVar2 = (long *)param_1[9];
      if (plVar2 != (long *)0x0) {
        param_1[9] = *plVar2;
      }
      FUN_01716fe8(plVar2,param_2,0);
      *plVar2 = (long)&PTR_FUN_049bd5e8;
      if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
        *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar2;
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
    iVar4 = 0x15;
    if (iVar3 < 0x15) {
      iVar4 = iVar3 + 1;
    }
    *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) & 0xfffffffc;
    iVar3 = iVar4;
  } while (iVar4 != 0x15);
  return;
}

