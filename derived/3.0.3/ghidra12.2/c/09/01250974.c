
bool FUN_01250974(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0277d6c4(param_1 + 8);
  if (iVar2 == 0xec9a) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_0277d6c4(param_1 + 8);
    bVar1 = iVar2 == 0xec97;
  }
  return bVar1;
}

