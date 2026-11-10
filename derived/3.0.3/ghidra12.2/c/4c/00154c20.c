
long FUN_00154c20(long param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen(param_2);
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    lVar2 = FUN_00154d1c(param_1,param_2,sVar1);
    if (lVar2 != 0) break;
    param_1 = *(long *)(param_1 + 8);
  }
  return lVar2;
}

