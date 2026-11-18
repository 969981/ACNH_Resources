
undefined8 FUN_0343bbb0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0277d6c4();
  iVar2 = FUN_0277d6c4(param_2);
  if (iVar1 != iVar2) {
    if (iVar2 < iVar1) {
      return 1;
    }
    if (iVar1 < iVar2) {
      return 0xffffffff;
    }
  }
  return 0;
}

