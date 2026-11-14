
byte FUN_01d3e2d0(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  if ((ulong)*param_2 < 8) {
    bVar2 = *(byte *)(param_1 + (ulong)*param_2 * 4 + 0x446);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(param_1 + 0x40) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(param_1 + 0x40);
      }
      return *pbVar1 >> 3 & 1;
    }
  }
  return 0;
}

