
byte FUN_03f5968c(long param_1,ushort param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar4 = *(byte *)(*(long *)(param_1 + 0x2008) + (ulong)param_2);
  if (param_2 == 0x7f5e) {
    bVar1 = (*(char *)(param_1 + 0x2010) != '\0') << 6;
    bVar2 = (*(char *)(param_1 + 0x2078) != '\0') << 1;
    bVar3 = bVar4 & 0xbc;
    bVar4 = bVar4 & 0xbd | bVar1 | bVar2 | 1;
    if (*(int *)(param_1 + 0x2070) == 0) {
      bVar4 = bVar3 | bVar1 | bVar2;
    }
  }
  return bVar4;
}

