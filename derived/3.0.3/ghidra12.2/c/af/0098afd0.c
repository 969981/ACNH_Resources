
bool FUN_0098afd0(void)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  
  if (DAT_0537d558 == (long *)0x0) {
    return false;
  }
  bVar4 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
    uVar5 = (long)(char)bVar4 & 0xffffffff;
    pbVar2 = pbVar1 + uVar5 * 0x80;
    if (7 < bVar4) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      lVar3 = DAT_0537d558[2] + 0x108 + uVar5 * 0xc;
      if (0xb < bVar4) {
        lVar3 = DAT_0537d558[2] + 0x108;
      }
      return *(char *)(lVar3 + 10) != '\0';
    }
  }
  return true;
}

