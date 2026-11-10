
byte FUN_0037d42c(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    lVar3 = *(long *)(lVar3 + (ulong)(*(int *)(lVar3 + (ulong)uVar1 + 4 +
                                                       (ulong)*(byte *)(lVar3 + (ulong)(*(int *)(
                                                  lVar3 + (ulong)uVar1 + 4) + uVar1) + 0xc) * 4) +
                                     uVar1) + 8);
    bVar2 = 0;
    if (*(long *)(lVar3 + 0x58) != 0) {
      bVar2 = *(char *)(lVar3 + 0x98) == '\0' & *(byte *)(*(long *)(lVar3 + 0x58) + 8) >> 5;
    }
    if (*(long *)(lVar3 + 8) != 0) {
      return bVar2 | *(char *)(lVar3 + 0x54) == '\0' & *(byte *)(*(long *)(lVar3 + 8) + 4) >> 1;
    }
  }
  return bVar2;
}

