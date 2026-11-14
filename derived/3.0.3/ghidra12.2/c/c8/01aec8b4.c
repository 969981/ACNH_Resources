
bool FUN_01aec8b4(long param_1)

{
  bool bVar1;
  int iVar2;
  
  param_1 = param_1 + 8;
  iVar2 = FUN_0277d6c4(param_1);
  if ((((iVar2 == 0x37b6) || (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x383b)) ||
      (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x383c)) ||
     (((iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x383d ||
       (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x383e)) ||
      (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x383f)))) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_0277d6c4(param_1);
    bVar1 = iVar2 == 0x3840;
  }
  return bVar1;
}

