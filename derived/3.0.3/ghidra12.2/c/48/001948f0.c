
long FUN_001948f0(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 0x50);
  plVar4 = (long *)*plVar2;
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar2;
    do {
      plVar1 = plVar4;
      if (*(uint *)(plVar4 + 4) < param_2) {
        plVar1 = plVar3;
        plVar4 = plVar4 + 1;
      }
      plVar4 = (long *)*plVar4;
      plVar3 = plVar1;
    } while (plVar4 != (long *)0x0);
    if ((plVar1 != plVar2) && (*(uint *)(plVar1 + 4) <= param_2)) {
      return plVar1[5];
    }
  }
  return 0;
}

