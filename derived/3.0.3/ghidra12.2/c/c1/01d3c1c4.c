
bool FUN_01d3c1c4(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*param_2;
  if (7 < uVar4) {
    return false;
  }
  bVar3 = *(byte *)(*DAT_0537d558 + uVar4 * 4 + 0x44e);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
    pbVar2 = pbVar1 + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      return *(char *)(param_1 + uVar4 * 2 + 1) != '\0';
    }
  }
  return true;
}

