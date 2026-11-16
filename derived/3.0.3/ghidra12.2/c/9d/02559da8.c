
uint FUN_02559da8(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  
  pbVar1 = PTR_DAT_04bb32e0;
  if (DAT_054f5738 != 0) {
    pbVar1 = (byte *)(DAT_054f5738 + 0x11a4);
  }
  if ((ulong)*pbVar1 < 8) {
    lVar4 = **(long **)PTR_DAT_04bb27d0;
    if (*(byte *)(lVar4 + 0x476) < 2) {
      uVar3 = FUN_02582d8c(pbVar1,2);
      return ~uVar3 >> 0x1f;
    }
    bVar2 = *(byte *)(lVar4 + (ulong)*pbVar1 * 4 + 0x44e);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar4 + 0x48);
      }
      return *pbVar1 >> 3 & 1;
    }
  }
  return 0;
}

