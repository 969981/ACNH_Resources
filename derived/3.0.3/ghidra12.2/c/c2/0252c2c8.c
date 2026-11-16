
bool FUN_0252c2c8(void)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    bVar3 = true;
  }
  else {
    pcVar4 = (char *)FUN_02582a24();
    lVar6 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pcVar5 = PTR_DAT_04bc1220;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar5 = (char *)(lVar6 + 0x472);
      }
    }
    bVar3 = *pcVar4 == *pcVar5;
  }
  return bVar3;
}

