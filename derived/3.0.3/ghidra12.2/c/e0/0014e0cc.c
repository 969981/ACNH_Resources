
long FUN_0014e0cc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = 0;
    do {
      lVar1 = FUN_0014e05c(lVar2,*param_1);
      if (lVar1 == 0) {
        FUN_0014e11c(lVar2);
        return 0;
      }
      param_1 = (undefined8 *)param_1[1];
      lVar2 = lVar1;
    } while (param_1 != (undefined8 *)0x0);
  }
  return lVar1;
}

