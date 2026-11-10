
long FUN_00227da0(undefined8 param_1,short *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 == (short *)0x0) || (param_3 == 0)) {
    return 0;
  }
  if (param_3 == 2) {
    if (*param_2 != 0) {
      lVar2 = 0;
      do {
        lVar1 = lVar2 + 2;
        lVar2 = lVar2 + 2;
      } while (*(short *)((long)param_2 + lVar1) != 0);
      return lVar2;
    }
  }
  else if ((char)*param_2 != '\0') {
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (*(char *)((long)param_2 + lVar1) != '\0');
    return lVar2;
  }
  return 0;
}

