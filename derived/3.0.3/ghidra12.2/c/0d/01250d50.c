
byte FUN_01250d50(long param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_0277d6c4(param_1 + 8);
  if ((iVar2 == 0xec9a) || (iVar2 = FUN_0277d6c4(param_1 + 8), iVar2 == 0xec97)) {
    bVar1 = *(byte *)(param_1 + 0xe) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

