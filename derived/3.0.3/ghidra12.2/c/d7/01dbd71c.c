
byte FUN_01dbd71c(long *param_1,byte *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  
  lVar6 = *param_1;
  bVar4 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar6 + 0x48);
    puVar3 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
    if (7 < bVar4) {
      puVar3 = puVar1;
    }
    pbVar2 = &DAT_0537bdbc;
    if ((*puVar3 & 8) != 0) {
      pbVar2 = (byte *)(lVar6 + 0x473);
    }
    bVar4 = *param_2;
    if (bVar4 != *pbVar2) {
      bVar5 = 0;
      if ((bVar4 != 0xff) && ((*puVar3 >> 3 & 1) != 0)) {
        puVar3 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar3 = puVar1;
        }
        bVar5 = (byte)*puVar3 >> 3 & 1;
      }
      return bVar5;
    }
  }
  return 0;
}

