
undefined8 FUN_003e6184(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_1 + 0x2a8;
  FUN_003b99a4(lVar1);
  FUN_003b830c(param_1,lVar1);
  iVar2 = FUN_003b8ee0(lVar1);
  FUN_003b9a14(lVar1,param_2 + iVar2);
  iVar2 = FUN_003b8eac(lVar1);
  iVar3 = FUN_003b8e40(lVar1);
  if (iVar3 != -1) {
    FUN_003b9a08(lVar1,param_2 + iVar2);
  }
  *(long *)(param_1 + 0x2a0) = param_2;
  return 1;
}

