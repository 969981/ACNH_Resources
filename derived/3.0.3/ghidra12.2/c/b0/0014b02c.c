
undefined8 FUN_0014b02c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar1 = (long *)(lVar3 + lVar2 * 0x20);
  plVar4 = (long *)*plVar1;
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 1;
    }
    lVar3 = (*(code *)param_1[2])(*plVar4 + 0x28,*(undefined8 *)(*plVar4 + 0x20),param_2,param_3);
    if (lVar3 != 0) break;
    plVar4 = (long *)plVar4[2];
  }
  FUN_00143b00(plVar1,plVar4,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}

