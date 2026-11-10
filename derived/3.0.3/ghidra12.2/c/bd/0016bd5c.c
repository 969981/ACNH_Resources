
long FUN_0016bd5c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_001726f0();
  lVar2 = lVar1;
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0xe4) >> 1 & 1) == 0) {
      lVar2 = 0;
      if (*(int *)(lVar1 + 0xdc) != 5) {
        lVar2 = lVar1;
      }
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}

