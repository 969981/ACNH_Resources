
undefined8 FUN_0017251c(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((int)param_1[3] == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    plVar2 = (long *)(*param_1 + uVar3 * 8);
    while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
      uVar1 = (*param_2)(plVar2,param_3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 3));
  return 0;
}

