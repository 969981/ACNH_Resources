
bool FUN_01d692e8(long param_1)

{
  long lVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar2 == 0xffffffffffffffff) {
    return true;
  }
  lVar1 = param_1 + 0x108 + ((long)(char)bVar2 & 0xffffffffU) * 0xc;
  if (0xb < bVar2) {
    lVar1 = param_1 + 0x108;
  }
  return *(char *)(lVar1 + 10) != '\0';
}

