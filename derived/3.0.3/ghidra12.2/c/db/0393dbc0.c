
void FUN_0393dbc0(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  uVar3 = (**(code **)*param_1)(0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 3) & param_2;
  lVar6 = param_1[5];
  if (*(uint *)(param_1 + 4) <= uVar1) {
    uVar1 = 0;
  }
  plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 0x30);
  uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
  if ((uVar3 & 1) != 0) {
    plVar5 = *(long **)(param_3 + 8);
    if (plVar5 != (long *)0x0) {
      plVar7 = *(long **)(lVar6 + (long)(int)uVar1 * 0x30 + 8);
      do {
        plVar2 = plVar7;
        if ((int)plVar5[1] == (int)plVar7[1]) goto joined_r0x0393dc80;
        plVar5 = (long *)plVar5[2];
      } while (plVar5 != (long *)0x0);
    }
LAB_0393dca8:
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0393dce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(0,param_1,param_2,param_3,0);
  return;
joined_r0x0393dc80:
  if (plVar2 == (long *)0x0) goto LAB_0393dca8;
  (**(code **)(*plVar7 + 0x10))(plVar7,plVar5);
  plVar7 = (long *)plVar7[2];
  if (plVar7 == (long *)0x0) goto LAB_0393dca8;
  plVar5 = (long *)plVar5[2];
  plVar2 = plVar5;
  goto joined_r0x0393dc80;
}

