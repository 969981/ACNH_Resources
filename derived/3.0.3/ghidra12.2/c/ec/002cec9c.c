
void FUN_002cec9c(long param_1)

{
  long *plVar1;
  
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    if (**(int **)(param_1 + 0x98) == 1) {
      FUN_00221064();
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x68) == 1) {
    FUN_00221064();
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x58) + 0x90), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

