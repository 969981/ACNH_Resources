
ulong FUN_02582fe0(undefined8 param_1)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)PTR_DAT_04bb27d0;
  if (((plVar6 == (long *)0x0) || (plVar6[5] == 0)) || ((int)plVar6[0x10] != 1)) {
    lVar7 = *plVar6;
    bVar3 = *(byte *)(lVar7 + 0x473);
    pcVar5 = PTR_DAT_04bc1220;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar5 = (char *)(lVar7 + 0x472);
      }
    }
    cVar2 = *pcVar5;
    pcVar5 = (char *)FUN_02582a24(param_1);
    if (((cVar2 == *pcVar5) && (uVar4 = FUN_02582d8c(param_1,2), uVar4 < 8)) &&
       ((lVar7 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0,
        *(char *)(lVar7 + 0x13d4) != '\0' && (*(int *)(lVar7 + 0x13d0) == 0)))) {
      return (ulong)*(byte *)(lVar7 + 0x13d5);
    }
  }
  return 0xffffffff;
}

