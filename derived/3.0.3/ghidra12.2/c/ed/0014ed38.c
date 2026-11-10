
void FUN_0014ed38(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_00143b00((long *)(param_1 + 0x10),plVar1,0);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  *(undefined8 *)(param_2 + 0x680) = 0;
  return;
}

