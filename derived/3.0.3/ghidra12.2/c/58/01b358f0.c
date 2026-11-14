
void FUN_01b358f0(long param_1)

{
  long *plVar1;
  
  while (0 < *(int *)(param_1 + 0x10)) {
    plVar1 = *(long **)(param_1 + 8);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if ((plVar1 == (long *)0x0) ||
       (plVar1 = (long *)((long)plVar1 - (long)*(int *)(param_1 + 0x14)), plVar1 == (long *)0x0))
    break;
    (**(code **)(*plVar1 + 0x18))();
  }
  while( true ) {
    if (*(int *)(param_1 + 0x28) < 1) {
      return;
    }
    plVar1 = *(long **)(param_1 + 0x20);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    if (plVar1 == (long *)0x0) break;
    plVar1 = (long *)((long)plVar1 - (long)*(int *)(param_1 + 0x2c));
    if (plVar1 == (long *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}

