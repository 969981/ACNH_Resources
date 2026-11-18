
byte FUN_03360dd0(long param_1)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  
  lVar2 = 0;
  bVar1 = 0;
  do {
    lVar4 = *(long *)(param_1 + 0x300 + lVar2);
    if (*(long *)(lVar4 + 0x428) == *(long *)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x18) + 0x18))
    {
      lVar4 = *(long *)(lVar4 + 0x420);
      bVar3 = 0;
      if (lVar4 != 0) {
        bVar3 = *(byte *)(lVar4 + 0x148) & 1;
      }
      bVar1 = bVar3 | bVar1;
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x98);
  return bVar1;
}

