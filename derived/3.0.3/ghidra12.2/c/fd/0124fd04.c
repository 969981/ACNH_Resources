
byte FUN_0124fd04(long param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if ((iVar2 == 0x21) ||
     (iVar2 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10)), iVar2 == 0x22)) {
    bVar1 = *(byte *)(param_1 + 10) >> 2 & 7;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

