
long FUN_0068a620(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      return 0;
    }
    lVar1 = FUN_0068a680(param_1);
    if ((lVar1 == 0) && (lVar2 = FUN_0068a720(param_1), lVar1 = 0, lVar2 != 0)) {
      lVar1 = *(long *)(lVar2 + 0x18);
    }
  }
  return lVar1;
}

