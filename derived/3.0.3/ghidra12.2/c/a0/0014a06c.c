
void FUN_0014a06c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  if (*(int *)(lVar2 + 0x60) != 2) {
    *(undefined4 *)(lVar2 + 0x60) = 2;
    FUN_0016116c(lVar2);
  }
  FUN_00143b00((long *)(param_1 + 0x40),plVar1,0);
  FUN_00147570(lVar2,0,6);
  return;
}

