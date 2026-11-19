
void FUN_03b474bc(float param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x40);
  if (plVar1 != (long *)0x0) {
    switch(param_3) {
    case 0:
      if (*plVar1 != 0) {
        FUN_003cfb9c(param_1 + -1.0);
        return;
      }
      break;
    case 1:
      if (*plVar1 != 0) {
        FUN_003cfba4(*plVar1,0);
        return;
      }
      break;
    case 2:
      if (*plVar1 != 0) {
        FUN_003cfba4(*plVar1,1);
        return;
      }
      break;
    case 3:
      if (*plVar1 != 0) {
        FUN_003cfba4(*plVar1,2);
        return;
      }
    }
  }
  return;
}

