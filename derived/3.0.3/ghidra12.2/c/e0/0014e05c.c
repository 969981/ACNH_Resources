
long * FUN_0014e05c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = FUN_00143320(param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_001432f0(0x10);
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar1;
      plVar2[1] = 0;
      if (param_1 == (long *)0x0) {
        return plVar2;
      }
      plVar4 = param_1;
      do {
        plVar3 = plVar4;
        plVar4 = (long *)plVar3[1];
      } while (plVar4 != (long *)0x0);
      plVar3[1] = (long)plVar2;
      return param_1;
    }
    FUN_00143300(lVar1);
  }
  return (long *)0x0;
}

