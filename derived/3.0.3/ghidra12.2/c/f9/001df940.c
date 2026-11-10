
long * FUN_001df940(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 == (long *)0x0) {
    plVar5 = plVar4;
  }
  else {
    do {
      while( true ) {
        plVar5 = plVar1;
        plVar1 = plVar5 + 4;
        lVar2 = FUN_001e14d8(param_3);
        lVar3 = FUN_001e14d8(plVar1);
        if (lVar2 < lVar3) break;
        lVar2 = FUN_001e14d8(param_3);
        lVar3 = FUN_001e14d8(plVar1);
        if ((lVar2 == lVar3) && (*(uint *)(param_3 + 0x88) < *(uint *)(plVar5 + 0x15))) break;
        lVar2 = FUN_001e14d8(plVar1);
        lVar3 = FUN_001e14d8(param_3);
        if (lVar3 <= lVar2) {
          lVar2 = FUN_001e14d8(plVar1);
          lVar3 = FUN_001e14d8(param_3);
          if ((lVar2 != lVar3) || (*(uint *)(param_3 + 0x88) <= *(uint *)(plVar5 + 0x15)))
          goto LAB_001dfa28;
        }
        plVar4 = plVar5 + 1;
        plVar1 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_001dfa28;
      }
      plVar1 = (long *)*plVar5;
      plVar4 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
LAB_001dfa28:
  *param_2 = plVar5;
  return plVar4;
}

