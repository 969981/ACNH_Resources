
char FUN_01dbd7a0(long *param_1)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  
  lVar4 = *param_1;
  bVar3 = *(byte *)(lVar4 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar2 = (byte *)(lVar4 + 0x48);
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      return *(char *)(lVar4 + 0x477);
    }
  }
  lVar4 = *(long *)PTR_DAT_04bb4fb8;
  cVar1 = *(char *)(lVar4 + 0x13d4) != '\0' && *(char *)(lVar4 + 0x13d6) != '\0';
  if (*(char *)(lVar4 + 0x27c4) != '\0' && *(char *)(lVar4 + 0x27c6) != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  if (*(char *)(lVar4 + 0x3bb4) != '\0' && *(char *)(lVar4 + 0x3bb6) != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  if (*(char *)(lVar4 + 0x4fa4) != '\0' && *(char *)(lVar4 + 0x4fa6) != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  if (*(char *)(lVar4 + 0x6394) != '\0' && *(char *)(lVar4 + 0x6396) != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  if (*(char *)(lVar4 + 0x7784) != '\0' && *(char *)(lVar4 + 0x7786) != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  if (*(char *)(lVar4 + 0x8b74) != '\0' && *(char *)(lVar4 + 0x8b76) != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  if (*(char *)(lVar4 + 0x9f64) != '\0' && *(char *)(lVar4 + 0x9f66) != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

