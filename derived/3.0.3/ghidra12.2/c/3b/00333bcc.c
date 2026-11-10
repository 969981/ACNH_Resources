
long FUN_00333bcc(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  
  do {
    lVar2 = *(long *)(param_1 + 0x88);
    plVar3 = *(long **)(param_1 + 0xb0);
    if (lVar2 != 0 && plVar3 != (long *)0x0) {
      do {
        if (*plVar3 == param_2) {
          return lVar2;
        }
        puVar1 = (uint *)(plVar3 + 1);
        lVar2 = lVar2 + 0x90;
        plVar3 = (long *)((long)plVar3 + (ulong)*puVar1);
      } while (*puVar1 != 0);
    }
    param_1 = *(long *)(param_1 + 0x490);
  } while (param_1 != 0);
  return 0;
}

