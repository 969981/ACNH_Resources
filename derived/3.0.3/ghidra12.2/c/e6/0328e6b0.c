
byte FUN_0328e6b0(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar2 = *(long *)(param_1 + 0x70);
  }
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x58) & 1) != 0)) {
    if ((param_2 & 1) == 0) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 == 0) {
        return 1;
      }
      do {
        bVar1 = *(byte *)(lVar2 + 0x58) & 1;
        if ((*(byte *)(lVar2 + 0x58) & 1) == 0) {
          return bVar1;
        }
        lVar2 = *(long *)(lVar2 + 0x18);
      } while (lVar2 != 0);
      return bVar1;
    }
    if (*(char *)(lVar2 + 0x5a) != '\0') {
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 == 0) {
        return 1;
      }
      while (((*(byte *)(lVar2 + 0x58) & 1) != 0 &&
             (((*(byte *)(lVar2 + 0x58) >> 1 & 1) == 0 || (*(char *)(lVar2 + 0x59) != '\0'))))) {
        lVar2 = *(long *)(lVar2 + 0x18);
        if (lVar2 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

