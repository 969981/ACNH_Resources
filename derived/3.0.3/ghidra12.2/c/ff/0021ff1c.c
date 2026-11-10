
bool FUN_0021ff1c(long param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = memcmp((void *)(param_1 + 8),&DAT_0410d274,0x10);
  bVar3 = false;
  if (iVar4 != 0) {
    iVar4 = memcmp((void *)(param_1 + 8),&DAT_0410d274,0x10);
    if ((iVar4 == 0) || (iVar4 = memcmp((void *)(param_1 + 0xc),&DAT_0410d274,0xc), iVar4 == 0)) {
      cVar1 = *(char *)(param_1 + 0xb);
      if (cVar1 == '\n') {
        return true;
      }
      bVar2 = *(byte *)(param_1 + 10);
      if (((cVar1 == -0x54) && (0xf < bVar2)) && (bVar2 < 0x20)) {
        return true;
      }
      if ((cVar1 == -0x40) && (bVar2 == 0xa8)) {
        return true;
      }
      return cVar1 == -0x57 && bVar2 == 0xfe;
    }
    if (((CONCAT11(*(byte *)(param_1 + 8),*(undefined1 *)(param_1 + 9)) ^ 0xffff) & 0xfe80) != 0) {
      return ((*(byte *)(param_1 + 8) ^ 0xff) & 0xfc) == 0;
    }
    bVar3 = true;
  }
  return bVar3;
}

