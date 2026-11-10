
long FUN_001f3fe0(char *param_1,char *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = -1;
  if ((((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (*param_1 != '\0')) &&
     (*param_2 != '\0')) {
    lVar2 = FUN_00192290(param_1 + param_3,param_2,0xffffffffffffffff);
    lVar1 = lVar2 - (long)param_1;
    if (lVar2 == 0) {
      lVar1 = -1;
    }
  }
  return lVar1;
}

