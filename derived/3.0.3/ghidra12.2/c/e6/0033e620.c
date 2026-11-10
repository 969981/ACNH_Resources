
void FUN_0033e620(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x1c0)) {
    lVar1 = 0;
    lVar2 = 0x10;
    do {
      FUN_00346db0(*(long *)(param_1 + 0x1c8) + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x7d8;
    } while (lVar1 < *(int *)(param_1 + 0x1c0));
  }
  return;
}

