
long FUN_03776900(int param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 == 5) || (param_1 == 6)) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_03776400();
    if (lVar2 != 0) {
      lVar1 = lVar2 + 0x70;
      lVar2 = lVar1 + (ulong)param_2 * 0x658;
      if (2 < param_2) {
        lVar2 = lVar1;
      }
    }
  }
  return lVar2;
}

