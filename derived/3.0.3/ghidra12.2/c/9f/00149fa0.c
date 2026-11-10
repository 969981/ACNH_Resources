
void thunk_FUN_00149f68(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x12f8);
  if (plVar1 != (long *)0x0) {
    do {
      if (*(int *)(*plVar1 + 0x28) == param_2) {
        FUN_00143b00(param_1 + 0x12f8,plVar1,0);
        return;
      }
      plVar1 = (long *)plVar1[2];
    } while (plVar1 != (long *)0x0);
  }
  return;
}

