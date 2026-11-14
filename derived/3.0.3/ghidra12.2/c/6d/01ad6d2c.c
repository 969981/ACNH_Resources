
bool FUN_01ad6d2c(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0277d6c4(param_1 + 8);
  if (iVar2 == 0x38e) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_0277d6c4(param_1 + 8);
    bVar1 = iVar2 == 0x10d7;
  }
  return bVar1;
}

