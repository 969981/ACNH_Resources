
byte FUN_0124f8bc(long param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if (iVar2 - 0x23U < 9) {
    bVar1 = *(byte *)(param_1 + 0xe) >> 7;
  }
  else {
    iVar2 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
    if (iVar2 - 0x12U < 6) {
      bVar1 = *(byte *)(param_1 + 0xd) & 1;
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1;
}

