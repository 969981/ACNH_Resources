
long * FUN_003ce690(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)(param_1 + 0x20)) {
    return (long *)0x0;
  }
  plVar1 = (long *)plVar2[1];
  lVar3 = *plVar1;
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar1 = *plVar2;
  *(long **)(lVar3 + 8) = plVar2;
  *plVar2 = lVar3;
  return plVar2 + -6;
}

