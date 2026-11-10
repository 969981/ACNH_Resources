
long * FUN_001dfa50(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar4 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar4;
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar4;
    do {
      lVar2 = FUN_001e14d8(plVar6 + 4);
      lVar3 = FUN_001e14d8(param_2);
      if (lVar2 < lVar3) {
        plVar6 = plVar6 + 1;
      }
      else {
        lVar2 = FUN_001e14d8(plVar6 + 4);
        lVar3 = FUN_001e14d8(param_2);
        if (lVar2 == lVar3) {
          plVar1 = plVar6;
          if (*(uint *)(plVar6 + 0x15) < *(uint *)(param_2 + 0x88)) {
            plVar6 = plVar6 + 1;
            plVar1 = plVar5;
          }
          plVar5 = plVar1;
        }
        else {
          plVar5 = plVar6;
        }
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    if (plVar5 != plVar4) {
      lVar2 = FUN_001e14d8(param_2);
      lVar3 = FUN_001e14d8(plVar5 + 4);
      if (lVar3 <= lVar2) {
        lVar2 = FUN_001e14d8(param_2);
        lVar3 = FUN_001e14d8(plVar5 + 4);
        if (lVar2 != lVar3) {
          return plVar5;
        }
        if (*(uint *)(plVar5 + 0x15) <= *(uint *)(param_2 + 0x88)) {
          return plVar5;
        }
      }
    }
  }
  return plVar4;
}

