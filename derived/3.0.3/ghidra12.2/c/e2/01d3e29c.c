
byte FUN_01d3e29c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x46b);
  if ((long)(char)bVar2 == 0xffffffffffffffff) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + 0x40) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
  if (7 < bVar2) {
    pbVar1 = (byte *)(param_1 + 0x40);
  }
  return *pbVar1 >> 3 & 1;
}

