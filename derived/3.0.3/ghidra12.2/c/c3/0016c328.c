
undefined8 FUN_0016c328(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  lVar1 = param_2 + 0x890;
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x90) == '\0')) && (lVar2 != *(long *)(param_2 + 0x150)))
  {
    FUN_0016bc00(lVar2,lVar1);
    FUN_001689f8(lVar1,lVar2);
  }
  FUN_0017289c(param_1);
  FUN_001689f8(lVar1,param_1);
  return 0;
}

