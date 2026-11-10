
void FUN_001edd88(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    FUN_00187e4c();
  }
  FUN_00185ac4(plVar1);
  return;
}

