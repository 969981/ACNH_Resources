
void FUN_01910740(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *(int *)(param_1 + 0xf) = param_2;
  if (param_1[0xc] == 0) {
    FUN_018eb2d0(param_1,0);
    return;
  }
  if (param_2 <= *(int *)((long)param_1 + 0x5c)) {
    plVar2 = (long *)param_1[9];
    if (plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x40))();
        plVar2 = (long *)param_1[9];
      } while (plVar2 != (long *)0x0);
      param_2 = (int)param_1[0xf];
    }
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1,0);
    FUN_018eb550(param_1 + 0xb,param_2,param_1 + 4,uVar3);
    uVar1 = *(uint *)(param_1 + 0xb);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        plVar2 = *(long **)(param_1[0xc] + uVar4 * 8);
        (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 4);
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  return;
}

