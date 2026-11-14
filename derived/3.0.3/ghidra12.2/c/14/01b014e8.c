
bool FUN_01b014e8(long param_1)

{
  bool bVar1;
  int iVar2;
  
  param_1 = param_1 + 8;
  iVar2 = FUN_0277d6c4(param_1);
  if ((iVar2 == 0x1618) || (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x315a)) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_0277d6c4(param_1);
    bVar1 = iVar2 == 0x3805;
  }
  return bVar1;
}

