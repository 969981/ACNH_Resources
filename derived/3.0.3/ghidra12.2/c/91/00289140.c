
long * FUN_00289140(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  while( true ) {
    plVar2 = param_1;
    uVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
    if ((uVar1 & 1) == 0) {
      return (long *)0x0;
    }
    if ((long *)plVar2[10] == plVar2 + 9) break;
    lVar3 = (long)*(int *)((long)plVar2 + 0x5c);
    param_1 = (long *)(plVar2[10] - lVar3);
    while (uVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2), (uVar1 & 1) == 0) {
      param_1 = (long *)(*(long *)((long)param_1 + lVar3 + 8) - lVar3);
      if (param_1 == (long *)((long)(plVar2 + 9) - (long)*(int *)((long)plVar2 + 0x5c))) {
        return plVar2;
      }
    }
  }
  return plVar2;
}

