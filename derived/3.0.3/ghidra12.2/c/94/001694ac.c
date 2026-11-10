
long FUN_001694ac(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_3 * 0xc + 0xc;
  if (param_3 != 0) {
    plVar4 = (long *)(param_2 + 0x18);
    do {
      plVar1 = plVar4 + -1;
      lVar2 = *plVar4;
      param_3 = param_3 + -1;
      plVar4 = plVar4 + 5;
      lVar3 = *plVar1 + lVar3 + lVar2;
    } while (param_3 != 0);
  }
  return lVar3;
}

