
bool FUN_01dbd970(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  
  bVar4 = *(byte *)(*param_1 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(*param_1 + 0x48);
    pbVar2 = pbVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
    if (7 < bVar4) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      bVar4 = *(byte *)(*DAT_0537d558 + 0x473);
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        lVar3 = param_1[2] + 0x108 + ((long)(char)bVar4 & 0xffffffffU) * 0xc;
        if (0xb < bVar4) {
          lVar3 = param_1[2] + 0x108;
        }
        return *(char *)(lVar3 + 10) != '\0';
      }
    }
  }
  return true;
}

