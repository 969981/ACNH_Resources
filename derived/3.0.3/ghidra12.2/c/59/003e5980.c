
void FUN_003e5980(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    plVar3 = *(long **)(param_1 + 0x18);
  }
  else {
    plVar3 = (long *)(param_1 + 0x10);
    if (plVar3 == *(long **)(param_1 + 0x18)) {
      return;
    }
    do {
      plVar3 = (long *)*plVar3;
      if ((code *)plVar3[4] != (code *)0x0) {
        (*(code *)plVar3[4])(plVar3[2],plVar3[3],plVar3[5]);
      }
      if ((code *)plVar3[6] != (code *)0x0) {
        (*(code *)plVar3[6])(plVar3[7]);
      }
    } while (plVar3 != *(long **)(param_1 + 0x18));
  }
  while (plVar3 != (long *)(param_1 + 0x10)) {
    plVar1 = (long *)plVar3[1];
    lVar2 = *plVar1;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    plVar3 = *(long **)(param_1 + 0x18);
  }
  return;
}

