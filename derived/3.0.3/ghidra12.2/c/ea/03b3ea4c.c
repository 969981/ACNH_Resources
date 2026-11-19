
char * FUN_03b3ea4c(long *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((int)param_1[1] == *(int *)(lVar1 + 0x10))) {
    lVar2 = *(long *)(*(long *)(lVar1 + 0x120) + 8);
    lVar1 = *(long *)(lVar2 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar1 = lVar2 + 0x70;
    }
    if (lVar1 != 0) {
      if ((*(byte *)(lVar1 + 0x11) >> 5 & 1) != 0) {
        return "<NoSound>";
      }
      if (*(long *)(lVar1 + 8) != 0) {
        puVar3 = (uint *)(*(long *)(lVar1 + 8) + 0x24);
        return (char *)((ulong)*puVar3 + (long)puVar3);
      }
    }
  }
  return (char *)0x0;
}

